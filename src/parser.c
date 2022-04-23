#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_EQ_EQ = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_EQ = 3,
  anon_sym_BANG_EQ = 4,
  anon_sym_LT = 5,
  anon_sym_GT = 6,
  anon_sym_SLASH = 7,
  anon_sym_DASH = 8,
  anon_sym_PLUS = 9,
  sym_true = 10,
  sym_false = 11,
  sym_comma = 12,
  sym_comment = 13,
  anon_sym_lower = 14,
  anon_sym_is_string = 15,
  anon_sym_object_DOTget = 16,
  anon_sym_print = 17,
  anon_sym_concat = 18,
  anon_sym_contains = 19,
  anon_sym_time_DOTnow = 20,
  anon_sym_io_DOTjwt_DOTencode_sign_raw = 21,
  anon_sym_io_DOTjwt_DOTencode_sign = 22,
  anon_sym_io_DOTjwt_DOTdecode = 23,
  anon_sym_io_DOTjwt_DOTverify_es256 = 24,
  anon_sym_strings_DOTreplace_n = 25,
  anon_sym_http_DOTsend = 26,
  sym_opening_parameter = 27,
  sym_closing_parameter = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_definition_token1 = 30,
  sym__array_opening = 31,
  sym__array_closing = 32,
  aux_sym_object_field_token1 = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  sym__junk = 36,
  anon_sym_as = 37,
  anon_sym_with = 38,
  anon_sym_import = 39,
  anon_sym_package = 40,
  sym_identifier = 41,
  sym_number = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym_operator = 45,
  sym_function_name = 46,
  sym_builtin_function = 47,
  sym_string_definition = 48,
  sym_object_field = 49,
  sym_array_definition = 50,
  sym_operator_check = 51,
  sym_rego_rule = 52,
  sym_test_case = 53,
  sym_rego_block = 54,
  sym_reserved_keywords = 55,
  sym_as_keyword = 56,
  sym_import_package = 57,
  sym_package_definition = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_builtin_function_repeat1 = 60,
  aux_sym_array_definition_repeat1 = 61,
  aux_sym_test_case_repeat1 = 62,
  aux_sym_rego_block_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comma] = "comma",
  [sym_comment] = "comment",
  [anon_sym_lower] = "lower",
  [anon_sym_is_string] = "is_string",
  [anon_sym_object_DOTget] = "object.get",
  [anon_sym_print] = "print",
  [anon_sym_concat] = "concat",
  [anon_sym_contains] = "contains",
  [anon_sym_time_DOTnow] = "time.now",
  [anon_sym_io_DOTjwt_DOTencode_sign_raw] = "io.jwt.encode_sign_raw",
  [anon_sym_io_DOTjwt_DOTencode_sign] = "io.jwt.encode_sign",
  [anon_sym_io_DOTjwt_DOTdecode] = "io.jwt.decode",
  [anon_sym_io_DOTjwt_DOTverify_es256] = "io.jwt.verify_es256",
  [anon_sym_strings_DOTreplace_n] = "strings.replace_n",
  [anon_sym_http_DOTsend] = "http.send",
  [sym_opening_parameter] = "opening_parameter",
  [sym_closing_parameter] = "closing_parameter",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_definition_token1] = "string_definition_token1",
  [sym__array_opening] = "_array_opening",
  [sym__array_closing] = "_array_closing",
  [aux_sym_object_field_token1] = "object_field_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__junk] = "_junk",
  [anon_sym_as] = "as",
  [anon_sym_with] = "with",
  [anon_sym_import] = "import",
  [anon_sym_package] = "package",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_operator] = "operator",
  [sym_function_name] = "function_name",
  [sym_builtin_function] = "builtin_function",
  [sym_string_definition] = "string_definition",
  [sym_object_field] = "object_field",
  [sym_array_definition] = "array_definition",
  [sym_operator_check] = "operator_check",
  [sym_rego_rule] = "rego_rule",
  [sym_test_case] = "test_case",
  [sym_rego_block] = "rego_block",
  [sym_reserved_keywords] = "reserved_keywords",
  [sym_as_keyword] = "as_keyword",
  [sym_import_package] = "import_package",
  [sym_package_definition] = "package_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_builtin_function_repeat1] = "builtin_function_repeat1",
  [aux_sym_array_definition_repeat1] = "array_definition_repeat1",
  [aux_sym_test_case_repeat1] = "test_case_repeat1",
  [aux_sym_rego_block_repeat1] = "rego_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comma] = sym_comma,
  [sym_comment] = sym_comment,
  [anon_sym_lower] = anon_sym_lower,
  [anon_sym_is_string] = anon_sym_is_string,
  [anon_sym_object_DOTget] = anon_sym_object_DOTget,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_time_DOTnow] = anon_sym_time_DOTnow,
  [anon_sym_io_DOTjwt_DOTencode_sign_raw] = anon_sym_io_DOTjwt_DOTencode_sign_raw,
  [anon_sym_io_DOTjwt_DOTencode_sign] = anon_sym_io_DOTjwt_DOTencode_sign,
  [anon_sym_io_DOTjwt_DOTdecode] = anon_sym_io_DOTjwt_DOTdecode,
  [anon_sym_io_DOTjwt_DOTverify_es256] = anon_sym_io_DOTjwt_DOTverify_es256,
  [anon_sym_strings_DOTreplace_n] = anon_sym_strings_DOTreplace_n,
  [anon_sym_http_DOTsend] = anon_sym_http_DOTsend,
  [sym_opening_parameter] = sym_opening_parameter,
  [sym_closing_parameter] = sym_closing_parameter,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_definition_token1] = aux_sym_string_definition_token1,
  [sym__array_opening] = sym__array_opening,
  [sym__array_closing] = sym__array_closing,
  [aux_sym_object_field_token1] = aux_sym_object_field_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__junk] = sym__junk,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_package] = anon_sym_package,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_operator] = sym_operator,
  [sym_function_name] = sym_function_name,
  [sym_builtin_function] = sym_builtin_function,
  [sym_string_definition] = sym_string_definition,
  [sym_object_field] = sym_object_field,
  [sym_array_definition] = sym_array_definition,
  [sym_operator_check] = sym_operator_check,
  [sym_rego_rule] = sym_rego_rule,
  [sym_test_case] = sym_test_case,
  [sym_rego_block] = sym_rego_block,
  [sym_reserved_keywords] = sym_reserved_keywords,
  [sym_as_keyword] = sym_as_keyword,
  [sym_import_package] = sym_import_package,
  [sym_package_definition] = sym_package_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_builtin_function_repeat1] = aux_sym_builtin_function_repeat1,
  [aux_sym_array_definition_repeat1] = aux_sym_array_definition_repeat1,
  [aux_sym_test_case_repeat1] = aux_sym_test_case_repeat1,
  [aux_sym_rego_block_repeat1] = aux_sym_rego_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object_DOTget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time_DOTnow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_io_DOTjwt_DOTencode_sign_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_io_DOTjwt_DOTencode_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_io_DOTjwt_DOTdecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_io_DOTjwt_DOTverify_es256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strings_DOTreplace_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTsend] = {
    .visible = true,
    .named = false,
  },
  [sym_opening_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__array_opening] = {
    .visible = false,
    .named = true,
  },
  [sym__array_closing] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_object_field_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__junk] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_object_field] = {
    .visible = true,
    .named = true,
  },
  [sym_array_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_check] = {
    .visible = true,
    .named = true,
  },
  [sym_rego_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case] = {
    .visible = true,
    .named = true,
  },
  [sym_rego_block] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_as_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_import_package] = {
    .visible = true,
    .named = true,
  },
  [sym_package_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rego_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_closing_parameter = 1,
  field_function_body = 2,
  field_function_name = 3,
  field_imported_package_name = 4,
  field_opening_parameter = 5,
  field_package_alias = 6,
  field_package_name = 7,
  field_rego_rule_name = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_closing_parameter] = "closing_parameter",
  [field_function_body] = "function_body",
  [field_function_name] = "function_name",
  [field_imported_package_name] = "imported_package_name",
  [field_opening_parameter] = "opening_parameter",
  [field_package_alias] = "package_alias",
  [field_package_name] = "package_name",
  [field_rego_rule_name] = "rego_rule_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_imported_package_name, 1},
  [1] =
    {field_package_name, 1},
  [2] =
    {field_rego_rule_name, 0},
  [3] =
    {field_closing_parameter, 2},
    {field_function_name, 0},
    {field_opening_parameter, 1},
  [6] =
    {field_package_alias, 1},
  [7] =
    {field_closing_parameter, 3},
    {field_function_body, 2},
    {field_function_name, 0},
    {field_opening_parameter, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_string_definition_token1_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c >= '-' && c <= ':')))
    : (c <= '>' || (c < '_'
      ? (c < '\\'
        ? (c >= '@' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_lower);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_is_string);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_object_DOTget);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_time_DOTnow);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_io_DOTjwt_DOTencode_sign_raw);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_io_DOTjwt_DOTencode_sign);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_io_DOTjwt_DOTdecode);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_io_DOTjwt_DOTverify_es256);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_strings_DOTreplace_n);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_http_DOTsend);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_opening_parameter);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_closing_parameter);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (aux_sym_string_definition_token1_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__array_opening);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__array_closing);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_object_field_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__junk);
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '[') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(6);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(99);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(29);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'j') ADVANCE(174);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'j') ADVANCE(89);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'k') ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(66);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_is_string] = ACTIONS(1),
    [anon_sym_object_DOTget] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_time_DOTnow] = ACTIONS(1),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(1),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(1),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(1),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(1),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(1),
    [anon_sym_http_DOTsend] = ACTIONS(1),
    [sym_opening_parameter] = ACTIONS(1),
    [sym_closing_parameter] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__array_opening] = ACTIONS(1),
    [sym__array_closing] = ACTIONS(1),
    [aux_sym_object_field_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__definition] = STATE(2),
    [sym_function_name] = STATE(65),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(61),
    [sym_object_field] = STATE(61),
    [sym_array_definition] = STATE(61),
    [sym_operator_check] = STATE(2),
    [sym_rego_block] = STATE(2),
    [sym_import_package] = STATE(2),
    [sym_package_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_lower] = ACTIONS(9),
    [anon_sym_is_string] = ACTIONS(9),
    [anon_sym_object_DOTget] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(9),
    [anon_sym_concat] = ACTIONS(9),
    [anon_sym_contains] = ACTIONS(9),
    [anon_sym_time_DOTnow] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(9),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(9),
    [anon_sym_http_DOTsend] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym__array_opening] = ACTIONS(13),
    [aux_sym_object_field_token1] = ACTIONS(15),
    [sym__junk] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_package] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_name] = STATE(65),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(61),
    [sym_object_field] = STATE(61),
    [sym_array_definition] = STATE(61),
    [sym_operator_check] = STATE(3),
    [sym_rego_block] = STATE(3),
    [sym_import_package] = STATE(3),
    [sym_package_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
    [sym_comment] = ACTIONS(27),
    [anon_sym_lower] = ACTIONS(9),
    [anon_sym_is_string] = ACTIONS(9),
    [anon_sym_object_DOTget] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(9),
    [anon_sym_concat] = ACTIONS(9),
    [anon_sym_contains] = ACTIONS(9),
    [anon_sym_time_DOTnow] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(9),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(9),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(9),
    [anon_sym_http_DOTsend] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym__array_opening] = ACTIONS(13),
    [aux_sym_object_field_token1] = ACTIONS(15),
    [sym__junk] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_package] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_name] = STATE(65),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(61),
    [sym_object_field] = STATE(61),
    [sym_array_definition] = STATE(61),
    [sym_operator_check] = STATE(3),
    [sym_rego_block] = STATE(3),
    [sym_import_package] = STATE(3),
    [sym_package_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_comment] = ACTIONS(36),
    [anon_sym_lower] = ACTIONS(39),
    [anon_sym_is_string] = ACTIONS(39),
    [anon_sym_object_DOTget] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_concat] = ACTIONS(39),
    [anon_sym_contains] = ACTIONS(39),
    [anon_sym_time_DOTnow] = ACTIONS(39),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(39),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(39),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(39),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(39),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(39),
    [anon_sym_http_DOTsend] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__array_opening] = ACTIONS(45),
    [aux_sym_object_field_token1] = ACTIONS(48),
    [sym__junk] = ACTIONS(51),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_package] = ACTIONS(57),
    [sym_identifier] = ACTIONS(60),
  },
  [4] = {
    [sym_operator] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_COLON_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [anon_sym_lower] = ACTIONS(67),
    [anon_sym_is_string] = ACTIONS(67),
    [anon_sym_object_DOTget] = ACTIONS(67),
    [anon_sym_print] = ACTIONS(67),
    [anon_sym_concat] = ACTIONS(67),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_time_DOTnow] = ACTIONS(67),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(67),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(67),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(67),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(67),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(67),
    [anon_sym_http_DOTsend] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym__array_opening] = ACTIONS(67),
    [aux_sym_object_field_token1] = ACTIONS(67),
    [sym__junk] = ACTIONS(63),
    [anon_sym_import] = ACTIONS(67),
    [anon_sym_package] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
  },
  [5] = {
    [sym_operator] = STATE(33),
    [sym_reserved_keywords] = STATE(79),
    [aux_sym_test_case_repeat1] = STATE(30),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [anon_sym_lower] = ACTIONS(71),
    [anon_sym_is_string] = ACTIONS(71),
    [anon_sym_object_DOTget] = ACTIONS(71),
    [anon_sym_print] = ACTIONS(71),
    [anon_sym_concat] = ACTIONS(71),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_time_DOTnow] = ACTIONS(71),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(71),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(71),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(71),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(73),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(71),
    [anon_sym_http_DOTsend] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__array_opening] = ACTIONS(73),
    [aux_sym_object_field_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [sym_identifier] = ACTIONS(71),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_COLON_EQ] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
    [anon_sym_lower] = ACTIONS(79),
    [anon_sym_is_string] = ACTIONS(79),
    [anon_sym_object_DOTget] = ACTIONS(79),
    [anon_sym_print] = ACTIONS(79),
    [anon_sym_concat] = ACTIONS(79),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_time_DOTnow] = ACTIONS(79),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(79),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(79),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(79),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(79),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(79),
    [anon_sym_http_DOTsend] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__array_opening] = ACTIONS(79),
    [aux_sym_object_field_token1] = ACTIONS(79),
    [sym__junk] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_package] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_COLON_EQ] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
    [anon_sym_lower] = ACTIONS(83),
    [anon_sym_is_string] = ACTIONS(83),
    [anon_sym_object_DOTget] = ACTIONS(83),
    [anon_sym_print] = ACTIONS(83),
    [anon_sym_concat] = ACTIONS(83),
    [anon_sym_contains] = ACTIONS(83),
    [anon_sym_time_DOTnow] = ACTIONS(83),
    [anon_sym_io_DOTjwt_DOTencode_sign_raw] = ACTIONS(83),
    [anon_sym_io_DOTjwt_DOTencode_sign] = ACTIONS(83),
    [anon_sym_io_DOTjwt_DOTdecode] = ACTIONS(83),
    [anon_sym_io_DOTjwt_DOTverify_es256] = ACTIONS(83),
    [anon_sym_strings_DOTreplace_n] = ACTIONS(83),
    [anon_sym_http_DOTsend] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym__array_opening] = ACTIONS(83),
    [aux_sym_object_field_token1] = ACTIONS(83),
    [sym__junk] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(83),
    [anon_sym_package] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_operator,
    ACTIONS(73), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(69), 8,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(71), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [41] = 13,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__array_opening,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(8), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(17), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(38), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [97] = 2,
    ACTIONS(99), 13,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(101), 16,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [131] = 2,
    ACTIONS(103), 13,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(105), 16,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [165] = 2,
    ACTIONS(77), 13,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(79), 16,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [199] = 2,
    ACTIONS(81), 13,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(83), 16,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [233] = 13,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__array_opening,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(38), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [289] = 13,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__array_opening,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(14), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(38), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [345] = 13,
    ACTIONS(117), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      sym__array_opening,
    ACTIONS(126), 1,
      aux_sym_object_field_token1,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(8), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(111), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(38), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(114), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [401] = 13,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__array_opening,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(16), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(38), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [457] = 5,
    STATE(27), 1,
      sym_as_keyword,
    STATE(73), 1,
      sym_reserved_keywords,
    ACTIONS(75), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(138), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [496] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(142), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [528] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(101), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [557] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(148), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [586] = 5,
    STATE(22), 1,
      aux_sym_test_case_repeat1,
    STATE(79), 1,
      sym_reserved_keywords,
    ACTIONS(154), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(152), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(150), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [621] = 2,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(159), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [650] = 9,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym__array_opening,
    ACTIONS(167), 1,
      aux_sym_object_field_token1,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(65), 1,
      sym_function_name,
    ACTIONS(161), 2,
      sym_true,
      sym_false,
    STATE(26), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [693] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(173), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [722] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(142), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [751] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(177), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [780] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(181), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [809] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(185), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [838] = 5,
    STATE(22), 1,
      aux_sym_test_case_repeat1,
    STATE(79), 1,
      sym_reserved_keywords,
    ACTIONS(75), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(189), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(187), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [873] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(193), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [902] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(197), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [931] = 8,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(91), 1,
      sym__array_opening,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_object_field_token1,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(199), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(39), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [972] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(105), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [1001] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(207), 22,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [1030] = 8,
    ACTIONS(87), 1,
      anon_sym_io_DOTjwt_DOTverify_es256,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym__array_opening,
    ACTIONS(167), 1,
      aux_sym_object_field_token1,
    STATE(65), 1,
      sym_function_name,
    ACTIONS(161), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(26), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 12,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
  [1071] = 2,
    ACTIONS(152), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(150), 17,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      anon_sym_as,
      anon_sym_with,
      sym_identifier,
  [1098] = 2,
    ACTIONS(73), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(71), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [1123] = 2,
    ACTIONS(140), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(142), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [1148] = 2,
    ACTIONS(195), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(197), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [1173] = 2,
    ACTIONS(146), 5,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(148), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [1198] = 2,
    ACTIONS(197), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(195), 15,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1222] = 2,
    ACTIONS(211), 4,
      anon_sym_io_DOTjwt_DOTverify_es256,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
    ACTIONS(209), 15,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_time_DOTnow,
      anon_sym_io_DOTjwt_DOTencode_sign_raw,
      anon_sym_io_DOTjwt_DOTencode_sign,
      anon_sym_io_DOTjwt_DOTdecode,
      anon_sym_strings_DOTreplace_n,
      anon_sym_http_DOTsend,
      sym_identifier,
  [1246] = 2,
    ACTIONS(105), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(103), 15,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1270] = 2,
    ACTIONS(148), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(146), 15,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1294] = 2,
    ACTIONS(101), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(99), 15,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1318] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(219), 1,
      sym__array_closing,
    ACTIONS(215), 2,
      sym_comma,
      sym_number,
    ACTIONS(213), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(57), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1346] = 7,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__array_opening,
    ACTIONS(233), 1,
      sym__array_closing,
    ACTIONS(235), 1,
      aux_sym_object_field_token1,
    ACTIONS(224), 2,
      sym_comma,
      sym_number,
    ACTIONS(221), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(48), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1374] = 7,
    ACTIONS(244), 1,
      sym_closing_parameter,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym__array_opening,
    ACTIONS(252), 1,
      aux_sym_object_field_token1,
    ACTIONS(241), 2,
      sym_comma,
      sym_number,
    ACTIONS(238), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1402] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(259), 1,
      sym__array_closing,
    ACTIONS(257), 2,
      sym_comma,
      sym_number,
    ACTIONS(255), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(48), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1430] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(265), 1,
      sym_closing_parameter,
    ACTIONS(263), 2,
      sym_comma,
      sym_number,
    ACTIONS(261), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1458] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(267), 1,
      sym__array_closing,
    ACTIONS(257), 2,
      sym_comma,
      sym_number,
    ACTIONS(255), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(48), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1486] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(273), 1,
      sym__array_closing,
    ACTIONS(271), 2,
      sym_comma,
      sym_number,
    ACTIONS(269), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(52), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1514] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(275), 1,
      sym_closing_parameter,
    ACTIONS(263), 2,
      sym_comma,
      sym_number,
    ACTIONS(261), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1542] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(281), 1,
      sym__array_closing,
    ACTIONS(279), 2,
      sym_comma,
      sym_number,
    ACTIONS(277), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(50), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1570] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(287), 1,
      sym_closing_parameter,
    ACTIONS(285), 2,
      sym_comma,
      sym_number,
    ACTIONS(283), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(54), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1598] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(289), 1,
      sym__array_closing,
    ACTIONS(257), 2,
      sym_comma,
      sym_number,
    ACTIONS(255), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(48), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1626] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(217), 1,
      sym__array_opening,
    ACTIONS(295), 1,
      sym_closing_parameter,
    ACTIONS(293), 2,
      sym_comma,
      sym_number,
    ACTIONS(291), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(51), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1654] = 4,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_operator,
    ACTIONS(69), 8,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1674] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_operator,
    ACTIONS(69), 8,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1691] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_operator,
    ACTIONS(69), 8,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1708] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_number,
    STATE(76), 2,
      sym_string_definition,
      sym_object_field,
  [1725] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_number,
    STATE(70), 2,
      sym_string_definition,
      sym_object_field,
  [1742] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_object_field_token1,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_number,
    STATE(67), 2,
      sym_string_definition,
      sym_object_field,
  [1759] = 1,
    ACTIONS(311), 1,
      sym_opening_parameter,
  [1763] = 1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [1767] = 1,
    ACTIONS(315), 1,
      sym__array_closing,
  [1771] = 1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
  [1775] = 1,
    ACTIONS(319), 1,
      sym_opening_parameter,
  [1779] = 1,
    ACTIONS(321), 1,
      sym__array_closing,
  [1783] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [1787] = 1,
    ACTIONS(325), 1,
      aux_sym_string_definition_token1,
  [1791] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [1795] = 1,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
  [1799] = 1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
  [1803] = 1,
    ACTIONS(333), 1,
      sym__array_closing,
  [1807] = 1,
    ACTIONS(335), 1,
      sym_identifier,
  [1811] = 1,
    ACTIONS(337), 1,
      aux_sym_string_definition_token1,
  [1815] = 1,
    ACTIONS(339), 1,
      sym_identifier,
  [1819] = 1,
    ACTIONS(341), 1,
      sym_opening_parameter,
  [1823] = 1,
    ACTIONS(343), 1,
      aux_sym_string_definition_token1,
  [1827] = 1,
    ACTIONS(345), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 496,
  [SMALL_STATE(20)] = 528,
  [SMALL_STATE(21)] = 557,
  [SMALL_STATE(22)] = 586,
  [SMALL_STATE(23)] = 621,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 693,
  [SMALL_STATE(26)] = 722,
  [SMALL_STATE(27)] = 751,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 809,
  [SMALL_STATE(30)] = 838,
  [SMALL_STATE(31)] = 873,
  [SMALL_STATE(32)] = 902,
  [SMALL_STATE(33)] = 931,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 1001,
  [SMALL_STATE(36)] = 1030,
  [SMALL_STATE(37)] = 1071,
  [SMALL_STATE(38)] = 1098,
  [SMALL_STATE(39)] = 1123,
  [SMALL_STATE(40)] = 1148,
  [SMALL_STATE(41)] = 1173,
  [SMALL_STATE(42)] = 1198,
  [SMALL_STATE(43)] = 1222,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1270,
  [SMALL_STATE(46)] = 1294,
  [SMALL_STATE(47)] = 1318,
  [SMALL_STATE(48)] = 1346,
  [SMALL_STATE(49)] = 1374,
  [SMALL_STATE(50)] = 1402,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1458,
  [SMALL_STATE(53)] = 1486,
  [SMALL_STATE(54)] = 1514,
  [SMALL_STATE(55)] = 1542,
  [SMALL_STATE(56)] = 1570,
  [SMALL_STATE(57)] = 1598,
  [SMALL_STATE(58)] = 1626,
  [SMALL_STATE(59)] = 1654,
  [SMALL_STATE(60)] = 1674,
  [SMALL_STATE(61)] = 1691,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1725,
  [SMALL_STATE(64)] = 1742,
  [SMALL_STATE(65)] = 1759,
  [SMALL_STATE(66)] = 1763,
  [SMALL_STATE(67)] = 1767,
  [SMALL_STATE(68)] = 1771,
  [SMALL_STATE(69)] = 1775,
  [SMALL_STATE(70)] = 1779,
  [SMALL_STATE(71)] = 1783,
  [SMALL_STATE(72)] = 1787,
  [SMALL_STATE(73)] = 1791,
  [SMALL_STATE(74)] = 1795,
  [SMALL_STATE(75)] = 1799,
  [SMALL_STATE(76)] = 1803,
  [SMALL_STATE(77)] = 1807,
  [SMALL_STATE(78)] = 1811,
  [SMALL_STATE(79)] = 1815,
  [SMALL_STATE(80)] = 1819,
  [SMALL_STATE(81)] = 1823,
  [SMALL_STATE(82)] = 1827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_rule, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_rule, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(8),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(69),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(69),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(72),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(53),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(64),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_check, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_check, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_field, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_field, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2), SHIFT_REPEAT(71),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_definition, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(48),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(48),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(72),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(64),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(72),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(55),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(64),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_keywords, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rego(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
