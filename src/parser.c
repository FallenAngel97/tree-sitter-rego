#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
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
  sym_comma = 7,
  sym_comment = 8,
  anon_sym_lower = 9,
  anon_sym_is_string = 10,
  anon_sym_object_DOTget = 11,
  anon_sym_print = 12,
  anon_sym_concat = 13,
  anon_sym_contains = 14,
  sym_opening_parameter = 15,
  sym_closing_parameter = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_definition_token1 = 18,
  sym__array_opening = 19,
  sym__array_closing = 20,
  aux_sym_object_field_token1 = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  sym__junk = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_lower);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_is_string);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_object_DOTget);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_opening_parameter);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_closing_parameter);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_definition_token1);
      if (aux_sym_string_definition_token1_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__array_opening);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__array_closing);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_object_field_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__junk);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'j') ADVANCE(57);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
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
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 7},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__definition] = STATE(3),
    [sym_function_name] = STATE(71),
    [sym_builtin_function] = STATE(5),
    [sym_string_definition] = STATE(61),
    [sym_object_field] = STATE(61),
    [sym_array_definition] = STATE(61),
    [sym_operator_check] = STATE(3),
    [sym_rego_block] = STATE(3),
    [sym_import_package] = STATE(3),
    [sym_package_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_lower] = ACTIONS(7),
    [anon_sym_is_string] = ACTIONS(7),
    [anon_sym_object_DOTget] = ACTIONS(7),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_contains] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__array_opening] = ACTIONS(11),
    [aux_sym_object_field_token1] = ACTIONS(13),
    [sym__junk] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_package] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      sym__array_opening,
    ACTIONS(37), 1,
      aux_sym_object_field_token1,
    ACTIONS(40), 1,
      sym__junk,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      anon_sym_package,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(5), 1,
      sym_builtin_function,
    STATE(71), 1,
      sym_function_name,
    STATE(61), 3,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(28), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
    STATE(2), 6,
      sym__definition,
      sym_operator_check,
      sym_rego_block,
      sym_import_package,
      sym_package_definition,
      aux_sym_source_file_repeat1,
  [55] = 14,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym__array_opening,
    ACTIONS(13), 1,
      aux_sym_object_field_token1,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      anon_sym_package,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__junk,
    STATE(5), 1,
      sym_builtin_function,
    STATE(71), 1,
      sym_function_name,
    STATE(61), 3,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
    STATE(2), 6,
      sym__definition,
      sym_operator_check,
      sym_rego_block,
      sym_import_package,
      sym_package_definition,
      aux_sym_source_file_repeat1,
  [110] = 8,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(16), 1,
      aux_sym_test_case_repeat1,
    STATE(24), 1,
      sym_operator,
    STATE(75), 1,
      sym_reserved_keywords,
    ACTIONS(64), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(66), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(58), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [151] = 4,
    STATE(25), 1,
      sym_operator,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(60), 6,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 13,
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
  [182] = 5,
    STATE(29), 1,
      sym_as_keyword,
    STATE(72), 1,
      sym_reserved_keywords,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(66), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(74), 13,
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
  [214] = 2,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(78), 19,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
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
  [240] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(82), 19,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
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
  [266] = 11,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__array_opening,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(14), 1,
      sym_array_definition,
    STATE(79), 1,
      sym_function_name,
    STATE(13), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(54), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [309] = 11,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__array_opening,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(79), 1,
      sym_function_name,
    STATE(12), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(54), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [352] = 11,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__array_opening,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(79), 1,
      sym_function_name,
    STATE(10), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(54), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [395] = 11,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym__array_opening,
    ACTIONS(107), 1,
      aux_sym_object_field_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(14), 1,
      sym_array_definition,
    STATE(79), 1,
      sym_function_name,
    STATE(12), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(54), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(98), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [438] = 11,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__array_opening,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_array_definition,
    STATE(79), 1,
      sym_function_name,
    STATE(12), 2,
      sym_rego_rule,
      aux_sym_rego_block_repeat1,
    STATE(54), 2,
      sym_operator_check,
      sym_test_case,
    STATE(60), 3,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [481] = 5,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_operator,
    ACTIONS(64), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(58), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [510] = 2,
    ACTIONS(82), 8,
      anon_sym_EQ,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
    ACTIONS(80), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
  [532] = 5,
    STATE(18), 1,
      aux_sym_test_case_repeat1,
    STATE(75), 1,
      sym_reserved_keywords,
    ACTIONS(66), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(119), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(117), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [560] = 2,
    ACTIONS(123), 8,
      anon_sym_EQ,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
    ACTIONS(121), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
  [582] = 5,
    STATE(18), 1,
      aux_sym_test_case_repeat1,
    STATE(75), 1,
      sym_reserved_keywords,
    ACTIONS(127), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(129), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_as,
      anon_sym_with,
    ACTIONS(125), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [610] = 2,
    ACTIONS(78), 8,
      anon_sym_EQ,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
    ACTIONS(76), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
  [632] = 2,
    ACTIONS(134), 8,
      anon_sym_EQ,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
    ACTIONS(132), 9,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
  [654] = 3,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(138), 13,
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
  [677] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(144), 13,
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
  [697] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(148), 13,
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
  [717] = 7,
    ACTIONS(86), 1,
      sym__array_opening,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_object_field_token1,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(79), 1,
      sym_function_name,
    STATE(57), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [747] = 7,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym__array_opening,
    ACTIONS(160), 1,
      aux_sym_object_field_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(71), 1,
      sym_function_name,
    STATE(36), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [777] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(166), 13,
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
  [797] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(123), 13,
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
  [817] = 2,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(170), 13,
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
  [837] = 2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(174), 13,
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
  [857] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(178), 13,
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
  [877] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(134), 13,
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
  [897] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(182), 13,
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
  [917] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(186), 13,
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
  [937] = 2,
    ACTIONS(127), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(125), 11,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_true,
      anon_sym_false,
      anon_sym_as,
      anon_sym_with,
      sym_identifier,
  [957] = 7,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym__array_opening,
    ACTIONS(160), 1,
      aux_sym_object_field_token1,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(71), 1,
      sym_function_name,
    STATE(36), 4,
      sym_builtin_function,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
    ACTIONS(7), 6,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
  [987] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(138), 13,
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
  [1007] = 2,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__junk,
    ACTIONS(192), 13,
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
  [1027] = 2,
    ACTIONS(170), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(168), 12,
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
  [1046] = 2,
    ACTIONS(123), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(121), 12,
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
  [1065] = 2,
    ACTIONS(166), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(164), 12,
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
  [1084] = 2,
    ACTIONS(134), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(132), 12,
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
  [1103] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(198), 1,
      sym__array_closing,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(194), 2,
      sym_comma,
      sym_number,
    STATE(47), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1129] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(204), 1,
      sym__array_closing,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(202), 2,
      sym_comma,
      sym_number,
    STATE(44), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1155] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym__array_closing,
    ACTIONS(194), 2,
      sym_comma,
      sym_number,
    STATE(47), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1181] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(212), 1,
      sym_closing_parameter,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(210), 2,
      sym_comma,
      sym_number,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1207] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym_closing_parameter,
    ACTIONS(210), 2,
      sym_comma,
      sym_number,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1233] = 7,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      sym__array_opening,
    ACTIONS(227), 1,
      sym__array_closing,
    ACTIONS(229), 1,
      aux_sym_object_field_token1,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(218), 2,
      sym_comma,
      sym_number,
    STATE(47), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1259] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(237), 1,
      sym_closing_parameter,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(235), 2,
      sym_comma,
      sym_number,
    STATE(46), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1285] = 7,
    ACTIONS(244), 1,
      sym_closing_parameter,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym__array_opening,
    ACTIONS(252), 1,
      aux_sym_object_field_token1,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(241), 2,
      sym_comma,
      sym_number,
    STATE(49), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1311] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(260), 1,
      sym_closing_parameter,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(258), 2,
      sym_comma,
      sym_number,
    STATE(45), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_builtin_function_repeat1,
  [1337] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym__array_closing,
    ACTIONS(194), 2,
      sym_comma,
      sym_number,
    STATE(47), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1363] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(268), 1,
      sym__array_closing,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(266), 2,
      sym_comma,
      sym_number,
    STATE(51), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1389] = 2,
    ACTIONS(164), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(166), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1405] = 2,
    ACTIONS(64), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(62), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1421] = 2,
    ACTIONS(168), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(170), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1437] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(196), 1,
      sym__array_opening,
    ACTIONS(274), 1,
      sym__array_closing,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(272), 2,
      sym_comma,
      sym_number,
    STATE(42), 4,
      sym_string_definition,
      sym_object_field,
      sym_array_definition,
      aux_sym_array_definition_repeat1,
  [1463] = 2,
    ACTIONS(136), 4,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
      anon_sym_RBRACE,
    ACTIONS(138), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1479] = 2,
    ACTIONS(280), 3,
      anon_sym_DQUOTE,
      sym__array_opening,
      aux_sym_object_field_token1,
    ACTIONS(278), 7,
      anon_sym_lower,
      anon_sym_is_string,
      anon_sym_object_DOTget,
      anon_sym_print,
      anon_sym_concat,
      anon_sym_contains,
      sym_identifier,
  [1494] = 4,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_operator,
    ACTIONS(58), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1511] = 3,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_operator,
    ACTIONS(58), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1525] = 3,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_operator,
    ACTIONS(58), 5,
      anon_sym_EQ_EQ,
      anon_sym_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [1539] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      sym_number,
    STATE(76), 2,
      sym_string_definition,
      sym_object_field,
  [1556] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(290), 1,
      sym_number,
    STATE(67), 2,
      sym_string_definition,
      sym_object_field,
  [1573] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_object_field_token1,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(294), 1,
      sym_number,
    STATE(69), 2,
      sym_string_definition,
      sym_object_field,
  [1590] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [1594] = 1,
    ACTIONS(298), 1,
      sym_identifier,
  [1598] = 1,
    ACTIONS(300), 1,
      sym__array_closing,
  [1602] = 1,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
  [1606] = 1,
    ACTIONS(304), 1,
      sym__array_closing,
  [1610] = 1,
    ACTIONS(306), 1,
      sym_identifier,
  [1614] = 1,
    ACTIONS(308), 1,
      sym_opening_parameter,
  [1618] = 1,
    ACTIONS(310), 1,
      sym_identifier,
  [1622] = 1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
  [1626] = 1,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
  [1630] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1634] = 1,
    ACTIONS(318), 1,
      sym__array_closing,
  [1638] = 1,
    ACTIONS(320), 1,
      aux_sym_string_definition_token1,
  [1642] = 1,
    ACTIONS(322), 1,
      aux_sym_string_definition_token1,
  [1646] = 1,
    ACTIONS(324), 1,
      sym_opening_parameter,
  [1650] = 1,
    ACTIONS(326), 1,
      sym_opening_parameter,
  [1654] = 1,
    ACTIONS(328), 1,
      aux_sym_string_definition_token1,
  [1658] = 1,
    ACTIONS(330), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 395,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 481,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 532,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 632,
  [SMALL_STATE(21)] = 654,
  [SMALL_STATE(22)] = 677,
  [SMALL_STATE(23)] = 697,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 747,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 817,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 857,
  [SMALL_STATE(31)] = 877,
  [SMALL_STATE(32)] = 897,
  [SMALL_STATE(33)] = 917,
  [SMALL_STATE(34)] = 937,
  [SMALL_STATE(35)] = 957,
  [SMALL_STATE(36)] = 987,
  [SMALL_STATE(37)] = 1007,
  [SMALL_STATE(38)] = 1027,
  [SMALL_STATE(39)] = 1046,
  [SMALL_STATE(40)] = 1065,
  [SMALL_STATE(41)] = 1084,
  [SMALL_STATE(42)] = 1103,
  [SMALL_STATE(43)] = 1129,
  [SMALL_STATE(44)] = 1155,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1233,
  [SMALL_STATE(48)] = 1259,
  [SMALL_STATE(49)] = 1285,
  [SMALL_STATE(50)] = 1311,
  [SMALL_STATE(51)] = 1337,
  [SMALL_STATE(52)] = 1363,
  [SMALL_STATE(53)] = 1389,
  [SMALL_STATE(54)] = 1405,
  [SMALL_STATE(55)] = 1421,
  [SMALL_STATE(56)] = 1437,
  [SMALL_STATE(57)] = 1463,
  [SMALL_STATE(58)] = 1479,
  [SMALL_STATE(59)] = 1494,
  [SMALL_STATE(60)] = 1511,
  [SMALL_STATE(61)] = 1525,
  [SMALL_STATE(62)] = 1539,
  [SMALL_STATE(63)] = 1556,
  [SMALL_STATE(64)] = 1573,
  [SMALL_STATE(65)] = 1590,
  [SMALL_STATE(66)] = 1594,
  [SMALL_STATE(67)] = 1598,
  [SMALL_STATE(68)] = 1602,
  [SMALL_STATE(69)] = 1606,
  [SMALL_STATE(70)] = 1610,
  [SMALL_STATE(71)] = 1614,
  [SMALL_STATE(72)] = 1618,
  [SMALL_STATE(73)] = 1622,
  [SMALL_STATE(74)] = 1626,
  [SMALL_STATE(75)] = 1630,
  [SMALL_STATE(76)] = 1634,
  [SMALL_STATE(77)] = 1638,
  [SMALL_STATE(78)] = 1642,
  [SMALL_STATE(79)] = 1646,
  [SMALL_STATE(80)] = 1650,
  [SMALL_STATE(81)] = 1654,
  [SMALL_STATE(82)] = 1658,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_rule, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_rule, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 2, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 4, .production_id = 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 3, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(80),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(78),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(52),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(63),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rego_block_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rego_block_repeat1, 2), SHIFT_REPEAT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2), SHIFT_REPEAT(70),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_check, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_check, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_definition, 2, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_keyword, 2, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_field, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_field, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_definition, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_package, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 3, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 6, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 5, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rego_block, 4, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(47),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(78),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(63),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_definition_repeat1, 2), SHIFT_REPEAT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(78),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(56),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(63),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_builtin_function_repeat1, 2), SHIFT_REPEAT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_keywords, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
