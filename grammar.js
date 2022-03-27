module.exports = grammar({
  name: 'rego',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
      $.package_definition,
      $.import_package,
      $.assignment,
      $.comment,
      $.rego_rule,
      $.builtin_function,
      $._junk
    ),
    
    comment: $ => /\#[\'\/\?a-zA-Z=\-\s]+/,

    builtin_function: $ => seq(
      choice(
        'lower',
      ),
      '(',
      choice(
        $.identifier,
        $.array_definition,
        $.number,
      ),
      ')',
    ),

    string_definition: $ => seq(
      '"',
      $.identifier,
      '"',
    ),

    array_definition: $ => seq(
      '[',
      repeat(
        choice(
          $.array_definition,
          $.string_definition,
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
        $.string_definition,
        $.array_definition,
      ),
      choice(
        '==',
        '!=',
      ),
      choice(
        $.identifier,
        $.builtin_function,
        $.string_definition,
        $.array_definition,
      ),
    ),

    rego_rule: $ => seq(
      $.identifier,
      '{',
      repeat(
        choice( 
          $.identifier,
          $.equality_check,
          $.assignment,
          $.array_definition,
        ),
      ),
      '}',
    ),

    _junk: $ => /\n/,

    as_keyword: $ => seq(
      'as',
      $.identifier,
    ),

    import_package: $ => seq(
      'import',
      $.identifier,
      optional($.as_keyword),
    ),

    package_definition: $ => seq(
      'package',
      $.identifier
    ),

    assignment: $ => seq(
      choice(
        $.identifier,
        $.array_definition,
        $.string_definition,
      ),
      '=',
      choice(
        $.identifier,
        $.array_definition,
        $.string_definition,
      ),
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z._]+/,

    number: $ => /\d+/
  }
});

