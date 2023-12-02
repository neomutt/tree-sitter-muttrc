#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 4
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_set = 1,
  aux_sym_set_directive_token1 = 2,
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
  aux_sym_set_directive_repeat1 = 41,
  aux_sym__quoted_string_repeat1 = 42,
  aux_sym__quoted_string_repeat2 = 43,
  aux_sym__space_repeat1 = 44,
  alias_sym_argument = 45,
  alias_sym_mode_name = 46,
  alias_sym_option = 47,
  alias_sym_path = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "command",
  [aux_sym_set_directive_token1] = "set_directive_token1",
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
  [aux_sym_set_directive_repeat1] = "set_directive_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat2] = "_quoted_string_repeat2",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_argument] = "argument",
  [alias_sym_mode_name] = "mode_name",
  [alias_sym_option] = "option",
  [alias_sym_path] = "path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [aux_sym_set_directive_token1] = aux_sym_set_directive_token1,
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
  [aux_sym_set_directive_repeat1] = aux_sym_set_directive_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym__quoted_string_repeat2] = aux_sym__quoted_string_repeat2,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_argument] = alias_sym_argument,
  [alias_sym_mode_name] = alias_sym_mode_name,
  [alias_sym_option] = alias_sym_option,
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
  [aux_sym_set_directive_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_set_directive_repeat1] = {
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
  [alias_sym_option] = {
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
  [4] = {.index = 0, .length = 1},
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
    [1] = alias_sym_option,
  },
  [3] = {
    [1] = alias_sym_mode_name,
  },
  [5] = {
    [4] = alias_sym_argument,
  },
  [6] = {
    [5] = alias_sym_argument,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__word, 3,
    aux_sym__word,
    alias_sym_mode_name,
    alias_sym_path,
  aux_sym_set_directive_repeat1, 2,
    aux_sym_set_directive_repeat1,
    alias_sym_option,
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 21,
  [28] = 28,
  [29] = 18,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 19,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 37,
  [62] = 62,
  [63] = 63,
  [64] = 23,
  [65] = 53,
  [66] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_set_directive_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_set_directive_token1);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_set_directive_token1);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__word_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '"') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\'') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_unmap);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_map_directive_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_set_directive_token1] = ACTIONS(1),
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
  },
  [1] = {
    [sym_file] = STATE(60),
    [sym__code] = STATE(10),
    [sym_set_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_unmap_directive] = STATE(10),
    [sym_map_directive] = STATE(10),
    [sym__space] = STATE(52),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(18),
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
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_set,
    ACTIONS(24), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_unmap,
    ACTIONS(30), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__eol,
    ACTIONS(39), 1,
      aux_sym__space_token1,
    STATE(18), 1,
      aux_sym__space_repeat1,
    STATE(52), 1,
      sym__space,
    STATE(2), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(10), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [42] = 12,
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
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__space_repeat1,
    STATE(52), 1,
      sym__space,
    STATE(2), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(10), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [84] = 11,
    ACTIONS(46), 1,
      aux_sym_set_directive_token1,
    ACTIONS(48), 1,
      sym_int,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      aux_sym__word_token1,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      aux_sym_set_directive_repeat1,
    STATE(16), 1,
      aux_sym__word,
    STATE(35), 1,
      sym__quoted_string,
    ACTIONS(52), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_float,
      sym_string,
      sym_bool,
  [121] = 4,
    ACTIONS(60), 1,
      aux_sym_set_directive_token1,
    ACTIONS(65), 1,
      aux_sym__word_token1,
    STATE(5), 1,
      aux_sym_set_directive_repeat1,
    ACTIONS(63), 6,
      sym_int,
      anon_sym_DOT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [139] = 2,
    ACTIONS(67), 2,
      aux_sym_set_directive_token1,
      aux_sym__word_token1,
    ACTIONS(69), 6,
      sym_int,
      anon_sym_DOT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [152] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 7,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [165] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 7,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [178] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 7,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [191] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym__space_token1,
    ACTIONS(81), 1,
      sym__eol,
    STATE(7), 1,
      sym__end,
    STATE(18), 1,
      aux_sym__space_repeat1,
    STATE(52), 1,
      sym__space,
  [210] = 5,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      aux_sym_key_token2,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_mode,
    STATE(57), 1,
      sym_key,
  [226] = 4,
    ACTIONS(91), 1,
      aux_sym__space_token1,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(54), 1,
      sym__space,
    ACTIONS(89), 2,
      sym_comment,
      sym__eol,
  [240] = 3,
    ACTIONS(54), 1,
      aux_sym__word_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(94), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [252] = 3,
    ACTIONS(96), 1,
      aux_sym__word_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(99), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [264] = 4,
    ACTIONS(103), 1,
      aux_sym__space_token1,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(56), 1,
      sym__space,
    ACTIONS(101), 2,
      sym_comment,
      sym__eol,
  [278] = 3,
    ACTIONS(54), 1,
      aux_sym__word_token1,
    STATE(14), 1,
      aux_sym__word,
    ACTIONS(106), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [290] = 5,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      aux_sym_key_token2,
    STATE(28), 1,
      sym_mode,
    STATE(34), 1,
      sym_key,
  [306] = 3,
    ACTIONS(114), 1,
      aux_sym__space_token1,
    STATE(21), 1,
      aux_sym__space_repeat1,
    ACTIONS(112), 2,
      sym_comment,
      sym__eol,
  [317] = 1,
    ACTIONS(116), 4,
      aux_sym__word_token1,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [324] = 2,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(120), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [333] = 3,
    ACTIONS(124), 1,
      aux_sym__space_token1,
    STATE(21), 1,
      aux_sym__space_repeat1,
    ACTIONS(122), 2,
      sym_comment,
      sym__eol,
  [344] = 2,
    ACTIONS(127), 1,
      sym_int,
    ACTIONS(129), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [353] = 1,
    ACTIONS(131), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [359] = 3,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym__quoted_string_token1,
    STATE(24), 1,
      aux_sym__quoted_string_repeat1,
  [369] = 3,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      aux_sym_key_token2,
    STATE(62), 1,
      sym_key,
  [379] = 3,
    ACTIONS(138), 1,
      aux_sym__word_token1,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym__word,
  [389] = 3,
    ACTIONS(122), 1,
      aux_sym_map_directive_token1,
    ACTIONS(143), 1,
      aux_sym__space_token1,
    STATE(27), 1,
      aux_sym__space_repeat1,
  [399] = 3,
    ACTIONS(108), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      aux_sym_key_token2,
    STATE(40), 1,
      sym_key,
  [409] = 3,
    ACTIONS(112), 1,
      aux_sym_map_directive_token1,
    ACTIONS(146), 1,
      aux_sym__space_token1,
    STATE(27), 1,
      aux_sym__space_repeat1,
  [419] = 1,
    ACTIONS(148), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [425] = 1,
    ACTIONS(150), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [431] = 1,
    ACTIONS(152), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [437] = 1,
    ACTIONS(154), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [443] = 1,
    ACTIONS(156), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [449] = 1,
    ACTIONS(106), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [455] = 3,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym__quoted_string_token2,
    STATE(36), 1,
      aux_sym__quoted_string_repeat2,
  [465] = 1,
    ACTIONS(163), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [471] = 1,
    ACTIONS(165), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [477] = 3,
    ACTIONS(167), 1,
      aux_sym__word_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym__word,
  [487] = 1,
    ACTIONS(171), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [493] = 1,
    ACTIONS(173), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [499] = 3,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym__quoted_string_token2,
    STATE(36), 1,
      aux_sym__quoted_string_repeat2,
  [509] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym__quoted_string_token1,
    STATE(24), 1,
      aux_sym__quoted_string_repeat1,
  [519] = 1,
    ACTIONS(129), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [525] = 2,
    ACTIONS(116), 1,
      aux_sym__word_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
  [532] = 2,
    ACTIONS(183), 1,
      aux_sym__quoted_string_token2,
    STATE(42), 1,
      aux_sym__quoted_string_repeat2,
  [539] = 2,
    ACTIONS(185), 1,
      aux_sym_set_directive_token1,
    STATE(4), 1,
      aux_sym_set_directive_repeat1,
  [546] = 2,
    ACTIONS(187), 1,
      aux_sym__quoted_string_token1,
    STATE(43), 1,
      aux_sym__quoted_string_repeat1,
  [553] = 1,
    ACTIONS(189), 2,
      anon_sym_LT,
      aux_sym_key_token2,
  [558] = 2,
    ACTIONS(191), 1,
      aux_sym__word_token1,
    STATE(39), 1,
      aux_sym__word,
  [565] = 2,
    ACTIONS(193), 1,
      aux_sym__word_token1,
    STATE(13), 1,
      aux_sym__word,
  [572] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__eol,
  [579] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [583] = 1,
    ACTIONS(201), 1,
      aux_sym_map_directive_token1,
  [587] = 1,
    ACTIONS(203), 1,
      aux_sym_key_token1,
  [591] = 1,
    ACTIONS(205), 1,
      aux_sym_map_directive_token1,
  [595] = 1,
    ACTIONS(207), 1,
      aux_sym_map_directive_token1,
  [599] = 1,
    ACTIONS(197), 1,
      sym__eol,
  [603] = 1,
    ACTIONS(209), 1,
      sym_int,
  [607] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [611] = 1,
    ACTIONS(213), 1,
      aux_sym_map_directive_token1,
  [615] = 1,
    ACTIONS(215), 1,
      aux_sym_map_directive_token1,
  [619] = 1,
    ACTIONS(217), 1,
      sym__eol,
  [623] = 1,
    ACTIONS(219), 1,
      aux_sym_map_directive_token1,
  [627] = 1,
    ACTIONS(221), 1,
      anon_sym_GT,
  [631] = 1,
    ACTIONS(223), 1,
      aux_sym_key_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 317,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 359,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 419,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 431,
  [SMALL_STATE(33)] = 437,
  [SMALL_STATE(34)] = 443,
  [SMALL_STATE(35)] = 449,
  [SMALL_STATE(36)] = 455,
  [SMALL_STATE(37)] = 465,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 477,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 499,
  [SMALL_STATE(43)] = 509,
  [SMALL_STATE(44)] = 519,
  [SMALL_STATE(45)] = 525,
  [SMALL_STATE(46)] = 532,
  [SMALL_STATE(47)] = 539,
  [SMALL_STATE(48)] = 546,
  [SMALL_STATE(49)] = 553,
  [SMALL_STATE(50)] = 558,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 572,
  [SMALL_STATE(53)] = 579,
  [SMALL_STATE(54)] = 583,
  [SMALL_STATE(55)] = 587,
  [SMALL_STATE(56)] = 591,
  [SMALL_STATE(57)] = 595,
  [SMALL_STATE(58)] = 599,
  [SMALL_STATE(59)] = 603,
  [SMALL_STATE(60)] = 607,
  [SMALL_STATE(61)] = 611,
  [SMALL_STATE(62)] = 615,
  [SMALL_STATE(63)] = 619,
  [SMALL_STATE(64)] = 623,
  [SMALL_STATE(65)] = 627,
  [SMALL_STATE(66)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(47),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(51),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(17),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(58),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_directive_repeat1, 2), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_directive_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_directive_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_directive_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_directive_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 4),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_map_directive, 4), SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 3),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_map_directive, 3), SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(21),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(45),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 6, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 5, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 3, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
