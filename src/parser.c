#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 3
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_set = 1,
  sym_option = 2,
  sym_int = 3,
  anon_sym_DOT = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  aux_sym__word_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__quoted_string_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym__quoted_string_token2 = 11,
  anon_sym_include = 12,
  anon_sym_unmap = 13,
  anon_sym_map = 14,
  aux_sym_map_directive_token1 = 15,
  anon_sym_LT = 16,
  aux_sym_key_token1 = 17,
  anon_sym_GT = 18,
  aux_sym_key_token2 = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_comment = 22,
  sym__eol = 23,
  aux_sym__space_token1 = 24,
  sym_file = 25,
  sym__code = 26,
  sym_set_directive = 27,
  sym_float = 28,
  sym_string = 29,
  sym_bool = 30,
  aux_sym__word = 31,
  sym__quoted_string = 32,
  sym_include_directive = 33,
  sym_unmap_directive = 34,
  sym_map_directive = 35,
  sym_key = 36,
  sym_mode = 37,
  sym__space = 38,
  sym__end = 39,
  aux_sym_file_repeat1 = 40,
  aux_sym__quoted_string_repeat1 = 41,
  aux_sym__quoted_string_repeat2 = 42,
  aux_sym__space_repeat1 = 43,
  alias_sym_argument = 44,
  alias_sym_mode_name = 45,
  alias_sym_path = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "command",
  [sym_option] = "option",
  [sym_int] = "int",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__word_token1] = "_word_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_token2] = "_quoted_string_token2",
  [anon_sym_include] = "command",
  [anon_sym_unmap] = "command",
  [anon_sym_map] = "command",
  [aux_sym_map_directive_token1] = "function",
  [anon_sym_LT] = "<",
  [aux_sym_key_token1] = "key_name",
  [anon_sym_GT] = ">",
  [aux_sym_key_token2] = "key_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__code] = "_code",
  [sym_set_directive] = "set_directive",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [aux_sym__word] = "_word",
  [sym__quoted_string] = "_quoted_string",
  [sym_include_directive] = "include_directive",
  [sym_unmap_directive] = "unmap_directive",
  [sym_map_directive] = "map_directive",
  [sym_key] = "key",
  [sym_mode] = "mode",
  [sym__space] = "_space",
  [sym__end] = "_end",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat2] = "_quoted_string_repeat2",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_argument] = "argument",
  [alias_sym_mode_name] = "mode_name",
  [alias_sym_path] = "path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [sym_option] = sym_option,
  [sym_int] = sym_int,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__word_token1] = aux_sym__word_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_token2] = aux_sym__quoted_string_token2,
  [anon_sym_include] = anon_sym_set,
  [anon_sym_unmap] = anon_sym_set,
  [anon_sym_map] = anon_sym_set,
  [aux_sym_map_directive_token1] = aux_sym_map_directive_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__code] = sym__code,
  [sym_set_directive] = sym_set_directive,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [aux_sym__word] = aux_sym__word,
  [sym__quoted_string] = sym__quoted_string,
  [sym_include_directive] = sym_include_directive,
  [sym_unmap_directive] = sym_unmap_directive,
  [sym_map_directive] = sym_map_directive,
  [sym_key] = sym_key,
  [sym_mode] = sym_mode,
  [sym__space] = sym__space,
  [sym__end] = sym__end,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym__quoted_string_repeat2] = aux_sym__quoted_string_repeat2,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_argument] = alias_sym_argument,
  [alias_sym_mode_name] = alias_sym_mode_name,
  [alias_sym_path] = alias_sym_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_map_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__word] = {
    .visible = false,
    .named = false,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmap_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_map_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mode_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_path,
  },
  [2] = {
    [1] = alias_sym_mode_name,
  },
  [4] = {
    [4] = alias_sym_argument,
  },
  [5] = {
    [5] = alias_sym_argument,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__word, 3,
    aux_sym__word,
    alias_sym_mode_name,
    alias_sym_path,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 14,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 18,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 35,
  [59] = 59,
  [60] = 36,
  [61] = 48,
  [62] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '[') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__word_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '"') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\'') ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_unmap);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_map_directive_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__space_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__word_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(50),
    [sym__code] = STATE(8),
    [sym_set_directive] = STATE(8),
    [sym_include_directive] = STATE(8),
    [sym_unmap_directive] = STATE(8),
    [sym_map_directive] = STATE(8),
    [sym__space] = STATE(46),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_unmap] = ACTIONS(9),
    [anon_sym_map] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [aux_sym__space_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_set,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_unmap,
    ACTIONS(11), 1,
      anon_sym_map,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym__space_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__eol,
    STATE(11), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym__space,
    STATE(3), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(8), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [42] = 12,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_set,
    ACTIONS(28), 1,
      anon_sym_include,
    ACTIONS(31), 1,
      anon_sym_unmap,
    ACTIONS(34), 1,
      anon_sym_map,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__eol,
    ACTIONS(43), 1,
      aux_sym__space_token1,
    STATE(11), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym__space,
    STATE(3), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(8), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [84] = 9,
    ACTIONS(46), 1,
      sym_int,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      aux_sym__word,
    STATE(34), 1,
      sym__quoted_string,
    ACTIONS(50), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 3,
      sym_float,
      sym_string,
      sym_bool,
  [115] = 2,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(58), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [128] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(62), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [141] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(66), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [154] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym__space_token1,
    ACTIONS(68), 1,
      sym__eol,
    STATE(5), 1,
      sym__end,
    STATE(11), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym__space,
  [173] = 5,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      aux_sym_key_token2,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_mode,
    STATE(59), 1,
      sym_key,
  [189] = 4,
    ACTIONS(78), 1,
      aux_sym__space_token1,
    STATE(11), 1,
      aux_sym__space_repeat1,
    STATE(49), 1,
      sym__space,
    ACTIONS(76), 2,
      sym_comment,
      sym__eol,
  [203] = 3,
    ACTIONS(83), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      aux_sym__space_repeat1,
    ACTIONS(81), 3,
      aux_sym_map_directive_token1,
      sym_comment,
      sym__eol,
  [215] = 4,
    ACTIONS(87), 1,
      aux_sym__space_token1,
    STATE(11), 1,
      aux_sym__space_repeat1,
    STATE(55), 1,
      sym__space,
    ACTIONS(85), 2,
      sym_comment,
      sym__eol,
  [229] = 4,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(92), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(90), 2,
      sym_comment,
      sym__eol,
  [243] = 4,
    ACTIONS(94), 1,
      aux_sym__word_token1,
    ACTIONS(99), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(97), 2,
      sym_comment,
      sym__eol,
  [257] = 4,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(103), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(101), 2,
      sym_comment,
      sym__eol,
  [271] = 3,
    ACTIONS(107), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      aux_sym__space_repeat1,
    ACTIONS(105), 3,
      aux_sym_map_directive_token1,
      sym_comment,
      sym__eol,
  [283] = 5,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      aux_sym_key_token2,
    STATE(27), 1,
      sym_key,
    STATE(30), 1,
      sym_mode,
  [299] = 2,
    ACTIONS(116), 1,
      aux_sym__space_token1,
    ACTIONS(114), 3,
      aux_sym__word_token1,
      sym_comment,
      sym__eol,
  [308] = 3,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      aux_sym__space_token1,
    ACTIONS(120), 2,
      sym_comment,
      sym__eol,
  [319] = 3,
    ACTIONS(124), 1,
      sym_int,
    ACTIONS(128), 1,
      aux_sym__space_token1,
    ACTIONS(126), 2,
      sym_comment,
      sym__eol,
  [330] = 3,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      aux_sym__quoted_string_token2,
    STATE(28), 1,
      aux_sym__quoted_string_repeat2,
  [340] = 3,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym__quoted_string_token1,
    STATE(22), 1,
      aux_sym__quoted_string_repeat1,
  [350] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym__word_token1,
    STATE(23), 1,
      aux_sym__word,
  [360] = 3,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      aux_sym_key_token2,
    STATE(57), 1,
      sym_key,
  [370] = 2,
    ACTIONS(144), 1,
      aux_sym__space_token1,
    ACTIONS(142), 2,
      sym_comment,
      sym__eol,
  [378] = 2,
    ACTIONS(148), 1,
      aux_sym__space_token1,
    ACTIONS(146), 2,
      sym_comment,
      sym__eol,
  [386] = 2,
    ACTIONS(152), 1,
      aux_sym__space_token1,
    ACTIONS(150), 2,
      sym_comment,
      sym__eol,
  [394] = 3,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      aux_sym__quoted_string_token2,
    STATE(28), 1,
      aux_sym__quoted_string_repeat2,
  [404] = 2,
    ACTIONS(161), 1,
      aux_sym__space_token1,
    ACTIONS(159), 2,
      sym_comment,
      sym__eol,
  [412] = 3,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      aux_sym_key_token2,
    STATE(38), 1,
      sym_key,
  [422] = 2,
    ACTIONS(165), 1,
      aux_sym__space_token1,
    ACTIONS(163), 2,
      sym_comment,
      sym__eol,
  [430] = 2,
    ACTIONS(169), 1,
      aux_sym__space_token1,
    ACTIONS(167), 2,
      sym_comment,
      sym__eol,
  [438] = 2,
    ACTIONS(173), 1,
      aux_sym__space_token1,
    ACTIONS(171), 2,
      sym_comment,
      sym__eol,
  [446] = 2,
    ACTIONS(103), 1,
      aux_sym__space_token1,
    ACTIONS(101), 2,
      sym_comment,
      sym__eol,
  [454] = 2,
    ACTIONS(177), 1,
      aux_sym__space_token1,
    ACTIONS(175), 2,
      sym_comment,
      sym__eol,
  [462] = 2,
    ACTIONS(181), 1,
      aux_sym__space_token1,
    ACTIONS(179), 2,
      sym_comment,
      sym__eol,
  [470] = 3,
    ACTIONS(183), 1,
      aux_sym__word_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym__word,
  [480] = 2,
    ACTIONS(189), 1,
      aux_sym__space_token1,
    ACTIONS(187), 2,
      sym_comment,
      sym__eol,
  [488] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      aux_sym__quoted_string_token1,
    STATE(22), 1,
      aux_sym__quoted_string_repeat1,
  [498] = 2,
    ACTIONS(128), 1,
      aux_sym__space_token1,
    ACTIONS(126), 2,
      sym_comment,
      sym__eol,
  [506] = 2,
    ACTIONS(193), 1,
      aux_sym__word_token1,
    STATE(13), 1,
      aux_sym__word,
  [513] = 2,
    ACTIONS(114), 1,
      aux_sym__word_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
  [520] = 2,
    ACTIONS(195), 1,
      aux_sym__quoted_string_token1,
    STATE(39), 1,
      aux_sym__quoted_string_repeat1,
  [527] = 2,
    ACTIONS(197), 1,
      aux_sym__quoted_string_token2,
    STATE(21), 1,
      aux_sym__quoted_string_repeat2,
  [534] = 2,
    ACTIONS(199), 1,
      aux_sym__word_token1,
    STATE(37), 1,
      aux_sym__word,
  [541] = 2,
    ACTIONS(201), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__eol,
  [548] = 1,
    ACTIONS(205), 2,
      anon_sym_LT,
      aux_sym_key_token2,
  [553] = 1,
    ACTIONS(207), 1,
      anon_sym_GT,
  [557] = 1,
    ACTIONS(209), 1,
      aux_sym_map_directive_token1,
  [561] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [565] = 1,
    ACTIONS(203), 1,
      sym__eol,
  [569] = 1,
    ACTIONS(213), 1,
      aux_sym_key_token1,
  [573] = 1,
    ACTIONS(215), 1,
      sym_int,
  [577] = 1,
    ACTIONS(217), 1,
      sym_option,
  [581] = 1,
    ACTIONS(219), 1,
      aux_sym_map_directive_token1,
  [585] = 1,
    ACTIONS(221), 1,
      sym__eol,
  [589] = 1,
    ACTIONS(223), 1,
      aux_sym_map_directive_token1,
  [593] = 1,
    ACTIONS(177), 1,
      aux_sym_map_directive_token1,
  [597] = 1,
    ACTIONS(225), 1,
      aux_sym_map_directive_token1,
  [601] = 1,
    ACTIONS(181), 1,
      aux_sym_map_directive_token1,
  [605] = 1,
    ACTIONS(227), 1,
      anon_sym_GT,
  [609] = 1,
    ACTIONS(229), 1,
      aux_sym_key_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 378,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 404,
  [SMALL_STATE(30)] = 412,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 430,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 470,
  [SMALL_STATE(38)] = 480,
  [SMALL_STATE(39)] = 488,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 506,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 520,
  [SMALL_STATE(44)] = 527,
  [SMALL_STATE(45)] = 534,
  [SMALL_STATE(46)] = 541,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 553,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 561,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 569,
  [SMALL_STATE(53)] = 573,
  [SMALL_STATE(54)] = 577,
  [SMALL_STATE(55)] = 581,
  [SMALL_STATE(56)] = 585,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 593,
  [SMALL_STATE(59)] = 597,
  [SMALL_STATE(60)] = 601,
  [SMALL_STATE(61)] = 605,
  [SMALL_STATE(62)] = 609,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(54),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(41),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(51),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 3),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_map_directive, 3), SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 4),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_map_directive, 4), SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(42),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 6, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_directive, 6, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 5, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_directive, 5, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unmap_directive, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(28),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_directive, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unmap_directive, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zathurarc(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
