; highlights.scm
"import" @include
"package" @include
"true" @boolean
"false" @boolean


(comment) @comment
(rego_block rego_rule_name: (identifier) @function)
(builtin_function function_name: (function_name) @function.builtin)
(opening_parameter) @function.builtin
(closing_parameter) @function.builtin
(string_definition) @string
(number) @number
