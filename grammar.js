module.exports = grammar({
  name: 'rego',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.package_definition,
      $.import_package,
      $.assignment,
      $.comment,
      $.rego_rule,
      $.builtin_function,
      $._junk
    ),
    
    comment: $ => /\#[\'\/\?a-zA-Z=\-\s\(\)]+\n\r?/,

    builtin_function: $ => seq(
      choice(
        'lower',
      ),
      '(',
      field('function_body', choice(
        $.identifier,
        $._array_definition,
        $.number,
      )),
      ')',
    ),

    _string_definition: $ => seq(
      '"',
      $.identifier,
      '"',
    ),

    _array_definition: $ => seq(
      '[',
      repeat(
        choice(
          $._array_definition,
          $._string_definition,
          $.identifier,
          $.number,
          ',',
        ),
      ),
      ']',
    ),

    equality_check: $ => seq(
      choice(
        $.identifier,
        $.builtin_function,
        $._string_definition,
        $._array_definition,
      ),
      choice(
        '==',
        '!=',
      ),
      choice(
        $.identifier,
        $.builtin_function,
        $._string_definition,
        $._array_definition,
      ),
    ),

    rego_rule: $ => seq(
      field('rego_rule_name', $.identifier),
      '{',
      repeat(
        choice( 
          $.identifier,
          $.equality_check,
          $.assignment,
          $._array_definition,
        ),
      ),
      '}',
    ),

    _junk: $ => /\n/,

    as_keyword: $ => seq(
      'as',
      field('package_alias', $.identifier),
    ),

    import_package: $ => seq(
      'import',
      field('imported_package_name', $.identifier),
      optional($.as_keyword),
    ),

    package_definition: $ => seq(
      'package',
      field('package_name', $.identifier),
    ),

    assignment: $ => seq(
      choice(
        $.identifier,
        $._array_definition,
        $._string_definition,
      ),
      '=',
      choice(
        $.identifier,
        $._array_definition,
        $._string_definition,
      ),
    ),

    identifier: $ => /[a-zA-Z._]+/,

    number: $ => /\d+/
  }
});

