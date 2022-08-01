module.exports = grammar({
  name: "rego",

  extras: $ => [
    $.comment,
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  word: $ => $.keyword,

  conflicts: $ => [
    [$.membership],
  ],

  rules: {
    source_file: $ => optional($.module),

    // module          = package { import } policy
    module: $ => seq(
      $._package,
      repeat($._import),
      optional($.policy),
    ),

    // package         = "package" ref
    _package: $ => seq(
      $.package,
      $.ref
    ),

    // import          = "import" ref [ "as" var ]
    _import: $ => seq(
      $.import, $.ref,
      optional(seq($.as, $.var))
    ),

    // policy          = { rule }
    policy: $ => repeat1($.rule),

    // rule            = [ "default" ] rule-head { rule-body }
    rule: $ => prec.right(1, seq(
      optional($.default),
      $.rule_head,
      repeat($.rule_body),
    )),

    // rule-head       = var ( rule-head-set | rule-head-obj | rule-head-func | rule-head-comp | "if" )
    rule_head: $ => prec.left(2, seq(
      $.var,
      choice(
        // rule-head-set   = ( "contains" term [ "if" ] ) | ( "[" term "]" )
        choice(
          seq($.contains, $.term, optional($.if)),
          seq("[", $.term, "]")
        ),
        // rule-head-obj   = "[" term "]" [ rule-head-comp ] [ "if" ]
        seq(
          seq("[", $.term, "]"),
          optional($.rule_head_comp),
          optional($.if),
        ),

        // rule-head-func  = "(" rule-args ")" [ rule-head-comp ]
        seq(
          seq("(", $.rule_args, ")"),
          optional($.rule_head_comp),
          optional($.if),
        ),

        // if
        $.if
      ),
    )),

    // rule-head-comp  = ( ":=" | "=" ) term
    rule_head_comp: $ => seq($.assignment_operator, $.expr),

    // rule-args       = term { "," term }
    rule_args: $ => seq(
      $.term,
      repeat(seq(",", $.term)),
    ),

    // rule-body       = [ "else" [ ( ":=" | "=" ) term ] ] ( "{" query "}" ) | literal
    rule_body: $ => seq(
      optional(
        seq(
          $.else,
          optional(
            seq(
              $.assignment_operator,
              $.term,
            ),
          ),
        ),
      ),
      choice(
        seq("{", $.query, "}"),
        $.literal
      )
    ),

    // query           = literal { ( ";" | ( [CR] LF ) ) literal }
    query: $ => seq(
      $.literal,
      repeat(
        seq(
          choice(";", seq(optional("\r"), "\n")),
          optional($.literal),
        ),
      ),
    ),

    // literal         = ( some-decl | expr | "not" expr ) { with-modifier }
    literal: $ => seq(
      choice($.some_decl, $.expr, seq($.not, $.expr)),
      repeat($.with_modifier),
    ),

    // with-modifier   = "with" term "as" term
    with_modifier: $ => seq($.with, $.term, $.as, $.term),

    // some-decl       = "some" term { "," term } { "in" expr }
    some_decl: $ => seq(
      $.some, $.term, repeat(seq(",", $.term)), repeat(seq($.in, $.expr))
    ),

    // expr            = term | expr-call | expr-infix | expr-every | expr-unary
    expr: $ => prec.left(1, choice(
      $.term, $.expr_call, $.expr_infix, $.expr_every, $.expr_parens, $.expr_unary
    )),

    // expr-parens     = "(" expr ")"
    expr_parens: $ => prec(-1, seq(
      "(", $.expr, ")"
    )),

    // expr-call       = var [ "." var ] "(" [ expr { "," expr } ] ")"
    expr_call: $ => seq(
      $.var,
      optional(
        seq(".", $.var)
      ),
      "(",
      optional(
        seq($.expr, repeat(seq(",", $.expr)))
      ),
      ")",
    ),

    // expr-infix = expr infix-operator expr        
    expr_infix: $ => prec.left(1,
      seq($.expr, $.infix_operator, $.expr,),
    ),

    // expr-every      = "every" var { "," var } "in" ( term | expr-call | expr-infix ) "{" query "}"
    expr_every: $ => seq(
      $.every,
      $.var,
      repeat(seq(",", $.var)),
      $.in,
      choice($.term, $.expr_call, $.expr_infix),
      "{", $.query, "}",
    ),

    // expr-unary      = "-" expr
    expr_unary: $ => prec.left(-3,
      seq("-", $.expr)
    ),

    // term            = ref | var | scalar | array | object | set | array-compr | object-compr | set-compr | membership
    term: $ => choice(
      $.ref,
      $.var,
      $.scalar,
      $.array,
      $.object,
      $.set,
      $.array_compr,
      $.object_compr,
      $.set_compr,
      $.membership,
    ),

    // array-compr     = "[" term "|" rule-body "]"
    array_compr: $ => seq(
      "[", $.term, "|", $.query, "]",
    ),

    // set-compr       = "{" term "|" rule-body "}"
    set_compr: $ => seq(
      "{", $.term, "|", $.query, "}",
    ),

    // object-compr    = "{" object-item "|" rule-body "}"
    object_compr: $ => seq(
      "{", $.object_item, "|", $.query, "}",
    ),

    // infix-operator  = bool-operator | arith-operator | bin-operator
    infix_operator: $ => choice(
      prec.left(2, $.assignment_operator), $.bool_operator, $.arith_operator, $.bin_operator
    ),

    // assignment-operator = ":=" | "="    
    assignment_operator: $ => choice($.assignment, $.unification),

    // assignment operator
    assignment: $ => ":=",

    // unification operator
    unification: $ => "=",

    // bool-operator   = "==" | "!=" | "<" | ">" | ">=" | "<="
    bool_operator: $ => choice(
      "==", "!=", "<", ">", ">=", "<="
    ),

    // arith-operator  = "+" | "-" | "*" | "/"
    arith_operator: $ => choice(
      "+", "-", "*", "/"
    ),

    // bin-operator    = "&" | "|"
    bin_operator: $ => choice("&", "|"),

    // ref             = ( var | array | object | set | array-compr | object-compr | set-compr | expr-call ) { ref-arg }
    ref: $ => prec.left(2,
      seq(
        choice(
          $.var,
          $.array,
          $.object,
          $.set,
          $.array_compr,
          $.object_compr,
          $.set_compr,
          $.expr_call,
        ),
        repeat($.ref_arg),
      )
    ),

    // ref-arg         = ref-arg-dot | ref-arg-brack
    ref_arg: $ => choice(
      $.ref_arg_dot,
      $.ref_arg_brack,
    ),

    // ref-arg-brack   = "[" ( scalar | var | array | object | set | "_" ) "]"
    ref_arg_brack: $ => seq(
      "[",
      choice(
        $.scalar,
        $.var,
        $.array,
        $.object,
        $.set,
        "_",
      ),
      "]",
    ),

    // ref-arg-dot     = "." var
    ref_arg_dot: $ => prec.left(2, seq(".", $.var)),

    // var             = ( ALPHA | "_" ) { ALPHA | DIGIT | "_" }
    var: $ => /[A-Za-z_]+\w*/,

    // scalar          = string | NUMBER | TRUE | FALSE | NULL
    scalar: $ => choice(
      $.string,
      $.number,
      $.boolean,
      "null",
    ),

    // string          = STRING | raw-string
    string: $ => choice(
      seq(
        '"',
        repeat(
          token.immediate(/[^\\"\n]+/)
        ),
        '"'
      ),
      $.raw_string,
    ),

    // raw-string      = "`" { CHAR-"`" } "`"
    raw_string: $ => seq(
      "`",
      repeat(
        token.immediate(/[^`]+/)
      ),
      "`",
    ),

    // array           = "[" term { "," term } "]"
    array: $ => seq(
      "[",
      $.term,
      repeat(
        seq(",", $.term)
      ),
      "]",
    ),

    // object          = "{" object-item { "," object-item } "}"
    object: $ => seq(
      "{",
      $.object_item,
      repeat(
        seq(",", $.object_item),
      ),
      "}",
    ),

    // object-item     = ( scalar | ref | var ) ":" term
    object_item: $ => seq(
      field("key", choice($.scalar, $.ref, $.var)),
      ":",
      field("value", $.term),
    ),

    // set             = empty-set | non-empty-set
    set: $ => choice($.empty_set, $.non_empty_set),

    // non-empty-set   = "{" term { "," term } "}"
    non_empty_set: $ => seq(
      "{",
      $.term,
      repeat(
        seq(",", $.term),
      ),
      "}"
    ),

    // empty-set       = "set(" ")"
    empty_set: $ => seq("set(", ")"),

    // comment
    comment: $ => token(seq('#', /.*/)),

    // boolean
    boolean: $ => choice("true", "false"),

    // membership      = term [ "," term ] "in" term
    membership: $ => prec.left(-1, seq(
      $.term,
      optional(seq(",", $.term)),
      $.in,
      $.term,
    )),

    // number
    number: $ => /([0-9]*[.])?[0-9]+/,

    // not keyword 
    not: $ => "not",

    // with keyword
    with: $ => "with",

    // as keyword
    as: $ => "as",

    // in keyword
    in: $ => "in",

    // if keyword
    if: $ => "if",

    // every keyword        
    every: $ => "every",

    // else keyword
    else: $ => "else",

    // package keyword    
    package: $ => "package",

    // import keyword
    import: $ => "import",

    // contains keyword
    contains: $ => "contains",

    // some keyword
    some: $ => "some",

    // default keyword
    default: $ => "default",

    // match whole words
    keyword: $ => /[a-z]+/,
  }
});
