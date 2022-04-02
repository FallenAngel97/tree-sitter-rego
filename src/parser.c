#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  sym_true = 7,
  sym_false = 8,
  sym_comma = 9,
  sym_comment = 10,
  anon_sym_lower = 11,
  anon_sym_is_string = 12,
  anon_sym_object_DOTget = 13,
  anon_sym_print = 14,
  anon_sym_concat = 15,
  anon_sym_contains = 16,
  sym_opening_parameter = 17,
  sym_closing_parameter = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_definition_token1 = 20,
  sym__array_opening = 21,
  sym__array_closing = 22,
  aux_sym_object_field_token1 = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym__junk = 26,
  anon_sym_as = 27,
  anon_sym_with = 28,
  anon_sym_import = 29,
  anon_sym_package = 30,
  sym_identifier = 31,
  sym_number = 32,
  sym_source_file = 33,
  sym__definition = 34,
  sym_operator = 35,
  sym_function_name = 36,
  sym_builtin_function = 37,
  sym_string_definition = 38,
  sym_object_field = 39,
  sym_array_definition = 40,
  sym_operator_check = 41,
  sym_rego_rule = 42,
  sym_test_case = 43,
  sym_rego_block = 44,
  sym_reserved_keywords = 45,
  sym_as_keyword = 46,
  sym_import_package = 47,
  sym_package_definition = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_builtin_function_repeat1 = 50,
  aux_sym_array_definition_repeat1 = 51,
  aux_sym_test_case_repeat1 = 52,
  aux_sym_rego_block_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
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
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_lower);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_is_string);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_object_DOTget);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_opening_parameter);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_closing_parameter);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (aux_sym_string_definition_token1_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__array_opening);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__array_closing);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_object_field_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__junk);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '[') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(24);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 32},
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
    [sym_source_file] = STATE(75),
    [sym__definition] = STATE(2),
    [sym_function_name] = STATE(69),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(60),
    [sym_object_field] = STATE(60),
    [sym_array_definition] = STATE(60),
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
    [sym_function_name] = STATE(69),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(60),
    [sym_object_field] = STATE(60),
    [sym_array_definition] = STATE(60),
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
    [sym_function_name] = STATE(69),
    [sym_builtin_function] = STATE(4),
    [sym_string_definition] = STATE(60),
    [sym_object_field] = STATE(60),
    [sym_array_definition] = STATE(60),
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
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__array_opening] = ACTIONS(45),
    [aux_sym_object_field_token1] = ACTIONS(48),
    [sym__junk] = ACTIONS(51),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_package] = ACTIONS(57),
    [sym_identifier] = ACTIONS(60),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(28), 1,
      sym_operator,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(65), 6,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [33] = 8,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(22), 1,
      aux_sym_test_case_repeat1,
    STATE(31), 1,
      sym_operator,
    STATE(73), 1,
      sym_reserved_keywords,
    ACTIONS(75), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(73), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(69), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [74] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(79), 21,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [102] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(83), 21,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [130] = 12,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__array_opening,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(14), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(12), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(52), 2,
      sym_operator_check,
      sym_test_case,
    STATE(61), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [177] = 12,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__array_opening,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(11), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(52), 2,
      sym_operator_check,
      sym_test_case,
    STATE(61), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [224] = 12,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__array_opening,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(52), 2,
      sym_operator_check,
      sym_test_case,
    STATE(61), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [271] = 12,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__array_opening,
    ACTIONS(113), 1,
      aux_sym_object_field_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(14), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(101), 2,
      sym_true,
      sym_false,
    STATE(11), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(52), 2,
      sym_operator_check,
      sym_test_case,
    STATE(61), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(104), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [318] = 12,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__array_opening,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(85), 2,
      sym_true,
      sym_false,
    STATE(11), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(52), 2,
      sym_operator_check,
      sym_test_case,
    STATE(61), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [365] = 5,
    STATE(33), 1,
      sym_as_keyword,
    STATE(72), 1,
      sym_reserved_keywords,
    ACTIONS(75), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(125), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [397] = 5,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_operator,
    ACTIONS(73), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(69), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [428] = 2,
    ACTIONS(127), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(129), 10,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [452] = 2,
    ACTIONS(131), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(133), 10,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [476] = 2,
    ACTIONS(77), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(79), 10,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [500] = 2,
    ACTIONS(81), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(83), 10,
      anon_sym_EQ,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [524] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(137), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [549] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(143), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [571] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(147), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [593] = 5,
    STATE(30), 1,
      aux_sym_test_case_repeat1,
    STATE(73), 1,
      sym_reserved_keywords,
    ACTIONS(75), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(151), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(149), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [621] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(155), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [643] = 8,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__array_opening,
    ACTIONS(163), 1,
      aux_sym_object_field_token1,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(69), 1,
      sym_function_name,
    ACTIONS(157), 2,
      sym_true,
      sym_false,
    STATE(26), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [677] = 2,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(169), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [699] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(137), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [721] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(133), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [743] = 7,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__array_opening,
    ACTIONS(163), 1,
      aux_sym_object_field_token1,
    STATE(69), 1,
      sym_function_name,
    ACTIONS(157), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(26), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [775] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(129), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [797] = 5,
    STATE(30), 1,
      aux_sym_test_case_repeat1,
    STATE(73), 1,
      sym_reserved_keywords,
    ACTIONS(175), 2,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(173), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(171), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [825] = 7,
    ACTIONS(89), 1,
      sym__array_opening,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_object_field_token1,
    STATE(80), 1,
      sym_function_name,
    ACTIONS(178), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(56), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(9), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [857] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(186), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [879] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(190), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [901] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(194), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [923] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(198), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [945] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(202), 15,
      sym_true,
      sym_false,
      sym_comment,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_import,
      anon_sym_package,
      sym_identifier,
  [967] = 2,
    ACTIONS(133), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(131), 12,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [988] = 2,
    ACTIONS(129), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(127), 12,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1009] = 2,
    ACTIONS(169), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(167), 12,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1030] = 2,
    ACTIONS(147), 4,
      anon_sym_EQ,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(145), 12,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_comma,
      sym_closing_parameter,
      anon_sym_DQUOTE,
      sym__array_opening,
      sym__array_closing,
      aux_sym_object_field_token1,
      sym_number,
  [1051] = 2,
    ACTIONS(173), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(171), 11,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_as,
      anon_sym_with,
      sym_identifier,
  [1071] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(210), 1,
      sym__array_closing,
    ACTIONS(206), 2,
      sym_comma,
      sym_number,
    ACTIONS(204), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(50), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1099] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(216), 1,
      sym__array_closing,
    ACTIONS(214), 2,
      sym_comma,
      sym_number,
    ACTIONS(212), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(46), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1127] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(222), 1,
      sym__array_closing,
    ACTIONS(220), 2,
      sym_comma,
      sym_number,
    ACTIONS(218), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(57), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1155] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(228), 1,
      sym_closing_parameter,
    ACTIONS(226), 2,
      sym_comma,
      sym_number,
    ACTIONS(224), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1183] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(230), 1,
      sym__array_closing,
    ACTIONS(220), 2,
      sym_comma,
      sym_number,
    ACTIONS(218), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(57), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1211] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(232), 1,
      sym_closing_parameter,
    ACTIONS(226), 2,
      sym_comma,
      sym_number,
    ACTIONS(224), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1239] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(238), 1,
      sym_closing_parameter,
    ACTIONS(236), 2,
      sym_comma,
      sym_number,
    ACTIONS(234), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(47), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1267] = 7,
    ACTIONS(246), 1,
      sym_closing_parameter,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__array_opening,
    ACTIONS(254), 1,
      aux_sym_object_field_token1,
    ACTIONS(243), 2,
      sym_comma,
      sym_number,
    ACTIONS(240), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1295] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(257), 1,
      sym__array_closing,
    ACTIONS(220), 2,
      sym_comma,
      sym_number,
    ACTIONS(218), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(57), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1323] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(263), 1,
      sym_closing_parameter,
    ACTIONS(261), 2,
      sym_comma,
      sym_number,
    ACTIONS(259), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(45), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1351] = 2,
    ACTIONS(73), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(71), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1369] = 2,
    ACTIONS(145), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(147), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1387] = 2,
    ACTIONS(167), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(169), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1405] = 7,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(208), 1,
      sym__array_opening,
    ACTIONS(269), 1,
      sym__array_closing,
    ACTIONS(267), 2,
      sym_comma,
      sym_number,
    ACTIONS(265), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(44), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1433] = 2,
    ACTIONS(135), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(137), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1451] = 7,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym__array_opening,
    ACTIONS(283), 1,
      sym__array_closing,
    ACTIONS(285), 1,
      aux_sym_object_field_token1,
    ACTIONS(274), 2,
      sym_comma,
      sym_number,
    ACTIONS(271), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(57), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1479] = 2,
    ACTIONS(290), 3,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
    ACTIONS(288), 9,
      sym_true,
      sym_false,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1496] = 4,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_operator,
    ACTIONS(69), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1513] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_operator,
    ACTIONS(69), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1527] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_operator,
    ACTIONS(69), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1541] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      sym_number,
    STATE(76), 2,
      sym_string_definition,
      sym_object_field,
  [1558] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(300), 1,
      sym_number,
    STATE(67), 2,
      sym_string_definition,
      sym_object_field,
  [1575] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_object_field_token1,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_number,
    STATE(65), 2,
      sym_string_definition,
      sym_object_field,
  [1592] = 1,
    ACTIONS(306), 1,
      sym__array_closing,
  [1596] = 1,
    ACTIONS(308), 1,
      sym_identifier,
  [1600] = 1,
    ACTIONS(310), 1,
      sym__array_closing,
  [1604] = 1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
  [1608] = 1,
    ACTIONS(314), 1,
      sym_opening_parameter,
  [1612] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1616] = 1,
    ACTIONS(318), 1,
      sym_identifier,
  [1620] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1624] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1628] = 1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [1632] = 1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1636] = 1,
    ACTIONS(328), 1,
      sym__array_closing,
  [1640] = 1,
    ACTIONS(330), 1,
      sym_opening_parameter,
  [1644] = 1,
    ACTIONS(332), 1,
      aux_sym_string_definition_token1,
  [1648] = 1,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [1652] = 1,
    ACTIONS(336), 1,
      sym_opening_parameter,
  [1656] = 1,
    ACTIONS(338), 1,
      aux_sym_string_definition_token1,
  [1660] = 1,
    ACTIONS(340), 1,
      aux_sym_string_definition_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 397,
  [SMALL_STATE(15)] = 428,
  [SMALL_STATE(16)] = 452,
  [SMALL_STATE(17)] = 476,
  [SMALL_STATE(18)] = 500,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 549,
  [SMALL_STATE(21)] = 571,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 621,
  [SMALL_STATE(24)] = 643,
  [SMALL_STATE(25)] = 677,
  [SMALL_STATE(26)] = 699,
  [SMALL_STATE(27)] = 721,
  [SMALL_STATE(28)] = 743,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 797,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 857,
  [SMALL_STATE(33)] = 879,
  [SMALL_STATE(34)] = 901,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 945,
  [SMALL_STATE(37)] = 967,
  [SMALL_STATE(38)] = 988,
  [SMALL_STATE(39)] = 1009,
  [SMALL_STATE(40)] = 1030,
  [SMALL_STATE(41)] = 1051,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1099,
  [SMALL_STATE(44)] = 1127,
  [SMALL_STATE(45)] = 1155,
  [SMALL_STATE(46)] = 1183,
  [SMALL_STATE(47)] = 1211,
  [SMALL_STATE(48)] = 1239,
  [SMALL_STATE(49)] = 1267,
  [SMALL_STATE(50)] = 1295,
  [SMALL_STATE(51)] = 1323,
  [SMALL_STATE(52)] = 1351,
  [SMALL_STATE(53)] = 1369,
  [SMALL_STATE(54)] = 1387,
  [SMALL_STATE(55)] = 1405,
  [SMALL_STATE(56)] = 1433,
  [SMALL_STATE(57)] = 1451,
  [SMALL_STATE(58)] = 1479,
  [SMALL_STATE(59)] = 1496,
  [SMALL_STATE(60)] = 1513,
  [SMALL_STATE(61)] = 1527,
  [SMALL_STATE(62)] = 1541,
  [SMALL_STATE(63)] = 1558,
  [SMALL_STATE(64)] = 1575,
  [SMALL_STATE(65)] = 1592,
  [SMALL_STATE(66)] = 1596,
  [SMALL_STATE(67)] = 1600,
  [SMALL_STATE(68)] = 1604,
  [SMALL_STATE(69)] = 1608,
  [SMALL_STATE(70)] = 1612,
  [SMALL_STATE(71)] = 1616,
  [SMALL_STATE(72)] = 1620,
  [SMALL_STATE(73)] = 1624,
  [SMALL_STATE(74)] = 1628,
  [SMALL_STATE(75)] = 1632,
  [SMALL_STATE(76)] = 1636,
  [SMALL_STATE(77)] = 1640,
  [SMALL_STATE(78)] = 1644,
  [SMALL_STATE(79)] = 1648,
  [SMALL_STATE(80)] = 1652,
  [SMALL_STATE(81)] = 1656,
  [SMALL_STATE(82)] = 1660,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_rule, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_rule, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(77),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(82),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(43),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(63),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_check, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_check, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_field, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_field, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_definition, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2), SHIFT_REPEAT(70),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(82),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(55),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(63),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(57),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(57),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(82),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(55),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(63),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_keywords, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
