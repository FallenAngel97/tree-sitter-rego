module.exports = grammar({
  name: 'rego',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.package_definition,
      $.import_package,
      $.operator_check,
      $.comment,
      $.rego_block,
      $.builtin_function,
      $._junk
    ),

    operator: $ => choice(
      '==',
      ':=',
      '=',
      '!=',
      '<',
      '>',
      '/',
      '-',
      '+',
    ),

    true: $ => 'true',
    false: $ => 'false',

    comma: $ => ',',

    comment: $ => /\#.*?\n\r?/,

    function_name: $ => choice(
      'lower',
      'is_string',
      'object.get',
      'print',
      'concat',
      'contains',
      'time.now_ns',
      'io.jwt.encode_sign_raw',
      'io.jwt.encode_sign',
      'io.jwt.decode',
      'io.jwt.verify_es256',
      'strings.replace_n',
      'http.send',
    ),

    opening_parameter: $ => '(',

    closing_parameter: $ => ')',

    builtin_function: $ => seq(
      field('function_name',
        $.function_name
      ),
      field('opening_parameter', $.opening_parameter),
      field('function_body',
        repeat(
          choice(
            $.identifier,
            $.array_definition,
            $.true,
            $.false,
            $.number,
            $.object_field,
            $.string_definition,
            $.identifier,
            $.comma,
          ),
        ),
      ),
      field('closing_parameter', $.closing_parameter),
    ),

    string_definition: $ => seq(
      '"',
      /[a-zA-Z0-9<>@\-._:=\s\/\\]*/,
      '"',
    ),

    _array_opening: $ => '[',
    _array_closing: $ => ']',

    object_field: $ => prec(
      1,
      seq(
        /[a-zA-Z\._]+\[/,
        choice(
          $.identifier,
          $.number,
          $.object_field,
          $.string_definition
        ),
        $._array_closing,
      ),
    ),

    array_definition: $ => seq(
      $._array_opening,
      repeat(
        choice(
          $.array_definition,
          $.string_definition,
          $.identifier,
          $.identifier,
          $.number,
          $.object_field,
          $.true,
          $.false,
          $.comma,
        ),
      ),
      $._array_closing,
    ),

    operator_check: $ => seq(
      choice(
        $.identifier,
        $.builtin_function,
        $.string_definition,
        $.object_field,
        $.array_definition,
        $.true,
        $.false,
      ),
      $.operator,
      choice(
        $.identifier,
        $.builtin_function,
        $.string_definition,
        $.object_field,
        $.array_definition,
        $.true,
        $.false,
      ),
    ),

    rego_rule: $ => prec(1, choice(
      $.identifier,
      $.operator_check,
      $.array_definition,
      $.test_case,
      $.true,
      $.false,
    ),),

    test_case: $ => seq(
      $.identifier,
      repeat(
        seq(
          $.reserved_keywords,
          $.identifier,
        ),
      ),
    ),

    rego_block: $ => seq(
      field('rego_rule_name', $.identifier),
      optional(
        seq(
          $.operator,
          $.identifier,
        ),
      ),
      '{',
      repeat($.rego_rule),
      '}',
    ),

    _junk: $ => /\n/,

    reserved_keywords: $ => choice(
      'as',
      'with',
    ),

    as_keyword: $ => seq(
      $.reserved_keywords,
      field('package_alias', $.identifier),
    ),

    import_package: $ => seq(
      'import',
      field('imported_package_name',
        choice(
          $.identifier,
        ),
      ),
      optional($.as_keyword),
    ),

    package_definition: $ => seq(
      'package',
      field('package_name', $.identifier),
    ),

    identifier: $ => /[a-zA-Z\._]+/,

    number: $ => /\d+/
  }
});

