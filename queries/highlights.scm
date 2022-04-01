; highlights.scm
"import" @import_package_keyword
"package" @import_package_keyword


(comment) @rego_comment
(rego_block rego_rule_name: (identifier) @rego_rule_name)
(builtin_function function_name: (function_name) @builtin_function)
(opening_parameter) @builtin_function
(closing_parameter) @builtin_function
