#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 565
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 344
#define ALIAS_COUNT 3
#define TOKEN_COUNT 191
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  anon_sym_account_DASHhook = 1,
  anon_sym_DASHgroup = 2,
  anon_sym_COMMA = 3,
  anon_sym_alias = 4,
  anon_sym_unalias = 5,
  anon_sym_STAR = 6,
  anon_sym_LT = 7,
  aux_sym_key_token1 = 8,
  anon_sym_GT = 9,
  aux_sym_key_token2 = 10,
  aux_sym_key_token3 = 11,
  anon_sym_SPACE = 12,
  anon_sym_alternates = 13,
  anon_sym_unalternates = 14,
  anon_sym_alternative_order = 15,
  anon_sym_unalternative_order = 16,
  sym_mime_type = 17,
  anon_sym_SLASH = 18,
  anon_sym_attachments = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_QMARK = 22,
  anon_sym_unattachments = 23,
  anon_sym_auto_view = 24,
  anon_sym_unauto_view = 25,
  anon_sym_attach = 26,
  anon_sym_browser = 27,
  anon_sym_compose = 28,
  anon_sym_editor = 29,
  anon_sym_generic = 30,
  anon_sym_index = 31,
  anon_sym_mix = 32,
  anon_sym_pager = 33,
  anon_sym_pgp = 34,
  anon_sym_postpone = 35,
  anon_sym_query = 36,
  anon_sym_smime = 37,
  sym_function = 38,
  anon_sym_bind = 39,
  anon_sym_unbind = 40,
  anon_sym_charset_DASHhook = 41,
  anon_sym_iconv_DASHhook = 42,
  anon_sym_attach_headers = 43,
  anon_sym_attachment = 44,
  anon_sym_bold = 45,
  anon_sym_error = 46,
  anon_sym_hdrdefault = 47,
  anon_sym_index_author = 48,
  anon_sym_index_collapsed = 49,
  anon_sym_index_date = 50,
  anon_sym_index_flags = 51,
  anon_sym_index_label = 52,
  anon_sym_index_number = 53,
  anon_sym_index_size = 54,
  anon_sym_index_subject = 55,
  anon_sym_index_tag = 56,
  anon_sym_index_tags = 57,
  anon_sym_indicator = 58,
  anon_sym_markers = 59,
  anon_sym_message = 60,
  anon_sym_normal = 61,
  anon_sym_progress = 62,
  anon_sym_prompt = 63,
  aux_sym_object_token1 = 64,
  anon_sym_search = 65,
  anon_sym_signature = 66,
  anon_sym_status = 67,
  anon_sym_tilde = 68,
  anon_sym_tree = 69,
  anon_sym_underline = 70,
  anon_sym_sidebar_background = 71,
  anon_sym_sidebar_divider = 72,
  anon_sym_sidebar_flagged = 73,
  anon_sym_sidebar_highlight = 74,
  anon_sym_sidebar_indicator = 75,
  anon_sym_sidebar_new = 76,
  anon_sym_sidebar_ordinary = 77,
  anon_sym_sidebar_spool_file = 78,
  anon_sym_body = 79,
  anon_sym_header = 80,
  anon_sym_security_encrypt = 81,
  anon_sym_security_sign = 82,
  anon_sym_security_both = 83,
  anon_sym_security_none = 84,
  anon_sym_default = 85,
  anon_sym_black = 86,
  anon_sym_red = 87,
  anon_sym_green = 88,
  anon_sym_yellow = 89,
  anon_sym_blue = 90,
  anon_sym_magenta = 91,
  anon_sym_cyan = 92,
  anon_sym_white = 93,
  aux_sym_color_token1 = 94,
  aux_sym_color_token2 = 95,
  anon_sym_none = 96,
  anon_sym_reverse = 97,
  anon_sym_standout = 98,
  anon_sym_color = 99,
  anon_sym_uncolor = 100,
  anon_sym_crypt_DASHhook = 101,
  anon_sym_index_DASHformat_DASHhook = 102,
  anon_sym_BANG = 103,
  anon_sym_exec = 104,
  anon_sym_fcc_DASHsave_DASHhook = 105,
  anon_sym_fcc_DASHhook = 106,
  anon_sym_save_DASHhook = 107,
  anon_sym_folder_DASHhook = 108,
  anon_sym_DASHnoregex = 109,
  anon_sym_DASHrx = 110,
  anon_sym_DASHaddr = 111,
  anon_sym_group = 112,
  anon_sym_ungroup = 113,
  anon_sym_hdr_order = 114,
  anon_sym_unhdr_order = 115,
  anon_sym_ifdef = 116,
  anon_sym_ifndef = 117,
  anon_sym_finish = 118,
  anon_sym_ignore = 119,
  anon_sym_unignore = 120,
  anon_sym_lists = 121,
  anon_sym_unlists = 122,
  anon_sym_subscribe = 123,
  anon_sym_unsubscribe = 124,
  anon_sym_macro = 125,
  anon_sym_unmacro = 126,
  anon_sym_mailboxes = 127,
  anon_sym_named_DASHmailboxes = 128,
  anon_sym_unmailboxes = 129,
  anon_sym_mailto_allow = 130,
  anon_sym_unmailto_allow = 131,
  anon_sym_echo = 132,
  anon_sym_cd = 133,
  anon_sym_mbox_DASHhook = 134,
  anon_sym_message_DASHhook = 135,
  anon_sym_mime_lookup = 136,
  anon_sym_unmime_lookup = 137,
  anon_sym_mono = 138,
  anon_sym_unmono = 139,
  anon_sym_my_hdr = 140,
  anon_sym_unmy_hdr = 141,
  anon_sym_open_DASHhook = 142,
  anon_sym_close_DASHhook = 143,
  anon_sym_append_DASHhook = 144,
  anon_sym_push = 145,
  anon_sym_reply_DASHhook = 146,
  anon_sym_send_DASHhook = 147,
  anon_sym_send2_DASHhook = 148,
  anon_sym_spam = 149,
  anon_sym_nospam = 150,
  anon_sym_subjectrx = 151,
  anon_sym_unsubjectrx = 152,
  anon_sym_subscribe_DASHto = 153,
  anon_sym_unsubscribe_DASHfrom = 154,
  anon_sym_timeout_DASHhook = 155,
  anon_sym_startup_DASHhook = 156,
  anon_sym_shutdown_DASHhook = 157,
  anon_sym_unhook = 158,
  anon_sym_set = 159,
  anon_sym_PLUS_EQ = 160,
  anon_sym_DASH_EQ = 161,
  anon_sym_EQ = 162,
  anon_sym_AMP = 163,
  anon_sym_unset = 164,
  anon_sym_reset = 165,
  anon_sym_toggle = 166,
  anon_sym_setenv = 167,
  aux_sym_setenv_directive_token1 = 168,
  anon_sym_unsetenv = 169,
  anon_sym_sidebar_pin = 170,
  anon_sym_sidebar_unpin = 171,
  anon_sym_score = 172,
  anon_sym_unscore = 173,
  sym_option = 174,
  anon_sym_yes = 175,
  anon_sym_no = 176,
  anon_sym_ask_DASHyes = 177,
  anon_sym_ask_DASHno = 178,
  sym_int = 179,
  anon_sym_SQUOTE = 180,
  aux_sym__string_token1 = 181,
  anon_sym_DQUOTE = 182,
  aux_sym__string_token2 = 183,
  anon_sym_BQUOTE = 184,
  aux_sym__string_token3 = 185,
  sym__word = 186,
  anon_sym_source = 187,
  sym_comment = 188,
  sym__eol = 189,
  aux_sym__space_token1 = 190,
  sym_file = 191,
  sym__command = 192,
  sym_account_hook_directive = 193,
  sym_group_name = 194,
  sym__group = 195,
  sym__addresses = 196,
  sym_alias_directive = 197,
  sym_address = 198,
  sym_unalias_directive = 199,
  sym_key = 200,
  sym__regexes = 201,
  sym_alternates_directive = 202,
  sym_unalternates_directive = 203,
  sym_alternative_order_directive = 204,
  sym_unalternative_order_directive = 205,
  sym_mime = 206,
  sym__mime_types = 207,
  sym__mimes = 208,
  sym_disposition = 209,
  sym_attachments_directive = 210,
  sym_unattachments_directive = 211,
  sym_auto_view_directive = 212,
  sym_unauto_view_directive = 213,
  sym_map = 214,
  sym__maps = 215,
  sym__functions = 216,
  sym_bind_directive = 217,
  sym_unbind_directive = 218,
  sym_alias = 219,
  sym_charset = 220,
  sym_charset_hook_directive = 221,
  sym_iconv_hook_directive = 222,
  sym_pattern = 223,
  sym_object = 224,
  sym_composeobject = 225,
  sym_color = 226,
  sym_attribute = 227,
  sym__attributes = 228,
  sym_foreground = 229,
  sym_background = 230,
  sym_color_directive = 231,
  sym_uncolor_directive = 232,
  sym_keyid = 233,
  sym_crypt_hook_directive = 234,
  sym_name = 235,
  sym_index_format_hook_directive = 236,
  sym_exec_directive = 237,
  sym_fcc_save_hook_directive = 238,
  sym_fcc_hook_directive = 239,
  sym_save_hook_directive = 240,
  sym_folder_hook_directive = 241,
  sym__rx_addr = 242,
  sym_group_directive = 243,
  sym_ungroup_directive = 244,
  sym_header = 245,
  sym__headers = 246,
  sym_hdr_order_directive = 247,
  sym_unhdr_order_directive = 248,
  sym_symbol = 249,
  sym_ifdef_directive = 250,
  sym_ifndef_directive = 251,
  sym_finish_directive = 252,
  sym__strings = 253,
  sym_ignore_directive = 254,
  sym_unignore_directive = 255,
  sym_lists_directive = 256,
  sym_unlists_directive = 257,
  sym_subscribe_directive = 258,
  sym_unsubscribe_directive = 259,
  sym_sequence = 260,
  sym_macro_directive = 261,
  sym_unmacro_directive = 262,
  sym_mailbox = 263,
  sym__mailboxes = 264,
  sym_description = 265,
  sym_mailboxes_directive = 266,
  sym_named_mailboxes_directive = 267,
  sym_unmailboxes_directive = 268,
  sym_header_field = 269,
  sym__header_fields = 270,
  sym_mailto_allow_directive = 271,
  sym_unmailto_allow_directive = 272,
  sym_message = 273,
  sym_echo_directive = 274,
  sym_directory = 275,
  sym_cd_directive = 276,
  sym_mbox_hook_directive = 277,
  sym_message_hook_directive = 278,
  sym_mime_lookup_directive = 279,
  sym_unmime_lookup_directive = 280,
  sym_mono_directive = 281,
  sym_unmono_directive = 282,
  sym_my_hdr_directive = 283,
  sym_unmy_hdr_directive = 284,
  sym_shell_command = 285,
  sym_open_hook_directive = 286,
  sym_close_hook_directive = 287,
  sym_append_hook_directive = 288,
  sym_push_directive = 289,
  sym_reply_hook_directive = 290,
  sym_send_hook_directive = 291,
  sym_send2_hook_directive = 292,
  sym_format = 293,
  sym_spam_directive = 294,
  sym_nospam_directive = 295,
  sym_replacement = 296,
  sym_subjectrx_directive = 297,
  sym_unsubjectrx_directive = 298,
  sym_uri = 299,
  sym_subscribe_to_directive = 300,
  sym_unsubscribe_from_directive = 301,
  sym_timeout_hook_directive = 302,
  sym_startup_hook_directive = 303,
  sym_shutdown_hook_directive = 304,
  sym_hook_type = 305,
  sym_unhook_directive = 306,
  sym_set_directive = 307,
  sym__options3 = 308,
  sym__options2 = 309,
  sym__options = 310,
  sym_unset_directive = 311,
  sym_reset_directive = 312,
  sym_toggle_directive = 313,
  sym_setenv_directive = 314,
  sym_unsetenv_directive = 315,
  sym_sidebar_pin_directive = 316,
  sym_sidebar_unpin_directive = 317,
  sym_score_directive = 318,
  sym_unscore_directive = 319,
  sym_quadoption = 320,
  sym__string = 321,
  sym__regex = 322,
  sym_source_directive = 323,
  sym__space = 324,
  sym__end = 325,
  aux_sym_file_repeat1 = 326,
  aux_sym__addresses_repeat1 = 327,
  aux_sym_key_repeat1 = 328,
  aux_sym__regexes_repeat1 = 329,
  aux_sym__mime_types_repeat1 = 330,
  aux_sym__mimes_repeat1 = 331,
  aux_sym__maps_repeat1 = 332,
  aux_sym__functions_repeat1 = 333,
  aux_sym__attributes_repeat1 = 334,
  aux_sym__headers_repeat1 = 335,
  aux_sym__strings_repeat1 = 336,
  aux_sym__mailboxes_repeat1 = 337,
  aux_sym_named_mailboxes_directive_repeat1 = 338,
  aux_sym__header_fields_repeat1 = 339,
  aux_sym__options3_repeat1 = 340,
  aux_sym__options2_repeat1 = 341,
  aux_sym__options_repeat1 = 342,
  aux_sym__space_repeat1 = 343,
  alias_sym_path = 344,
  alias_sym_regex = 345,
  alias_sym_sub_mime_type = 346,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_account_DASHhook] = "account-hook",
  [anon_sym_DASHgroup] = "command_line_option",
  [anon_sym_COMMA] = ",",
  [anon_sym_alias] = "alias",
  [anon_sym_unalias] = "command",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [aux_sym_key_token1] = "key_name",
  [anon_sym_GT] = ">",
  [aux_sym_key_token2] = "key_token2",
  [aux_sym_key_token3] = "escape",
  [anon_sym_SPACE] = " ",
  [anon_sym_alternates] = "command",
  [anon_sym_unalternates] = "command",
  [anon_sym_alternative_order] = "command",
  [anon_sym_unalternative_order] = "command",
  [sym_mime_type] = "mime_type",
  [anon_sym_SLASH] = "/",
  [anon_sym_attachments] = "command",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [anon_sym_unattachments] = "command",
  [anon_sym_auto_view] = "command",
  [anon_sym_unauto_view] = "command",
  [anon_sym_attach] = "attach",
  [anon_sym_browser] = "browser",
  [anon_sym_compose] = "compose",
  [anon_sym_editor] = "editor",
  [anon_sym_generic] = "generic",
  [anon_sym_index] = "index",
  [anon_sym_mix] = "mix",
  [anon_sym_pager] = "pager",
  [anon_sym_pgp] = "pgp",
  [anon_sym_postpone] = "postpone",
  [anon_sym_query] = "query",
  [anon_sym_smime] = "smime",
  [sym_function] = "function",
  [anon_sym_bind] = "command",
  [anon_sym_unbind] = "command",
  [anon_sym_charset_DASHhook] = "charset-hook",
  [anon_sym_iconv_DASHhook] = "iconv-hook",
  [anon_sym_attach_headers] = "attach_headers",
  [anon_sym_attachment] = "attachment",
  [anon_sym_bold] = "bold",
  [anon_sym_error] = "error",
  [anon_sym_hdrdefault] = "hdrdefault",
  [anon_sym_index_author] = "index_author",
  [anon_sym_index_collapsed] = "index_collapsed",
  [anon_sym_index_date] = "index_date",
  [anon_sym_index_flags] = "index_flags",
  [anon_sym_index_label] = "index_label",
  [anon_sym_index_number] = "index_number",
  [anon_sym_index_size] = "index_size",
  [anon_sym_index_subject] = "index_subject",
  [anon_sym_index_tag] = "index_tag",
  [anon_sym_index_tags] = "index_tags",
  [anon_sym_indicator] = "indicator",
  [anon_sym_markers] = "markers",
  [anon_sym_message] = "message",
  [anon_sym_normal] = "normal",
  [anon_sym_progress] = "progress",
  [anon_sym_prompt] = "prompt",
  [aux_sym_object_token1] = "object_token1",
  [anon_sym_search] = "search",
  [anon_sym_signature] = "signature",
  [anon_sym_status] = "status",
  [anon_sym_tilde] = "tilde",
  [anon_sym_tree] = "tree",
  [anon_sym_underline] = "underline",
  [anon_sym_sidebar_background] = "sidebar_background",
  [anon_sym_sidebar_divider] = "sidebar_divider",
  [anon_sym_sidebar_flagged] = "sidebar_flagged",
  [anon_sym_sidebar_highlight] = "sidebar_highlight",
  [anon_sym_sidebar_indicator] = "sidebar_indicator",
  [anon_sym_sidebar_new] = "sidebar_new",
  [anon_sym_sidebar_ordinary] = "sidebar_ordinary",
  [anon_sym_sidebar_spool_file] = "sidebar_spool_file",
  [anon_sym_body] = "body",
  [anon_sym_header] = "header",
  [anon_sym_security_encrypt] = "security_encrypt",
  [anon_sym_security_sign] = "security_sign",
  [anon_sym_security_both] = "security_both",
  [anon_sym_security_none] = "security_none",
  [anon_sym_default] = "default",
  [anon_sym_black] = "black",
  [anon_sym_red] = "red",
  [anon_sym_green] = "green",
  [anon_sym_yellow] = "yellow",
  [anon_sym_blue] = "blue",
  [anon_sym_magenta] = "magenta",
  [anon_sym_cyan] = "cyan",
  [anon_sym_white] = "white",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [anon_sym_none] = "none",
  [anon_sym_reverse] = "reverse",
  [anon_sym_standout] = "standout",
  [anon_sym_color] = "command",
  [anon_sym_uncolor] = "command",
  [anon_sym_crypt_DASHhook] = "crypt-hook",
  [anon_sym_index_DASHformat_DASHhook] = "command",
  [anon_sym_BANG] = "!",
  [anon_sym_exec] = "command",
  [anon_sym_fcc_DASHsave_DASHhook] = "command",
  [anon_sym_fcc_DASHhook] = "fcc-hook",
  [anon_sym_save_DASHhook] = "save-hook",
  [anon_sym_folder_DASHhook] = "folder-hook",
  [anon_sym_DASHnoregex] = "-noregex",
  [anon_sym_DASHrx] = "command_line_option",
  [anon_sym_DASHaddr] = "command_line_option",
  [anon_sym_group] = "command",
  [anon_sym_ungroup] = "command",
  [anon_sym_hdr_order] = "command",
  [anon_sym_unhdr_order] = "command",
  [anon_sym_ifdef] = "command",
  [anon_sym_ifndef] = "command",
  [anon_sym_finish] = "command",
  [anon_sym_ignore] = "command",
  [anon_sym_unignore] = "command",
  [anon_sym_lists] = "command",
  [anon_sym_unlists] = "command",
  [anon_sym_subscribe] = "command",
  [anon_sym_unsubscribe] = "command",
  [anon_sym_macro] = "command",
  [anon_sym_unmacro] = "command",
  [anon_sym_mailboxes] = "command",
  [anon_sym_named_DASHmailboxes] = "command",
  [anon_sym_unmailboxes] = "command",
  [anon_sym_mailto_allow] = "command",
  [anon_sym_unmailto_allow] = "command",
  [anon_sym_echo] = "command",
  [anon_sym_cd] = "command",
  [anon_sym_mbox_DASHhook] = "mbox-hook",
  [anon_sym_message_DASHhook] = "message-hook",
  [anon_sym_mime_lookup] = "command",
  [anon_sym_unmime_lookup] = "command",
  [anon_sym_mono] = "command",
  [anon_sym_unmono] = "command",
  [anon_sym_my_hdr] = "command",
  [anon_sym_unmy_hdr] = "command",
  [anon_sym_open_DASHhook] = "open-hook",
  [anon_sym_close_DASHhook] = "close-hook",
  [anon_sym_append_DASHhook] = "append-hook",
  [anon_sym_push] = "command",
  [anon_sym_reply_DASHhook] = "reply-hook",
  [anon_sym_send_DASHhook] = "send-hook",
  [anon_sym_send2_DASHhook] = "send2-hook",
  [anon_sym_spam] = "command",
  [anon_sym_nospam] = "command",
  [anon_sym_subjectrx] = "command",
  [anon_sym_unsubjectrx] = "command",
  [anon_sym_subscribe_DASHto] = "command",
  [anon_sym_unsubscribe_DASHfrom] = "command",
  [anon_sym_timeout_DASHhook] = "timeout-hook",
  [anon_sym_startup_DASHhook] = "startup-hook",
  [anon_sym_shutdown_DASHhook] = "shutdown-hook",
  [anon_sym_unhook] = "command",
  [anon_sym_set] = "command",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_unset] = "command",
  [anon_sym_reset] = "command",
  [anon_sym_toggle] = "command",
  [anon_sym_setenv] = "command",
  [aux_sym_setenv_directive_token1] = "value",
  [anon_sym_unsetenv] = "command",
  [anon_sym_sidebar_pin] = "command",
  [anon_sym_sidebar_unpin] = "command",
  [anon_sym_score] = "command",
  [anon_sym_unscore] = "command",
  [sym_option] = "option",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_ask_DASHyes] = "ask-yes",
  [anon_sym_ask_DASHno] = "ask-no",
  [sym_int] = "int",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token1] = "string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token2] = "shell",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__string_token3] = "shell",
  [sym__word] = "shell",
  [anon_sym_source] = "command",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__command] = "_command",
  [sym_account_hook_directive] = "account_hook_directive",
  [sym_group_name] = "group_name",
  [sym__group] = "_group",
  [sym__addresses] = "_addresses",
  [sym_alias_directive] = "alias_directive",
  [sym_address] = "address",
  [sym_unalias_directive] = "unalias_directive",
  [sym_key] = "key",
  [sym__regexes] = "_regexes",
  [sym_alternates_directive] = "alternates_directive",
  [sym_unalternates_directive] = "unalternates_directive",
  [sym_alternative_order_directive] = "alternative_order_directive",
  [sym_unalternative_order_directive] = "unalternative_order_directive",
  [sym_mime] = "mime",
  [sym__mime_types] = "_mime_types",
  [sym__mimes] = "_mimes",
  [sym_disposition] = "disposition",
  [sym_attachments_directive] = "attachments_directive",
  [sym_unattachments_directive] = "unattachments_directive",
  [sym_auto_view_directive] = "auto_view_directive",
  [sym_unauto_view_directive] = "unauto_view_directive",
  [sym_map] = "map",
  [sym__maps] = "_maps",
  [sym__functions] = "_functions",
  [sym_bind_directive] = "bind_directive",
  [sym_unbind_directive] = "unbind_directive",
  [sym_alias] = "alias",
  [sym_charset] = "charset",
  [sym_charset_hook_directive] = "charset_hook_directive",
  [sym_iconv_hook_directive] = "iconv_hook_directive",
  [sym_pattern] = "pattern",
  [sym_object] = "object",
  [sym_composeobject] = "composeobject",
  [sym_color] = "color",
  [sym_attribute] = "attribute",
  [sym__attributes] = "_attributes",
  [sym_foreground] = "foreground",
  [sym_background] = "background",
  [sym_color_directive] = "color_directive",
  [sym_uncolor_directive] = "uncolor_directive",
  [sym_keyid] = "keyid",
  [sym_crypt_hook_directive] = "crypt_hook_directive",
  [sym_name] = "name",
  [sym_index_format_hook_directive] = "index_format_hook_directive",
  [sym_exec_directive] = "exec_directive",
  [sym_fcc_save_hook_directive] = "fcc_save_hook_directive",
  [sym_fcc_hook_directive] = "fcc_hook_directive",
  [sym_save_hook_directive] = "save_hook_directive",
  [sym_folder_hook_directive] = "folder_hook_directive",
  [sym__rx_addr] = "_rx_addr",
  [sym_group_directive] = "group_directive",
  [sym_ungroup_directive] = "ungroup_directive",
  [sym_header] = "header",
  [sym__headers] = "_headers",
  [sym_hdr_order_directive] = "hdr_order_directive",
  [sym_unhdr_order_directive] = "unhdr_order_directive",
  [sym_symbol] = "symbol",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_ifndef_directive] = "ifndef_directive",
  [sym_finish_directive] = "finish_directive",
  [sym__strings] = "_strings",
  [sym_ignore_directive] = "ignore_directive",
  [sym_unignore_directive] = "unignore_directive",
  [sym_lists_directive] = "lists_directive",
  [sym_unlists_directive] = "unlists_directive",
  [sym_subscribe_directive] = "subscribe_directive",
  [sym_unsubscribe_directive] = "unsubscribe_directive",
  [sym_sequence] = "sequence",
  [sym_macro_directive] = "macro_directive",
  [sym_unmacro_directive] = "unmacro_directive",
  [sym_mailbox] = "mailbox",
  [sym__mailboxes] = "_mailboxes",
  [sym_description] = "description",
  [sym_mailboxes_directive] = "mailboxes_directive",
  [sym_named_mailboxes_directive] = "named_mailboxes_directive",
  [sym_unmailboxes_directive] = "unmailboxes_directive",
  [sym_header_field] = "header_field",
  [sym__header_fields] = "_header_fields",
  [sym_mailto_allow_directive] = "mailto_allow_directive",
  [sym_unmailto_allow_directive] = "unmailto_allow_directive",
  [sym_message] = "message",
  [sym_echo_directive] = "echo_directive",
  [sym_directory] = "directory",
  [sym_cd_directive] = "cd_directive",
  [sym_mbox_hook_directive] = "mbox_hook_directive",
  [sym_message_hook_directive] = "message_hook_directive",
  [sym_mime_lookup_directive] = "mime_lookup_directive",
  [sym_unmime_lookup_directive] = "unmime_lookup_directive",
  [sym_mono_directive] = "mono_directive",
  [sym_unmono_directive] = "unmono_directive",
  [sym_my_hdr_directive] = "my_hdr_directive",
  [sym_unmy_hdr_directive] = "unmy_hdr_directive",
  [sym_shell_command] = "shell_command",
  [sym_open_hook_directive] = "open_hook_directive",
  [sym_close_hook_directive] = "close_hook_directive",
  [sym_append_hook_directive] = "append_hook_directive",
  [sym_push_directive] = "push_directive",
  [sym_reply_hook_directive] = "reply_hook_directive",
  [sym_send_hook_directive] = "send_hook_directive",
  [sym_send2_hook_directive] = "send2_hook_directive",
  [sym_format] = "format",
  [sym_spam_directive] = "spam_directive",
  [sym_nospam_directive] = "nospam_directive",
  [sym_replacement] = "replacement",
  [sym_subjectrx_directive] = "subjectrx_directive",
  [sym_unsubjectrx_directive] = "unsubjectrx_directive",
  [sym_uri] = "uri",
  [sym_subscribe_to_directive] = "subscribe_to_directive",
  [sym_unsubscribe_from_directive] = "unsubscribe_from_directive",
  [sym_timeout_hook_directive] = "timeout_hook_directive",
  [sym_startup_hook_directive] = "startup_hook_directive",
  [sym_shutdown_hook_directive] = "shutdown_hook_directive",
  [sym_hook_type] = "hook_type",
  [sym_unhook_directive] = "unhook_directive",
  [sym_set_directive] = "set_directive",
  [sym__options3] = "_options3",
  [sym__options2] = "_options2",
  [sym__options] = "_options",
  [sym_unset_directive] = "unset_directive",
  [sym_reset_directive] = "reset_directive",
  [sym_toggle_directive] = "toggle_directive",
  [sym_setenv_directive] = "setenv_directive",
  [sym_unsetenv_directive] = "unsetenv_directive",
  [sym_sidebar_pin_directive] = "sidebar_pin_directive",
  [sym_sidebar_unpin_directive] = "sidebar_unpin_directive",
  [sym_score_directive] = "score_directive",
  [sym_unscore_directive] = "unscore_directive",
  [sym_quadoption] = "quadoption",
  [sym__string] = "_string",
  [sym__regex] = "_regex",
  [sym_source_directive] = "source_directive",
  [sym__space] = "_space",
  [sym__end] = "_end",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__addresses_repeat1] = "_addresses_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym__regexes_repeat1] = "_regexes_repeat1",
  [aux_sym__mime_types_repeat1] = "_mime_types_repeat1",
  [aux_sym__mimes_repeat1] = "_mimes_repeat1",
  [aux_sym__maps_repeat1] = "_maps_repeat1",
  [aux_sym__functions_repeat1] = "_functions_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym__headers_repeat1] = "_headers_repeat1",
  [aux_sym__strings_repeat1] = "_strings_repeat1",
  [aux_sym__mailboxes_repeat1] = "_mailboxes_repeat1",
  [aux_sym_named_mailboxes_directive_repeat1] = "named_mailboxes_directive_repeat1",
  [aux_sym__header_fields_repeat1] = "_header_fields_repeat1",
  [aux_sym__options3_repeat1] = "_options3_repeat1",
  [aux_sym__options2_repeat1] = "_options2_repeat1",
  [aux_sym__options_repeat1] = "_options_repeat1",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_path] = "path",
  [alias_sym_regex] = "regex",
  [alias_sym_sub_mime_type] = "sub_mime_type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_account_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_DASHgroup] = anon_sym_DASHgroup,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_unalias] = anon_sym_unalias,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [aux_sym_key_token3] = aux_sym_key_token3,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_alternates] = anon_sym_unalias,
  [anon_sym_unalternates] = anon_sym_unalias,
  [anon_sym_alternative_order] = anon_sym_unalias,
  [anon_sym_unalternative_order] = anon_sym_unalias,
  [sym_mime_type] = sym_mime_type,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_attachments] = anon_sym_unalias,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_unattachments] = anon_sym_unalias,
  [anon_sym_auto_view] = anon_sym_unalias,
  [anon_sym_unauto_view] = anon_sym_unalias,
  [anon_sym_attach] = anon_sym_attach,
  [anon_sym_browser] = anon_sym_browser,
  [anon_sym_compose] = anon_sym_compose,
  [anon_sym_editor] = anon_sym_editor,
  [anon_sym_generic] = anon_sym_generic,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_mix] = anon_sym_mix,
  [anon_sym_pager] = anon_sym_pager,
  [anon_sym_pgp] = anon_sym_pgp,
  [anon_sym_postpone] = anon_sym_postpone,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_smime] = anon_sym_smime,
  [sym_function] = sym_function,
  [anon_sym_bind] = anon_sym_unalias,
  [anon_sym_unbind] = anon_sym_unalias,
  [anon_sym_charset_DASHhook] = anon_sym_charset_DASHhook,
  [anon_sym_iconv_DASHhook] = anon_sym_iconv_DASHhook,
  [anon_sym_attach_headers] = anon_sym_attach_headers,
  [anon_sym_attachment] = anon_sym_attachment,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_hdrdefault] = anon_sym_hdrdefault,
  [anon_sym_index_author] = anon_sym_index_author,
  [anon_sym_index_collapsed] = anon_sym_index_collapsed,
  [anon_sym_index_date] = anon_sym_index_date,
  [anon_sym_index_flags] = anon_sym_index_flags,
  [anon_sym_index_label] = anon_sym_index_label,
  [anon_sym_index_number] = anon_sym_index_number,
  [anon_sym_index_size] = anon_sym_index_size,
  [anon_sym_index_subject] = anon_sym_index_subject,
  [anon_sym_index_tag] = anon_sym_index_tag,
  [anon_sym_index_tags] = anon_sym_index_tags,
  [anon_sym_indicator] = anon_sym_indicator,
  [anon_sym_markers] = anon_sym_markers,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_normal] = anon_sym_normal,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_prompt] = anon_sym_prompt,
  [aux_sym_object_token1] = aux_sym_object_token1,
  [anon_sym_search] = anon_sym_search,
  [anon_sym_signature] = anon_sym_signature,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_tilde] = anon_sym_tilde,
  [anon_sym_tree] = anon_sym_tree,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_sidebar_background] = anon_sym_sidebar_background,
  [anon_sym_sidebar_divider] = anon_sym_sidebar_divider,
  [anon_sym_sidebar_flagged] = anon_sym_sidebar_flagged,
  [anon_sym_sidebar_highlight] = anon_sym_sidebar_highlight,
  [anon_sym_sidebar_indicator] = anon_sym_sidebar_indicator,
  [anon_sym_sidebar_new] = anon_sym_sidebar_new,
  [anon_sym_sidebar_ordinary] = anon_sym_sidebar_ordinary,
  [anon_sym_sidebar_spool_file] = anon_sym_sidebar_spool_file,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_security_encrypt] = anon_sym_security_encrypt,
  [anon_sym_security_sign] = anon_sym_security_sign,
  [anon_sym_security_both] = anon_sym_security_both,
  [anon_sym_security_none] = anon_sym_security_none,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_magenta] = anon_sym_magenta,
  [anon_sym_cyan] = anon_sym_cyan,
  [anon_sym_white] = anon_sym_white,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_standout] = anon_sym_standout,
  [anon_sym_color] = anon_sym_unalias,
  [anon_sym_uncolor] = anon_sym_unalias,
  [anon_sym_crypt_DASHhook] = anon_sym_crypt_DASHhook,
  [anon_sym_index_DASHformat_DASHhook] = anon_sym_unalias,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_exec] = anon_sym_unalias,
  [anon_sym_fcc_DASHsave_DASHhook] = anon_sym_unalias,
  [anon_sym_fcc_DASHhook] = anon_sym_fcc_DASHhook,
  [anon_sym_save_DASHhook] = anon_sym_save_DASHhook,
  [anon_sym_folder_DASHhook] = anon_sym_folder_DASHhook,
  [anon_sym_DASHnoregex] = anon_sym_DASHnoregex,
  [anon_sym_DASHrx] = anon_sym_DASHgroup,
  [anon_sym_DASHaddr] = anon_sym_DASHgroup,
  [anon_sym_group] = anon_sym_unalias,
  [anon_sym_ungroup] = anon_sym_unalias,
  [anon_sym_hdr_order] = anon_sym_unalias,
  [anon_sym_unhdr_order] = anon_sym_unalias,
  [anon_sym_ifdef] = anon_sym_unalias,
  [anon_sym_ifndef] = anon_sym_unalias,
  [anon_sym_finish] = anon_sym_unalias,
  [anon_sym_ignore] = anon_sym_unalias,
  [anon_sym_unignore] = anon_sym_unalias,
  [anon_sym_lists] = anon_sym_unalias,
  [anon_sym_unlists] = anon_sym_unalias,
  [anon_sym_subscribe] = anon_sym_unalias,
  [anon_sym_unsubscribe] = anon_sym_unalias,
  [anon_sym_macro] = anon_sym_unalias,
  [anon_sym_unmacro] = anon_sym_unalias,
  [anon_sym_mailboxes] = anon_sym_unalias,
  [anon_sym_named_DASHmailboxes] = anon_sym_unalias,
  [anon_sym_unmailboxes] = anon_sym_unalias,
  [anon_sym_mailto_allow] = anon_sym_unalias,
  [anon_sym_unmailto_allow] = anon_sym_unalias,
  [anon_sym_echo] = anon_sym_unalias,
  [anon_sym_cd] = anon_sym_unalias,
  [anon_sym_mbox_DASHhook] = anon_sym_mbox_DASHhook,
  [anon_sym_message_DASHhook] = anon_sym_message_DASHhook,
  [anon_sym_mime_lookup] = anon_sym_unalias,
  [anon_sym_unmime_lookup] = anon_sym_unalias,
  [anon_sym_mono] = anon_sym_unalias,
  [anon_sym_unmono] = anon_sym_unalias,
  [anon_sym_my_hdr] = anon_sym_unalias,
  [anon_sym_unmy_hdr] = anon_sym_unalias,
  [anon_sym_open_DASHhook] = anon_sym_open_DASHhook,
  [anon_sym_close_DASHhook] = anon_sym_close_DASHhook,
  [anon_sym_append_DASHhook] = anon_sym_append_DASHhook,
  [anon_sym_push] = anon_sym_unalias,
  [anon_sym_reply_DASHhook] = anon_sym_reply_DASHhook,
  [anon_sym_send_DASHhook] = anon_sym_send_DASHhook,
  [anon_sym_send2_DASHhook] = anon_sym_send2_DASHhook,
  [anon_sym_spam] = anon_sym_unalias,
  [anon_sym_nospam] = anon_sym_unalias,
  [anon_sym_subjectrx] = anon_sym_unalias,
  [anon_sym_unsubjectrx] = anon_sym_unalias,
  [anon_sym_subscribe_DASHto] = anon_sym_unalias,
  [anon_sym_unsubscribe_DASHfrom] = anon_sym_unalias,
  [anon_sym_timeout_DASHhook] = anon_sym_timeout_DASHhook,
  [anon_sym_startup_DASHhook] = anon_sym_startup_DASHhook,
  [anon_sym_shutdown_DASHhook] = anon_sym_shutdown_DASHhook,
  [anon_sym_unhook] = anon_sym_unalias,
  [anon_sym_set] = anon_sym_unalias,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_unset] = anon_sym_unalias,
  [anon_sym_reset] = anon_sym_unalias,
  [anon_sym_toggle] = anon_sym_unalias,
  [anon_sym_setenv] = anon_sym_unalias,
  [aux_sym_setenv_directive_token1] = aux_sym_setenv_directive_token1,
  [anon_sym_unsetenv] = anon_sym_unalias,
  [anon_sym_sidebar_pin] = anon_sym_unalias,
  [anon_sym_sidebar_unpin] = anon_sym_unalias,
  [anon_sym_score] = anon_sym_unalias,
  [anon_sym_unscore] = anon_sym_unalias,
  [sym_option] = sym_option,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_ask_DASHyes] = anon_sym_ask_DASHyes,
  [anon_sym_ask_DASHno] = anon_sym_ask_DASHno,
  [sym_int] = sym_int,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__string_token3] = aux_sym__string_token2,
  [sym__word] = aux_sym__string_token2,
  [anon_sym_source] = anon_sym_unalias,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__command] = sym__command,
  [sym_account_hook_directive] = sym_account_hook_directive,
  [sym_group_name] = sym_group_name,
  [sym__group] = sym__group,
  [sym__addresses] = sym__addresses,
  [sym_alias_directive] = sym_alias_directive,
  [sym_address] = sym_address,
  [sym_unalias_directive] = sym_unalias_directive,
  [sym_key] = sym_key,
  [sym__regexes] = sym__regexes,
  [sym_alternates_directive] = sym_alternates_directive,
  [sym_unalternates_directive] = sym_unalternates_directive,
  [sym_alternative_order_directive] = sym_alternative_order_directive,
  [sym_unalternative_order_directive] = sym_unalternative_order_directive,
  [sym_mime] = sym_mime,
  [sym__mime_types] = sym__mime_types,
  [sym__mimes] = sym__mimes,
  [sym_disposition] = sym_disposition,
  [sym_attachments_directive] = sym_attachments_directive,
  [sym_unattachments_directive] = sym_unattachments_directive,
  [sym_auto_view_directive] = sym_auto_view_directive,
  [sym_unauto_view_directive] = sym_unauto_view_directive,
  [sym_map] = sym_map,
  [sym__maps] = sym__maps,
  [sym__functions] = sym__functions,
  [sym_bind_directive] = sym_bind_directive,
  [sym_unbind_directive] = sym_unbind_directive,
  [sym_alias] = sym_alias,
  [sym_charset] = sym_charset,
  [sym_charset_hook_directive] = sym_charset_hook_directive,
  [sym_iconv_hook_directive] = sym_iconv_hook_directive,
  [sym_pattern] = sym_pattern,
  [sym_object] = sym_object,
  [sym_composeobject] = sym_composeobject,
  [sym_color] = sym_color,
  [sym_attribute] = sym_attribute,
  [sym__attributes] = sym__attributes,
  [sym_foreground] = sym_foreground,
  [sym_background] = sym_background,
  [sym_color_directive] = sym_color_directive,
  [sym_uncolor_directive] = sym_uncolor_directive,
  [sym_keyid] = sym_keyid,
  [sym_crypt_hook_directive] = sym_crypt_hook_directive,
  [sym_name] = sym_name,
  [sym_index_format_hook_directive] = sym_index_format_hook_directive,
  [sym_exec_directive] = sym_exec_directive,
  [sym_fcc_save_hook_directive] = sym_fcc_save_hook_directive,
  [sym_fcc_hook_directive] = sym_fcc_hook_directive,
  [sym_save_hook_directive] = sym_save_hook_directive,
  [sym_folder_hook_directive] = sym_folder_hook_directive,
  [sym__rx_addr] = sym__rx_addr,
  [sym_group_directive] = sym_group_directive,
  [sym_ungroup_directive] = sym_ungroup_directive,
  [sym_header] = sym_header,
  [sym__headers] = sym__headers,
  [sym_hdr_order_directive] = sym_hdr_order_directive,
  [sym_unhdr_order_directive] = sym_unhdr_order_directive,
  [sym_symbol] = sym_symbol,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_ifndef_directive] = sym_ifndef_directive,
  [sym_finish_directive] = sym_finish_directive,
  [sym__strings] = sym__strings,
  [sym_ignore_directive] = sym_ignore_directive,
  [sym_unignore_directive] = sym_unignore_directive,
  [sym_lists_directive] = sym_lists_directive,
  [sym_unlists_directive] = sym_unlists_directive,
  [sym_subscribe_directive] = sym_subscribe_directive,
  [sym_unsubscribe_directive] = sym_unsubscribe_directive,
  [sym_sequence] = sym_sequence,
  [sym_macro_directive] = sym_macro_directive,
  [sym_unmacro_directive] = sym_unmacro_directive,
  [sym_mailbox] = sym_mailbox,
  [sym__mailboxes] = sym__mailboxes,
  [sym_description] = sym_description,
  [sym_mailboxes_directive] = sym_mailboxes_directive,
  [sym_named_mailboxes_directive] = sym_named_mailboxes_directive,
  [sym_unmailboxes_directive] = sym_unmailboxes_directive,
  [sym_header_field] = sym_header_field,
  [sym__header_fields] = sym__header_fields,
  [sym_mailto_allow_directive] = sym_mailto_allow_directive,
  [sym_unmailto_allow_directive] = sym_unmailto_allow_directive,
  [sym_message] = sym_message,
  [sym_echo_directive] = sym_echo_directive,
  [sym_directory] = sym_directory,
  [sym_cd_directive] = sym_cd_directive,
  [sym_mbox_hook_directive] = sym_mbox_hook_directive,
  [sym_message_hook_directive] = sym_message_hook_directive,
  [sym_mime_lookup_directive] = sym_mime_lookup_directive,
  [sym_unmime_lookup_directive] = sym_unmime_lookup_directive,
  [sym_mono_directive] = sym_mono_directive,
  [sym_unmono_directive] = sym_unmono_directive,
  [sym_my_hdr_directive] = sym_my_hdr_directive,
  [sym_unmy_hdr_directive] = sym_unmy_hdr_directive,
  [sym_shell_command] = sym_shell_command,
  [sym_open_hook_directive] = sym_open_hook_directive,
  [sym_close_hook_directive] = sym_close_hook_directive,
  [sym_append_hook_directive] = sym_append_hook_directive,
  [sym_push_directive] = sym_push_directive,
  [sym_reply_hook_directive] = sym_reply_hook_directive,
  [sym_send_hook_directive] = sym_send_hook_directive,
  [sym_send2_hook_directive] = sym_send2_hook_directive,
  [sym_format] = sym_format,
  [sym_spam_directive] = sym_spam_directive,
  [sym_nospam_directive] = sym_nospam_directive,
  [sym_replacement] = sym_replacement,
  [sym_subjectrx_directive] = sym_subjectrx_directive,
  [sym_unsubjectrx_directive] = sym_unsubjectrx_directive,
  [sym_uri] = sym_uri,
  [sym_subscribe_to_directive] = sym_subscribe_to_directive,
  [sym_unsubscribe_from_directive] = sym_unsubscribe_from_directive,
  [sym_timeout_hook_directive] = sym_timeout_hook_directive,
  [sym_startup_hook_directive] = sym_startup_hook_directive,
  [sym_shutdown_hook_directive] = sym_shutdown_hook_directive,
  [sym_hook_type] = sym_hook_type,
  [sym_unhook_directive] = sym_unhook_directive,
  [sym_set_directive] = sym_set_directive,
  [sym__options3] = sym__options3,
  [sym__options2] = sym__options2,
  [sym__options] = sym__options,
  [sym_unset_directive] = sym_unset_directive,
  [sym_reset_directive] = sym_reset_directive,
  [sym_toggle_directive] = sym_toggle_directive,
  [sym_setenv_directive] = sym_setenv_directive,
  [sym_unsetenv_directive] = sym_unsetenv_directive,
  [sym_sidebar_pin_directive] = sym_sidebar_pin_directive,
  [sym_sidebar_unpin_directive] = sym_sidebar_unpin_directive,
  [sym_score_directive] = sym_score_directive,
  [sym_unscore_directive] = sym_unscore_directive,
  [sym_quadoption] = sym_quadoption,
  [sym__string] = sym__string,
  [sym__regex] = sym__regex,
  [sym_source_directive] = sym_source_directive,
  [sym__space] = sym__space,
  [sym__end] = sym__end,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__addresses_repeat1] = aux_sym__addresses_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym__regexes_repeat1] = aux_sym__regexes_repeat1,
  [aux_sym__mime_types_repeat1] = aux_sym__mime_types_repeat1,
  [aux_sym__mimes_repeat1] = aux_sym__mimes_repeat1,
  [aux_sym__maps_repeat1] = aux_sym__maps_repeat1,
  [aux_sym__functions_repeat1] = aux_sym__functions_repeat1,
  [aux_sym__attributes_repeat1] = aux_sym__attributes_repeat1,
  [aux_sym__headers_repeat1] = aux_sym__headers_repeat1,
  [aux_sym__strings_repeat1] = aux_sym__strings_repeat1,
  [aux_sym__mailboxes_repeat1] = aux_sym__mailboxes_repeat1,
  [aux_sym_named_mailboxes_directive_repeat1] = aux_sym_named_mailboxes_directive_repeat1,
  [aux_sym__header_fields_repeat1] = aux_sym__header_fields_repeat1,
  [aux_sym__options3_repeat1] = aux_sym__options3_repeat1,
  [aux_sym__options2_repeat1] = aux_sym__options2_repeat1,
  [aux_sym__options_repeat1] = aux_sym__options_repeat1,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_path] = alias_sym_path,
  [alias_sym_regex] = alias_sym_regex,
  [alias_sym_sub_mime_type] = alias_sym_sub_mime_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_account_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHgroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unalias] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
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
  [aux_sym_key_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alternative_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternative_order] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unattachments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unauto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_attach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_browser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_editor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smime] = {
    .visible = true,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unbind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_charset_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iconv_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attach_headers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hdrdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_collapsed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tilde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_divider] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_flagged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_highlight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_ordinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_spool_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_encrypt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_standout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_uncolor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_crypt_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_DASHformat_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHsave_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_folder_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHnoregex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHaddr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unhdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifdef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifndef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_finish] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unlists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmacro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_named_DASHmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mbox_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_my_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmy_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_open_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reply_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send2_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nospam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subscribe_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubscribe_DASHfrom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_timeout_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startup_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setenv_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsetenv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_pin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_unpin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unscore] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHyes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHno] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token3] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
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
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_account_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__addresses] = {
    .visible = false,
    .named = true,
  },
  [sym_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_unalias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__regexes] = {
    .visible = false,
    .named = true,
  },
  [sym_alternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime] = {
    .visible = true,
    .named = true,
  },
  [sym__mime_types] = {
    .visible = false,
    .named = true,
  },
  [sym__mimes] = {
    .visible = false,
    .named = true,
  },
  [sym_disposition] = {
    .visible = true,
    .named = true,
  },
  [sym_attachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unattachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unauto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__maps] = {
    .visible = false,
    .named = true,
  },
  [sym__functions] = {
    .visible = false,
    .named = true,
  },
  [sym_bind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unbind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_charset] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_iconv_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_composeobject] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_foreground] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_color_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_uncolor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_keyid] = {
    .visible = true,
    .named = true,
  },
  [sym_crypt_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_index_format_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_folder_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__rx_addr] = {
    .visible = false,
    .named = true,
  },
  [sym_group_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ungroup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym__headers] = {
    .visible = false,
    .named = true,
  },
  [sym_hdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unhdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifndef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_finish_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__strings] = {
    .visible = false,
    .named = true,
  },
  [sym_ignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_lists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unlists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_subscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmacro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym__mailboxes] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_named_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_header_field] = {
    .visible = true,
    .named = true,
  },
  [sym__header_fields] = {
    .visible = false,
    .named = true,
  },
  [sym_mailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directory] = {
    .visible = true,
    .named = true,
  },
  [sym_cd_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mbox_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_message_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_my_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmy_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_open_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_close_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_append_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_push_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reply_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send2_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_spam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_nospam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement] = {
    .visible = true,
    .named = true,
  },
  [sym_subjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_subscribe_to_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubscribe_from_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_startup_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shutdown_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_hook_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unhook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__options3] = {
    .visible = false,
    .named = true,
  },
  [sym__options2] = {
    .visible = false,
    .named = true,
  },
  [sym__options] = {
    .visible = false,
    .named = true,
  },
  [sym_unset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_toggle_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_setenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsetenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_pin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_unpin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_score_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unscore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quadoption] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__regex] = {
    .visible = false,
    .named = true,
  },
  [sym_source_directive] = {
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
  [aux_sym__addresses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mime_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mimes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__strings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mailboxes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_mailboxes_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__header_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_regex] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_mime_type] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 0, .length = 1},
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 2},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 5, .length = 1},
  [12] = {.index = 6, .length = 1},
  [13] = {.index = 2, .length = 1},
  [14] = {.index = 2, .length = 1},
  [15] = {.index = 7, .length = 1},
  [16] = {.index = 8, .length = 2},
  [17] = {.index = 10, .length = 1},
  [18] = {.index = 11, .length = 2},
  [19] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1, .inherited = true},
  [1] =
    {field_content, 0, .inherited = true},
  [2] =
    {field_content, 2, .inherited = true},
  [3] =
    {field_content, 0, .inherited = true},
    {field_content, 1, .inherited = true},
  [5] =
    {field_content, 1},
  [6] =
    {field_content, 3, .inherited = true},
  [7] =
    {field_content, 4, .inherited = true},
  [8] =
    {field_content, 2, .inherited = true},
    {field_content, 3, .inherited = true},
  [10] =
    {field_content, 5, .inherited = true},
  [11] =
    {field_content, 3, .inherited = true},
    {field_content, 4, .inherited = true},
  [13] =
    {field_content, 4, .inherited = true},
    {field_content, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_regex,
  },
  [4] = {
    [0] = anon_sym_unalias,
  },
  [5] = {
    [1] = alias_sym_path,
  },
  [6] = {
    [0] = anon_sym_unalias,
  },
  [10] = {
    [1] = alias_sym_regex,
  },
  [11] = {
    [2] = alias_sym_sub_mime_type,
  },
  [13] = {
    [0] = anon_sym_unalias,
    [1] = anon_sym_DASHgroup,
  },
  [14] = {
    [0] = anon_sym_unalias,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__string, 2,
    sym__string,
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
  [23] = 23,
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
  [42] = 42,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 65,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 62,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 83,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 95,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 95,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 95,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 95,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 18,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 62,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 17,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 65,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 16,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 17,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 16,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 24,
  [250] = 250,
  [251] = 251,
  [252] = 17,
  [253] = 16,
  [254] = 254,
  [255] = 17,
  [256] = 256,
  [257] = 16,
  [258] = 258,
  [259] = 24,
  [260] = 25,
  [261] = 261,
  [262] = 262,
  [263] = 17,
  [264] = 17,
  [265] = 265,
  [266] = 16,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 25,
  [283] = 22,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 218,
  [291] = 291,
  [292] = 223,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 56,
  [298] = 298,
  [299] = 22,
  [300] = 18,
  [301] = 218,
  [302] = 223,
  [303] = 303,
  [304] = 16,
  [305] = 305,
  [306] = 49,
  [307] = 307,
  [308] = 83,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 22,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 18,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 24,
  [364] = 262,
  [365] = 365,
  [366] = 366,
  [367] = 25,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 218,
  [374] = 223,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 223,
  [382] = 218,
  [383] = 383,
  [384] = 17,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 16,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 305,
  [441] = 441,
  [442] = 295,
  [443] = 287,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 56,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 464,
  [482] = 463,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 487,
  [494] = 486,
  [495] = 485,
  [496] = 484,
  [497] = 483,
  [498] = 463,
  [499] = 464,
  [500] = 500,
  [501] = 487,
  [502] = 486,
  [503] = 485,
  [504] = 484,
  [505] = 483,
  [506] = 16,
  [507] = 464,
  [508] = 508,
  [509] = 487,
  [510] = 486,
  [511] = 485,
  [512] = 483,
  [513] = 463,
  [514] = 17,
  [515] = 487,
  [516] = 486,
  [517] = 485,
  [518] = 487,
  [519] = 486,
  [520] = 485,
  [521] = 487,
  [522] = 486,
  [523] = 485,
  [524] = 487,
  [525] = 486,
  [526] = 485,
  [527] = 487,
  [528] = 486,
  [529] = 485,
  [530] = 471,
  [531] = 472,
  [532] = 473,
  [533] = 474,
  [534] = 475,
  [535] = 477,
  [536] = 478,
  [537] = 471,
  [538] = 472,
  [539] = 473,
  [540] = 474,
  [541] = 475,
  [542] = 477,
  [543] = 478,
  [544] = 471,
  [545] = 472,
  [546] = 473,
  [547] = 475,
  [548] = 477,
  [549] = 478,
  [550] = 471,
  [551] = 472,
  [552] = 473,
  [553] = 471,
  [554] = 472,
  [555] = 473,
  [556] = 471,
  [557] = 472,
  [558] = 473,
  [559] = 471,
  [560] = 472,
  [561] = 473,
  [562] = 471,
  [563] = 472,
  [564] = 473,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(950);
      if (lookahead == '!') ADVANCE(1114);
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == '&') ADVANCE(1175);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '+') ADVANCE(989);
      if (lookahead == ',') ADVANCE(954);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead == '/') ADVANCE(987);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '=') ADVANCE(1174);
      if (lookahead == '>') ADVANCE(962);
      if (lookahead == '?') ADVANCE(993);
      if (lookahead == '\\') SKIP(946)
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(552);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead == 'y') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(1450);
      if (lookahead == '\n') ADVANCE(1446);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(979);
      if (lookahead == '#') ADVANCE(1445);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(987);
      if (lookahead == '=') ADVANCE(1174);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(964);
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(964);
      if (lookahead == ' ') ADVANCE(1451);
      if (lookahead == '#') ADVANCE(975);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(964);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(954);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(783);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1452);
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1449);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1445);
      if (lookahead == '\\') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(980);
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '=') ADVANCE(1174);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(779);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead == 'y') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(981);
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '-') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'n') ADVANCE(1359);
      if (lookahead == 'y') ADVANCE(1290);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '*') ADVANCE(958);
      if (lookahead == '+') ADVANCE(990);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '*') ADVANCE(958);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '*') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '+') ADVANCE(990);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead == '?') ADVANCE(994);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '-') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'n') ADVANCE(1359);
      if (lookahead == 'y') ADVANCE(1290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '-') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '\\') ADVANCE(1215);
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(44)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(965);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == 'a') ADVANCE(1418);
      if (lookahead == 'b') ADVANCE(1357);
      if (lookahead == 'e') ADVANCE(1388);
      if (lookahead == 'h') ADVANCE(1260);
      if (lookahead == 'i') ADVANCE(1347);
      if (lookahead == 'm') ADVANCE(1231);
      if (lookahead == 'n') ADVANCE(1362);
      if (lookahead == 'p') ADVANCE(1387);
      if (lookahead == 'q') ADVANCE(1429);
      if (lookahead == 's') ADVANCE(1268);
      if (lookahead == 't') ADVANCE(1324);
      if (lookahead == 'u') ADVANCE(1348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(1442);
      if (lookahead == '`') ADVANCE(1209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'b') ADVANCE(497);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'g') ADVANCE(779);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == 'q') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead == 'y') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '&') ADVANCE(1175);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '=') ADVANCE(1174);
      if (lookahead == '?') ADVANCE(993);
      if (lookahead == '\\') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1186);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '=') ADVANCE(1174);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(783);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(552);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(50)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(966);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(51)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(967);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'q') ADVANCE(895);
      if (lookahead == 's') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '\\') SKIP(26)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(986);
      END_STATE();
    case 54:
      if (lookahead == ',') ADVANCE(954);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(54)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(968);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(973);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(57)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(969);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(413);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(419);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(421);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(426);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 79:
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(79)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(970);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 80:
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(80)
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(971);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(974);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(1172);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(1173);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(1173);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(790);
      if (lookahead == 'r') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      END_STATE();
    case 84:
      if (lookahead == '\\') ADVANCE(1180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (lookahead != 0) ADVANCE(1180);
      END_STATE();
    case 85:
      if (lookahead == '\\') SKIP(28)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 86:
      if (lookahead == '\\') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(903);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(405);
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(524);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(645);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(407);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(907);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(532);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(700);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(702);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(1190);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(817);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'g') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'g') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(882);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(896);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'h') ADVANCE(882);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(896);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'h') ADVANCE(882);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(896);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(768);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 'g') ADVANCE(768);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(1101);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(786);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'c') ADVANCE(888);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'c') ADVANCE(888);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(864);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(880);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(897);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(876);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(909);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(466);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(467);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(612);
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == 'h') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 's') ADVANCE(722);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(685);
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(689);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(468);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(714);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 't') ADVANCE(846);
      if (lookahead == 'u') ADVANCE(848);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(714);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead == 'u') ADVANCE(848);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(1116);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(1002);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == 'x') ADVANCE(303);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(303);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(859);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(839);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(789);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'g') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(860);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(781);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1145);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == 'r') ADVANCE(933);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(1145);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(1097);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(1097);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(1097);
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(1012);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(1060);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1013);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(1028);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(1077);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(1073);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(930);
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(727);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(750);
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(780);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(796);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'i') ADVANCE(906);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(1128);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(1129);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 372:
      if (lookahead == 'f') ADVANCE(455);
      END_STATE();
    case 373:
      if (lookahead == 'f') ADVANCE(778);
      END_STATE();
    case 374:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 375:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(1043);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(402);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(807);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'm') ADVANCE(715);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(777);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(1157);
      END_STATE();
    case 395:
      if (lookahead == 'h') ADVANCE(998);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(1130);
      END_STATE();
    case 397:
      if (lookahead == 'h') ADVANCE(1061);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(1093);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(601);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(522);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(654);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(841);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(657);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(548);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(660);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(661);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(662);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(664);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(666);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(668);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(669);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(671);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(672);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(673);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(677);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(679);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(680);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(844);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(858);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 466:
      if (lookahead == 'j') ADVANCE(316);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 467:
      if (lookahead == 'j') ADVANCE(350);
      END_STATE();
    case 468:
      if (lookahead == 'j') ADVANCE(356);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 469:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(1096);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(1170);
      END_STATE();
    case 472:
      if (lookahead == 'k') ADVANCE(1118);
      END_STATE();
    case 473:
      if (lookahead == 'k') ADVANCE(1146);
      END_STATE();
    case 474:
      if (lookahead == 'k') ADVANCE(1154);
      END_STATE();
    case 475:
      if (lookahead == 'k') ADVANCE(1119);
      END_STATE();
    case 476:
      if (lookahead == 'k') ADVANCE(1159);
      END_STATE();
    case 477:
      if (lookahead == 'k') ADVANCE(1155);
      END_STATE();
    case 478:
      if (lookahead == 'k') ADVANCE(1112);
      END_STATE();
    case 479:
      if (lookahead == 'k') ADVANCE(1015);
      END_STATE();
    case 480:
      if (lookahead == 'k') ADVANCE(1158);
      END_STATE();
    case 481:
      if (lookahead == 'k') ADVANCE(1160);
      END_STATE();
    case 482:
      if (lookahead == 'k') ADVANCE(1156);
      END_STATE();
    case 483:
      if (lookahead == 'k') ADVANCE(1120);
      END_STATE();
    case 484:
      if (lookahead == 'k') ADVANCE(951);
      END_STATE();
    case 485:
      if (lookahead == 'k') ADVANCE(1014);
      END_STATE();
    case 486:
      if (lookahead == 'k') ADVANCE(1147);
      END_STATE();
    case 487:
      if (lookahead == 'k') ADVANCE(1168);
      END_STATE();
    case 488:
      if (lookahead == 'k') ADVANCE(1167);
      END_STATE();
    case 489:
      if (lookahead == 'k') ADVANCE(1117);
      END_STATE();
    case 490:
      if (lookahead == 'k') ADVANCE(1169);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(1113);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(391);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(347);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(887);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(890);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(1053);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(1034);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == 's') ADVANCE(1187);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(838);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(652);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(1161);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(1162);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(1166);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'x') ADVANCE(1005);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 543:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 544:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 545:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 546:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(1098);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(1182);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(1183);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(925);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(1144);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(1150);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(1137);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(1193);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(1151);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(1138);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(1165);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(911);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(918);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(889);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(892);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(929);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 704:
      if (lookahead == 'p') ADVANCE(1007);
      END_STATE();
    case 705:
      if (lookahead == 'p') ADVANCE(1124);
      END_STATE();
    case 706:
      if (lookahead == 'p') ADVANCE(1125);
      END_STATE();
    case 707:
      if (lookahead == 'p') ADVANCE(1148);
      END_STATE();
    case 708:
      if (lookahead == 'p') ADVANCE(1149);
      END_STATE();
    case 709:
      if (lookahead == 'p') ADVANCE(952);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 712:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 713:
      if (lookahead == 'p') ADVANCE(872);
      END_STATE();
    case 714:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 715:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 716:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 717:
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 718:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(446);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(682);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(692);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(1006);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(1152);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(999);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(1153);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(1126);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(1026);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(1075);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(1081);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(1109);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(1123);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(813);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(955);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(1133);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 800:
      if (lookahead == 's') ADVANCE(1191);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 803:
      if (lookahead == 's') ADVANCE(1134);
      END_STATE();
    case 804:
      if (lookahead == 's') ADVANCE(1055);
      END_STATE();
    case 805:
      if (lookahead == 's') ADVANCE(1139);
      END_STATE();
    case 806:
      if (lookahead == 's') ADVANCE(982);
      END_STATE();
    case 807:
      if (lookahead == 's') ADVANCE(1032);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 809:
      if (lookahead == 's') ADVANCE(983);
      END_STATE();
    case 810:
      if (lookahead == 's') ADVANCE(995);
      END_STATE();
    case 811:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(988);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(1016);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(851);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(829);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(1177);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(1040);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(1091);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 878:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 879:
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 880:
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 881:
      if (lookahead == 'u') ADVANCE(705);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(849);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(706);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(707);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(784);
      END_STATE();
    case 889:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 890:
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(709);
      END_STATE();
    case 892:
      if (lookahead == 'u') ADVANCE(837);
      END_STATE();
    case 893:
      if (lookahead == 'u') ADVANCE(866);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 899:
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 900:
      if (lookahead == 'u') ADVANCE(875);
      END_STATE();
    case 901:
      if (lookahead == 'v') ADVANCE(1179);
      END_STATE();
    case 902:
      if (lookahead == 'v') ADVANCE(1181);
      END_STATE();
    case 903:
      if (lookahead == 'v') ADVANCE(447);
      END_STATE();
    case 904:
      if (lookahead == 'v') ADVANCE(464);
      END_STATE();
    case 905:
      if (lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 906:
      if (lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 907:
      if (lookahead == 'v') ADVANCE(448);
      END_STATE();
    case 908:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 909:
      if (lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 910:
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 911:
      if (lookahead == 'w') ADVANCE(1099);
      END_STATE();
    case 912:
      if (lookahead == 'w') ADVANCE(996);
      END_STATE();
    case 913:
      if (lookahead == 'w') ADVANCE(1083);
      END_STATE();
    case 914:
      if (lookahead == 'w') ADVANCE(997);
      END_STATE();
    case 915:
      if (lookahead == 'w') ADVANCE(1142);
      END_STATE();
    case 916:
      if (lookahead == 'w') ADVANCE(1143);
      END_STATE();
    case 917:
      if (lookahead == 'w') ADVANCE(827);
      END_STATE();
    case 918:
      if (lookahead == 'w') ADVANCE(596);
      END_STATE();
    case 919:
      if (lookahead == 'x') ADVANCE(1005);
      END_STATE();
    case 920:
      if (lookahead == 'x') ADVANCE(1004);
      END_STATE();
    case 921:
      if (lookahead == 'x') ADVANCE(1163);
      END_STATE();
    case 922:
      if (lookahead == 'x') ADVANCE(1164);
      END_STATE();
    case 923:
      if (lookahead == 'x') ADVANCE(1122);
      END_STATE();
    case 924:
      if (lookahead == 'x') ADVANCE(1003);
      END_STATE();
    case 925:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 926:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 927:
      if (lookahead == 'x') ADVANCE(323);
      END_STATE();
    case 928:
      if (lookahead == 'x') ADVANCE(329);
      END_STATE();
    case 929:
      if (lookahead == 'x') ADVANCE(334);
      END_STATE();
    case 930:
      if (lookahead == 'y') ADVANCE(1089);
      END_STATE();
    case 931:
      if (lookahead == 'y') ADVANCE(1009);
      END_STATE();
    case 932:
      if (lookahead == 'y') ADVANCE(1085);
      END_STATE();
    case 933:
      if (lookahead == 'y') ADVANCE(713);
      END_STATE();
    case 934:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 935:
      if (lookahead == 'y') ADVANCE(718);
      END_STATE();
    case 936:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 937:
      if (lookahead == 'z') ADVANCE(287);
      END_STATE();
    case 938:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1105);
      END_STATE();
    case 939:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1104);
      END_STATE();
    case 940:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(939);
      END_STATE();
    case 941:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(940);
      END_STATE();
    case 942:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(941);
      END_STATE();
    case 943:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(942);
      END_STATE();
    case 944:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(943);
      END_STATE();
    case 945:
      if (eof) ADVANCE(950);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 946:
      if (eof) ADVANCE(950);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(945)
      END_STATE();
    case 947:
      if (eof) ADVANCE(950);
      if (lookahead == '\n') SKIP(949)
      END_STATE();
    case 948:
      if (eof) ADVANCE(950);
      if (lookahead == '\n') SKIP(949)
      if (lookahead == '\r') SKIP(947)
      END_STATE();
    case 949:
      if (eof) ADVANCE(950);
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(954);
      if (lookahead == '\\') SKIP(948)
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(783);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1452);
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(949)
      END_STATE();
    case 950:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_account_DASHhook);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_unalias);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\t') ADVANCE(964);
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(964);
      if (lookahead == ' ') ADVANCE(1451);
      if (lookahead == '#') ADVANCE(975);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(964);
      if (lookahead != 0) ADVANCE(963);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '"') ADVANCE(1203);
      if (lookahead == '\'') ADVANCE(1197);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '\\') ADVANCE(1215);
      if (lookahead == '`') ADVANCE(1209);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(972);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(957);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == ',') ADVANCE(954);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(971);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(963);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == 'g') ADVANCE(790);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1445);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_key_token3);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1450);
      if (lookahead == '\n') ADVANCE(1446);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(1442);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_alternates);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_unalternates);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_alternative_order);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_unalternative_order);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_attachments);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_unattachments);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_auto_view);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_unauto_view);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_browser);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_compose);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_editor);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_mix);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_pager);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_pgp);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_postpone);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_smime);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_unbind);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_charset_DASHhook);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_iconv_DASHhook);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_attachment);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_attachment);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_index_author);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_index_author);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_index_date);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_index_date);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_index_flags);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_index_flags);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_index_label);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_index_label);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_index_number);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_index_number);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_index_size);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_index_size);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_index_subject);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_index_subject);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1045);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == 's') ADVANCE(1044);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_index_tags);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_index_tags);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_indicator);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_indicator);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_markers);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_markers);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_normal);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_progress);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\\') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_search);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_signature);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_signature);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_tilde);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_tilde);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_tree);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_tree);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_security_encrypt);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_security_sign);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_security_both);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_security_none);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_color_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1105);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_standout);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_color);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1105);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_uncolor);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_crypt_DASHhook);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_index_DASHformat_DASHhook);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_fcc_DASHsave_DASHhook);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_fcc_DASHhook);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_save_DASHhook);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_folder_DASHhook);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_DASHnoregex);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_DASHrx);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_DASHaddr);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_hdr_order);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_unhdr_order);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_ifdef);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_ifndef);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_finish);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_unignore);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_lists);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_unlists);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_subscribe);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_unsubscribe);
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_unmacro);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_mailboxes);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_named_DASHmailboxes);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_unmailboxes);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_mailto_allow);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_unmailto_allow);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_mbox_DASHhook);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_message_DASHhook);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_mime_lookup);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_unmime_lookup);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_mono);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_unmono);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_my_hdr);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_unmy_hdr);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_open_DASHhook);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_close_DASHhook);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_append_DASHhook);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_reply_DASHhook);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_send_DASHhook);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_send2_DASHhook);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_spam);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_nospam);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_subjectrx);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_unsubjectrx);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_subscribe_DASHto);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_unsubscribe_DASHfrom);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_timeout_DASHhook);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_startup_DASHhook);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_shutdown_DASHhook);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_unhook);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_setenv_directive_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1180);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_unsetenv);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_sidebar_pin);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_sidebar_unpin);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_unscore);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1186);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '\\') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '\r') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1201);
      if (lookahead == '\\') ADVANCE(1202);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '\\') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1201);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1201);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1201);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1201);
      if (lookahead == '\\') ADVANCE(1202);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1206);
      if (lookahead == '\r') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1207);
      if (lookahead == '\\') ADVANCE(1208);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1206);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1207);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1207);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1207);
      if (lookahead == '\\') ADVANCE(1208);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1212);
      if (lookahead == '\r') ADVANCE(1211);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1213);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1212);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1213);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1213);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1213);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(978);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ' ') ADVANCE(977);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(1350);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == '_') ADVANCE(1232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == '_') ADVANCE(1243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == '_') ADVANCE(1315);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1432);
      if (lookahead == 'c') ADVANCE(1363);
      if (lookahead == 'd') ADVANCE(1239);
      if (lookahead == 'f') ADVANCE(1337);
      if (lookahead == 'l') ADVANCE(1224);
      if (lookahead == 'n') ADVANCE(1427);
      if (lookahead == 's') ADVANCE(1318);
      if (lookahead == 't') ADVANCE(1225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'a') ADVANCE(1426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'b') ADVANCE(1328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'b') ADVANCE(1226);
      if (lookahead == 'd') ADVANCE(1319);
      if (lookahead == 'f') ADVANCE(1340);
      if (lookahead == 'h') ADVANCE(1321);
      if (lookahead == 'i') ADVANCE(1349);
      if (lookahead == 'n') ADVANCE(1279);
      if (lookahead == 'o') ADVANCE(1392);
      if (lookahead == 's') ADVANCE(1375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'b') ADVANCE(1286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'b') ADVANCE(1294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1021);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1029);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1078);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1074);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1270);
      if (lookahead == 'g') ADVANCE(1354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'd') ADVANCE(1296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == 'i') ADVANCE(1259);
      if (lookahead == 't') ADVANCE(1229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1437);
      if (lookahead == 'i') ADVANCE(1251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1039);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'f') ADVANCE(1230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'f') ADVANCE(1323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1042);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1394);
      if (lookahead == 'm') ADVANCE(1374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'g') ADVANCE(1400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1062);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'h') ADVANCE(1369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1440);
      if (lookahead == 'u') ADVANCE(1242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1343);
      if (lookahead == 'r') ADVANCE(1282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(1252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'j') ADVANCE(1284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'k') ADVANCE(1216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'k') ADVANCE(1310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'k') ADVANCE(1292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1054);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1035);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'l') ADVANCE(1325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'm') ADVANCE(1223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'm') ADVANCE(1246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1360);
      if (lookahead == 'y') ADVANCE(1293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'n') ADVANCE(1371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'p') ADVANCE(953);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'p') ADVANCE(1413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'p') ADVANCE(1372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'p') ADVANCE(1412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1023);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1047);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1027);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1037);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'r') ADVANCE(1366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1049);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1056);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1033);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 's') ADVANCE(1287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1058);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1025);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1041);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1080);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 't') ADVANCE(1370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'u') ADVANCE(1352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'v') ADVANCE(1326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'w') ADVANCE(1084);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'y') ADVANCE(1086);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead == 'z') ADVANCE(1278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1442);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1443);
      if (lookahead != 0) ADVANCE(1442);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1445);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(1450);
      if (lookahead == '\n') ADVANCE(1446);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(964);
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(964);
      if (lookahead == ' ') ADVANCE(1451);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(964);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1452);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1449);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(1450);
      if (lookahead == '\n') ADVANCE(1446);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(964);
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(964);
      if (lookahead == ' ') ADVANCE(1451);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(964);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1452);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 949},
  [2] = {.lex_state = 949},
  [3] = {.lex_state = 949},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 949},
  [20] = {.lex_state = 949},
  [21] = {.lex_state = 949},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 41},
  [55] = {.lex_state = 41},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 41},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 46},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 46},
  [100] = {.lex_state = 46},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 48},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 949},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 46},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 46},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 46},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 46},
  [129] = {.lex_state = 46},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 46},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 46},
  [142] = {.lex_state = 46},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 46},
  [148] = {.lex_state = 46},
  [149] = {.lex_state = 46},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 49},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 79},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 79},
  [172] = {.lex_state = 79},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 80},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 46},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 949},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 46},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 79},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 79},
  [201] = {.lex_state = 54},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 46},
  [210] = {.lex_state = 80},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 949},
  [220] = {.lex_state = 54},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 54},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 48},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 46},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 46},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 949},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 949},
  [256] = {.lex_state = 949},
  [257] = {.lex_state = 949},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 46},
  [260] = {.lex_state = 46},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 46},
  [263] = {.lex_state = 51},
  [264] = {.lex_state = 46},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 51},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 949},
  [269] = {.lex_state = 53},
  [270] = {.lex_state = 54},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 54},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 949},
  [280] = {.lex_state = 34},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 46},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 46},
  [293] = {.lex_state = 46},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 949},
  [297] = {.lex_state = 46},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 46},
  [300] = {.lex_state = 46},
  [301] = {.lex_state = 51},
  [302] = {.lex_state = 51},
  [303] = {.lex_state = 46},
  [304] = {.lex_state = 46},
  [305] = {.lex_state = 46},
  [306] = {.lex_state = 46},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 80},
  [309] = {.lex_state = 949},
  [310] = {.lex_state = 949},
  [311] = {.lex_state = 949},
  [312] = {.lex_state = 949},
  [313] = {.lex_state = 949},
  [314] = {.lex_state = 949},
  [315] = {.lex_state = 949},
  [316] = {.lex_state = 949},
  [317] = {.lex_state = 949},
  [318] = {.lex_state = 949},
  [319] = {.lex_state = 949},
  [320] = {.lex_state = 949},
  [321] = {.lex_state = 949},
  [322] = {.lex_state = 949},
  [323] = {.lex_state = 949},
  [324] = {.lex_state = 949},
  [325] = {.lex_state = 949},
  [326] = {.lex_state = 949},
  [327] = {.lex_state = 949},
  [328] = {.lex_state = 949},
  [329] = {.lex_state = 949},
  [330] = {.lex_state = 949},
  [331] = {.lex_state = 949},
  [332] = {.lex_state = 949},
  [333] = {.lex_state = 949},
  [334] = {.lex_state = 949},
  [335] = {.lex_state = 949},
  [336] = {.lex_state = 949},
  [337] = {.lex_state = 949},
  [338] = {.lex_state = 949},
  [339] = {.lex_state = 949},
  [340] = {.lex_state = 949},
  [341] = {.lex_state = 949},
  [342] = {.lex_state = 949},
  [343] = {.lex_state = 949},
  [344] = {.lex_state = 949},
  [345] = {.lex_state = 949},
  [346] = {.lex_state = 949},
  [347] = {.lex_state = 949},
  [348] = {.lex_state = 949},
  [349] = {.lex_state = 949},
  [350] = {.lex_state = 949},
  [351] = {.lex_state = 949},
  [352] = {.lex_state = 949},
  [353] = {.lex_state = 949},
  [354] = {.lex_state = 949},
  [355] = {.lex_state = 949},
  [356] = {.lex_state = 949},
  [357] = {.lex_state = 949},
  [358] = {.lex_state = 949},
  [359] = {.lex_state = 949},
  [360] = {.lex_state = 949},
  [361] = {.lex_state = 949},
  [362] = {.lex_state = 949},
  [363] = {.lex_state = 949},
  [364] = {.lex_state = 949},
  [365] = {.lex_state = 949},
  [366] = {.lex_state = 949},
  [367] = {.lex_state = 949},
  [368] = {.lex_state = 949},
  [369] = {.lex_state = 949},
  [370] = {.lex_state = 949},
  [371] = {.lex_state = 949},
  [372] = {.lex_state = 949},
  [373] = {.lex_state = 49},
  [374] = {.lex_state = 49},
  [375] = {.lex_state = 949},
  [376] = {.lex_state = 949},
  [377] = {.lex_state = 949},
  [378] = {.lex_state = 949},
  [379] = {.lex_state = 949},
  [380] = {.lex_state = 949},
  [381] = {.lex_state = 79},
  [382] = {.lex_state = 79},
  [383] = {.lex_state = 949},
  [384] = {.lex_state = 79},
  [385] = {.lex_state = 949},
  [386] = {.lex_state = 949},
  [387] = {.lex_state = 48},
  [388] = {.lex_state = 79},
  [389] = {.lex_state = 949},
  [390] = {.lex_state = 949},
  [391] = {.lex_state = 949},
  [392] = {.lex_state = 949},
  [393] = {.lex_state = 949},
  [394] = {.lex_state = 949},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 949},
  [397] = {.lex_state = 949},
  [398] = {.lex_state = 949},
  [399] = {.lex_state = 949},
  [400] = {.lex_state = 949},
  [401] = {.lex_state = 53},
  [402] = {.lex_state = 949},
  [403] = {.lex_state = 949},
  [404] = {.lex_state = 949},
  [405] = {.lex_state = 949},
  [406] = {.lex_state = 949},
  [407] = {.lex_state = 949},
  [408] = {.lex_state = 949},
  [409] = {.lex_state = 949},
  [410] = {.lex_state = 949},
  [411] = {.lex_state = 949},
  [412] = {.lex_state = 949},
  [413] = {.lex_state = 949},
  [414] = {.lex_state = 949},
  [415] = {.lex_state = 949},
  [416] = {.lex_state = 949},
  [417] = {.lex_state = 949},
  [418] = {.lex_state = 949},
  [419] = {.lex_state = 949},
  [420] = {.lex_state = 949},
  [421] = {.lex_state = 949},
  [422] = {.lex_state = 949},
  [423] = {.lex_state = 949},
  [424] = {.lex_state = 949},
  [425] = {.lex_state = 949},
  [426] = {.lex_state = 949},
  [427] = {.lex_state = 949},
  [428] = {.lex_state = 49},
  [429] = {.lex_state = 949},
  [430] = {.lex_state = 949},
  [431] = {.lex_state = 53},
  [432] = {.lex_state = 949},
  [433] = {.lex_state = 949},
  [434] = {.lex_state = 949},
  [435] = {.lex_state = 949},
  [436] = {.lex_state = 949},
  [437] = {.lex_state = 949},
  [438] = {.lex_state = 49},
  [439] = {.lex_state = 949},
  [440] = {.lex_state = 949},
  [441] = {.lex_state = 949},
  [442] = {.lex_state = 949},
  [443] = {.lex_state = 949},
  [444] = {.lex_state = 949},
  [445] = {.lex_state = 949},
  [446] = {.lex_state = 949},
  [447] = {.lex_state = 949},
  [448] = {.lex_state = 53},
  [449] = {.lex_state = 85},
  [450] = {.lex_state = 49},
  [451] = {.lex_state = 49},
  [452] = {.lex_state = 49},
  [453] = {.lex_state = 53},
  [454] = {.lex_state = 49},
  [455] = {.lex_state = 53},
  [456] = {.lex_state = 48},
  [457] = {.lex_state = 53},
  [458] = {.lex_state = 48},
  [459] = {.lex_state = 48},
  [460] = {.lex_state = 48},
  [461] = {.lex_state = 31},
  [462] = {.lex_state = 53},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 53},
  [466] = {.lex_state = 48},
  [467] = {.lex_state = 48},
  [468] = {.lex_state = 31},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 48},
  [471] = {.lex_state = 1200},
  [472] = {.lex_state = 1206},
  [473] = {.lex_state = 1212},
  [474] = {.lex_state = 86},
  [475] = {.lex_state = 1200},
  [476] = {.lex_state = 85},
  [477] = {.lex_state = 1206},
  [478] = {.lex_state = 1212},
  [479] = {.lex_state = 85},
  [480] = {.lex_state = 53},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 48},
  [489] = {.lex_state = 31},
  [490] = {.lex_state = 53},
  [491] = {.lex_state = 49},
  [492] = {.lex_state = 84},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 48},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 53},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 48},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 53},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 1200},
  [531] = {.lex_state = 1206},
  [532] = {.lex_state = 1212},
  [533] = {.lex_state = 86},
  [534] = {.lex_state = 1200},
  [535] = {.lex_state = 1206},
  [536] = {.lex_state = 1212},
  [537] = {.lex_state = 1200},
  [538] = {.lex_state = 1206},
  [539] = {.lex_state = 1212},
  [540] = {.lex_state = 86},
  [541] = {.lex_state = 1200},
  [542] = {.lex_state = 1206},
  [543] = {.lex_state = 1212},
  [544] = {.lex_state = 1200},
  [545] = {.lex_state = 1206},
  [546] = {.lex_state = 1212},
  [547] = {.lex_state = 1200},
  [548] = {.lex_state = 1206},
  [549] = {.lex_state = 1212},
  [550] = {.lex_state = 1200},
  [551] = {.lex_state = 1206},
  [552] = {.lex_state = 1212},
  [553] = {.lex_state = 1200},
  [554] = {.lex_state = 1206},
  [555] = {.lex_state = 1212},
  [556] = {.lex_state = 1200},
  [557] = {.lex_state = 1206},
  [558] = {.lex_state = 1212},
  [559] = {.lex_state = 1200},
  [560] = {.lex_state = 1206},
  [561] = {.lex_state = 1212},
  [562] = {.lex_state = 1200},
  [563] = {.lex_state = 1206},
  [564] = {.lex_state = 1212},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_account_DASHhook] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_unalias] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_alternates] = ACTIONS(1),
    [anon_sym_unalternates] = ACTIONS(1),
    [anon_sym_alternative_order] = ACTIONS(1),
    [anon_sym_unalternative_order] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_unattachments] = ACTIONS(1),
    [anon_sym_auto_view] = ACTIONS(1),
    [anon_sym_unauto_view] = ACTIONS(1),
    [anon_sym_attach] = ACTIONS(1),
    [anon_sym_browser] = ACTIONS(1),
    [anon_sym_compose] = ACTIONS(1),
    [anon_sym_editor] = ACTIONS(1),
    [anon_sym_generic] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_mix] = ACTIONS(1),
    [anon_sym_pager] = ACTIONS(1),
    [anon_sym_pgp] = ACTIONS(1),
    [anon_sym_postpone] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_smime] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_unbind] = ACTIONS(1),
    [anon_sym_charset_DASHhook] = ACTIONS(1),
    [anon_sym_iconv_DASHhook] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_hdrdefault] = ACTIONS(1),
    [anon_sym_index_author] = ACTIONS(1),
    [anon_sym_index_collapsed] = ACTIONS(1),
    [anon_sym_index_date] = ACTIONS(1),
    [anon_sym_index_flags] = ACTIONS(1),
    [anon_sym_index_label] = ACTIONS(1),
    [anon_sym_index_number] = ACTIONS(1),
    [anon_sym_index_size] = ACTIONS(1),
    [anon_sym_index_subject] = ACTIONS(1),
    [anon_sym_index_tag] = ACTIONS(1),
    [anon_sym_index_tags] = ACTIONS(1),
    [anon_sym_indicator] = ACTIONS(1),
    [anon_sym_markers] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_progress] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [aux_sym_object_token1] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
    [anon_sym_signature] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_tilde] = ACTIONS(1),
    [anon_sym_tree] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_sidebar_background] = ACTIONS(1),
    [anon_sym_sidebar_divider] = ACTIONS(1),
    [anon_sym_sidebar_flagged] = ACTIONS(1),
    [anon_sym_sidebar_highlight] = ACTIONS(1),
    [anon_sym_sidebar_indicator] = ACTIONS(1),
    [anon_sym_sidebar_new] = ACTIONS(1),
    [anon_sym_sidebar_ordinary] = ACTIONS(1),
    [anon_sym_sidebar_spool_file] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_security_encrypt] = ACTIONS(1),
    [anon_sym_security_sign] = ACTIONS(1),
    [anon_sym_security_both] = ACTIONS(1),
    [anon_sym_security_none] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_magenta] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_standout] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_uncolor] = ACTIONS(1),
    [anon_sym_crypt_DASHhook] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(1),
    [anon_sym_fcc_DASHhook] = ACTIONS(1),
    [anon_sym_save_DASHhook] = ACTIONS(1),
    [anon_sym_folder_DASHhook] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_ungroup] = ACTIONS(1),
    [anon_sym_hdr_order] = ACTIONS(1),
    [anon_sym_unhdr_order] = ACTIONS(1),
    [anon_sym_ifdef] = ACTIONS(1),
    [anon_sym_ifndef] = ACTIONS(1),
    [anon_sym_finish] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_unignore] = ACTIONS(1),
    [anon_sym_lists] = ACTIONS(1),
    [anon_sym_unlists] = ACTIONS(1),
    [anon_sym_subscribe] = ACTIONS(1),
    [anon_sym_unsubscribe] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_unmacro] = ACTIONS(1),
    [anon_sym_mailboxes] = ACTIONS(1),
    [anon_sym_named_DASHmailboxes] = ACTIONS(1),
    [anon_sym_unmailboxes] = ACTIONS(1),
    [anon_sym_mailto_allow] = ACTIONS(1),
    [anon_sym_unmailto_allow] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_mbox_DASHhook] = ACTIONS(1),
    [anon_sym_message_DASHhook] = ACTIONS(1),
    [anon_sym_mime_lookup] = ACTIONS(1),
    [anon_sym_unmime_lookup] = ACTIONS(1),
    [anon_sym_mono] = ACTIONS(1),
    [anon_sym_unmono] = ACTIONS(1),
    [anon_sym_my_hdr] = ACTIONS(1),
    [anon_sym_unmy_hdr] = ACTIONS(1),
    [anon_sym_open_DASHhook] = ACTIONS(1),
    [anon_sym_close_DASHhook] = ACTIONS(1),
    [anon_sym_append_DASHhook] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_reply_DASHhook] = ACTIONS(1),
    [anon_sym_send_DASHhook] = ACTIONS(1),
    [anon_sym_send2_DASHhook] = ACTIONS(1),
    [anon_sym_spam] = ACTIONS(1),
    [anon_sym_nospam] = ACTIONS(1),
    [anon_sym_subjectrx] = ACTIONS(1),
    [anon_sym_unsubjectrx] = ACTIONS(1),
    [anon_sym_subscribe_DASHto] = ACTIONS(1),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(1),
    [anon_sym_timeout_DASHhook] = ACTIONS(1),
    [anon_sym_startup_DASHhook] = ACTIONS(1),
    [anon_sym_shutdown_DASHhook] = ACTIONS(1),
    [anon_sym_unhook] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_unsetenv] = ACTIONS(1),
    [anon_sym_sidebar_pin] = ACTIONS(1),
    [anon_sym_sidebar_unpin] = ACTIONS(1),
    [anon_sym_score] = ACTIONS(1),
    [anon_sym_unscore] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_ask_DASHyes] = ACTIONS(1),
    [anon_sym_ask_DASHno] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(469),
    [sym__command] = STATE(105),
    [sym_account_hook_directive] = STATE(105),
    [sym_alias_directive] = STATE(105),
    [sym_unalias_directive] = STATE(105),
    [sym_alternates_directive] = STATE(105),
    [sym_unalternates_directive] = STATE(105),
    [sym_alternative_order_directive] = STATE(105),
    [sym_unalternative_order_directive] = STATE(105),
    [sym_attachments_directive] = STATE(105),
    [sym_unattachments_directive] = STATE(105),
    [sym_auto_view_directive] = STATE(105),
    [sym_unauto_view_directive] = STATE(105),
    [sym_bind_directive] = STATE(105),
    [sym_unbind_directive] = STATE(105),
    [sym_charset_hook_directive] = STATE(105),
    [sym_iconv_hook_directive] = STATE(105),
    [sym_color_directive] = STATE(105),
    [sym_uncolor_directive] = STATE(105),
    [sym_crypt_hook_directive] = STATE(105),
    [sym_index_format_hook_directive] = STATE(105),
    [sym_exec_directive] = STATE(105),
    [sym_fcc_save_hook_directive] = STATE(105),
    [sym_fcc_hook_directive] = STATE(105),
    [sym_save_hook_directive] = STATE(105),
    [sym_folder_hook_directive] = STATE(105),
    [sym_group_directive] = STATE(105),
    [sym_ungroup_directive] = STATE(105),
    [sym_hdr_order_directive] = STATE(105),
    [sym_unhdr_order_directive] = STATE(105),
    [sym_ifdef_directive] = STATE(105),
    [sym_ifndef_directive] = STATE(105),
    [sym_finish_directive] = STATE(105),
    [sym_ignore_directive] = STATE(105),
    [sym_unignore_directive] = STATE(105),
    [sym_lists_directive] = STATE(105),
    [sym_unlists_directive] = STATE(105),
    [sym_subscribe_directive] = STATE(105),
    [sym_unsubscribe_directive] = STATE(105),
    [sym_macro_directive] = STATE(105),
    [sym_unmacro_directive] = STATE(105),
    [sym_mailboxes_directive] = STATE(105),
    [sym_named_mailboxes_directive] = STATE(105),
    [sym_unmailboxes_directive] = STATE(105),
    [sym_mailto_allow_directive] = STATE(105),
    [sym_unmailto_allow_directive] = STATE(105),
    [sym_echo_directive] = STATE(105),
    [sym_cd_directive] = STATE(105),
    [sym_mbox_hook_directive] = STATE(105),
    [sym_message_hook_directive] = STATE(105),
    [sym_mime_lookup_directive] = STATE(105),
    [sym_unmime_lookup_directive] = STATE(105),
    [sym_mono_directive] = STATE(105),
    [sym_unmono_directive] = STATE(105),
    [sym_my_hdr_directive] = STATE(105),
    [sym_unmy_hdr_directive] = STATE(105),
    [sym_open_hook_directive] = STATE(105),
    [sym_close_hook_directive] = STATE(105),
    [sym_append_hook_directive] = STATE(105),
    [sym_push_directive] = STATE(105),
    [sym_reply_hook_directive] = STATE(105),
    [sym_send_hook_directive] = STATE(105),
    [sym_send2_hook_directive] = STATE(105),
    [sym_spam_directive] = STATE(105),
    [sym_nospam_directive] = STATE(105),
    [sym_subjectrx_directive] = STATE(105),
    [sym_unsubjectrx_directive] = STATE(105),
    [sym_subscribe_to_directive] = STATE(105),
    [sym_unsubscribe_from_directive] = STATE(105),
    [sym_timeout_hook_directive] = STATE(105),
    [sym_startup_hook_directive] = STATE(105),
    [sym_shutdown_hook_directive] = STATE(105),
    [sym_unhook_directive] = STATE(105),
    [sym_set_directive] = STATE(105),
    [sym_unset_directive] = STATE(105),
    [sym_reset_directive] = STATE(105),
    [sym_toggle_directive] = STATE(105),
    [sym_setenv_directive] = STATE(105),
    [sym_unsetenv_directive] = STATE(105),
    [sym_sidebar_pin_directive] = STATE(105),
    [sym_sidebar_unpin_directive] = STATE(105),
    [sym_score_directive] = STATE(105),
    [sym_unscore_directive] = STATE(105),
    [sym_source_directive] = STATE(105),
    [sym__space] = STATE(461),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_charset_DASHhook] = ACTIONS(31),
    [anon_sym_iconv_DASHhook] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(35),
    [anon_sym_uncolor] = ACTIONS(37),
    [anon_sym_crypt_DASHhook] = ACTIONS(39),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(41),
    [anon_sym_exec] = ACTIONS(43),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(45),
    [anon_sym_fcc_DASHhook] = ACTIONS(47),
    [anon_sym_save_DASHhook] = ACTIONS(49),
    [anon_sym_folder_DASHhook] = ACTIONS(51),
    [anon_sym_group] = ACTIONS(53),
    [anon_sym_ungroup] = ACTIONS(55),
    [anon_sym_hdr_order] = ACTIONS(57),
    [anon_sym_unhdr_order] = ACTIONS(59),
    [anon_sym_ifdef] = ACTIONS(61),
    [anon_sym_ifndef] = ACTIONS(63),
    [anon_sym_finish] = ACTIONS(65),
    [anon_sym_ignore] = ACTIONS(67),
    [anon_sym_unignore] = ACTIONS(69),
    [anon_sym_lists] = ACTIONS(71),
    [anon_sym_unlists] = ACTIONS(73),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(79),
    [anon_sym_unmacro] = ACTIONS(81),
    [anon_sym_mailboxes] = ACTIONS(83),
    [anon_sym_named_DASHmailboxes] = ACTIONS(85),
    [anon_sym_unmailboxes] = ACTIONS(87),
    [anon_sym_mailto_allow] = ACTIONS(89),
    [anon_sym_unmailto_allow] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(93),
    [anon_sym_cd] = ACTIONS(95),
    [anon_sym_mbox_DASHhook] = ACTIONS(97),
    [anon_sym_message_DASHhook] = ACTIONS(99),
    [anon_sym_mime_lookup] = ACTIONS(101),
    [anon_sym_unmime_lookup] = ACTIONS(103),
    [anon_sym_mono] = ACTIONS(105),
    [anon_sym_unmono] = ACTIONS(107),
    [anon_sym_my_hdr] = ACTIONS(109),
    [anon_sym_unmy_hdr] = ACTIONS(111),
    [anon_sym_open_DASHhook] = ACTIONS(113),
    [anon_sym_close_DASHhook] = ACTIONS(115),
    [anon_sym_append_DASHhook] = ACTIONS(117),
    [anon_sym_push] = ACTIONS(119),
    [anon_sym_reply_DASHhook] = ACTIONS(121),
    [anon_sym_send_DASHhook] = ACTIONS(123),
    [anon_sym_send2_DASHhook] = ACTIONS(125),
    [anon_sym_spam] = ACTIONS(127),
    [anon_sym_nospam] = ACTIONS(129),
    [anon_sym_subjectrx] = ACTIONS(131),
    [anon_sym_unsubjectrx] = ACTIONS(133),
    [anon_sym_subscribe_DASHto] = ACTIONS(135),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(137),
    [anon_sym_timeout_DASHhook] = ACTIONS(139),
    [anon_sym_startup_DASHhook] = ACTIONS(141),
    [anon_sym_shutdown_DASHhook] = ACTIONS(143),
    [anon_sym_unhook] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(151),
    [anon_sym_toggle] = ACTIONS(153),
    [anon_sym_setenv] = ACTIONS(155),
    [anon_sym_unsetenv] = ACTIONS(157),
    [anon_sym_sidebar_pin] = ACTIONS(159),
    [anon_sym_sidebar_unpin] = ACTIONS(161),
    [anon_sym_score] = ACTIONS(163),
    [anon_sym_unscore] = ACTIONS(165),
    [anon_sym_source] = ACTIONS(167),
    [sym_comment] = ACTIONS(169),
    [sym__eol] = ACTIONS(171),
    [aux_sym__space_token1] = ACTIONS(173),
  },
  [2] = {
    [sym__command] = STATE(105),
    [sym_account_hook_directive] = STATE(105),
    [sym_alias_directive] = STATE(105),
    [sym_unalias_directive] = STATE(105),
    [sym_alternates_directive] = STATE(105),
    [sym_unalternates_directive] = STATE(105),
    [sym_alternative_order_directive] = STATE(105),
    [sym_unalternative_order_directive] = STATE(105),
    [sym_attachments_directive] = STATE(105),
    [sym_unattachments_directive] = STATE(105),
    [sym_auto_view_directive] = STATE(105),
    [sym_unauto_view_directive] = STATE(105),
    [sym_bind_directive] = STATE(105),
    [sym_unbind_directive] = STATE(105),
    [sym_charset_hook_directive] = STATE(105),
    [sym_iconv_hook_directive] = STATE(105),
    [sym_color_directive] = STATE(105),
    [sym_uncolor_directive] = STATE(105),
    [sym_crypt_hook_directive] = STATE(105),
    [sym_index_format_hook_directive] = STATE(105),
    [sym_exec_directive] = STATE(105),
    [sym_fcc_save_hook_directive] = STATE(105),
    [sym_fcc_hook_directive] = STATE(105),
    [sym_save_hook_directive] = STATE(105),
    [sym_folder_hook_directive] = STATE(105),
    [sym_group_directive] = STATE(105),
    [sym_ungroup_directive] = STATE(105),
    [sym_hdr_order_directive] = STATE(105),
    [sym_unhdr_order_directive] = STATE(105),
    [sym_ifdef_directive] = STATE(105),
    [sym_ifndef_directive] = STATE(105),
    [sym_finish_directive] = STATE(105),
    [sym_ignore_directive] = STATE(105),
    [sym_unignore_directive] = STATE(105),
    [sym_lists_directive] = STATE(105),
    [sym_unlists_directive] = STATE(105),
    [sym_subscribe_directive] = STATE(105),
    [sym_unsubscribe_directive] = STATE(105),
    [sym_macro_directive] = STATE(105),
    [sym_unmacro_directive] = STATE(105),
    [sym_mailboxes_directive] = STATE(105),
    [sym_named_mailboxes_directive] = STATE(105),
    [sym_unmailboxes_directive] = STATE(105),
    [sym_mailto_allow_directive] = STATE(105),
    [sym_unmailto_allow_directive] = STATE(105),
    [sym_echo_directive] = STATE(105),
    [sym_cd_directive] = STATE(105),
    [sym_mbox_hook_directive] = STATE(105),
    [sym_message_hook_directive] = STATE(105),
    [sym_mime_lookup_directive] = STATE(105),
    [sym_unmime_lookup_directive] = STATE(105),
    [sym_mono_directive] = STATE(105),
    [sym_unmono_directive] = STATE(105),
    [sym_my_hdr_directive] = STATE(105),
    [sym_unmy_hdr_directive] = STATE(105),
    [sym_open_hook_directive] = STATE(105),
    [sym_close_hook_directive] = STATE(105),
    [sym_append_hook_directive] = STATE(105),
    [sym_push_directive] = STATE(105),
    [sym_reply_hook_directive] = STATE(105),
    [sym_send_hook_directive] = STATE(105),
    [sym_send2_hook_directive] = STATE(105),
    [sym_spam_directive] = STATE(105),
    [sym_nospam_directive] = STATE(105),
    [sym_subjectrx_directive] = STATE(105),
    [sym_unsubjectrx_directive] = STATE(105),
    [sym_subscribe_to_directive] = STATE(105),
    [sym_unsubscribe_from_directive] = STATE(105),
    [sym_timeout_hook_directive] = STATE(105),
    [sym_startup_hook_directive] = STATE(105),
    [sym_shutdown_hook_directive] = STATE(105),
    [sym_unhook_directive] = STATE(105),
    [sym_set_directive] = STATE(105),
    [sym_unset_directive] = STATE(105),
    [sym_reset_directive] = STATE(105),
    [sym_toggle_directive] = STATE(105),
    [sym_setenv_directive] = STATE(105),
    [sym_unsetenv_directive] = STATE(105),
    [sym_sidebar_pin_directive] = STATE(105),
    [sym_sidebar_unpin_directive] = STATE(105),
    [sym_score_directive] = STATE(105),
    [sym_unscore_directive] = STATE(105),
    [sym_source_directive] = STATE(105),
    [sym__space] = STATE(461),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_account_DASHhook] = ACTIONS(177),
    [anon_sym_alias] = ACTIONS(180),
    [anon_sym_unalias] = ACTIONS(183),
    [anon_sym_alternates] = ACTIONS(186),
    [anon_sym_unalternates] = ACTIONS(189),
    [anon_sym_alternative_order] = ACTIONS(192),
    [anon_sym_unalternative_order] = ACTIONS(195),
    [anon_sym_attachments] = ACTIONS(198),
    [anon_sym_unattachments] = ACTIONS(201),
    [anon_sym_auto_view] = ACTIONS(204),
    [anon_sym_unauto_view] = ACTIONS(207),
    [anon_sym_bind] = ACTIONS(210),
    [anon_sym_unbind] = ACTIONS(213),
    [anon_sym_charset_DASHhook] = ACTIONS(216),
    [anon_sym_iconv_DASHhook] = ACTIONS(219),
    [anon_sym_color] = ACTIONS(222),
    [anon_sym_uncolor] = ACTIONS(225),
    [anon_sym_crypt_DASHhook] = ACTIONS(228),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(231),
    [anon_sym_exec] = ACTIONS(234),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(237),
    [anon_sym_fcc_DASHhook] = ACTIONS(240),
    [anon_sym_save_DASHhook] = ACTIONS(243),
    [anon_sym_folder_DASHhook] = ACTIONS(246),
    [anon_sym_group] = ACTIONS(249),
    [anon_sym_ungroup] = ACTIONS(252),
    [anon_sym_hdr_order] = ACTIONS(255),
    [anon_sym_unhdr_order] = ACTIONS(258),
    [anon_sym_ifdef] = ACTIONS(261),
    [anon_sym_ifndef] = ACTIONS(264),
    [anon_sym_finish] = ACTIONS(267),
    [anon_sym_ignore] = ACTIONS(270),
    [anon_sym_unignore] = ACTIONS(273),
    [anon_sym_lists] = ACTIONS(276),
    [anon_sym_unlists] = ACTIONS(279),
    [anon_sym_subscribe] = ACTIONS(282),
    [anon_sym_unsubscribe] = ACTIONS(285),
    [anon_sym_macro] = ACTIONS(288),
    [anon_sym_unmacro] = ACTIONS(291),
    [anon_sym_mailboxes] = ACTIONS(294),
    [anon_sym_named_DASHmailboxes] = ACTIONS(297),
    [anon_sym_unmailboxes] = ACTIONS(300),
    [anon_sym_mailto_allow] = ACTIONS(303),
    [anon_sym_unmailto_allow] = ACTIONS(306),
    [anon_sym_echo] = ACTIONS(309),
    [anon_sym_cd] = ACTIONS(312),
    [anon_sym_mbox_DASHhook] = ACTIONS(315),
    [anon_sym_message_DASHhook] = ACTIONS(318),
    [anon_sym_mime_lookup] = ACTIONS(321),
    [anon_sym_unmime_lookup] = ACTIONS(324),
    [anon_sym_mono] = ACTIONS(327),
    [anon_sym_unmono] = ACTIONS(330),
    [anon_sym_my_hdr] = ACTIONS(333),
    [anon_sym_unmy_hdr] = ACTIONS(336),
    [anon_sym_open_DASHhook] = ACTIONS(339),
    [anon_sym_close_DASHhook] = ACTIONS(342),
    [anon_sym_append_DASHhook] = ACTIONS(345),
    [anon_sym_push] = ACTIONS(348),
    [anon_sym_reply_DASHhook] = ACTIONS(351),
    [anon_sym_send_DASHhook] = ACTIONS(354),
    [anon_sym_send2_DASHhook] = ACTIONS(357),
    [anon_sym_spam] = ACTIONS(360),
    [anon_sym_nospam] = ACTIONS(363),
    [anon_sym_subjectrx] = ACTIONS(366),
    [anon_sym_unsubjectrx] = ACTIONS(369),
    [anon_sym_subscribe_DASHto] = ACTIONS(372),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(375),
    [anon_sym_timeout_DASHhook] = ACTIONS(378),
    [anon_sym_startup_DASHhook] = ACTIONS(381),
    [anon_sym_shutdown_DASHhook] = ACTIONS(384),
    [anon_sym_unhook] = ACTIONS(387),
    [anon_sym_set] = ACTIONS(390),
    [anon_sym_unset] = ACTIONS(393),
    [anon_sym_reset] = ACTIONS(396),
    [anon_sym_toggle] = ACTIONS(399),
    [anon_sym_setenv] = ACTIONS(402),
    [anon_sym_unsetenv] = ACTIONS(405),
    [anon_sym_sidebar_pin] = ACTIONS(408),
    [anon_sym_sidebar_unpin] = ACTIONS(411),
    [anon_sym_score] = ACTIONS(414),
    [anon_sym_unscore] = ACTIONS(417),
    [anon_sym_source] = ACTIONS(420),
    [sym_comment] = ACTIONS(423),
    [sym__eol] = ACTIONS(426),
    [aux_sym__space_token1] = ACTIONS(429),
  },
  [3] = {
    [sym__command] = STATE(105),
    [sym_account_hook_directive] = STATE(105),
    [sym_alias_directive] = STATE(105),
    [sym_unalias_directive] = STATE(105),
    [sym_alternates_directive] = STATE(105),
    [sym_unalternates_directive] = STATE(105),
    [sym_alternative_order_directive] = STATE(105),
    [sym_unalternative_order_directive] = STATE(105),
    [sym_attachments_directive] = STATE(105),
    [sym_unattachments_directive] = STATE(105),
    [sym_auto_view_directive] = STATE(105),
    [sym_unauto_view_directive] = STATE(105),
    [sym_bind_directive] = STATE(105),
    [sym_unbind_directive] = STATE(105),
    [sym_charset_hook_directive] = STATE(105),
    [sym_iconv_hook_directive] = STATE(105),
    [sym_color_directive] = STATE(105),
    [sym_uncolor_directive] = STATE(105),
    [sym_crypt_hook_directive] = STATE(105),
    [sym_index_format_hook_directive] = STATE(105),
    [sym_exec_directive] = STATE(105),
    [sym_fcc_save_hook_directive] = STATE(105),
    [sym_fcc_hook_directive] = STATE(105),
    [sym_save_hook_directive] = STATE(105),
    [sym_folder_hook_directive] = STATE(105),
    [sym_group_directive] = STATE(105),
    [sym_ungroup_directive] = STATE(105),
    [sym_hdr_order_directive] = STATE(105),
    [sym_unhdr_order_directive] = STATE(105),
    [sym_ifdef_directive] = STATE(105),
    [sym_ifndef_directive] = STATE(105),
    [sym_finish_directive] = STATE(105),
    [sym_ignore_directive] = STATE(105),
    [sym_unignore_directive] = STATE(105),
    [sym_lists_directive] = STATE(105),
    [sym_unlists_directive] = STATE(105),
    [sym_subscribe_directive] = STATE(105),
    [sym_unsubscribe_directive] = STATE(105),
    [sym_macro_directive] = STATE(105),
    [sym_unmacro_directive] = STATE(105),
    [sym_mailboxes_directive] = STATE(105),
    [sym_named_mailboxes_directive] = STATE(105),
    [sym_unmailboxes_directive] = STATE(105),
    [sym_mailto_allow_directive] = STATE(105),
    [sym_unmailto_allow_directive] = STATE(105),
    [sym_echo_directive] = STATE(105),
    [sym_cd_directive] = STATE(105),
    [sym_mbox_hook_directive] = STATE(105),
    [sym_message_hook_directive] = STATE(105),
    [sym_mime_lookup_directive] = STATE(105),
    [sym_unmime_lookup_directive] = STATE(105),
    [sym_mono_directive] = STATE(105),
    [sym_unmono_directive] = STATE(105),
    [sym_my_hdr_directive] = STATE(105),
    [sym_unmy_hdr_directive] = STATE(105),
    [sym_open_hook_directive] = STATE(105),
    [sym_close_hook_directive] = STATE(105),
    [sym_append_hook_directive] = STATE(105),
    [sym_push_directive] = STATE(105),
    [sym_reply_hook_directive] = STATE(105),
    [sym_send_hook_directive] = STATE(105),
    [sym_send2_hook_directive] = STATE(105),
    [sym_spam_directive] = STATE(105),
    [sym_nospam_directive] = STATE(105),
    [sym_subjectrx_directive] = STATE(105),
    [sym_unsubjectrx_directive] = STATE(105),
    [sym_subscribe_to_directive] = STATE(105),
    [sym_unsubscribe_from_directive] = STATE(105),
    [sym_timeout_hook_directive] = STATE(105),
    [sym_startup_hook_directive] = STATE(105),
    [sym_shutdown_hook_directive] = STATE(105),
    [sym_unhook_directive] = STATE(105),
    [sym_set_directive] = STATE(105),
    [sym_unset_directive] = STATE(105),
    [sym_reset_directive] = STATE(105),
    [sym_toggle_directive] = STATE(105),
    [sym_setenv_directive] = STATE(105),
    [sym_unsetenv_directive] = STATE(105),
    [sym_sidebar_pin_directive] = STATE(105),
    [sym_sidebar_unpin_directive] = STATE(105),
    [sym_score_directive] = STATE(105),
    [sym_unscore_directive] = STATE(105),
    [sym_source_directive] = STATE(105),
    [sym__space] = STATE(461),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_charset_DASHhook] = ACTIONS(31),
    [anon_sym_iconv_DASHhook] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(35),
    [anon_sym_uncolor] = ACTIONS(37),
    [anon_sym_crypt_DASHhook] = ACTIONS(39),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(41),
    [anon_sym_exec] = ACTIONS(43),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(45),
    [anon_sym_fcc_DASHhook] = ACTIONS(47),
    [anon_sym_save_DASHhook] = ACTIONS(49),
    [anon_sym_folder_DASHhook] = ACTIONS(51),
    [anon_sym_group] = ACTIONS(53),
    [anon_sym_ungroup] = ACTIONS(55),
    [anon_sym_hdr_order] = ACTIONS(57),
    [anon_sym_unhdr_order] = ACTIONS(59),
    [anon_sym_ifdef] = ACTIONS(61),
    [anon_sym_ifndef] = ACTIONS(63),
    [anon_sym_finish] = ACTIONS(65),
    [anon_sym_ignore] = ACTIONS(67),
    [anon_sym_unignore] = ACTIONS(69),
    [anon_sym_lists] = ACTIONS(71),
    [anon_sym_unlists] = ACTIONS(73),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(79),
    [anon_sym_unmacro] = ACTIONS(81),
    [anon_sym_mailboxes] = ACTIONS(83),
    [anon_sym_named_DASHmailboxes] = ACTIONS(85),
    [anon_sym_unmailboxes] = ACTIONS(87),
    [anon_sym_mailto_allow] = ACTIONS(89),
    [anon_sym_unmailto_allow] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(93),
    [anon_sym_cd] = ACTIONS(95),
    [anon_sym_mbox_DASHhook] = ACTIONS(97),
    [anon_sym_message_DASHhook] = ACTIONS(99),
    [anon_sym_mime_lookup] = ACTIONS(101),
    [anon_sym_unmime_lookup] = ACTIONS(103),
    [anon_sym_mono] = ACTIONS(105),
    [anon_sym_unmono] = ACTIONS(107),
    [anon_sym_my_hdr] = ACTIONS(109),
    [anon_sym_unmy_hdr] = ACTIONS(111),
    [anon_sym_open_DASHhook] = ACTIONS(113),
    [anon_sym_close_DASHhook] = ACTIONS(115),
    [anon_sym_append_DASHhook] = ACTIONS(117),
    [anon_sym_push] = ACTIONS(119),
    [anon_sym_reply_DASHhook] = ACTIONS(121),
    [anon_sym_send_DASHhook] = ACTIONS(123),
    [anon_sym_send2_DASHhook] = ACTIONS(125),
    [anon_sym_spam] = ACTIONS(127),
    [anon_sym_nospam] = ACTIONS(129),
    [anon_sym_subjectrx] = ACTIONS(131),
    [anon_sym_unsubjectrx] = ACTIONS(133),
    [anon_sym_subscribe_DASHto] = ACTIONS(135),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(137),
    [anon_sym_timeout_DASHhook] = ACTIONS(139),
    [anon_sym_startup_DASHhook] = ACTIONS(141),
    [anon_sym_shutdown_DASHhook] = ACTIONS(143),
    [anon_sym_unhook] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(151),
    [anon_sym_toggle] = ACTIONS(153),
    [anon_sym_setenv] = ACTIONS(155),
    [anon_sym_unsetenv] = ACTIONS(157),
    [anon_sym_sidebar_pin] = ACTIONS(159),
    [anon_sym_sidebar_unpin] = ACTIONS(161),
    [anon_sym_score] = ACTIONS(163),
    [anon_sym_unscore] = ACTIONS(165),
    [anon_sym_source] = ACTIONS(167),
    [sym_comment] = ACTIONS(169),
    [sym__eol] = ACTIONS(434),
    [aux_sym__space_token1] = ACTIONS(173),
  },
  [4] = {
    [sym__command] = STATE(383),
    [sym_account_hook_directive] = STATE(383),
    [sym_alias_directive] = STATE(383),
    [sym_unalias_directive] = STATE(383),
    [sym_alternates_directive] = STATE(383),
    [sym_unalternates_directive] = STATE(383),
    [sym_alternative_order_directive] = STATE(383),
    [sym_unalternative_order_directive] = STATE(383),
    [sym_attachments_directive] = STATE(383),
    [sym_unattachments_directive] = STATE(383),
    [sym_auto_view_directive] = STATE(383),
    [sym_unauto_view_directive] = STATE(383),
    [sym_bind_directive] = STATE(383),
    [sym_unbind_directive] = STATE(383),
    [sym_charset_hook_directive] = STATE(383),
    [sym_iconv_hook_directive] = STATE(383),
    [sym_color_directive] = STATE(383),
    [sym_uncolor_directive] = STATE(383),
    [sym_crypt_hook_directive] = STATE(383),
    [sym_index_format_hook_directive] = STATE(383),
    [sym_exec_directive] = STATE(383),
    [sym_fcc_save_hook_directive] = STATE(383),
    [sym_fcc_hook_directive] = STATE(383),
    [sym_save_hook_directive] = STATE(383),
    [sym_folder_hook_directive] = STATE(383),
    [sym_group_directive] = STATE(383),
    [sym_ungroup_directive] = STATE(383),
    [sym_hdr_order_directive] = STATE(383),
    [sym_unhdr_order_directive] = STATE(383),
    [sym_ifdef_directive] = STATE(383),
    [sym_ifndef_directive] = STATE(383),
    [sym_finish_directive] = STATE(383),
    [sym_ignore_directive] = STATE(383),
    [sym_unignore_directive] = STATE(383),
    [sym_lists_directive] = STATE(383),
    [sym_unlists_directive] = STATE(383),
    [sym_subscribe_directive] = STATE(383),
    [sym_unsubscribe_directive] = STATE(383),
    [sym_macro_directive] = STATE(383),
    [sym_unmacro_directive] = STATE(383),
    [sym_mailboxes_directive] = STATE(383),
    [sym_named_mailboxes_directive] = STATE(383),
    [sym_unmailboxes_directive] = STATE(383),
    [sym_mailto_allow_directive] = STATE(383),
    [sym_unmailto_allow_directive] = STATE(383),
    [sym_echo_directive] = STATE(383),
    [sym_cd_directive] = STATE(383),
    [sym_mbox_hook_directive] = STATE(383),
    [sym_message_hook_directive] = STATE(383),
    [sym_mime_lookup_directive] = STATE(383),
    [sym_unmime_lookup_directive] = STATE(383),
    [sym_mono_directive] = STATE(383),
    [sym_unmono_directive] = STATE(383),
    [sym_my_hdr_directive] = STATE(383),
    [sym_unmy_hdr_directive] = STATE(383),
    [sym_open_hook_directive] = STATE(383),
    [sym_close_hook_directive] = STATE(383),
    [sym_append_hook_directive] = STATE(383),
    [sym_push_directive] = STATE(383),
    [sym_reply_hook_directive] = STATE(383),
    [sym_send_hook_directive] = STATE(383),
    [sym_send2_hook_directive] = STATE(383),
    [sym_spam_directive] = STATE(383),
    [sym_nospam_directive] = STATE(383),
    [sym_subjectrx_directive] = STATE(383),
    [sym_unsubjectrx_directive] = STATE(383),
    [sym_subscribe_to_directive] = STATE(383),
    [sym_unsubscribe_from_directive] = STATE(383),
    [sym_timeout_hook_directive] = STATE(383),
    [sym_startup_hook_directive] = STATE(383),
    [sym_shutdown_hook_directive] = STATE(383),
    [sym_unhook_directive] = STATE(383),
    [sym_set_directive] = STATE(383),
    [sym_unset_directive] = STATE(383),
    [sym_reset_directive] = STATE(383),
    [sym_toggle_directive] = STATE(383),
    [sym_setenv_directive] = STATE(383),
    [sym_unsetenv_directive] = STATE(383),
    [sym_sidebar_pin_directive] = STATE(383),
    [sym_sidebar_unpin_directive] = STATE(383),
    [sym_score_directive] = STATE(383),
    [sym_unscore_directive] = STATE(383),
    [sym_source_directive] = STATE(383),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [5] = {
    [sym__command] = STATE(333),
    [sym_account_hook_directive] = STATE(333),
    [sym_alias_directive] = STATE(333),
    [sym_unalias_directive] = STATE(333),
    [sym_alternates_directive] = STATE(333),
    [sym_unalternates_directive] = STATE(333),
    [sym_alternative_order_directive] = STATE(333),
    [sym_unalternative_order_directive] = STATE(333),
    [sym_attachments_directive] = STATE(333),
    [sym_unattachments_directive] = STATE(333),
    [sym_auto_view_directive] = STATE(333),
    [sym_unauto_view_directive] = STATE(333),
    [sym_bind_directive] = STATE(333),
    [sym_unbind_directive] = STATE(333),
    [sym_charset_hook_directive] = STATE(333),
    [sym_iconv_hook_directive] = STATE(333),
    [sym_color_directive] = STATE(333),
    [sym_uncolor_directive] = STATE(333),
    [sym_crypt_hook_directive] = STATE(333),
    [sym_index_format_hook_directive] = STATE(333),
    [sym_exec_directive] = STATE(333),
    [sym_fcc_save_hook_directive] = STATE(333),
    [sym_fcc_hook_directive] = STATE(333),
    [sym_save_hook_directive] = STATE(333),
    [sym_folder_hook_directive] = STATE(333),
    [sym_group_directive] = STATE(333),
    [sym_ungroup_directive] = STATE(333),
    [sym_hdr_order_directive] = STATE(333),
    [sym_unhdr_order_directive] = STATE(333),
    [sym_ifdef_directive] = STATE(333),
    [sym_ifndef_directive] = STATE(333),
    [sym_finish_directive] = STATE(333),
    [sym_ignore_directive] = STATE(333),
    [sym_unignore_directive] = STATE(333),
    [sym_lists_directive] = STATE(333),
    [sym_unlists_directive] = STATE(333),
    [sym_subscribe_directive] = STATE(333),
    [sym_unsubscribe_directive] = STATE(333),
    [sym_macro_directive] = STATE(333),
    [sym_unmacro_directive] = STATE(333),
    [sym_mailboxes_directive] = STATE(333),
    [sym_named_mailboxes_directive] = STATE(333),
    [sym_unmailboxes_directive] = STATE(333),
    [sym_mailto_allow_directive] = STATE(333),
    [sym_unmailto_allow_directive] = STATE(333),
    [sym_echo_directive] = STATE(333),
    [sym_cd_directive] = STATE(333),
    [sym_mbox_hook_directive] = STATE(333),
    [sym_message_hook_directive] = STATE(333),
    [sym_mime_lookup_directive] = STATE(333),
    [sym_unmime_lookup_directive] = STATE(333),
    [sym_mono_directive] = STATE(333),
    [sym_unmono_directive] = STATE(333),
    [sym_my_hdr_directive] = STATE(333),
    [sym_unmy_hdr_directive] = STATE(333),
    [sym_open_hook_directive] = STATE(333),
    [sym_close_hook_directive] = STATE(333),
    [sym_append_hook_directive] = STATE(333),
    [sym_push_directive] = STATE(333),
    [sym_reply_hook_directive] = STATE(333),
    [sym_send_hook_directive] = STATE(333),
    [sym_send2_hook_directive] = STATE(333),
    [sym_spam_directive] = STATE(333),
    [sym_nospam_directive] = STATE(333),
    [sym_subjectrx_directive] = STATE(333),
    [sym_unsubjectrx_directive] = STATE(333),
    [sym_subscribe_to_directive] = STATE(333),
    [sym_unsubscribe_from_directive] = STATE(333),
    [sym_timeout_hook_directive] = STATE(333),
    [sym_startup_hook_directive] = STATE(333),
    [sym_shutdown_hook_directive] = STATE(333),
    [sym_unhook_directive] = STATE(333),
    [sym_set_directive] = STATE(333),
    [sym_unset_directive] = STATE(333),
    [sym_reset_directive] = STATE(333),
    [sym_toggle_directive] = STATE(333),
    [sym_setenv_directive] = STATE(333),
    [sym_unsetenv_directive] = STATE(333),
    [sym_sidebar_pin_directive] = STATE(333),
    [sym_sidebar_unpin_directive] = STATE(333),
    [sym_score_directive] = STATE(333),
    [sym_unscore_directive] = STATE(333),
    [sym_source_directive] = STATE(333),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [6] = {
    [sym__command] = STATE(342),
    [sym_account_hook_directive] = STATE(342),
    [sym_alias_directive] = STATE(342),
    [sym_unalias_directive] = STATE(342),
    [sym_alternates_directive] = STATE(342),
    [sym_unalternates_directive] = STATE(342),
    [sym_alternative_order_directive] = STATE(342),
    [sym_unalternative_order_directive] = STATE(342),
    [sym_attachments_directive] = STATE(342),
    [sym_unattachments_directive] = STATE(342),
    [sym_auto_view_directive] = STATE(342),
    [sym_unauto_view_directive] = STATE(342),
    [sym_bind_directive] = STATE(342),
    [sym_unbind_directive] = STATE(342),
    [sym_charset_hook_directive] = STATE(342),
    [sym_iconv_hook_directive] = STATE(342),
    [sym_color_directive] = STATE(342),
    [sym_uncolor_directive] = STATE(342),
    [sym_crypt_hook_directive] = STATE(342),
    [sym_index_format_hook_directive] = STATE(342),
    [sym_exec_directive] = STATE(342),
    [sym_fcc_save_hook_directive] = STATE(342),
    [sym_fcc_hook_directive] = STATE(342),
    [sym_save_hook_directive] = STATE(342),
    [sym_folder_hook_directive] = STATE(342),
    [sym_group_directive] = STATE(342),
    [sym_ungroup_directive] = STATE(342),
    [sym_hdr_order_directive] = STATE(342),
    [sym_unhdr_order_directive] = STATE(342),
    [sym_ifdef_directive] = STATE(342),
    [sym_ifndef_directive] = STATE(342),
    [sym_finish_directive] = STATE(342),
    [sym_ignore_directive] = STATE(342),
    [sym_unignore_directive] = STATE(342),
    [sym_lists_directive] = STATE(342),
    [sym_unlists_directive] = STATE(342),
    [sym_subscribe_directive] = STATE(342),
    [sym_unsubscribe_directive] = STATE(342),
    [sym_macro_directive] = STATE(342),
    [sym_unmacro_directive] = STATE(342),
    [sym_mailboxes_directive] = STATE(342),
    [sym_named_mailboxes_directive] = STATE(342),
    [sym_unmailboxes_directive] = STATE(342),
    [sym_mailto_allow_directive] = STATE(342),
    [sym_unmailto_allow_directive] = STATE(342),
    [sym_echo_directive] = STATE(342),
    [sym_cd_directive] = STATE(342),
    [sym_mbox_hook_directive] = STATE(342),
    [sym_message_hook_directive] = STATE(342),
    [sym_mime_lookup_directive] = STATE(342),
    [sym_unmime_lookup_directive] = STATE(342),
    [sym_mono_directive] = STATE(342),
    [sym_unmono_directive] = STATE(342),
    [sym_my_hdr_directive] = STATE(342),
    [sym_unmy_hdr_directive] = STATE(342),
    [sym_open_hook_directive] = STATE(342),
    [sym_close_hook_directive] = STATE(342),
    [sym_append_hook_directive] = STATE(342),
    [sym_push_directive] = STATE(342),
    [sym_reply_hook_directive] = STATE(342),
    [sym_send_hook_directive] = STATE(342),
    [sym_send2_hook_directive] = STATE(342),
    [sym_spam_directive] = STATE(342),
    [sym_nospam_directive] = STATE(342),
    [sym_subjectrx_directive] = STATE(342),
    [sym_unsubjectrx_directive] = STATE(342),
    [sym_subscribe_to_directive] = STATE(342),
    [sym_unsubscribe_from_directive] = STATE(342),
    [sym_timeout_hook_directive] = STATE(342),
    [sym_startup_hook_directive] = STATE(342),
    [sym_shutdown_hook_directive] = STATE(342),
    [sym_unhook_directive] = STATE(342),
    [sym_set_directive] = STATE(342),
    [sym_unset_directive] = STATE(342),
    [sym_reset_directive] = STATE(342),
    [sym_toggle_directive] = STATE(342),
    [sym_setenv_directive] = STATE(342),
    [sym_unsetenv_directive] = STATE(342),
    [sym_sidebar_pin_directive] = STATE(342),
    [sym_sidebar_unpin_directive] = STATE(342),
    [sym_score_directive] = STATE(342),
    [sym_unscore_directive] = STATE(342),
    [sym_source_directive] = STATE(342),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [7] = {
    [sym__command] = STATE(408),
    [sym_account_hook_directive] = STATE(408),
    [sym_alias_directive] = STATE(408),
    [sym_unalias_directive] = STATE(408),
    [sym_alternates_directive] = STATE(408),
    [sym_unalternates_directive] = STATE(408),
    [sym_alternative_order_directive] = STATE(408),
    [sym_unalternative_order_directive] = STATE(408),
    [sym_attachments_directive] = STATE(408),
    [sym_unattachments_directive] = STATE(408),
    [sym_auto_view_directive] = STATE(408),
    [sym_unauto_view_directive] = STATE(408),
    [sym_bind_directive] = STATE(408),
    [sym_unbind_directive] = STATE(408),
    [sym_charset_hook_directive] = STATE(408),
    [sym_iconv_hook_directive] = STATE(408),
    [sym_color_directive] = STATE(408),
    [sym_uncolor_directive] = STATE(408),
    [sym_crypt_hook_directive] = STATE(408),
    [sym_index_format_hook_directive] = STATE(408),
    [sym_exec_directive] = STATE(408),
    [sym_fcc_save_hook_directive] = STATE(408),
    [sym_fcc_hook_directive] = STATE(408),
    [sym_save_hook_directive] = STATE(408),
    [sym_folder_hook_directive] = STATE(408),
    [sym_group_directive] = STATE(408),
    [sym_ungroup_directive] = STATE(408),
    [sym_hdr_order_directive] = STATE(408),
    [sym_unhdr_order_directive] = STATE(408),
    [sym_ifdef_directive] = STATE(408),
    [sym_ifndef_directive] = STATE(408),
    [sym_finish_directive] = STATE(408),
    [sym_ignore_directive] = STATE(408),
    [sym_unignore_directive] = STATE(408),
    [sym_lists_directive] = STATE(408),
    [sym_unlists_directive] = STATE(408),
    [sym_subscribe_directive] = STATE(408),
    [sym_unsubscribe_directive] = STATE(408),
    [sym_macro_directive] = STATE(408),
    [sym_unmacro_directive] = STATE(408),
    [sym_mailboxes_directive] = STATE(408),
    [sym_named_mailboxes_directive] = STATE(408),
    [sym_unmailboxes_directive] = STATE(408),
    [sym_mailto_allow_directive] = STATE(408),
    [sym_unmailto_allow_directive] = STATE(408),
    [sym_echo_directive] = STATE(408),
    [sym_cd_directive] = STATE(408),
    [sym_mbox_hook_directive] = STATE(408),
    [sym_message_hook_directive] = STATE(408),
    [sym_mime_lookup_directive] = STATE(408),
    [sym_unmime_lookup_directive] = STATE(408),
    [sym_mono_directive] = STATE(408),
    [sym_unmono_directive] = STATE(408),
    [sym_my_hdr_directive] = STATE(408),
    [sym_unmy_hdr_directive] = STATE(408),
    [sym_open_hook_directive] = STATE(408),
    [sym_close_hook_directive] = STATE(408),
    [sym_append_hook_directive] = STATE(408),
    [sym_push_directive] = STATE(408),
    [sym_reply_hook_directive] = STATE(408),
    [sym_send_hook_directive] = STATE(408),
    [sym_send2_hook_directive] = STATE(408),
    [sym_spam_directive] = STATE(408),
    [sym_nospam_directive] = STATE(408),
    [sym_subjectrx_directive] = STATE(408),
    [sym_unsubjectrx_directive] = STATE(408),
    [sym_subscribe_to_directive] = STATE(408),
    [sym_unsubscribe_from_directive] = STATE(408),
    [sym_timeout_hook_directive] = STATE(408),
    [sym_startup_hook_directive] = STATE(408),
    [sym_shutdown_hook_directive] = STATE(408),
    [sym_unhook_directive] = STATE(408),
    [sym_set_directive] = STATE(408),
    [sym_unset_directive] = STATE(408),
    [sym_reset_directive] = STATE(408),
    [sym_toggle_directive] = STATE(408),
    [sym_setenv_directive] = STATE(408),
    [sym_unsetenv_directive] = STATE(408),
    [sym_sidebar_pin_directive] = STATE(408),
    [sym_sidebar_unpin_directive] = STATE(408),
    [sym_score_directive] = STATE(408),
    [sym_unscore_directive] = STATE(408),
    [sym_source_directive] = STATE(408),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [8] = {
    [sym__command] = STATE(409),
    [sym_account_hook_directive] = STATE(409),
    [sym_alias_directive] = STATE(409),
    [sym_unalias_directive] = STATE(409),
    [sym_alternates_directive] = STATE(409),
    [sym_unalternates_directive] = STATE(409),
    [sym_alternative_order_directive] = STATE(409),
    [sym_unalternative_order_directive] = STATE(409),
    [sym_attachments_directive] = STATE(409),
    [sym_unattachments_directive] = STATE(409),
    [sym_auto_view_directive] = STATE(409),
    [sym_unauto_view_directive] = STATE(409),
    [sym_bind_directive] = STATE(409),
    [sym_unbind_directive] = STATE(409),
    [sym_charset_hook_directive] = STATE(409),
    [sym_iconv_hook_directive] = STATE(409),
    [sym_color_directive] = STATE(409),
    [sym_uncolor_directive] = STATE(409),
    [sym_crypt_hook_directive] = STATE(409),
    [sym_index_format_hook_directive] = STATE(409),
    [sym_exec_directive] = STATE(409),
    [sym_fcc_save_hook_directive] = STATE(409),
    [sym_fcc_hook_directive] = STATE(409),
    [sym_save_hook_directive] = STATE(409),
    [sym_folder_hook_directive] = STATE(409),
    [sym_group_directive] = STATE(409),
    [sym_ungroup_directive] = STATE(409),
    [sym_hdr_order_directive] = STATE(409),
    [sym_unhdr_order_directive] = STATE(409),
    [sym_ifdef_directive] = STATE(409),
    [sym_ifndef_directive] = STATE(409),
    [sym_finish_directive] = STATE(409),
    [sym_ignore_directive] = STATE(409),
    [sym_unignore_directive] = STATE(409),
    [sym_lists_directive] = STATE(409),
    [sym_unlists_directive] = STATE(409),
    [sym_subscribe_directive] = STATE(409),
    [sym_unsubscribe_directive] = STATE(409),
    [sym_macro_directive] = STATE(409),
    [sym_unmacro_directive] = STATE(409),
    [sym_mailboxes_directive] = STATE(409),
    [sym_named_mailboxes_directive] = STATE(409),
    [sym_unmailboxes_directive] = STATE(409),
    [sym_mailto_allow_directive] = STATE(409),
    [sym_unmailto_allow_directive] = STATE(409),
    [sym_echo_directive] = STATE(409),
    [sym_cd_directive] = STATE(409),
    [sym_mbox_hook_directive] = STATE(409),
    [sym_message_hook_directive] = STATE(409),
    [sym_mime_lookup_directive] = STATE(409),
    [sym_unmime_lookup_directive] = STATE(409),
    [sym_mono_directive] = STATE(409),
    [sym_unmono_directive] = STATE(409),
    [sym_my_hdr_directive] = STATE(409),
    [sym_unmy_hdr_directive] = STATE(409),
    [sym_open_hook_directive] = STATE(409),
    [sym_close_hook_directive] = STATE(409),
    [sym_append_hook_directive] = STATE(409),
    [sym_push_directive] = STATE(409),
    [sym_reply_hook_directive] = STATE(409),
    [sym_send_hook_directive] = STATE(409),
    [sym_send2_hook_directive] = STATE(409),
    [sym_spam_directive] = STATE(409),
    [sym_nospam_directive] = STATE(409),
    [sym_subjectrx_directive] = STATE(409),
    [sym_unsubjectrx_directive] = STATE(409),
    [sym_subscribe_to_directive] = STATE(409),
    [sym_unsubscribe_from_directive] = STATE(409),
    [sym_timeout_hook_directive] = STATE(409),
    [sym_startup_hook_directive] = STATE(409),
    [sym_shutdown_hook_directive] = STATE(409),
    [sym_unhook_directive] = STATE(409),
    [sym_set_directive] = STATE(409),
    [sym_unset_directive] = STATE(409),
    [sym_reset_directive] = STATE(409),
    [sym_toggle_directive] = STATE(409),
    [sym_setenv_directive] = STATE(409),
    [sym_unsetenv_directive] = STATE(409),
    [sym_sidebar_pin_directive] = STATE(409),
    [sym_sidebar_unpin_directive] = STATE(409),
    [sym_score_directive] = STATE(409),
    [sym_unscore_directive] = STATE(409),
    [sym_source_directive] = STATE(409),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [9] = {
    [sym__command] = STATE(405),
    [sym_account_hook_directive] = STATE(405),
    [sym_alias_directive] = STATE(405),
    [sym_unalias_directive] = STATE(405),
    [sym_alternates_directive] = STATE(405),
    [sym_unalternates_directive] = STATE(405),
    [sym_alternative_order_directive] = STATE(405),
    [sym_unalternative_order_directive] = STATE(405),
    [sym_attachments_directive] = STATE(405),
    [sym_unattachments_directive] = STATE(405),
    [sym_auto_view_directive] = STATE(405),
    [sym_unauto_view_directive] = STATE(405),
    [sym_bind_directive] = STATE(405),
    [sym_unbind_directive] = STATE(405),
    [sym_charset_hook_directive] = STATE(405),
    [sym_iconv_hook_directive] = STATE(405),
    [sym_color_directive] = STATE(405),
    [sym_uncolor_directive] = STATE(405),
    [sym_crypt_hook_directive] = STATE(405),
    [sym_index_format_hook_directive] = STATE(405),
    [sym_exec_directive] = STATE(405),
    [sym_fcc_save_hook_directive] = STATE(405),
    [sym_fcc_hook_directive] = STATE(405),
    [sym_save_hook_directive] = STATE(405),
    [sym_folder_hook_directive] = STATE(405),
    [sym_group_directive] = STATE(405),
    [sym_ungroup_directive] = STATE(405),
    [sym_hdr_order_directive] = STATE(405),
    [sym_unhdr_order_directive] = STATE(405),
    [sym_ifdef_directive] = STATE(405),
    [sym_ifndef_directive] = STATE(405),
    [sym_finish_directive] = STATE(405),
    [sym_ignore_directive] = STATE(405),
    [sym_unignore_directive] = STATE(405),
    [sym_lists_directive] = STATE(405),
    [sym_unlists_directive] = STATE(405),
    [sym_subscribe_directive] = STATE(405),
    [sym_unsubscribe_directive] = STATE(405),
    [sym_macro_directive] = STATE(405),
    [sym_unmacro_directive] = STATE(405),
    [sym_mailboxes_directive] = STATE(405),
    [sym_named_mailboxes_directive] = STATE(405),
    [sym_unmailboxes_directive] = STATE(405),
    [sym_mailto_allow_directive] = STATE(405),
    [sym_unmailto_allow_directive] = STATE(405),
    [sym_echo_directive] = STATE(405),
    [sym_cd_directive] = STATE(405),
    [sym_mbox_hook_directive] = STATE(405),
    [sym_message_hook_directive] = STATE(405),
    [sym_mime_lookup_directive] = STATE(405),
    [sym_unmime_lookup_directive] = STATE(405),
    [sym_mono_directive] = STATE(405),
    [sym_unmono_directive] = STATE(405),
    [sym_my_hdr_directive] = STATE(405),
    [sym_unmy_hdr_directive] = STATE(405),
    [sym_open_hook_directive] = STATE(405),
    [sym_close_hook_directive] = STATE(405),
    [sym_append_hook_directive] = STATE(405),
    [sym_push_directive] = STATE(405),
    [sym_reply_hook_directive] = STATE(405),
    [sym_send_hook_directive] = STATE(405),
    [sym_send2_hook_directive] = STATE(405),
    [sym_spam_directive] = STATE(405),
    [sym_nospam_directive] = STATE(405),
    [sym_subjectrx_directive] = STATE(405),
    [sym_unsubjectrx_directive] = STATE(405),
    [sym_subscribe_to_directive] = STATE(405),
    [sym_unsubscribe_from_directive] = STATE(405),
    [sym_timeout_hook_directive] = STATE(405),
    [sym_startup_hook_directive] = STATE(405),
    [sym_shutdown_hook_directive] = STATE(405),
    [sym_unhook_directive] = STATE(405),
    [sym_set_directive] = STATE(405),
    [sym_unset_directive] = STATE(405),
    [sym_reset_directive] = STATE(405),
    [sym_toggle_directive] = STATE(405),
    [sym_setenv_directive] = STATE(405),
    [sym_unsetenv_directive] = STATE(405),
    [sym_sidebar_pin_directive] = STATE(405),
    [sym_sidebar_unpin_directive] = STATE(405),
    [sym_score_directive] = STATE(405),
    [sym_unscore_directive] = STATE(405),
    [sym_source_directive] = STATE(405),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [10] = {
    [sym__command] = STATE(310),
    [sym_account_hook_directive] = STATE(310),
    [sym_alias_directive] = STATE(310),
    [sym_unalias_directive] = STATE(310),
    [sym_alternates_directive] = STATE(310),
    [sym_unalternates_directive] = STATE(310),
    [sym_alternative_order_directive] = STATE(310),
    [sym_unalternative_order_directive] = STATE(310),
    [sym_attachments_directive] = STATE(310),
    [sym_unattachments_directive] = STATE(310),
    [sym_auto_view_directive] = STATE(310),
    [sym_unauto_view_directive] = STATE(310),
    [sym_bind_directive] = STATE(310),
    [sym_unbind_directive] = STATE(310),
    [sym_charset_hook_directive] = STATE(310),
    [sym_iconv_hook_directive] = STATE(310),
    [sym_color_directive] = STATE(310),
    [sym_uncolor_directive] = STATE(310),
    [sym_crypt_hook_directive] = STATE(310),
    [sym_index_format_hook_directive] = STATE(310),
    [sym_exec_directive] = STATE(310),
    [sym_fcc_save_hook_directive] = STATE(310),
    [sym_fcc_hook_directive] = STATE(310),
    [sym_save_hook_directive] = STATE(310),
    [sym_folder_hook_directive] = STATE(310),
    [sym_group_directive] = STATE(310),
    [sym_ungroup_directive] = STATE(310),
    [sym_hdr_order_directive] = STATE(310),
    [sym_unhdr_order_directive] = STATE(310),
    [sym_ifdef_directive] = STATE(310),
    [sym_ifndef_directive] = STATE(310),
    [sym_finish_directive] = STATE(310),
    [sym_ignore_directive] = STATE(310),
    [sym_unignore_directive] = STATE(310),
    [sym_lists_directive] = STATE(310),
    [sym_unlists_directive] = STATE(310),
    [sym_subscribe_directive] = STATE(310),
    [sym_unsubscribe_directive] = STATE(310),
    [sym_macro_directive] = STATE(310),
    [sym_unmacro_directive] = STATE(310),
    [sym_mailboxes_directive] = STATE(310),
    [sym_named_mailboxes_directive] = STATE(310),
    [sym_unmailboxes_directive] = STATE(310),
    [sym_mailto_allow_directive] = STATE(310),
    [sym_unmailto_allow_directive] = STATE(310),
    [sym_echo_directive] = STATE(310),
    [sym_cd_directive] = STATE(310),
    [sym_mbox_hook_directive] = STATE(310),
    [sym_message_hook_directive] = STATE(310),
    [sym_mime_lookup_directive] = STATE(310),
    [sym_unmime_lookup_directive] = STATE(310),
    [sym_mono_directive] = STATE(310),
    [sym_unmono_directive] = STATE(310),
    [sym_my_hdr_directive] = STATE(310),
    [sym_unmy_hdr_directive] = STATE(310),
    [sym_open_hook_directive] = STATE(310),
    [sym_close_hook_directive] = STATE(310),
    [sym_append_hook_directive] = STATE(310),
    [sym_push_directive] = STATE(310),
    [sym_reply_hook_directive] = STATE(310),
    [sym_send_hook_directive] = STATE(310),
    [sym_send2_hook_directive] = STATE(310),
    [sym_spam_directive] = STATE(310),
    [sym_nospam_directive] = STATE(310),
    [sym_subjectrx_directive] = STATE(310),
    [sym_unsubjectrx_directive] = STATE(310),
    [sym_subscribe_to_directive] = STATE(310),
    [sym_unsubscribe_from_directive] = STATE(310),
    [sym_timeout_hook_directive] = STATE(310),
    [sym_startup_hook_directive] = STATE(310),
    [sym_shutdown_hook_directive] = STATE(310),
    [sym_unhook_directive] = STATE(310),
    [sym_set_directive] = STATE(310),
    [sym_unset_directive] = STATE(310),
    [sym_reset_directive] = STATE(310),
    [sym_toggle_directive] = STATE(310),
    [sym_setenv_directive] = STATE(310),
    [sym_unsetenv_directive] = STATE(310),
    [sym_sidebar_pin_directive] = STATE(310),
    [sym_sidebar_unpin_directive] = STATE(310),
    [sym_score_directive] = STATE(310),
    [sym_unscore_directive] = STATE(310),
    [sym_source_directive] = STATE(310),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [11] = {
    [sym__command] = STATE(326),
    [sym_account_hook_directive] = STATE(326),
    [sym_alias_directive] = STATE(326),
    [sym_unalias_directive] = STATE(326),
    [sym_alternates_directive] = STATE(326),
    [sym_unalternates_directive] = STATE(326),
    [sym_alternative_order_directive] = STATE(326),
    [sym_unalternative_order_directive] = STATE(326),
    [sym_attachments_directive] = STATE(326),
    [sym_unattachments_directive] = STATE(326),
    [sym_auto_view_directive] = STATE(326),
    [sym_unauto_view_directive] = STATE(326),
    [sym_bind_directive] = STATE(326),
    [sym_unbind_directive] = STATE(326),
    [sym_charset_hook_directive] = STATE(326),
    [sym_iconv_hook_directive] = STATE(326),
    [sym_color_directive] = STATE(326),
    [sym_uncolor_directive] = STATE(326),
    [sym_crypt_hook_directive] = STATE(326),
    [sym_index_format_hook_directive] = STATE(326),
    [sym_exec_directive] = STATE(326),
    [sym_fcc_save_hook_directive] = STATE(326),
    [sym_fcc_hook_directive] = STATE(326),
    [sym_save_hook_directive] = STATE(326),
    [sym_folder_hook_directive] = STATE(326),
    [sym_group_directive] = STATE(326),
    [sym_ungroup_directive] = STATE(326),
    [sym_hdr_order_directive] = STATE(326),
    [sym_unhdr_order_directive] = STATE(326),
    [sym_ifdef_directive] = STATE(326),
    [sym_ifndef_directive] = STATE(326),
    [sym_finish_directive] = STATE(326),
    [sym_ignore_directive] = STATE(326),
    [sym_unignore_directive] = STATE(326),
    [sym_lists_directive] = STATE(326),
    [sym_unlists_directive] = STATE(326),
    [sym_subscribe_directive] = STATE(326),
    [sym_unsubscribe_directive] = STATE(326),
    [sym_macro_directive] = STATE(326),
    [sym_unmacro_directive] = STATE(326),
    [sym_mailboxes_directive] = STATE(326),
    [sym_named_mailboxes_directive] = STATE(326),
    [sym_unmailboxes_directive] = STATE(326),
    [sym_mailto_allow_directive] = STATE(326),
    [sym_unmailto_allow_directive] = STATE(326),
    [sym_echo_directive] = STATE(326),
    [sym_cd_directive] = STATE(326),
    [sym_mbox_hook_directive] = STATE(326),
    [sym_message_hook_directive] = STATE(326),
    [sym_mime_lookup_directive] = STATE(326),
    [sym_unmime_lookup_directive] = STATE(326),
    [sym_mono_directive] = STATE(326),
    [sym_unmono_directive] = STATE(326),
    [sym_my_hdr_directive] = STATE(326),
    [sym_unmy_hdr_directive] = STATE(326),
    [sym_open_hook_directive] = STATE(326),
    [sym_close_hook_directive] = STATE(326),
    [sym_append_hook_directive] = STATE(326),
    [sym_push_directive] = STATE(326),
    [sym_reply_hook_directive] = STATE(326),
    [sym_send_hook_directive] = STATE(326),
    [sym_send2_hook_directive] = STATE(326),
    [sym_spam_directive] = STATE(326),
    [sym_nospam_directive] = STATE(326),
    [sym_subjectrx_directive] = STATE(326),
    [sym_unsubjectrx_directive] = STATE(326),
    [sym_subscribe_to_directive] = STATE(326),
    [sym_unsubscribe_from_directive] = STATE(326),
    [sym_timeout_hook_directive] = STATE(326),
    [sym_startup_hook_directive] = STATE(326),
    [sym_shutdown_hook_directive] = STATE(326),
    [sym_unhook_directive] = STATE(326),
    [sym_set_directive] = STATE(326),
    [sym_unset_directive] = STATE(326),
    [sym_reset_directive] = STATE(326),
    [sym_toggle_directive] = STATE(326),
    [sym_setenv_directive] = STATE(326),
    [sym_unsetenv_directive] = STATE(326),
    [sym_sidebar_pin_directive] = STATE(326),
    [sym_sidebar_unpin_directive] = STATE(326),
    [sym_score_directive] = STATE(326),
    [sym_unscore_directive] = STATE(326),
    [sym_source_directive] = STATE(326),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [12] = {
    [sym__command] = STATE(372),
    [sym_account_hook_directive] = STATE(372),
    [sym_alias_directive] = STATE(372),
    [sym_unalias_directive] = STATE(372),
    [sym_alternates_directive] = STATE(372),
    [sym_unalternates_directive] = STATE(372),
    [sym_alternative_order_directive] = STATE(372),
    [sym_unalternative_order_directive] = STATE(372),
    [sym_attachments_directive] = STATE(372),
    [sym_unattachments_directive] = STATE(372),
    [sym_auto_view_directive] = STATE(372),
    [sym_unauto_view_directive] = STATE(372),
    [sym_bind_directive] = STATE(372),
    [sym_unbind_directive] = STATE(372),
    [sym_charset_hook_directive] = STATE(372),
    [sym_iconv_hook_directive] = STATE(372),
    [sym_color_directive] = STATE(372),
    [sym_uncolor_directive] = STATE(372),
    [sym_crypt_hook_directive] = STATE(372),
    [sym_index_format_hook_directive] = STATE(372),
    [sym_exec_directive] = STATE(372),
    [sym_fcc_save_hook_directive] = STATE(372),
    [sym_fcc_hook_directive] = STATE(372),
    [sym_save_hook_directive] = STATE(372),
    [sym_folder_hook_directive] = STATE(372),
    [sym_group_directive] = STATE(372),
    [sym_ungroup_directive] = STATE(372),
    [sym_hdr_order_directive] = STATE(372),
    [sym_unhdr_order_directive] = STATE(372),
    [sym_ifdef_directive] = STATE(372),
    [sym_ifndef_directive] = STATE(372),
    [sym_finish_directive] = STATE(372),
    [sym_ignore_directive] = STATE(372),
    [sym_unignore_directive] = STATE(372),
    [sym_lists_directive] = STATE(372),
    [sym_unlists_directive] = STATE(372),
    [sym_subscribe_directive] = STATE(372),
    [sym_unsubscribe_directive] = STATE(372),
    [sym_macro_directive] = STATE(372),
    [sym_unmacro_directive] = STATE(372),
    [sym_mailboxes_directive] = STATE(372),
    [sym_named_mailboxes_directive] = STATE(372),
    [sym_unmailboxes_directive] = STATE(372),
    [sym_mailto_allow_directive] = STATE(372),
    [sym_unmailto_allow_directive] = STATE(372),
    [sym_echo_directive] = STATE(372),
    [sym_cd_directive] = STATE(372),
    [sym_mbox_hook_directive] = STATE(372),
    [sym_message_hook_directive] = STATE(372),
    [sym_mime_lookup_directive] = STATE(372),
    [sym_unmime_lookup_directive] = STATE(372),
    [sym_mono_directive] = STATE(372),
    [sym_unmono_directive] = STATE(372),
    [sym_my_hdr_directive] = STATE(372),
    [sym_unmy_hdr_directive] = STATE(372),
    [sym_open_hook_directive] = STATE(372),
    [sym_close_hook_directive] = STATE(372),
    [sym_append_hook_directive] = STATE(372),
    [sym_push_directive] = STATE(372),
    [sym_reply_hook_directive] = STATE(372),
    [sym_send_hook_directive] = STATE(372),
    [sym_send2_hook_directive] = STATE(372),
    [sym_spam_directive] = STATE(372),
    [sym_nospam_directive] = STATE(372),
    [sym_subjectrx_directive] = STATE(372),
    [sym_unsubjectrx_directive] = STATE(372),
    [sym_subscribe_to_directive] = STATE(372),
    [sym_unsubscribe_from_directive] = STATE(372),
    [sym_timeout_hook_directive] = STATE(372),
    [sym_startup_hook_directive] = STATE(372),
    [sym_shutdown_hook_directive] = STATE(372),
    [sym_unhook_directive] = STATE(372),
    [sym_set_directive] = STATE(372),
    [sym_unset_directive] = STATE(372),
    [sym_reset_directive] = STATE(372),
    [sym_toggle_directive] = STATE(372),
    [sym_setenv_directive] = STATE(372),
    [sym_unsetenv_directive] = STATE(372),
    [sym_sidebar_pin_directive] = STATE(372),
    [sym_sidebar_unpin_directive] = STATE(372),
    [sym_score_directive] = STATE(372),
    [sym_unscore_directive] = STATE(372),
    [sym_source_directive] = STATE(372),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [13] = {
    [sym__command] = STATE(327),
    [sym_account_hook_directive] = STATE(327),
    [sym_alias_directive] = STATE(327),
    [sym_unalias_directive] = STATE(327),
    [sym_alternates_directive] = STATE(327),
    [sym_unalternates_directive] = STATE(327),
    [sym_alternative_order_directive] = STATE(327),
    [sym_unalternative_order_directive] = STATE(327),
    [sym_attachments_directive] = STATE(327),
    [sym_unattachments_directive] = STATE(327),
    [sym_auto_view_directive] = STATE(327),
    [sym_unauto_view_directive] = STATE(327),
    [sym_bind_directive] = STATE(327),
    [sym_unbind_directive] = STATE(327),
    [sym_charset_hook_directive] = STATE(327),
    [sym_iconv_hook_directive] = STATE(327),
    [sym_color_directive] = STATE(327),
    [sym_uncolor_directive] = STATE(327),
    [sym_crypt_hook_directive] = STATE(327),
    [sym_index_format_hook_directive] = STATE(327),
    [sym_exec_directive] = STATE(327),
    [sym_fcc_save_hook_directive] = STATE(327),
    [sym_fcc_hook_directive] = STATE(327),
    [sym_save_hook_directive] = STATE(327),
    [sym_folder_hook_directive] = STATE(327),
    [sym_group_directive] = STATE(327),
    [sym_ungroup_directive] = STATE(327),
    [sym_hdr_order_directive] = STATE(327),
    [sym_unhdr_order_directive] = STATE(327),
    [sym_ifdef_directive] = STATE(327),
    [sym_ifndef_directive] = STATE(327),
    [sym_finish_directive] = STATE(327),
    [sym_ignore_directive] = STATE(327),
    [sym_unignore_directive] = STATE(327),
    [sym_lists_directive] = STATE(327),
    [sym_unlists_directive] = STATE(327),
    [sym_subscribe_directive] = STATE(327),
    [sym_unsubscribe_directive] = STATE(327),
    [sym_macro_directive] = STATE(327),
    [sym_unmacro_directive] = STATE(327),
    [sym_mailboxes_directive] = STATE(327),
    [sym_named_mailboxes_directive] = STATE(327),
    [sym_unmailboxes_directive] = STATE(327),
    [sym_mailto_allow_directive] = STATE(327),
    [sym_unmailto_allow_directive] = STATE(327),
    [sym_echo_directive] = STATE(327),
    [sym_cd_directive] = STATE(327),
    [sym_mbox_hook_directive] = STATE(327),
    [sym_message_hook_directive] = STATE(327),
    [sym_mime_lookup_directive] = STATE(327),
    [sym_unmime_lookup_directive] = STATE(327),
    [sym_mono_directive] = STATE(327),
    [sym_unmono_directive] = STATE(327),
    [sym_my_hdr_directive] = STATE(327),
    [sym_unmy_hdr_directive] = STATE(327),
    [sym_open_hook_directive] = STATE(327),
    [sym_close_hook_directive] = STATE(327),
    [sym_append_hook_directive] = STATE(327),
    [sym_push_directive] = STATE(327),
    [sym_reply_hook_directive] = STATE(327),
    [sym_send_hook_directive] = STATE(327),
    [sym_send2_hook_directive] = STATE(327),
    [sym_spam_directive] = STATE(327),
    [sym_nospam_directive] = STATE(327),
    [sym_subjectrx_directive] = STATE(327),
    [sym_unsubjectrx_directive] = STATE(327),
    [sym_subscribe_to_directive] = STATE(327),
    [sym_unsubscribe_from_directive] = STATE(327),
    [sym_timeout_hook_directive] = STATE(327),
    [sym_startup_hook_directive] = STATE(327),
    [sym_shutdown_hook_directive] = STATE(327),
    [sym_unhook_directive] = STATE(327),
    [sym_set_directive] = STATE(327),
    [sym_unset_directive] = STATE(327),
    [sym_reset_directive] = STATE(327),
    [sym_toggle_directive] = STATE(327),
    [sym_setenv_directive] = STATE(327),
    [sym_unsetenv_directive] = STATE(327),
    [sym_sidebar_pin_directive] = STATE(327),
    [sym_sidebar_unpin_directive] = STATE(327),
    [sym_score_directive] = STATE(327),
    [sym_unscore_directive] = STATE(327),
    [sym_source_directive] = STATE(327),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [14] = {
    [sym__command] = STATE(328),
    [sym_account_hook_directive] = STATE(328),
    [sym_alias_directive] = STATE(328),
    [sym_unalias_directive] = STATE(328),
    [sym_alternates_directive] = STATE(328),
    [sym_unalternates_directive] = STATE(328),
    [sym_alternative_order_directive] = STATE(328),
    [sym_unalternative_order_directive] = STATE(328),
    [sym_attachments_directive] = STATE(328),
    [sym_unattachments_directive] = STATE(328),
    [sym_auto_view_directive] = STATE(328),
    [sym_unauto_view_directive] = STATE(328),
    [sym_bind_directive] = STATE(328),
    [sym_unbind_directive] = STATE(328),
    [sym_charset_hook_directive] = STATE(328),
    [sym_iconv_hook_directive] = STATE(328),
    [sym_color_directive] = STATE(328),
    [sym_uncolor_directive] = STATE(328),
    [sym_crypt_hook_directive] = STATE(328),
    [sym_index_format_hook_directive] = STATE(328),
    [sym_exec_directive] = STATE(328),
    [sym_fcc_save_hook_directive] = STATE(328),
    [sym_fcc_hook_directive] = STATE(328),
    [sym_save_hook_directive] = STATE(328),
    [sym_folder_hook_directive] = STATE(328),
    [sym_group_directive] = STATE(328),
    [sym_ungroup_directive] = STATE(328),
    [sym_hdr_order_directive] = STATE(328),
    [sym_unhdr_order_directive] = STATE(328),
    [sym_ifdef_directive] = STATE(328),
    [sym_ifndef_directive] = STATE(328),
    [sym_finish_directive] = STATE(328),
    [sym_ignore_directive] = STATE(328),
    [sym_unignore_directive] = STATE(328),
    [sym_lists_directive] = STATE(328),
    [sym_unlists_directive] = STATE(328),
    [sym_subscribe_directive] = STATE(328),
    [sym_unsubscribe_directive] = STATE(328),
    [sym_macro_directive] = STATE(328),
    [sym_unmacro_directive] = STATE(328),
    [sym_mailboxes_directive] = STATE(328),
    [sym_named_mailboxes_directive] = STATE(328),
    [sym_unmailboxes_directive] = STATE(328),
    [sym_mailto_allow_directive] = STATE(328),
    [sym_unmailto_allow_directive] = STATE(328),
    [sym_echo_directive] = STATE(328),
    [sym_cd_directive] = STATE(328),
    [sym_mbox_hook_directive] = STATE(328),
    [sym_message_hook_directive] = STATE(328),
    [sym_mime_lookup_directive] = STATE(328),
    [sym_unmime_lookup_directive] = STATE(328),
    [sym_mono_directive] = STATE(328),
    [sym_unmono_directive] = STATE(328),
    [sym_my_hdr_directive] = STATE(328),
    [sym_unmy_hdr_directive] = STATE(328),
    [sym_open_hook_directive] = STATE(328),
    [sym_close_hook_directive] = STATE(328),
    [sym_append_hook_directive] = STATE(328),
    [sym_push_directive] = STATE(328),
    [sym_reply_hook_directive] = STATE(328),
    [sym_send_hook_directive] = STATE(328),
    [sym_send2_hook_directive] = STATE(328),
    [sym_spam_directive] = STATE(328),
    [sym_nospam_directive] = STATE(328),
    [sym_subjectrx_directive] = STATE(328),
    [sym_unsubjectrx_directive] = STATE(328),
    [sym_subscribe_to_directive] = STATE(328),
    [sym_unsubscribe_from_directive] = STATE(328),
    [sym_timeout_hook_directive] = STATE(328),
    [sym_startup_hook_directive] = STATE(328),
    [sym_shutdown_hook_directive] = STATE(328),
    [sym_unhook_directive] = STATE(328),
    [sym_set_directive] = STATE(328),
    [sym_unset_directive] = STATE(328),
    [sym_reset_directive] = STATE(328),
    [sym_toggle_directive] = STATE(328),
    [sym_setenv_directive] = STATE(328),
    [sym_unsetenv_directive] = STATE(328),
    [sym_sidebar_pin_directive] = STATE(328),
    [sym_sidebar_unpin_directive] = STATE(328),
    [sym_score_directive] = STATE(328),
    [sym_unscore_directive] = STATE(328),
    [sym_source_directive] = STATE(328),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [15] = {
    [sym__command] = STATE(319),
    [sym_account_hook_directive] = STATE(319),
    [sym_alias_directive] = STATE(319),
    [sym_unalias_directive] = STATE(319),
    [sym_alternates_directive] = STATE(319),
    [sym_unalternates_directive] = STATE(319),
    [sym_alternative_order_directive] = STATE(319),
    [sym_unalternative_order_directive] = STATE(319),
    [sym_attachments_directive] = STATE(319),
    [sym_unattachments_directive] = STATE(319),
    [sym_auto_view_directive] = STATE(319),
    [sym_unauto_view_directive] = STATE(319),
    [sym_bind_directive] = STATE(319),
    [sym_unbind_directive] = STATE(319),
    [sym_charset_hook_directive] = STATE(319),
    [sym_iconv_hook_directive] = STATE(319),
    [sym_color_directive] = STATE(319),
    [sym_uncolor_directive] = STATE(319),
    [sym_crypt_hook_directive] = STATE(319),
    [sym_index_format_hook_directive] = STATE(319),
    [sym_exec_directive] = STATE(319),
    [sym_fcc_save_hook_directive] = STATE(319),
    [sym_fcc_hook_directive] = STATE(319),
    [sym_save_hook_directive] = STATE(319),
    [sym_folder_hook_directive] = STATE(319),
    [sym_group_directive] = STATE(319),
    [sym_ungroup_directive] = STATE(319),
    [sym_hdr_order_directive] = STATE(319),
    [sym_unhdr_order_directive] = STATE(319),
    [sym_ifdef_directive] = STATE(319),
    [sym_ifndef_directive] = STATE(319),
    [sym_finish_directive] = STATE(319),
    [sym_ignore_directive] = STATE(319),
    [sym_unignore_directive] = STATE(319),
    [sym_lists_directive] = STATE(319),
    [sym_unlists_directive] = STATE(319),
    [sym_subscribe_directive] = STATE(319),
    [sym_unsubscribe_directive] = STATE(319),
    [sym_macro_directive] = STATE(319),
    [sym_unmacro_directive] = STATE(319),
    [sym_mailboxes_directive] = STATE(319),
    [sym_named_mailboxes_directive] = STATE(319),
    [sym_unmailboxes_directive] = STATE(319),
    [sym_mailto_allow_directive] = STATE(319),
    [sym_unmailto_allow_directive] = STATE(319),
    [sym_echo_directive] = STATE(319),
    [sym_cd_directive] = STATE(319),
    [sym_mbox_hook_directive] = STATE(319),
    [sym_message_hook_directive] = STATE(319),
    [sym_mime_lookup_directive] = STATE(319),
    [sym_unmime_lookup_directive] = STATE(319),
    [sym_mono_directive] = STATE(319),
    [sym_unmono_directive] = STATE(319),
    [sym_my_hdr_directive] = STATE(319),
    [sym_unmy_hdr_directive] = STATE(319),
    [sym_open_hook_directive] = STATE(319),
    [sym_close_hook_directive] = STATE(319),
    [sym_append_hook_directive] = STATE(319),
    [sym_push_directive] = STATE(319),
    [sym_reply_hook_directive] = STATE(319),
    [sym_send_hook_directive] = STATE(319),
    [sym_send2_hook_directive] = STATE(319),
    [sym_spam_directive] = STATE(319),
    [sym_nospam_directive] = STATE(319),
    [sym_subjectrx_directive] = STATE(319),
    [sym_unsubjectrx_directive] = STATE(319),
    [sym_subscribe_to_directive] = STATE(319),
    [sym_unsubscribe_from_directive] = STATE(319),
    [sym_timeout_hook_directive] = STATE(319),
    [sym_startup_hook_directive] = STATE(319),
    [sym_shutdown_hook_directive] = STATE(319),
    [sym_unhook_directive] = STATE(319),
    [sym_set_directive] = STATE(319),
    [sym_unset_directive] = STATE(319),
    [sym_reset_directive] = STATE(319),
    [sym_toggle_directive] = STATE(319),
    [sym_setenv_directive] = STATE(319),
    [sym_unsetenv_directive] = STATE(319),
    [sym_sidebar_pin_directive] = STATE(319),
    [sym_sidebar_unpin_directive] = STATE(319),
    [sym_score_directive] = STATE(319),
    [sym_unscore_directive] = STATE(319),
    [sym_source_directive] = STATE(319),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [16] = {
    [anon_sym_account_DASHhook] = ACTIONS(592),
    [anon_sym_alias] = ACTIONS(592),
    [anon_sym_unalias] = ACTIONS(592),
    [anon_sym_STAR] = ACTIONS(592),
    [anon_sym_alternates] = ACTIONS(592),
    [anon_sym_unalternates] = ACTIONS(592),
    [anon_sym_alternative_order] = ACTIONS(592),
    [anon_sym_unalternative_order] = ACTIONS(592),
    [anon_sym_attachments] = ACTIONS(592),
    [anon_sym_unattachments] = ACTIONS(592),
    [anon_sym_auto_view] = ACTIONS(592),
    [anon_sym_unauto_view] = ACTIONS(592),
    [anon_sym_bind] = ACTIONS(592),
    [anon_sym_unbind] = ACTIONS(592),
    [anon_sym_charset_DASHhook] = ACTIONS(592),
    [anon_sym_iconv_DASHhook] = ACTIONS(592),
    [anon_sym_bold] = ACTIONS(592),
    [anon_sym_underline] = ACTIONS(592),
    [anon_sym_none] = ACTIONS(592),
    [anon_sym_reverse] = ACTIONS(592),
    [anon_sym_standout] = ACTIONS(592),
    [anon_sym_color] = ACTIONS(592),
    [anon_sym_uncolor] = ACTIONS(592),
    [anon_sym_crypt_DASHhook] = ACTIONS(592),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(592),
    [anon_sym_exec] = ACTIONS(592),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(592),
    [anon_sym_fcc_DASHhook] = ACTIONS(592),
    [anon_sym_save_DASHhook] = ACTIONS(592),
    [anon_sym_folder_DASHhook] = ACTIONS(592),
    [anon_sym_DASHrx] = ACTIONS(592),
    [anon_sym_DASHaddr] = ACTIONS(592),
    [anon_sym_group] = ACTIONS(592),
    [anon_sym_ungroup] = ACTIONS(592),
    [anon_sym_hdr_order] = ACTIONS(592),
    [anon_sym_unhdr_order] = ACTIONS(592),
    [anon_sym_ifdef] = ACTIONS(592),
    [anon_sym_ifndef] = ACTIONS(592),
    [anon_sym_finish] = ACTIONS(592),
    [anon_sym_ignore] = ACTIONS(592),
    [anon_sym_unignore] = ACTIONS(592),
    [anon_sym_lists] = ACTIONS(592),
    [anon_sym_unlists] = ACTIONS(592),
    [anon_sym_subscribe] = ACTIONS(594),
    [anon_sym_unsubscribe] = ACTIONS(594),
    [anon_sym_macro] = ACTIONS(592),
    [anon_sym_unmacro] = ACTIONS(592),
    [anon_sym_mailboxes] = ACTIONS(592),
    [anon_sym_named_DASHmailboxes] = ACTIONS(592),
    [anon_sym_unmailboxes] = ACTIONS(592),
    [anon_sym_mailto_allow] = ACTIONS(592),
    [anon_sym_unmailto_allow] = ACTIONS(592),
    [anon_sym_echo] = ACTIONS(592),
    [anon_sym_cd] = ACTIONS(592),
    [anon_sym_mbox_DASHhook] = ACTIONS(592),
    [anon_sym_message_DASHhook] = ACTIONS(592),
    [anon_sym_mime_lookup] = ACTIONS(592),
    [anon_sym_unmime_lookup] = ACTIONS(592),
    [anon_sym_mono] = ACTIONS(592),
    [anon_sym_unmono] = ACTIONS(592),
    [anon_sym_my_hdr] = ACTIONS(592),
    [anon_sym_unmy_hdr] = ACTIONS(592),
    [anon_sym_open_DASHhook] = ACTIONS(592),
    [anon_sym_close_DASHhook] = ACTIONS(592),
    [anon_sym_append_DASHhook] = ACTIONS(592),
    [anon_sym_push] = ACTIONS(592),
    [anon_sym_reply_DASHhook] = ACTIONS(592),
    [anon_sym_send_DASHhook] = ACTIONS(592),
    [anon_sym_send2_DASHhook] = ACTIONS(592),
    [anon_sym_spam] = ACTIONS(592),
    [anon_sym_nospam] = ACTIONS(592),
    [anon_sym_subjectrx] = ACTIONS(592),
    [anon_sym_unsubjectrx] = ACTIONS(592),
    [anon_sym_subscribe_DASHto] = ACTIONS(592),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(592),
    [anon_sym_timeout_DASHhook] = ACTIONS(592),
    [anon_sym_startup_DASHhook] = ACTIONS(592),
    [anon_sym_shutdown_DASHhook] = ACTIONS(592),
    [anon_sym_unhook] = ACTIONS(592),
    [anon_sym_set] = ACTIONS(594),
    [anon_sym_unset] = ACTIONS(594),
    [anon_sym_reset] = ACTIONS(592),
    [anon_sym_toggle] = ACTIONS(592),
    [anon_sym_setenv] = ACTIONS(592),
    [anon_sym_unsetenv] = ACTIONS(592),
    [anon_sym_sidebar_pin] = ACTIONS(592),
    [anon_sym_sidebar_unpin] = ACTIONS(592),
    [anon_sym_score] = ACTIONS(592),
    [anon_sym_unscore] = ACTIONS(592),
    [sym_int] = ACTIONS(592),
    [anon_sym_source] = ACTIONS(592),
  },
  [17] = {
    [anon_sym_account_DASHhook] = ACTIONS(596),
    [anon_sym_alias] = ACTIONS(596),
    [anon_sym_unalias] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_alternates] = ACTIONS(596),
    [anon_sym_unalternates] = ACTIONS(596),
    [anon_sym_alternative_order] = ACTIONS(596),
    [anon_sym_unalternative_order] = ACTIONS(596),
    [anon_sym_attachments] = ACTIONS(596),
    [anon_sym_unattachments] = ACTIONS(596),
    [anon_sym_auto_view] = ACTIONS(596),
    [anon_sym_unauto_view] = ACTIONS(596),
    [anon_sym_bind] = ACTIONS(596),
    [anon_sym_unbind] = ACTIONS(596),
    [anon_sym_charset_DASHhook] = ACTIONS(596),
    [anon_sym_iconv_DASHhook] = ACTIONS(596),
    [anon_sym_bold] = ACTIONS(596),
    [anon_sym_underline] = ACTIONS(596),
    [anon_sym_none] = ACTIONS(596),
    [anon_sym_reverse] = ACTIONS(596),
    [anon_sym_standout] = ACTIONS(596),
    [anon_sym_color] = ACTIONS(596),
    [anon_sym_uncolor] = ACTIONS(596),
    [anon_sym_crypt_DASHhook] = ACTIONS(596),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(596),
    [anon_sym_exec] = ACTIONS(596),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(596),
    [anon_sym_fcc_DASHhook] = ACTIONS(596),
    [anon_sym_save_DASHhook] = ACTIONS(596),
    [anon_sym_folder_DASHhook] = ACTIONS(596),
    [anon_sym_DASHrx] = ACTIONS(596),
    [anon_sym_DASHaddr] = ACTIONS(596),
    [anon_sym_group] = ACTIONS(596),
    [anon_sym_ungroup] = ACTIONS(596),
    [anon_sym_hdr_order] = ACTIONS(596),
    [anon_sym_unhdr_order] = ACTIONS(596),
    [anon_sym_ifdef] = ACTIONS(596),
    [anon_sym_ifndef] = ACTIONS(596),
    [anon_sym_finish] = ACTIONS(596),
    [anon_sym_ignore] = ACTIONS(596),
    [anon_sym_unignore] = ACTIONS(596),
    [anon_sym_lists] = ACTIONS(596),
    [anon_sym_unlists] = ACTIONS(596),
    [anon_sym_subscribe] = ACTIONS(598),
    [anon_sym_unsubscribe] = ACTIONS(598),
    [anon_sym_macro] = ACTIONS(596),
    [anon_sym_unmacro] = ACTIONS(596),
    [anon_sym_mailboxes] = ACTIONS(596),
    [anon_sym_named_DASHmailboxes] = ACTIONS(596),
    [anon_sym_unmailboxes] = ACTIONS(596),
    [anon_sym_mailto_allow] = ACTIONS(596),
    [anon_sym_unmailto_allow] = ACTIONS(596),
    [anon_sym_echo] = ACTIONS(596),
    [anon_sym_cd] = ACTIONS(596),
    [anon_sym_mbox_DASHhook] = ACTIONS(596),
    [anon_sym_message_DASHhook] = ACTIONS(596),
    [anon_sym_mime_lookup] = ACTIONS(596),
    [anon_sym_unmime_lookup] = ACTIONS(596),
    [anon_sym_mono] = ACTIONS(596),
    [anon_sym_unmono] = ACTIONS(596),
    [anon_sym_my_hdr] = ACTIONS(596),
    [anon_sym_unmy_hdr] = ACTIONS(596),
    [anon_sym_open_DASHhook] = ACTIONS(596),
    [anon_sym_close_DASHhook] = ACTIONS(596),
    [anon_sym_append_DASHhook] = ACTIONS(596),
    [anon_sym_push] = ACTIONS(596),
    [anon_sym_reply_DASHhook] = ACTIONS(596),
    [anon_sym_send_DASHhook] = ACTIONS(596),
    [anon_sym_send2_DASHhook] = ACTIONS(596),
    [anon_sym_spam] = ACTIONS(596),
    [anon_sym_nospam] = ACTIONS(596),
    [anon_sym_subjectrx] = ACTIONS(596),
    [anon_sym_unsubjectrx] = ACTIONS(596),
    [anon_sym_subscribe_DASHto] = ACTIONS(596),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(596),
    [anon_sym_timeout_DASHhook] = ACTIONS(596),
    [anon_sym_startup_DASHhook] = ACTIONS(596),
    [anon_sym_shutdown_DASHhook] = ACTIONS(596),
    [anon_sym_unhook] = ACTIONS(596),
    [anon_sym_set] = ACTIONS(598),
    [anon_sym_unset] = ACTIONS(598),
    [anon_sym_reset] = ACTIONS(596),
    [anon_sym_toggle] = ACTIONS(596),
    [anon_sym_setenv] = ACTIONS(596),
    [anon_sym_unsetenv] = ACTIONS(596),
    [anon_sym_sidebar_pin] = ACTIONS(596),
    [anon_sym_sidebar_unpin] = ACTIONS(596),
    [anon_sym_score] = ACTIONS(596),
    [anon_sym_unscore] = ACTIONS(596),
    [sym_int] = ACTIONS(596),
    [anon_sym_source] = ACTIONS(596),
  },
  [18] = {
    [anon_sym_account_DASHhook] = ACTIONS(600),
    [anon_sym_alias] = ACTIONS(600),
    [anon_sym_unalias] = ACTIONS(600),
    [anon_sym_alternates] = ACTIONS(600),
    [anon_sym_unalternates] = ACTIONS(600),
    [anon_sym_alternative_order] = ACTIONS(600),
    [anon_sym_unalternative_order] = ACTIONS(600),
    [anon_sym_attachments] = ACTIONS(600),
    [anon_sym_unattachments] = ACTIONS(600),
    [anon_sym_auto_view] = ACTIONS(600),
    [anon_sym_unauto_view] = ACTIONS(600),
    [anon_sym_bind] = ACTIONS(600),
    [anon_sym_unbind] = ACTIONS(600),
    [anon_sym_charset_DASHhook] = ACTIONS(600),
    [anon_sym_iconv_DASHhook] = ACTIONS(600),
    [anon_sym_bold] = ACTIONS(600),
    [anon_sym_underline] = ACTIONS(600),
    [anon_sym_none] = ACTIONS(600),
    [anon_sym_reverse] = ACTIONS(600),
    [anon_sym_standout] = ACTIONS(600),
    [anon_sym_color] = ACTIONS(600),
    [anon_sym_uncolor] = ACTIONS(600),
    [anon_sym_crypt_DASHhook] = ACTIONS(600),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(600),
    [anon_sym_exec] = ACTIONS(600),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(600),
    [anon_sym_fcc_DASHhook] = ACTIONS(600),
    [anon_sym_save_DASHhook] = ACTIONS(600),
    [anon_sym_folder_DASHhook] = ACTIONS(600),
    [anon_sym_group] = ACTIONS(600),
    [anon_sym_ungroup] = ACTIONS(600),
    [anon_sym_hdr_order] = ACTIONS(600),
    [anon_sym_unhdr_order] = ACTIONS(600),
    [anon_sym_ifdef] = ACTIONS(600),
    [anon_sym_ifndef] = ACTIONS(600),
    [anon_sym_finish] = ACTIONS(600),
    [anon_sym_ignore] = ACTIONS(600),
    [anon_sym_unignore] = ACTIONS(600),
    [anon_sym_lists] = ACTIONS(600),
    [anon_sym_unlists] = ACTIONS(600),
    [anon_sym_subscribe] = ACTIONS(602),
    [anon_sym_unsubscribe] = ACTIONS(602),
    [anon_sym_macro] = ACTIONS(600),
    [anon_sym_unmacro] = ACTIONS(600),
    [anon_sym_mailboxes] = ACTIONS(600),
    [anon_sym_named_DASHmailboxes] = ACTIONS(600),
    [anon_sym_unmailboxes] = ACTIONS(600),
    [anon_sym_mailto_allow] = ACTIONS(600),
    [anon_sym_unmailto_allow] = ACTIONS(600),
    [anon_sym_echo] = ACTIONS(600),
    [anon_sym_cd] = ACTIONS(600),
    [anon_sym_mbox_DASHhook] = ACTIONS(600),
    [anon_sym_message_DASHhook] = ACTIONS(600),
    [anon_sym_mime_lookup] = ACTIONS(600),
    [anon_sym_unmime_lookup] = ACTIONS(600),
    [anon_sym_mono] = ACTIONS(600),
    [anon_sym_unmono] = ACTIONS(600),
    [anon_sym_my_hdr] = ACTIONS(600),
    [anon_sym_unmy_hdr] = ACTIONS(600),
    [anon_sym_open_DASHhook] = ACTIONS(600),
    [anon_sym_close_DASHhook] = ACTIONS(600),
    [anon_sym_append_DASHhook] = ACTIONS(600),
    [anon_sym_push] = ACTIONS(600),
    [anon_sym_reply_DASHhook] = ACTIONS(600),
    [anon_sym_send_DASHhook] = ACTIONS(600),
    [anon_sym_send2_DASHhook] = ACTIONS(600),
    [anon_sym_spam] = ACTIONS(600),
    [anon_sym_nospam] = ACTIONS(600),
    [anon_sym_subjectrx] = ACTIONS(600),
    [anon_sym_unsubjectrx] = ACTIONS(600),
    [anon_sym_subscribe_DASHto] = ACTIONS(600),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(600),
    [anon_sym_timeout_DASHhook] = ACTIONS(600),
    [anon_sym_startup_DASHhook] = ACTIONS(600),
    [anon_sym_shutdown_DASHhook] = ACTIONS(600),
    [anon_sym_unhook] = ACTIONS(600),
    [anon_sym_set] = ACTIONS(602),
    [anon_sym_unset] = ACTIONS(602),
    [anon_sym_reset] = ACTIONS(600),
    [anon_sym_toggle] = ACTIONS(600),
    [anon_sym_setenv] = ACTIONS(600),
    [anon_sym_unsetenv] = ACTIONS(600),
    [anon_sym_sidebar_pin] = ACTIONS(600),
    [anon_sym_sidebar_unpin] = ACTIONS(600),
    [anon_sym_score] = ACTIONS(600),
    [anon_sym_unscore] = ACTIONS(600),
    [sym_int] = ACTIONS(600),
    [anon_sym_source] = ACTIONS(600),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_account_DASHhook] = ACTIONS(606),
    [anon_sym_alias] = ACTIONS(606),
    [anon_sym_unalias] = ACTIONS(606),
    [anon_sym_alternates] = ACTIONS(606),
    [anon_sym_unalternates] = ACTIONS(606),
    [anon_sym_alternative_order] = ACTIONS(606),
    [anon_sym_unalternative_order] = ACTIONS(606),
    [anon_sym_attachments] = ACTIONS(606),
    [anon_sym_unattachments] = ACTIONS(606),
    [anon_sym_auto_view] = ACTIONS(606),
    [anon_sym_unauto_view] = ACTIONS(606),
    [anon_sym_bind] = ACTIONS(606),
    [anon_sym_unbind] = ACTIONS(606),
    [anon_sym_charset_DASHhook] = ACTIONS(606),
    [anon_sym_iconv_DASHhook] = ACTIONS(606),
    [anon_sym_color] = ACTIONS(606),
    [anon_sym_uncolor] = ACTIONS(606),
    [anon_sym_crypt_DASHhook] = ACTIONS(606),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(606),
    [anon_sym_exec] = ACTIONS(606),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(606),
    [anon_sym_fcc_DASHhook] = ACTIONS(606),
    [anon_sym_save_DASHhook] = ACTIONS(606),
    [anon_sym_folder_DASHhook] = ACTIONS(606),
    [anon_sym_group] = ACTIONS(606),
    [anon_sym_ungroup] = ACTIONS(606),
    [anon_sym_hdr_order] = ACTIONS(606),
    [anon_sym_unhdr_order] = ACTIONS(606),
    [anon_sym_ifdef] = ACTIONS(606),
    [anon_sym_ifndef] = ACTIONS(606),
    [anon_sym_finish] = ACTIONS(606),
    [anon_sym_ignore] = ACTIONS(606),
    [anon_sym_unignore] = ACTIONS(606),
    [anon_sym_lists] = ACTIONS(606),
    [anon_sym_unlists] = ACTIONS(606),
    [anon_sym_subscribe] = ACTIONS(606),
    [anon_sym_unsubscribe] = ACTIONS(606),
    [anon_sym_macro] = ACTIONS(606),
    [anon_sym_unmacro] = ACTIONS(606),
    [anon_sym_mailboxes] = ACTIONS(606),
    [anon_sym_named_DASHmailboxes] = ACTIONS(606),
    [anon_sym_unmailboxes] = ACTIONS(606),
    [anon_sym_mailto_allow] = ACTIONS(606),
    [anon_sym_unmailto_allow] = ACTIONS(606),
    [anon_sym_echo] = ACTIONS(606),
    [anon_sym_cd] = ACTIONS(606),
    [anon_sym_mbox_DASHhook] = ACTIONS(606),
    [anon_sym_message_DASHhook] = ACTIONS(606),
    [anon_sym_mime_lookup] = ACTIONS(606),
    [anon_sym_unmime_lookup] = ACTIONS(606),
    [anon_sym_mono] = ACTIONS(606),
    [anon_sym_unmono] = ACTIONS(606),
    [anon_sym_my_hdr] = ACTIONS(606),
    [anon_sym_unmy_hdr] = ACTIONS(606),
    [anon_sym_open_DASHhook] = ACTIONS(606),
    [anon_sym_close_DASHhook] = ACTIONS(606),
    [anon_sym_append_DASHhook] = ACTIONS(606),
    [anon_sym_push] = ACTIONS(606),
    [anon_sym_reply_DASHhook] = ACTIONS(606),
    [anon_sym_send_DASHhook] = ACTIONS(606),
    [anon_sym_send2_DASHhook] = ACTIONS(606),
    [anon_sym_spam] = ACTIONS(606),
    [anon_sym_nospam] = ACTIONS(606),
    [anon_sym_subjectrx] = ACTIONS(606),
    [anon_sym_unsubjectrx] = ACTIONS(606),
    [anon_sym_subscribe_DASHto] = ACTIONS(606),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(606),
    [anon_sym_timeout_DASHhook] = ACTIONS(606),
    [anon_sym_startup_DASHhook] = ACTIONS(606),
    [anon_sym_shutdown_DASHhook] = ACTIONS(606),
    [anon_sym_unhook] = ACTIONS(606),
    [anon_sym_set] = ACTIONS(606),
    [anon_sym_unset] = ACTIONS(606),
    [anon_sym_reset] = ACTIONS(606),
    [anon_sym_toggle] = ACTIONS(606),
    [anon_sym_setenv] = ACTIONS(606),
    [anon_sym_unsetenv] = ACTIONS(606),
    [anon_sym_sidebar_pin] = ACTIONS(606),
    [anon_sym_sidebar_unpin] = ACTIONS(606),
    [anon_sym_score] = ACTIONS(606),
    [anon_sym_unscore] = ACTIONS(606),
    [anon_sym_source] = ACTIONS(606),
    [sym_comment] = ACTIONS(606),
    [sym__eol] = ACTIONS(606),
    [aux_sym__space_token1] = ACTIONS(606),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_account_DASHhook] = ACTIONS(608),
    [anon_sym_alias] = ACTIONS(608),
    [anon_sym_unalias] = ACTIONS(608),
    [anon_sym_alternates] = ACTIONS(608),
    [anon_sym_unalternates] = ACTIONS(608),
    [anon_sym_alternative_order] = ACTIONS(608),
    [anon_sym_unalternative_order] = ACTIONS(608),
    [anon_sym_attachments] = ACTIONS(608),
    [anon_sym_unattachments] = ACTIONS(608),
    [anon_sym_auto_view] = ACTIONS(608),
    [anon_sym_unauto_view] = ACTIONS(608),
    [anon_sym_bind] = ACTIONS(608),
    [anon_sym_unbind] = ACTIONS(608),
    [anon_sym_charset_DASHhook] = ACTIONS(608),
    [anon_sym_iconv_DASHhook] = ACTIONS(608),
    [anon_sym_color] = ACTIONS(608),
    [anon_sym_uncolor] = ACTIONS(608),
    [anon_sym_crypt_DASHhook] = ACTIONS(608),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(608),
    [anon_sym_exec] = ACTIONS(608),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(608),
    [anon_sym_fcc_DASHhook] = ACTIONS(608),
    [anon_sym_save_DASHhook] = ACTIONS(608),
    [anon_sym_folder_DASHhook] = ACTIONS(608),
    [anon_sym_group] = ACTIONS(608),
    [anon_sym_ungroup] = ACTIONS(608),
    [anon_sym_hdr_order] = ACTIONS(608),
    [anon_sym_unhdr_order] = ACTIONS(608),
    [anon_sym_ifdef] = ACTIONS(608),
    [anon_sym_ifndef] = ACTIONS(608),
    [anon_sym_finish] = ACTIONS(608),
    [anon_sym_ignore] = ACTIONS(608),
    [anon_sym_unignore] = ACTIONS(608),
    [anon_sym_lists] = ACTIONS(608),
    [anon_sym_unlists] = ACTIONS(608),
    [anon_sym_subscribe] = ACTIONS(608),
    [anon_sym_unsubscribe] = ACTIONS(608),
    [anon_sym_macro] = ACTIONS(608),
    [anon_sym_unmacro] = ACTIONS(608),
    [anon_sym_mailboxes] = ACTIONS(608),
    [anon_sym_named_DASHmailboxes] = ACTIONS(608),
    [anon_sym_unmailboxes] = ACTIONS(608),
    [anon_sym_mailto_allow] = ACTIONS(608),
    [anon_sym_unmailto_allow] = ACTIONS(608),
    [anon_sym_echo] = ACTIONS(608),
    [anon_sym_cd] = ACTIONS(608),
    [anon_sym_mbox_DASHhook] = ACTIONS(608),
    [anon_sym_message_DASHhook] = ACTIONS(608),
    [anon_sym_mime_lookup] = ACTIONS(608),
    [anon_sym_unmime_lookup] = ACTIONS(608),
    [anon_sym_mono] = ACTIONS(608),
    [anon_sym_unmono] = ACTIONS(608),
    [anon_sym_my_hdr] = ACTIONS(608),
    [anon_sym_unmy_hdr] = ACTIONS(608),
    [anon_sym_open_DASHhook] = ACTIONS(608),
    [anon_sym_close_DASHhook] = ACTIONS(608),
    [anon_sym_append_DASHhook] = ACTIONS(608),
    [anon_sym_push] = ACTIONS(608),
    [anon_sym_reply_DASHhook] = ACTIONS(608),
    [anon_sym_send_DASHhook] = ACTIONS(608),
    [anon_sym_send2_DASHhook] = ACTIONS(608),
    [anon_sym_spam] = ACTIONS(608),
    [anon_sym_nospam] = ACTIONS(608),
    [anon_sym_subjectrx] = ACTIONS(608),
    [anon_sym_unsubjectrx] = ACTIONS(608),
    [anon_sym_subscribe_DASHto] = ACTIONS(608),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(608),
    [anon_sym_timeout_DASHhook] = ACTIONS(608),
    [anon_sym_startup_DASHhook] = ACTIONS(608),
    [anon_sym_shutdown_DASHhook] = ACTIONS(608),
    [anon_sym_unhook] = ACTIONS(608),
    [anon_sym_set] = ACTIONS(608),
    [anon_sym_unset] = ACTIONS(608),
    [anon_sym_reset] = ACTIONS(608),
    [anon_sym_toggle] = ACTIONS(608),
    [anon_sym_setenv] = ACTIONS(608),
    [anon_sym_unsetenv] = ACTIONS(608),
    [anon_sym_sidebar_pin] = ACTIONS(608),
    [anon_sym_sidebar_unpin] = ACTIONS(608),
    [anon_sym_score] = ACTIONS(608),
    [anon_sym_unscore] = ACTIONS(608),
    [anon_sym_source] = ACTIONS(608),
    [sym_comment] = ACTIONS(608),
    [sym__eol] = ACTIONS(608),
    [aux_sym__space_token1] = ACTIONS(608),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_account_DASHhook] = ACTIONS(612),
    [anon_sym_alias] = ACTIONS(612),
    [anon_sym_unalias] = ACTIONS(612),
    [anon_sym_alternates] = ACTIONS(612),
    [anon_sym_unalternates] = ACTIONS(612),
    [anon_sym_alternative_order] = ACTIONS(612),
    [anon_sym_unalternative_order] = ACTIONS(612),
    [anon_sym_attachments] = ACTIONS(612),
    [anon_sym_unattachments] = ACTIONS(612),
    [anon_sym_auto_view] = ACTIONS(612),
    [anon_sym_unauto_view] = ACTIONS(612),
    [anon_sym_bind] = ACTIONS(612),
    [anon_sym_unbind] = ACTIONS(612),
    [anon_sym_charset_DASHhook] = ACTIONS(612),
    [anon_sym_iconv_DASHhook] = ACTIONS(612),
    [anon_sym_color] = ACTIONS(612),
    [anon_sym_uncolor] = ACTIONS(612),
    [anon_sym_crypt_DASHhook] = ACTIONS(612),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(612),
    [anon_sym_exec] = ACTIONS(612),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(612),
    [anon_sym_fcc_DASHhook] = ACTIONS(612),
    [anon_sym_save_DASHhook] = ACTIONS(612),
    [anon_sym_folder_DASHhook] = ACTIONS(612),
    [anon_sym_group] = ACTIONS(612),
    [anon_sym_ungroup] = ACTIONS(612),
    [anon_sym_hdr_order] = ACTIONS(612),
    [anon_sym_unhdr_order] = ACTIONS(612),
    [anon_sym_ifdef] = ACTIONS(612),
    [anon_sym_ifndef] = ACTIONS(612),
    [anon_sym_finish] = ACTIONS(612),
    [anon_sym_ignore] = ACTIONS(612),
    [anon_sym_unignore] = ACTIONS(612),
    [anon_sym_lists] = ACTIONS(612),
    [anon_sym_unlists] = ACTIONS(612),
    [anon_sym_subscribe] = ACTIONS(612),
    [anon_sym_unsubscribe] = ACTIONS(612),
    [anon_sym_macro] = ACTIONS(612),
    [anon_sym_unmacro] = ACTIONS(612),
    [anon_sym_mailboxes] = ACTIONS(612),
    [anon_sym_named_DASHmailboxes] = ACTIONS(612),
    [anon_sym_unmailboxes] = ACTIONS(612),
    [anon_sym_mailto_allow] = ACTIONS(612),
    [anon_sym_unmailto_allow] = ACTIONS(612),
    [anon_sym_echo] = ACTIONS(612),
    [anon_sym_cd] = ACTIONS(612),
    [anon_sym_mbox_DASHhook] = ACTIONS(612),
    [anon_sym_message_DASHhook] = ACTIONS(612),
    [anon_sym_mime_lookup] = ACTIONS(612),
    [anon_sym_unmime_lookup] = ACTIONS(612),
    [anon_sym_mono] = ACTIONS(612),
    [anon_sym_unmono] = ACTIONS(612),
    [anon_sym_my_hdr] = ACTIONS(612),
    [anon_sym_unmy_hdr] = ACTIONS(612),
    [anon_sym_open_DASHhook] = ACTIONS(612),
    [anon_sym_close_DASHhook] = ACTIONS(612),
    [anon_sym_append_DASHhook] = ACTIONS(612),
    [anon_sym_push] = ACTIONS(612),
    [anon_sym_reply_DASHhook] = ACTIONS(612),
    [anon_sym_send_DASHhook] = ACTIONS(612),
    [anon_sym_send2_DASHhook] = ACTIONS(612),
    [anon_sym_spam] = ACTIONS(612),
    [anon_sym_nospam] = ACTIONS(612),
    [anon_sym_subjectrx] = ACTIONS(612),
    [anon_sym_unsubjectrx] = ACTIONS(612),
    [anon_sym_subscribe_DASHto] = ACTIONS(612),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(612),
    [anon_sym_timeout_DASHhook] = ACTIONS(612),
    [anon_sym_startup_DASHhook] = ACTIONS(612),
    [anon_sym_shutdown_DASHhook] = ACTIONS(612),
    [anon_sym_unhook] = ACTIONS(612),
    [anon_sym_set] = ACTIONS(612),
    [anon_sym_unset] = ACTIONS(612),
    [anon_sym_reset] = ACTIONS(612),
    [anon_sym_toggle] = ACTIONS(612),
    [anon_sym_setenv] = ACTIONS(612),
    [anon_sym_unsetenv] = ACTIONS(612),
    [anon_sym_sidebar_pin] = ACTIONS(612),
    [anon_sym_sidebar_unpin] = ACTIONS(612),
    [anon_sym_score] = ACTIONS(612),
    [anon_sym_unscore] = ACTIONS(612),
    [anon_sym_source] = ACTIONS(612),
    [sym_comment] = ACTIONS(612),
    [sym__eol] = ACTIONS(612),
    [aux_sym__space_token1] = ACTIONS(612),
  },
  [22] = {
    [anon_sym_account_DASHhook] = ACTIONS(614),
    [anon_sym_alias] = ACTIONS(614),
    [anon_sym_unalias] = ACTIONS(614),
    [anon_sym_alternates] = ACTIONS(614),
    [anon_sym_unalternates] = ACTIONS(614),
    [anon_sym_alternative_order] = ACTIONS(614),
    [anon_sym_unalternative_order] = ACTIONS(614),
    [anon_sym_attachments] = ACTIONS(614),
    [anon_sym_unattachments] = ACTIONS(614),
    [anon_sym_auto_view] = ACTIONS(614),
    [anon_sym_unauto_view] = ACTIONS(614),
    [anon_sym_bind] = ACTIONS(614),
    [anon_sym_unbind] = ACTIONS(614),
    [anon_sym_charset_DASHhook] = ACTIONS(614),
    [anon_sym_iconv_DASHhook] = ACTIONS(614),
    [anon_sym_color] = ACTIONS(614),
    [anon_sym_uncolor] = ACTIONS(614),
    [anon_sym_crypt_DASHhook] = ACTIONS(614),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(614),
    [anon_sym_exec] = ACTIONS(614),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(614),
    [anon_sym_fcc_DASHhook] = ACTIONS(614),
    [anon_sym_save_DASHhook] = ACTIONS(614),
    [anon_sym_folder_DASHhook] = ACTIONS(614),
    [anon_sym_group] = ACTIONS(614),
    [anon_sym_ungroup] = ACTIONS(614),
    [anon_sym_hdr_order] = ACTIONS(614),
    [anon_sym_unhdr_order] = ACTIONS(614),
    [anon_sym_ifdef] = ACTIONS(614),
    [anon_sym_ifndef] = ACTIONS(614),
    [anon_sym_finish] = ACTIONS(614),
    [anon_sym_ignore] = ACTIONS(614),
    [anon_sym_unignore] = ACTIONS(614),
    [anon_sym_lists] = ACTIONS(614),
    [anon_sym_unlists] = ACTIONS(614),
    [anon_sym_subscribe] = ACTIONS(616),
    [anon_sym_unsubscribe] = ACTIONS(616),
    [anon_sym_macro] = ACTIONS(614),
    [anon_sym_unmacro] = ACTIONS(614),
    [anon_sym_mailboxes] = ACTIONS(614),
    [anon_sym_named_DASHmailboxes] = ACTIONS(614),
    [anon_sym_unmailboxes] = ACTIONS(614),
    [anon_sym_mailto_allow] = ACTIONS(614),
    [anon_sym_unmailto_allow] = ACTIONS(614),
    [anon_sym_echo] = ACTIONS(614),
    [anon_sym_cd] = ACTIONS(614),
    [anon_sym_mbox_DASHhook] = ACTIONS(614),
    [anon_sym_message_DASHhook] = ACTIONS(614),
    [anon_sym_mime_lookup] = ACTIONS(614),
    [anon_sym_unmime_lookup] = ACTIONS(614),
    [anon_sym_mono] = ACTIONS(614),
    [anon_sym_unmono] = ACTIONS(614),
    [anon_sym_my_hdr] = ACTIONS(614),
    [anon_sym_unmy_hdr] = ACTIONS(614),
    [anon_sym_open_DASHhook] = ACTIONS(614),
    [anon_sym_close_DASHhook] = ACTIONS(614),
    [anon_sym_append_DASHhook] = ACTIONS(614),
    [anon_sym_push] = ACTIONS(614),
    [anon_sym_reply_DASHhook] = ACTIONS(614),
    [anon_sym_send_DASHhook] = ACTIONS(614),
    [anon_sym_send2_DASHhook] = ACTIONS(614),
    [anon_sym_spam] = ACTIONS(614),
    [anon_sym_nospam] = ACTIONS(614),
    [anon_sym_subjectrx] = ACTIONS(614),
    [anon_sym_unsubjectrx] = ACTIONS(614),
    [anon_sym_subscribe_DASHto] = ACTIONS(614),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(614),
    [anon_sym_timeout_DASHhook] = ACTIONS(614),
    [anon_sym_startup_DASHhook] = ACTIONS(614),
    [anon_sym_shutdown_DASHhook] = ACTIONS(614),
    [anon_sym_unhook] = ACTIONS(614),
    [anon_sym_set] = ACTIONS(616),
    [anon_sym_unset] = ACTIONS(616),
    [anon_sym_reset] = ACTIONS(614),
    [anon_sym_toggle] = ACTIONS(614),
    [anon_sym_setenv] = ACTIONS(614),
    [anon_sym_unsetenv] = ACTIONS(614),
    [anon_sym_sidebar_pin] = ACTIONS(614),
    [anon_sym_sidebar_unpin] = ACTIONS(614),
    [anon_sym_score] = ACTIONS(614),
    [anon_sym_unscore] = ACTIONS(614),
    [anon_sym_source] = ACTIONS(614),
  },
  [23] = {
    [anon_sym_account_DASHhook] = ACTIONS(618),
    [anon_sym_alias] = ACTIONS(618),
    [anon_sym_unalias] = ACTIONS(618),
    [anon_sym_alternates] = ACTIONS(618),
    [anon_sym_unalternates] = ACTIONS(618),
    [anon_sym_alternative_order] = ACTIONS(618),
    [anon_sym_unalternative_order] = ACTIONS(618),
    [anon_sym_attachments] = ACTIONS(618),
    [anon_sym_unattachments] = ACTIONS(618),
    [anon_sym_auto_view] = ACTIONS(618),
    [anon_sym_unauto_view] = ACTIONS(618),
    [anon_sym_bind] = ACTIONS(618),
    [anon_sym_unbind] = ACTIONS(618),
    [anon_sym_charset_DASHhook] = ACTIONS(618),
    [anon_sym_iconv_DASHhook] = ACTIONS(618),
    [anon_sym_color] = ACTIONS(618),
    [anon_sym_uncolor] = ACTIONS(618),
    [anon_sym_crypt_DASHhook] = ACTIONS(618),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(618),
    [anon_sym_exec] = ACTIONS(618),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(618),
    [anon_sym_fcc_DASHhook] = ACTIONS(618),
    [anon_sym_save_DASHhook] = ACTIONS(618),
    [anon_sym_folder_DASHhook] = ACTIONS(618),
    [anon_sym_group] = ACTIONS(618),
    [anon_sym_ungroup] = ACTIONS(618),
    [anon_sym_hdr_order] = ACTIONS(618),
    [anon_sym_unhdr_order] = ACTIONS(618),
    [anon_sym_ifdef] = ACTIONS(618),
    [anon_sym_ifndef] = ACTIONS(618),
    [anon_sym_finish] = ACTIONS(618),
    [anon_sym_ignore] = ACTIONS(618),
    [anon_sym_unignore] = ACTIONS(618),
    [anon_sym_lists] = ACTIONS(618),
    [anon_sym_unlists] = ACTIONS(618),
    [anon_sym_subscribe] = ACTIONS(620),
    [anon_sym_unsubscribe] = ACTIONS(620),
    [anon_sym_macro] = ACTIONS(618),
    [anon_sym_unmacro] = ACTIONS(618),
    [anon_sym_mailboxes] = ACTIONS(618),
    [anon_sym_named_DASHmailboxes] = ACTIONS(618),
    [anon_sym_unmailboxes] = ACTIONS(618),
    [anon_sym_mailto_allow] = ACTIONS(618),
    [anon_sym_unmailto_allow] = ACTIONS(618),
    [anon_sym_echo] = ACTIONS(618),
    [anon_sym_cd] = ACTIONS(618),
    [anon_sym_mbox_DASHhook] = ACTIONS(618),
    [anon_sym_message_DASHhook] = ACTIONS(618),
    [anon_sym_mime_lookup] = ACTIONS(618),
    [anon_sym_unmime_lookup] = ACTIONS(618),
    [anon_sym_mono] = ACTIONS(618),
    [anon_sym_unmono] = ACTIONS(618),
    [anon_sym_my_hdr] = ACTIONS(618),
    [anon_sym_unmy_hdr] = ACTIONS(618),
    [anon_sym_open_DASHhook] = ACTIONS(618),
    [anon_sym_close_DASHhook] = ACTIONS(618),
    [anon_sym_append_DASHhook] = ACTIONS(618),
    [anon_sym_push] = ACTIONS(618),
    [anon_sym_reply_DASHhook] = ACTIONS(618),
    [anon_sym_send_DASHhook] = ACTIONS(618),
    [anon_sym_send2_DASHhook] = ACTIONS(618),
    [anon_sym_spam] = ACTIONS(618),
    [anon_sym_nospam] = ACTIONS(618),
    [anon_sym_subjectrx] = ACTIONS(618),
    [anon_sym_unsubjectrx] = ACTIONS(618),
    [anon_sym_subscribe_DASHto] = ACTIONS(618),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(618),
    [anon_sym_timeout_DASHhook] = ACTIONS(618),
    [anon_sym_startup_DASHhook] = ACTIONS(618),
    [anon_sym_shutdown_DASHhook] = ACTIONS(618),
    [anon_sym_unhook] = ACTIONS(618),
    [anon_sym_set] = ACTIONS(620),
    [anon_sym_unset] = ACTIONS(620),
    [anon_sym_reset] = ACTIONS(618),
    [anon_sym_toggle] = ACTIONS(618),
    [anon_sym_setenv] = ACTIONS(618),
    [anon_sym_unsetenv] = ACTIONS(618),
    [anon_sym_sidebar_pin] = ACTIONS(618),
    [anon_sym_sidebar_unpin] = ACTIONS(618),
    [anon_sym_score] = ACTIONS(618),
    [anon_sym_unscore] = ACTIONS(618),
    [anon_sym_source] = ACTIONS(618),
  },
  [24] = {
    [anon_sym_account_DASHhook] = ACTIONS(622),
    [anon_sym_alias] = ACTIONS(622),
    [anon_sym_unalias] = ACTIONS(622),
    [anon_sym_alternates] = ACTIONS(622),
    [anon_sym_unalternates] = ACTIONS(622),
    [anon_sym_alternative_order] = ACTIONS(622),
    [anon_sym_unalternative_order] = ACTIONS(622),
    [anon_sym_attachments] = ACTIONS(622),
    [anon_sym_unattachments] = ACTIONS(622),
    [anon_sym_auto_view] = ACTIONS(622),
    [anon_sym_unauto_view] = ACTIONS(622),
    [anon_sym_bind] = ACTIONS(622),
    [anon_sym_unbind] = ACTIONS(622),
    [anon_sym_charset_DASHhook] = ACTIONS(622),
    [anon_sym_iconv_DASHhook] = ACTIONS(622),
    [anon_sym_color] = ACTIONS(622),
    [anon_sym_uncolor] = ACTIONS(622),
    [anon_sym_crypt_DASHhook] = ACTIONS(622),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(622),
    [anon_sym_exec] = ACTIONS(622),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(622),
    [anon_sym_fcc_DASHhook] = ACTIONS(622),
    [anon_sym_save_DASHhook] = ACTIONS(622),
    [anon_sym_folder_DASHhook] = ACTIONS(622),
    [anon_sym_group] = ACTIONS(622),
    [anon_sym_ungroup] = ACTIONS(622),
    [anon_sym_hdr_order] = ACTIONS(622),
    [anon_sym_unhdr_order] = ACTIONS(622),
    [anon_sym_ifdef] = ACTIONS(622),
    [anon_sym_ifndef] = ACTIONS(622),
    [anon_sym_finish] = ACTIONS(622),
    [anon_sym_ignore] = ACTIONS(622),
    [anon_sym_unignore] = ACTIONS(622),
    [anon_sym_lists] = ACTIONS(622),
    [anon_sym_unlists] = ACTIONS(622),
    [anon_sym_subscribe] = ACTIONS(624),
    [anon_sym_unsubscribe] = ACTIONS(624),
    [anon_sym_macro] = ACTIONS(622),
    [anon_sym_unmacro] = ACTIONS(622),
    [anon_sym_mailboxes] = ACTIONS(622),
    [anon_sym_named_DASHmailboxes] = ACTIONS(622),
    [anon_sym_unmailboxes] = ACTIONS(622),
    [anon_sym_mailto_allow] = ACTIONS(622),
    [anon_sym_unmailto_allow] = ACTIONS(622),
    [anon_sym_echo] = ACTIONS(622),
    [anon_sym_cd] = ACTIONS(622),
    [anon_sym_mbox_DASHhook] = ACTIONS(622),
    [anon_sym_message_DASHhook] = ACTIONS(622),
    [anon_sym_mime_lookup] = ACTIONS(622),
    [anon_sym_unmime_lookup] = ACTIONS(622),
    [anon_sym_mono] = ACTIONS(622),
    [anon_sym_unmono] = ACTIONS(622),
    [anon_sym_my_hdr] = ACTIONS(622),
    [anon_sym_unmy_hdr] = ACTIONS(622),
    [anon_sym_open_DASHhook] = ACTIONS(622),
    [anon_sym_close_DASHhook] = ACTIONS(622),
    [anon_sym_append_DASHhook] = ACTIONS(622),
    [anon_sym_push] = ACTIONS(622),
    [anon_sym_reply_DASHhook] = ACTIONS(622),
    [anon_sym_send_DASHhook] = ACTIONS(622),
    [anon_sym_send2_DASHhook] = ACTIONS(622),
    [anon_sym_spam] = ACTIONS(622),
    [anon_sym_nospam] = ACTIONS(622),
    [anon_sym_subjectrx] = ACTIONS(622),
    [anon_sym_unsubjectrx] = ACTIONS(622),
    [anon_sym_subscribe_DASHto] = ACTIONS(622),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(622),
    [anon_sym_timeout_DASHhook] = ACTIONS(622),
    [anon_sym_startup_DASHhook] = ACTIONS(622),
    [anon_sym_shutdown_DASHhook] = ACTIONS(622),
    [anon_sym_unhook] = ACTIONS(622),
    [anon_sym_set] = ACTIONS(624),
    [anon_sym_unset] = ACTIONS(624),
    [anon_sym_reset] = ACTIONS(622),
    [anon_sym_toggle] = ACTIONS(622),
    [anon_sym_setenv] = ACTIONS(622),
    [anon_sym_unsetenv] = ACTIONS(622),
    [anon_sym_sidebar_pin] = ACTIONS(622),
    [anon_sym_sidebar_unpin] = ACTIONS(622),
    [anon_sym_score] = ACTIONS(622),
    [anon_sym_unscore] = ACTIONS(622),
    [anon_sym_source] = ACTIONS(622),
  },
  [25] = {
    [anon_sym_account_DASHhook] = ACTIONS(626),
    [anon_sym_alias] = ACTIONS(626),
    [anon_sym_unalias] = ACTIONS(626),
    [anon_sym_alternates] = ACTIONS(626),
    [anon_sym_unalternates] = ACTIONS(626),
    [anon_sym_alternative_order] = ACTIONS(626),
    [anon_sym_unalternative_order] = ACTIONS(626),
    [anon_sym_attachments] = ACTIONS(626),
    [anon_sym_unattachments] = ACTIONS(626),
    [anon_sym_auto_view] = ACTIONS(626),
    [anon_sym_unauto_view] = ACTIONS(626),
    [anon_sym_bind] = ACTIONS(626),
    [anon_sym_unbind] = ACTIONS(626),
    [anon_sym_charset_DASHhook] = ACTIONS(626),
    [anon_sym_iconv_DASHhook] = ACTIONS(626),
    [anon_sym_color] = ACTIONS(626),
    [anon_sym_uncolor] = ACTIONS(626),
    [anon_sym_crypt_DASHhook] = ACTIONS(626),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(626),
    [anon_sym_exec] = ACTIONS(626),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(626),
    [anon_sym_fcc_DASHhook] = ACTIONS(626),
    [anon_sym_save_DASHhook] = ACTIONS(626),
    [anon_sym_folder_DASHhook] = ACTIONS(626),
    [anon_sym_group] = ACTIONS(626),
    [anon_sym_ungroup] = ACTIONS(626),
    [anon_sym_hdr_order] = ACTIONS(626),
    [anon_sym_unhdr_order] = ACTIONS(626),
    [anon_sym_ifdef] = ACTIONS(626),
    [anon_sym_ifndef] = ACTIONS(626),
    [anon_sym_finish] = ACTIONS(626),
    [anon_sym_ignore] = ACTIONS(626),
    [anon_sym_unignore] = ACTIONS(626),
    [anon_sym_lists] = ACTIONS(626),
    [anon_sym_unlists] = ACTIONS(626),
    [anon_sym_subscribe] = ACTIONS(628),
    [anon_sym_unsubscribe] = ACTIONS(628),
    [anon_sym_macro] = ACTIONS(626),
    [anon_sym_unmacro] = ACTIONS(626),
    [anon_sym_mailboxes] = ACTIONS(626),
    [anon_sym_named_DASHmailboxes] = ACTIONS(626),
    [anon_sym_unmailboxes] = ACTIONS(626),
    [anon_sym_mailto_allow] = ACTIONS(626),
    [anon_sym_unmailto_allow] = ACTIONS(626),
    [anon_sym_echo] = ACTIONS(626),
    [anon_sym_cd] = ACTIONS(626),
    [anon_sym_mbox_DASHhook] = ACTIONS(626),
    [anon_sym_message_DASHhook] = ACTIONS(626),
    [anon_sym_mime_lookup] = ACTIONS(626),
    [anon_sym_unmime_lookup] = ACTIONS(626),
    [anon_sym_mono] = ACTIONS(626),
    [anon_sym_unmono] = ACTIONS(626),
    [anon_sym_my_hdr] = ACTIONS(626),
    [anon_sym_unmy_hdr] = ACTIONS(626),
    [anon_sym_open_DASHhook] = ACTIONS(626),
    [anon_sym_close_DASHhook] = ACTIONS(626),
    [anon_sym_append_DASHhook] = ACTIONS(626),
    [anon_sym_push] = ACTIONS(626),
    [anon_sym_reply_DASHhook] = ACTIONS(626),
    [anon_sym_send_DASHhook] = ACTIONS(626),
    [anon_sym_send2_DASHhook] = ACTIONS(626),
    [anon_sym_spam] = ACTIONS(626),
    [anon_sym_nospam] = ACTIONS(626),
    [anon_sym_subjectrx] = ACTIONS(626),
    [anon_sym_unsubjectrx] = ACTIONS(626),
    [anon_sym_subscribe_DASHto] = ACTIONS(626),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(626),
    [anon_sym_timeout_DASHhook] = ACTIONS(626),
    [anon_sym_startup_DASHhook] = ACTIONS(626),
    [anon_sym_shutdown_DASHhook] = ACTIONS(626),
    [anon_sym_unhook] = ACTIONS(626),
    [anon_sym_set] = ACTIONS(628),
    [anon_sym_unset] = ACTIONS(628),
    [anon_sym_reset] = ACTIONS(626),
    [anon_sym_toggle] = ACTIONS(626),
    [anon_sym_setenv] = ACTIONS(626),
    [anon_sym_unsetenv] = ACTIONS(626),
    [anon_sym_sidebar_pin] = ACTIONS(626),
    [anon_sym_sidebar_unpin] = ACTIONS(626),
    [anon_sym_score] = ACTIONS(626),
    [anon_sym_unscore] = ACTIONS(626),
    [anon_sym_source] = ACTIONS(626),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(630), 1,
      anon_sym_index,
    ACTIONS(634), 1,
      anon_sym_index_tag,
    STATE(28), 1,
      sym_composeobject,
    STATE(30), 1,
      sym_object,
    ACTIONS(636), 6,
      anon_sym_body,
      anon_sym_header,
      anon_sym_security_encrypt,
      anon_sym_security_sign,
      anon_sym_security_both,
      anon_sym_security_none,
    ACTIONS(632), 35,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_index_author,
      anon_sym_index_collapsed,
      anon_sym_index_date,
      anon_sym_index_flags,
      anon_sym_index_label,
      anon_sym_index_number,
      anon_sym_index_size,
      anon_sym_index_subject,
      anon_sym_index_tags,
      anon_sym_indicator,
      anon_sym_markers,
      anon_sym_message,
      anon_sym_normal,
      anon_sym_progress,
      anon_sym_prompt,
      aux_sym_object_token1,
      anon_sym_search,
      anon_sym_signature,
      anon_sym_status,
      anon_sym_tilde,
      anon_sym_tree,
      anon_sym_underline,
      anon_sym_sidebar_background,
      anon_sym_sidebar_divider,
      anon_sym_sidebar_flagged,
      anon_sym_sidebar_highlight,
      anon_sym_sidebar_indicator,
      anon_sym_sidebar_new,
      anon_sym_sidebar_ordinary,
      anon_sym_sidebar_spool_file,
  [58] = 7,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      sym__word,
    STATE(18), 1,
      sym__string,
    STATE(154), 2,
      sym_pattern,
      sym_object,
    ACTIONS(634), 36,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_index_author,
      anon_sym_index_collapsed,
      anon_sym_index_date,
      anon_sym_index_flags,
      anon_sym_index_label,
      anon_sym_index_number,
      anon_sym_index_size,
      anon_sym_index_subject,
      anon_sym_index_tag,
      anon_sym_index_tags,
      anon_sym_indicator,
      anon_sym_markers,
      anon_sym_message,
      anon_sym_normal,
      anon_sym_progress,
      anon_sym_prompt,
      aux_sym_object_token1,
      anon_sym_search,
      anon_sym_signature,
      anon_sym_status,
      anon_sym_tilde,
      anon_sym_tree,
      anon_sym_underline,
      anon_sym_sidebar_background,
      anon_sym_sidebar_divider,
      anon_sym_sidebar_flagged,
      anon_sym_sidebar_highlight,
      anon_sym_sidebar_indicator,
      anon_sym_sidebar_new,
      anon_sym_sidebar_ordinary,
      anon_sym_sidebar_spool_file,
  [116] = 6,
    STATE(39), 1,
      sym_foreground,
    STATE(40), 1,
      sym__attributes,
    STATE(43), 1,
      sym_attribute,
    STATE(53), 1,
      sym_color,
    ACTIONS(646), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(648), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [149] = 3,
    ACTIONS(652), 1,
      anon_sym_STAR,
    STATE(402), 1,
      sym_hook_type,
    ACTIONS(650), 18,
      anon_sym_account_DASHhook,
      anon_sym_charset_DASHhook,
      anon_sym_iconv_DASHhook,
      anon_sym_crypt_DASHhook,
      anon_sym_fcc_DASHhook,
      anon_sym_save_DASHhook,
      anon_sym_folder_DASHhook,
      anon_sym_mbox_DASHhook,
      anon_sym_message_DASHhook,
      anon_sym_open_DASHhook,
      anon_sym_close_DASHhook,
      anon_sym_append_DASHhook,
      anon_sym_reply_DASHhook,
      anon_sym_send_DASHhook,
      anon_sym_send2_DASHhook,
      anon_sym_timeout_DASHhook,
      anon_sym_startup_DASHhook,
      anon_sym_shutdown_DASHhook,
  [176] = 6,
    STATE(41), 1,
      sym_foreground,
    STATE(42), 1,
      sym__attributes,
    STATE(43), 1,
      sym_attribute,
    STATE(53), 1,
      sym_color,
    ACTIONS(646), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(648), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [209] = 4,
    ACTIONS(656), 1,
      anon_sym_STAR,
    STATE(198), 1,
      sym__maps,
    STATE(201), 1,
      sym_map,
    ACTIONS(654), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [234] = 1,
    ACTIONS(658), 16,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [253] = 1,
    ACTIONS(660), 16,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [272] = 4,
    ACTIONS(662), 1,
      anon_sym_STAR,
    STATE(172), 1,
      sym__maps,
    STATE(201), 1,
      sym_map,
    ACTIONS(654), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [297] = 3,
    STATE(171), 1,
      sym__maps,
    STATE(201), 1,
      sym_map,
    ACTIONS(654), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [319] = 3,
    STATE(200), 1,
      sym__maps,
    STATE(201), 1,
      sym_map,
    ACTIONS(654), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [341] = 2,
    STATE(270), 1,
      sym_map,
    ACTIONS(654), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [360] = 3,
    ACTIONS(664), 1,
      anon_sym_SPACE,
    STATE(38), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(667), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [380] = 3,
    STATE(235), 1,
      sym_background,
    STATE(262), 1,
      sym_color,
    ACTIONS(669), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [400] = 3,
    STATE(46), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(648), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [420] = 3,
    STATE(364), 1,
      sym_color,
    STATE(365), 1,
      sym_background,
    ACTIONS(671), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [440] = 3,
    STATE(45), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(648), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [460] = 3,
    ACTIONS(673), 1,
      anon_sym_SPACE,
    STATE(44), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(675), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [480] = 3,
    ACTIONS(673), 1,
      anon_sym_SPACE,
    STATE(38), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(677), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [500] = 3,
    STATE(364), 1,
      sym_color,
    STATE(404), 1,
      sym_background,
    ACTIONS(671), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [520] = 3,
    STATE(213), 1,
      sym_background,
    STATE(262), 1,
      sym_color,
    ACTIONS(669), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [540] = 2,
    ACTIONS(679), 1,
      anon_sym_SPACE,
    ACTIONS(667), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [557] = 9,
    ACTIONS(681), 1,
      anon_sym_SPACE,
    ACTIONS(685), 1,
      sym_int,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(225), 1,
      sym__string,
    STATE(227), 1,
      sym_quadoption,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [588] = 2,
    ACTIONS(695), 1,
      anon_sym_SPACE,
    ACTIONS(697), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [605] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(699), 1,
      anon_sym_SPACE,
    ACTIONS(701), 1,
      sym_int,
    STATE(207), 1,
      sym__string,
    STATE(208), 1,
      sym_quadoption,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [636] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(703), 1,
      anon_sym_SPACE,
    ACTIONS(705), 1,
      sym_int,
    STATE(286), 1,
      sym_quadoption,
    STATE(288), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [667] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(707), 1,
      anon_sym_SPACE,
    ACTIONS(709), 1,
      sym_int,
    STATE(284), 1,
      sym_quadoption,
    STATE(285), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [698] = 1,
    ACTIONS(711), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [712] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(713), 1,
      sym_int,
    STATE(294), 1,
      sym_quadoption,
    STATE(298), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [740] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(705), 1,
      sym_int,
    STATE(286), 1,
      sym_quadoption,
    STATE(289), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [768] = 1,
    ACTIONS(715), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [782] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(701), 1,
      sym_int,
    STATE(206), 1,
      sym__string,
    STATE(208), 1,
      sym_quadoption,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [810] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(717), 1,
      sym_int,
    STATE(197), 1,
      sym__string,
    STATE(199), 1,
      sym_quadoption,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [838] = 8,
    ACTIONS(719), 1,
      anon_sym_STAR,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      anon_sym_BQUOTE,
    ACTIONS(729), 1,
      sym__word,
    STATE(453), 1,
      sym_disposition,
    STATE(490), 1,
      sym__string,
    ACTIONS(721), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [864] = 9,
    ACTIONS(731), 1,
      anon_sym_DASHgroup,
    ACTIONS(733), 1,
      anon_sym_STAR,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(741), 1,
      sym__word,
    STATE(73), 1,
      sym__group,
    STATE(191), 1,
      sym__regex,
    STATE(355), 1,
      sym__regexes,
  [892] = 8,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      anon_sym_BQUOTE,
    ACTIONS(729), 1,
      sym__word,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    STATE(455), 1,
      sym_disposition,
    STATE(490), 1,
      sym__string,
    ACTIONS(743), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [918] = 4,
    ACTIONS(747), 1,
      anon_sym_LT,
    STATE(62), 1,
      aux_sym_key_repeat1,
    ACTIONS(750), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(753), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [935] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(755), 1,
      anon_sym_STAR,
    STATE(180), 1,
      sym_header_field,
    STATE(287), 1,
      sym__string,
    STATE(436), 1,
      sym__header_fields,
  [960] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(757), 1,
      anon_sym_STAR,
    STATE(196), 1,
      sym_header,
    STATE(307), 1,
      sym__string,
    STATE(346), 1,
      sym__headers,
  [985] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(62), 1,
      aux_sym_key_repeat1,
    ACTIONS(761), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(763), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [1002] = 4,
    ACTIONS(765), 1,
      anon_sym_SPACE,
    STATE(175), 1,
      aux_sym__options2_repeat1,
    ACTIONS(767), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
    ACTIONS(769), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1019] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(771), 1,
      anon_sym_STAR,
    STATE(173), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
    STATE(437), 1,
      sym__mailboxes,
  [1044] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(773), 1,
      anon_sym_STAR,
    STATE(173), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
    STATE(392), 1,
      sym__mailboxes,
  [1069] = 8,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(741), 1,
      sym__word,
    ACTIONS(775), 1,
      anon_sym_DASHgroup,
    STATE(106), 1,
      sym__group,
    STATE(191), 1,
      sym__regex,
    STATE(352), 1,
      sym__regexes,
  [1094] = 7,
    ACTIONS(777), 1,
      anon_sym_DASHgroup,
    ACTIONS(779), 1,
      anon_sym_STAR,
    ACTIONS(781), 1,
      anon_sym_LT,
    STATE(78), 1,
      aux_sym_key_repeat1,
    STATE(101), 1,
      sym__group,
    STATE(334), 1,
      sym_key,
    ACTIONS(783), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [1117] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(180), 1,
      sym_header_field,
    STATE(287), 1,
      sym__string,
    STATE(435), 1,
      sym__header_fields,
  [1142] = 7,
    ACTIONS(787), 1,
      anon_sym_BANG,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(795), 1,
      sym__word,
    STATE(183), 1,
      sym_pattern,
    STATE(300), 1,
      sym__string,
  [1164] = 7,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(741), 1,
      sym__word,
    ACTIONS(797), 1,
      anon_sym_STAR,
    STATE(191), 1,
      sym__regex,
    STATE(368), 1,
      sym__regexes,
  [1186] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(247), 1,
      sym_address,
    STATE(279), 1,
      sym__string,
    STATE(338), 1,
      sym__addresses,
  [1208] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(807), 1,
      anon_sym_STAR,
    ACTIONS(809), 1,
      sym__word,
    STATE(350), 1,
      sym_pattern,
    STATE(351), 1,
      sym__string,
  [1230] = 7,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(741), 1,
      sym__word,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(191), 1,
      sym__regex,
    STATE(313), 1,
      sym__regexes,
  [1252] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(809), 1,
      sym__word,
    ACTIONS(813), 1,
      anon_sym_STAR,
    STATE(422), 1,
      sym_header_field,
    STATE(443), 1,
      sym__string,
  [1274] = 4,
    ACTIONS(781), 1,
      anon_sym_LT,
    STATE(86), 1,
      aux_sym_key_repeat1,
    ACTIONS(815), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(763), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1290] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(173), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
    STATE(309), 1,
      sym__mailboxes,
  [1312] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(173), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
    STATE(439), 1,
      sym__mailboxes,
  [1334] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(819), 1,
      anon_sym_STAR,
    STATE(164), 1,
      sym__string,
    STATE(444), 1,
      sym__strings,
  [1356] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(809), 1,
      sym__word,
    ACTIONS(821), 1,
      anon_sym_STAR,
    STATE(351), 1,
      sym__string,
    STATE(391), 1,
      sym_pattern,
  [1378] = 1,
    ACTIONS(823), 7,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [1388] = 7,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(741), 1,
      sym__word,
    ACTIONS(825), 1,
      anon_sym_STAR,
    STATE(191), 1,
      sym__regex,
    STATE(316), 1,
      sym__regexes,
  [1410] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(196), 1,
      sym_header,
    STATE(307), 1,
      sym__string,
    STATE(366), 1,
      sym__headers,
  [1432] = 4,
    ACTIONS(827), 1,
      anon_sym_LT,
    STATE(86), 1,
      aux_sym_key_repeat1,
    ACTIONS(830), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(753), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1448] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(247), 1,
      sym_address,
    STATE(279), 1,
      sym__string,
    STATE(344), 1,
      sym__addresses,
  [1470] = 6,
    ACTIONS(759), 1,
      anon_sym_LT,
    ACTIONS(833), 1,
      anon_sym_DASHgroup,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(90), 1,
      sym_key,
    STATE(165), 1,
      sym__group,
    ACTIONS(835), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [1490] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(809), 1,
      sym__word,
    ACTIONS(837), 1,
      anon_sym_STAR,
    STATE(321), 1,
      sym_pattern,
    STATE(351), 1,
      sym__string,
  [1512] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(247), 1,
      sym_address,
    STATE(279), 1,
      sym__string,
    STATE(379), 1,
      sym__addresses,
  [1534] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(377), 1,
      sym_sequence,
    STATE(378), 1,
      sym__string,
  [1553] = 6,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(845), 1,
      sym__word,
    STATE(75), 1,
      sym_pattern,
    STATE(160), 1,
      sym__string,
  [1572] = 1,
    ACTIONS(823), 6,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1581] = 6,
    ACTIONS(847), 1,
      anon_sym_DASHnoregex,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      anon_sym_BQUOTE,
    ACTIONS(855), 1,
      sym__word,
    STATE(6), 1,
      sym__regex,
  [1600] = 6,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    ACTIONS(859), 1,
      anon_sym_DQUOTE,
    ACTIONS(861), 1,
      anon_sym_BQUOTE,
    ACTIONS(863), 1,
      sym__word,
    STATE(381), 1,
      sym__string,
    STATE(382), 1,
      sym_group_name,
  [1619] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(5), 1,
      sym_symbol,
    STATE(23), 1,
      sym__string,
  [1638] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(251), 1,
      sym_header,
    STATE(307), 1,
      sym__string,
  [1657] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(258), 1,
      sym_header_field,
    STATE(287), 1,
      sym__string,
  [1676] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(385), 1,
      sym_mailbox,
    STATE(442), 1,
      sym__string,
  [1695] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(140), 1,
      sym_pattern,
    STATE(300), 1,
      sym__string,
  [1714] = 5,
    ACTIONS(781), 1,
      anon_sym_LT,
    ACTIONS(869), 1,
      anon_sym_STAR,
    STATE(78), 1,
      aux_sym_key_repeat1,
    STATE(375), 1,
      sym_key,
    ACTIONS(783), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [1731] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(236), 1,
      sym_pattern,
    STATE(300), 1,
      sym__string,
  [1750] = 3,
    ACTIONS(875), 1,
      sym_option,
    ACTIONS(871), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(873), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [1763] = 6,
    ACTIONS(877), 1,
      anon_sym_DASHgroup,
    ACTIONS(879), 1,
      anon_sym_STAR,
    ACTIONS(881), 1,
      anon_sym_DASHrx,
    ACTIONS(883), 1,
      anon_sym_DASHaddr,
    STATE(275), 1,
      sym__group,
    STATE(424), 1,
      sym__rx_addr,
  [1782] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__space_token1,
    ACTIONS(885), 1,
      sym__eol,
    STATE(20), 1,
      sym__end,
    STATE(296), 1,
      aux_sym__space_repeat1,
    STATE(461), 1,
      sym__space,
  [1801] = 6,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__word,
    STATE(191), 1,
      sym__regex,
    STATE(371), 1,
      sym__regexes,
  [1820] = 6,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(845), 1,
      sym__word,
    STATE(218), 1,
      sym_group_name,
    STATE(223), 1,
      sym__string,
  [1839] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(18), 1,
      sym__string,
    STATE(491), 1,
      sym_pattern,
  [1858] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(268), 1,
      sym_address,
    STATE(279), 1,
      sym__string,
  [1877] = 2,
    STATE(47), 1,
      sym_attribute,
    ACTIONS(646), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [1888] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(133), 1,
      sym_description,
    STATE(293), 1,
      sym__string,
  [1907] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(410), 1,
      sym_uri,
    STATE(411), 1,
      sym__string,
  [1926] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(411), 1,
      sym__string,
    STATE(412), 1,
      sym_uri,
  [1945] = 6,
    ACTIONS(889), 1,
      anon_sym_STAR,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    ACTIONS(897), 1,
      sym__word,
    STATE(413), 1,
      sym__regex,
  [1964] = 6,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    ACTIONS(897), 1,
      sym__word,
    ACTIONS(899), 1,
      anon_sym_STAR,
    STATE(416), 1,
      sym__regex,
  [1983] = 6,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      anon_sym_BQUOTE,
    ACTIONS(901), 1,
      sym__word,
    STATE(462), 1,
      sym_disposition,
    STATE(490), 1,
      sym__string,
  [2002] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(139), 1,
      sym_pattern,
    STATE(300), 1,
      sym__string,
  [2021] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(138), 1,
      sym_pattern,
    STATE(300), 1,
      sym__string,
  [2040] = 6,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    ACTIONS(907), 1,
      anon_sym_BQUOTE,
    ACTIONS(909), 1,
      sym__word,
    STATE(72), 1,
      sym_name,
    STATE(168), 1,
      sym__string,
  [2059] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(14), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [2078] = 6,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      anon_sym_BQUOTE,
    ACTIONS(901), 1,
      sym__word,
    STATE(457), 1,
      sym_disposition,
    STATE(490), 1,
      sym__string,
  [2097] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(331), 1,
      sym_replacement,
    STATE(332), 1,
      sym__string,
  [2116] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(329), 1,
      sym_format,
    STATE(330), 1,
      sym__string,
  [2135] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(250), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
  [2154] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(130), 1,
      sym_charset,
    STATE(305), 1,
      sym__string,
  [2173] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(129), 1,
      sym_alias,
    STATE(303), 1,
      sym__string,
  [2192] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(323), 1,
      sym__string,
    STATE(325), 1,
      sym_shell_command,
  [2211] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(323), 1,
      sym__string,
    STATE(324), 1,
      sym_shell_command,
  [2230] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(358), 1,
      sym_charset,
    STATE(440), 1,
      sym__string,
  [2249] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(356), 1,
      sym_charset,
    STATE(440), 1,
      sym__string,
  [2268] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(13), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [2287] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(11), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [2306] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(273), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
  [2325] = 6,
    ACTIONS(911), 1,
      anon_sym_SQUOTE,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(915), 1,
      anon_sym_BQUOTE,
    ACTIONS(917), 1,
      sym__word,
    STATE(301), 1,
      sym_group_name,
    STATE(302), 1,
      sym__string,
  [2344] = 6,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      anon_sym_BQUOTE,
    ACTIONS(845), 1,
      sym__word,
    STATE(89), 1,
      sym_pattern,
    STATE(160), 1,
      sym__string,
  [2363] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(348), 1,
      sym__string,
    STATE(349), 1,
      sym_keyid,
  [2382] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(15), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [2401] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(320), 1,
      sym_mailbox,
    STATE(442), 1,
      sym__string,
  [2420] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(345), 1,
      sym_mailbox,
    STATE(442), 1,
      sym__string,
  [2439] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(343), 1,
      sym_mailbox,
    STATE(442), 1,
      sym__string,
  [2458] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(290), 1,
      sym_group_name,
    STATE(292), 1,
      sym__string,
  [2477] = 6,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__word,
    STATE(191), 1,
      sym__regex,
    STATE(341), 1,
      sym__regexes,
  [2496] = 6,
    ACTIONS(919), 1,
      anon_sym_DASHnoregex,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(927), 1,
      sym__word,
    STATE(152), 1,
      sym__regex,
  [2515] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(430), 1,
      sym__string,
    STATE(432), 1,
      sym_directory,
  [2534] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(433), 1,
      sym__string,
    STATE(434), 1,
      sym_message,
  [2553] = 6,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(151), 1,
      sym_description,
    STATE(293), 1,
      sym__string,
  [2572] = 6,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__word,
    STATE(191), 1,
      sym__regex,
    STATE(311), 1,
      sym__regexes,
  [2591] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(322), 1,
      sym_shell_command,
    STATE(323), 1,
      sym__string,
  [2610] = 6,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__word,
    STATE(191), 1,
      sym__regex,
    STATE(314), 1,
      sym__regexes,
  [2629] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(373), 1,
      sym_group_name,
    STATE(374), 1,
      sym__string,
  [2648] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(158), 1,
      sym_mailbox,
    STATE(295), 1,
      sym__string,
  [2667] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(318), 1,
      sym_mailbox,
    STATE(442), 1,
      sym__string,
  [2686] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(164), 1,
      sym__string,
    STATE(446), 1,
      sym__strings,
  [2705] = 2,
    STATE(166), 1,
      sym_attribute,
    ACTIONS(929), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [2716] = 6,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(10), 1,
      sym_symbol,
    STATE(23), 1,
      sym__string,
  [2735] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(933), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2747] = 3,
    ACTIONS(935), 1,
      anon_sym_SPACE,
    STATE(224), 1,
      aux_sym__options2_repeat1,
    ACTIONS(937), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2759] = 3,
    ACTIONS(939), 1,
      anon_sym_SPACE,
    STATE(241), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(941), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2771] = 3,
    ACTIONS(943), 1,
      anon_sym_SPACE,
    STATE(243), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(945), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2783] = 1,
    ACTIONS(602), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [2791] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(136), 1,
      sym__regex,
  [2807] = 3,
    ACTIONS(949), 1,
      anon_sym_SPACE,
    STATE(246), 1,
      aux_sym__strings_repeat1,
    ACTIONS(951), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2819] = 5,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(817), 1,
      sym__word,
    STATE(278), 1,
      sym__string,
  [2835] = 3,
    ACTIONS(949), 1,
      anon_sym_SPACE,
    STATE(162), 1,
      aux_sym__strings_repeat1,
    ACTIONS(953), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2847] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(87), 1,
      sym_key,
    ACTIONS(835), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2861] = 5,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__word,
    STATE(386), 1,
      sym__regex,
  [2877] = 5,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      anon_sym_BQUOTE,
    ACTIONS(957), 1,
      sym__word,
    STATE(12), 1,
      sym__regex,
  [2893] = 1,
    ACTIONS(959), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [2901] = 3,
    ACTIONS(961), 1,
      anon_sym_SPACE,
    STATE(181), 1,
      aux_sym__functions_repeat1,
    ACTIONS(963), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2913] = 3,
    ACTIONS(965), 1,
      anon_sym_SPACE,
    STATE(245), 1,
      aux_sym__headers_repeat1,
    ACTIONS(967), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2925] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(91), 1,
      sym_key,
    ACTIONS(835), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2939] = 4,
    ACTIONS(781), 1,
      anon_sym_LT,
    STATE(78), 1,
      aux_sym_key_repeat1,
    STATE(317), 1,
      sym_key,
    ACTIONS(783), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2953] = 3,
    ACTIONS(943), 1,
      anon_sym_SPACE,
    STATE(159), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(969), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2965] = 3,
    ACTIONS(935), 1,
      anon_sym_SPACE,
    STATE(157), 1,
      aux_sym__options2_repeat1,
    ACTIONS(971), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2977] = 3,
    ACTIONS(935), 1,
      anon_sym_SPACE,
    STATE(224), 1,
      aux_sym__options2_repeat1,
    ACTIONS(971), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2989] = 4,
    ACTIONS(753), 1,
      sym_function,
    ACTIONS(973), 1,
      anon_sym_LT,
    STATE(176), 1,
      aux_sym_key_repeat1,
    ACTIONS(976), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3003] = 3,
    ACTIONS(979), 1,
      anon_sym_SPACE,
    STATE(222), 1,
      aux_sym__options_repeat1,
    ACTIONS(981), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3015] = 5,
    ACTIONS(877), 1,
      anon_sym_DASHgroup,
    ACTIONS(881), 1,
      anon_sym_DASHrx,
    ACTIONS(883), 1,
      anon_sym_DASHaddr,
    STATE(429), 1,
      sym__rx_addr,
    STATE(438), 1,
      sym__group,
  [3031] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(390), 1,
      sym__string,
  [3047] = 3,
    ACTIONS(983), 1,
      anon_sym_SPACE,
    STATE(233), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(985), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3059] = 3,
    ACTIONS(961), 1,
      anon_sym_SPACE,
    STATE(240), 1,
      aux_sym__functions_repeat1,
    ACTIONS(987), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3071] = 1,
    ACTIONS(598), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3079] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(369), 1,
      sym__string,
  [3095] = 3,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(991), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3107] = 3,
    ACTIONS(993), 1,
      anon_sym_SPACE,
    STATE(185), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(996), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3119] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(423), 1,
      sym__string,
  [3135] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(99), 1,
      sym__regex,
  [3151] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(998), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3163] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1000), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3175] = 3,
    ACTIONS(1002), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1005), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3187] = 3,
    ACTIONS(1007), 1,
      anon_sym_SPACE,
    STATE(237), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1009), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3199] = 3,
    ACTIONS(1011), 1,
      anon_sym_SPACE,
    STATE(192), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1014), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3211] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1016), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3223] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1016), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3235] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(148), 1,
      sym__regex,
  [3251] = 3,
    ACTIONS(965), 1,
      anon_sym_SPACE,
    STATE(170), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1018), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3263] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(188), 1,
      aux_sym__options3_repeat1,
    ACTIONS(933), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3275] = 4,
    ACTIONS(781), 1,
      anon_sym_LT,
    STATE(78), 1,
      aux_sym_key_repeat1,
    STATE(359), 1,
      sym_key,
    ACTIONS(783), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3289] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(189), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1020), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3301] = 4,
    ACTIONS(1022), 1,
      anon_sym_LT,
    STATE(210), 1,
      aux_sym_key_repeat1,
    STATE(479), 1,
      sym_key,
    ACTIONS(1024), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3315] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1028), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3327] = 2,
    ACTIONS(1032), 1,
      anon_sym_SLASH,
    ACTIONS(1030), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3337] = 3,
    ACTIONS(1034), 1,
      anon_sym_SPACE,
    STATE(231), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1036), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3349] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1038), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3361] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(190), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1040), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3373] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(193), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1040), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3385] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(194), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1040), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3397] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(156), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1042), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3409] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(128), 1,
      sym__regex,
  [3425] = 4,
    ACTIONS(763), 1,
      sym_function,
    ACTIONS(1022), 1,
      anon_sym_LT,
    STATE(176), 1,
      aux_sym_key_repeat1,
    ACTIONS(1044), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3439] = 3,
    ACTIONS(1046), 1,
      anon_sym_SPACE,
    STATE(211), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1049), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3451] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(127), 1,
      sym__regex,
  [3467] = 5,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__word,
    STATE(417), 1,
      sym__regex,
  [3483] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(420), 1,
      sym__string,
  [3499] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(123), 1,
      sym__regex,
  [3515] = 3,
    ACTIONS(1051), 1,
      anon_sym_SPACE,
    STATE(216), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1054), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3527] = 3,
    ACTIONS(1056), 1,
      anon_sym_SPACE,
    STATE(216), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1058), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3539] = 1,
    ACTIONS(1060), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3547] = 3,
    ACTIONS(1062), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1065), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3559] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1067), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3571] = 3,
    ACTIONS(979), 1,
      anon_sym_SPACE,
    STATE(177), 1,
      aux_sym__options_repeat1,
    ACTIONS(1069), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3583] = 3,
    ACTIONS(1071), 1,
      anon_sym_SPACE,
    STATE(222), 1,
      aux_sym__options_repeat1,
    ACTIONS(1074), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3595] = 1,
    ACTIONS(1076), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3603] = 3,
    ACTIONS(1078), 1,
      anon_sym_SPACE,
    STATE(224), 1,
      aux_sym__options2_repeat1,
    ACTIONS(1081), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3615] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(204), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1083), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3627] = 3,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1088), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3639] = 3,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    STATE(205), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1090), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3651] = 1,
    ACTIONS(594), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3659] = 5,
    ACTIONS(921), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      anon_sym_BQUOTE,
    ACTIONS(947), 1,
      sym__word,
    STATE(122), 1,
      sym__regex,
  [3675] = 3,
    ACTIONS(1056), 1,
      anon_sym_SPACE,
    STATE(217), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1092), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3687] = 3,
    ACTIONS(1034), 1,
      anon_sym_SPACE,
    STATE(192), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1094), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3699] = 4,
    ACTIONS(1098), 1,
      sym_option,
    STATE(399), 1,
      sym__options2,
    STATE(400), 1,
      sym__options3,
    ACTIONS(1096), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [3713] = 3,
    ACTIONS(983), 1,
      anon_sym_SPACE,
    STATE(234), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(1100), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3725] = 3,
    ACTIONS(1102), 1,
      anon_sym_SPACE,
    STATE(234), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(1105), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3737] = 5,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_BQUOTE,
    ACTIONS(955), 1,
      sym__word,
    STATE(406), 1,
      sym__regex,
  [3753] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(407), 1,
      sym__string,
  [3769] = 3,
    ACTIONS(1007), 1,
      anon_sym_SPACE,
    STATE(185), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1107), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3781] = 5,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__word,
    STATE(281), 1,
      sym__regex,
  [3797] = 1,
    ACTIONS(598), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3805] = 3,
    ACTIONS(1109), 1,
      anon_sym_SPACE,
    STATE(240), 1,
      aux_sym__functions_repeat1,
    ACTIONS(1112), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3817] = 3,
    ACTIONS(939), 1,
      anon_sym_SPACE,
    STATE(211), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1114), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3829] = 5,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(865), 1,
      sym__word,
    STATE(4), 1,
      sym__string,
  [3845] = 3,
    ACTIONS(1116), 1,
      anon_sym_SPACE,
    STATE(243), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1119), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3857] = 1,
    ACTIONS(594), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3865] = 3,
    ACTIONS(1121), 1,
      anon_sym_SPACE,
    STATE(245), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1124), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3877] = 3,
    ACTIONS(1126), 1,
      anon_sym_SPACE,
    STATE(246), 1,
      aux_sym__strings_repeat1,
    ACTIONS(1129), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3889] = 3,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1131), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3901] = 1,
    ACTIONS(1133), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3908] = 1,
    ACTIONS(624), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3915] = 1,
    ACTIONS(1119), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3922] = 1,
    ACTIONS(1124), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3929] = 1,
    ACTIONS(598), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3936] = 1,
    ACTIONS(594), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3943] = 1,
    ACTIONS(1112), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3950] = 1,
    ACTIONS(598), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3957] = 3,
    ACTIONS(1137), 1,
      aux_sym__space_token1,
    STATE(256), 1,
      aux_sym__space_repeat1,
    ACTIONS(1135), 2,
      sym_comment,
      sym__eol,
  [3968] = 1,
    ACTIONS(594), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3975] = 1,
    ACTIONS(1105), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3982] = 2,
    ACTIONS(622), 1,
      sym__word,
    ACTIONS(624), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3991] = 2,
    ACTIONS(626), 1,
      sym__word,
    ACTIONS(628), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4000] = 1,
    ACTIONS(1081), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4007] = 2,
    ACTIONS(1142), 1,
      sym__word,
    ACTIONS(1140), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4016] = 1,
    ACTIONS(598), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4023] = 2,
    ACTIONS(596), 1,
      sym__word,
    ACTIONS(598), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4032] = 1,
    ACTIONS(1144), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4039] = 1,
    ACTIONS(594), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4046] = 1,
    ACTIONS(1074), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4053] = 1,
    ACTIONS(1065), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4060] = 4,
    ACTIONS(1146), 1,
      anon_sym_STAR,
    ACTIONS(1148), 1,
      sym_mime_type,
    STATE(203), 1,
      sym_mime,
    STATE(376), 1,
      sym__mimes,
  [4073] = 1,
    ACTIONS(1088), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4080] = 1,
    ACTIONS(1054), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4087] = 1,
    ACTIONS(1150), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4094] = 1,
    ACTIONS(1152), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4101] = 1,
    ACTIONS(1154), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4108] = 4,
    ACTIONS(881), 1,
      anon_sym_DASHrx,
    ACTIONS(883), 1,
      anon_sym_DASHaddr,
    ACTIONS(1156), 1,
      anon_sym_STAR,
    STATE(335), 1,
      sym__rx_addr,
  [4121] = 1,
    ACTIONS(1014), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4128] = 4,
    ACTIONS(1148), 1,
      sym_mime_type,
    ACTIONS(1158), 1,
      anon_sym_STAR,
    STATE(203), 1,
      sym_mime,
    STATE(425), 1,
      sym__mimes,
  [4141] = 1,
    ACTIONS(1160), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4148] = 1,
    ACTIONS(1162), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4155] = 2,
    ACTIONS(1164), 1,
      anon_sym_SPACE,
    ACTIONS(1166), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [4164] = 1,
    ACTIONS(1168), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4171] = 1,
    ACTIONS(628), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4178] = 1,
    ACTIONS(616), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4185] = 1,
    ACTIONS(1170), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4192] = 1,
    ACTIONS(1172), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4199] = 1,
    ACTIONS(1174), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4206] = 1,
    ACTIONS(1176), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4213] = 1,
    ACTIONS(1178), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4220] = 1,
    ACTIONS(1178), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4227] = 2,
    ACTIONS(1180), 1,
      sym__word,
    ACTIONS(1060), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4236] = 4,
    ACTIONS(1148), 1,
      sym_mime_type,
    ACTIONS(1182), 1,
      anon_sym_STAR,
    STATE(203), 1,
      sym_mime,
    STATE(419), 1,
      sym__mimes,
  [4249] = 2,
    ACTIONS(1184), 1,
      sym__word,
    ACTIONS(1076), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4258] = 2,
    ACTIONS(1188), 1,
      sym__word,
    ACTIONS(1186), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4267] = 1,
    ACTIONS(1190), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4274] = 1,
    ACTIONS(1192), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4281] = 3,
    ACTIONS(1196), 1,
      aux_sym__space_token1,
    STATE(256), 1,
      aux_sym__space_repeat1,
    ACTIONS(1194), 2,
      sym_comment,
      sym__eol,
  [4292] = 2,
    ACTIONS(715), 1,
      sym__word,
    ACTIONS(1198), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4301] = 1,
    ACTIONS(1200), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4308] = 2,
    ACTIONS(614), 1,
      sym__word,
    ACTIONS(616), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4317] = 2,
    ACTIONS(600), 1,
      sym__word,
    ACTIONS(602), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4326] = 1,
    ACTIONS(1060), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4333] = 1,
    ACTIONS(1076), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4340] = 2,
    ACTIONS(1204), 1,
      sym__word,
    ACTIONS(1202), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4349] = 2,
    ACTIONS(592), 1,
      sym__word,
    ACTIONS(594), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4358] = 2,
    ACTIONS(1208), 1,
      sym__word,
    ACTIONS(1206), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4367] = 2,
    ACTIONS(695), 1,
      sym__word,
    ACTIONS(697), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4376] = 1,
    ACTIONS(1210), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4383] = 1,
    ACTIONS(823), 4,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_function,
  [4390] = 1,
    ACTIONS(1212), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4396] = 1,
    ACTIONS(1214), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4402] = 1,
    ACTIONS(1216), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4408] = 1,
    ACTIONS(1218), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4414] = 1,
    ACTIONS(1220), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4420] = 1,
    ACTIONS(1222), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4426] = 1,
    ACTIONS(1224), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4432] = 1,
    ACTIONS(1226), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4438] = 1,
    ACTIONS(1228), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4444] = 1,
    ACTIONS(1230), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4450] = 1,
    ACTIONS(1232), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4456] = 1,
    ACTIONS(1234), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4462] = 1,
    ACTIONS(1236), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4468] = 1,
    ACTIONS(1238), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4474] = 1,
    ACTIONS(1240), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4480] = 1,
    ACTIONS(1242), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4486] = 1,
    ACTIONS(1244), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4492] = 1,
    ACTIONS(1246), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4498] = 1,
    ACTIONS(1248), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4504] = 1,
    ACTIONS(1250), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4510] = 1,
    ACTIONS(1252), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4516] = 1,
    ACTIONS(1254), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4522] = 1,
    ACTIONS(1256), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4528] = 1,
    ACTIONS(1258), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4534] = 1,
    ACTIONS(1260), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4540] = 1,
    ACTIONS(1262), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4546] = 1,
    ACTIONS(1264), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4552] = 1,
    ACTIONS(1266), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4558] = 1,
    ACTIONS(1268), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4564] = 1,
    ACTIONS(1270), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4570] = 1,
    ACTIONS(1272), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4576] = 1,
    ACTIONS(1274), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4582] = 1,
    ACTIONS(1276), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4588] = 1,
    ACTIONS(1278), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4594] = 1,
    ACTIONS(1280), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4600] = 1,
    ACTIONS(1282), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4606] = 1,
    ACTIONS(1284), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4612] = 1,
    ACTIONS(1286), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4618] = 1,
    ACTIONS(616), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4624] = 1,
    ACTIONS(1288), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4630] = 1,
    ACTIONS(1290), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4636] = 1,
    ACTIONS(1292), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4642] = 1,
    ACTIONS(602), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4648] = 1,
    ACTIONS(1294), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4654] = 1,
    ACTIONS(1296), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4660] = 1,
    ACTIONS(1298), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4666] = 1,
    ACTIONS(1300), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4672] = 1,
    ACTIONS(1302), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4678] = 1,
    ACTIONS(1304), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4684] = 1,
    ACTIONS(1306), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4690] = 1,
    ACTIONS(1308), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4696] = 1,
    ACTIONS(1310), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4702] = 1,
    ACTIONS(1312), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4708] = 1,
    ACTIONS(1314), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4714] = 1,
    ACTIONS(624), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4720] = 1,
    ACTIONS(1140), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4726] = 1,
    ACTIONS(1316), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4732] = 1,
    ACTIONS(1318), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4738] = 1,
    ACTIONS(628), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4744] = 1,
    ACTIONS(1320), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4750] = 1,
    ACTIONS(1322), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4756] = 1,
    ACTIONS(1324), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4762] = 1,
    ACTIONS(1326), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4768] = 1,
    ACTIONS(1328), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4774] = 1,
    ACTIONS(1180), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [4780] = 1,
    ACTIONS(1184), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [4786] = 1,
    ACTIONS(1330), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4792] = 1,
    ACTIONS(1332), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4798] = 1,
    ACTIONS(1334), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4804] = 1,
    ACTIONS(1336), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4810] = 1,
    ACTIONS(1338), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4816] = 1,
    ACTIONS(1340), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4822] = 1,
    ACTIONS(1076), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4828] = 1,
    ACTIONS(1060), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4834] = 1,
    ACTIONS(1342), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4840] = 1,
    ACTIONS(598), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4846] = 1,
    ACTIONS(1344), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4852] = 1,
    ACTIONS(1346), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4858] = 2,
    ACTIONS(875), 1,
      sym_option,
    ACTIONS(871), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [4866] = 1,
    ACTIONS(594), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4872] = 1,
    ACTIONS(1348), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4878] = 1,
    ACTIONS(1350), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4884] = 1,
    ACTIONS(1352), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4890] = 1,
    ACTIONS(1354), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4896] = 1,
    ACTIONS(1356), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4902] = 1,
    ACTIONS(1358), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4908] = 3,
    ACTIONS(1148), 1,
      sym_mime_type,
    STATE(203), 1,
      sym_mime,
    STATE(415), 1,
      sym__mimes,
  [4918] = 1,
    ACTIONS(1360), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4924] = 1,
    ACTIONS(1362), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4930] = 1,
    ACTIONS(1364), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4936] = 1,
    ACTIONS(1366), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4942] = 1,
    ACTIONS(1368), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4948] = 3,
    ACTIONS(1148), 1,
      sym_mime_type,
    STATE(203), 1,
      sym_mime,
    STATE(421), 1,
      sym__mimes,
  [4958] = 1,
    ACTIONS(1370), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4964] = 1,
    ACTIONS(1372), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4970] = 1,
    ACTIONS(1374), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4976] = 1,
    ACTIONS(1376), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4982] = 1,
    ACTIONS(1378), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4988] = 1,
    ACTIONS(1380), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4994] = 1,
    ACTIONS(1382), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5000] = 1,
    ACTIONS(1384), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5006] = 1,
    ACTIONS(1386), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5012] = 1,
    ACTIONS(1388), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5018] = 1,
    ACTIONS(1390), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5024] = 1,
    ACTIONS(1392), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5030] = 1,
    ACTIONS(1394), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5036] = 1,
    ACTIONS(1396), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5042] = 1,
    ACTIONS(1398), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5048] = 1,
    ACTIONS(1400), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5054] = 1,
    ACTIONS(1402), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5060] = 1,
    ACTIONS(1404), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5066] = 1,
    ACTIONS(1406), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5072] = 1,
    ACTIONS(1408), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5078] = 1,
    ACTIONS(1410), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5084] = 1,
    ACTIONS(1412), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5090] = 1,
    ACTIONS(1414), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5096] = 1,
    ACTIONS(1416), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5102] = 1,
    ACTIONS(1418), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5108] = 1,
    ACTIONS(1420), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5114] = 1,
    ACTIONS(1422), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [5120] = 1,
    ACTIONS(1424), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5126] = 1,
    ACTIONS(1426), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5132] = 3,
    ACTIONS(1148), 1,
      sym_mime_type,
    STATE(203), 1,
      sym_mime,
    STATE(426), 1,
      sym__mimes,
  [5142] = 1,
    ACTIONS(1428), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5148] = 1,
    ACTIONS(1430), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5154] = 1,
    ACTIONS(1432), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5160] = 1,
    ACTIONS(1434), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5166] = 1,
    ACTIONS(1436), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5172] = 1,
    ACTIONS(1438), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5178] = 3,
    ACTIONS(881), 1,
      anon_sym_DASHrx,
    ACTIONS(883), 1,
      anon_sym_DASHaddr,
    STATE(337), 1,
      sym__rx_addr,
  [5188] = 1,
    ACTIONS(1440), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5194] = 1,
    ACTIONS(1206), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5200] = 1,
    ACTIONS(1442), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5206] = 1,
    ACTIONS(1192), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5212] = 1,
    ACTIONS(1176), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5218] = 1,
    ACTIONS(1444), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5224] = 1,
    ACTIONS(1446), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5230] = 1,
    ACTIONS(1448), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5236] = 1,
    ACTIONS(1198), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5242] = 2,
    ACTIONS(1148), 1,
      sym_mime_type,
    STATE(276), 1,
      sym_mime,
  [5249] = 2,
    ACTIONS(1450), 1,
      sym_function,
    STATE(441), 1,
      sym__functions,
  [5256] = 2,
    ACTIONS(1452), 1,
      anon_sym_DASHgroup,
    STATE(76), 1,
      sym__group,
  [5263] = 2,
    ACTIONS(1452), 1,
      anon_sym_DASHgroup,
    STATE(84), 1,
      sym__group,
  [5270] = 2,
    ACTIONS(1454), 1,
      anon_sym_DASHgroup,
    STATE(147), 1,
      sym__group,
  [5277] = 2,
    ACTIONS(1456), 1,
      sym_mime_type,
    STATE(361), 1,
      sym__mime_types,
  [5284] = 2,
    ACTIONS(1454), 1,
      anon_sym_DASHgroup,
    STATE(149), 1,
      sym__group,
  [5291] = 2,
    ACTIONS(1456), 1,
      sym_mime_type,
    STATE(362), 1,
      sym__mime_types,
  [5298] = 2,
    ACTIONS(1458), 1,
      sym_option,
    STATE(398), 1,
      sym__options,
  [5305] = 2,
    ACTIONS(1456), 1,
      sym_mime_type,
    STATE(357), 1,
      sym__mime_types,
  [5312] = 2,
    ACTIONS(1458), 1,
      sym_option,
    STATE(397), 1,
      sym__options,
  [5319] = 2,
    ACTIONS(1458), 1,
      sym_option,
    STATE(396), 1,
      sym__options,
  [5326] = 2,
    ACTIONS(1460), 1,
      anon_sym_QMARK,
    ACTIONS(1462), 1,
      sym_option,
  [5333] = 2,
    ACTIONS(1464), 1,
      sym_comment,
    ACTIONS(1466), 1,
      sym__eol,
  [5340] = 2,
    ACTIONS(1456), 1,
      sym_mime_type,
    STATE(354), 1,
      sym__mime_types,
  [5347] = 1,
    ACTIONS(1468), 1,
      anon_sym_DQUOTE,
  [5351] = 1,
    ACTIONS(1470), 1,
      anon_sym_BQUOTE,
  [5355] = 1,
    ACTIONS(1472), 1,
      sym_mime_type,
  [5359] = 1,
    ACTIONS(1474), 1,
      sym_option,
  [5363] = 1,
    ACTIONS(1476), 1,
      sym_option,
  [5367] = 1,
    ACTIONS(1466), 1,
      sym__eol,
  [5371] = 1,
    ACTIONS(1478), 1,
      ts_builtin_sym_end,
  [5375] = 1,
    ACTIONS(1480), 1,
      sym_option,
  [5379] = 1,
    ACTIONS(1482), 1,
      aux_sym__string_token1,
  [5383] = 1,
    ACTIONS(1484), 1,
      aux_sym__string_token2,
  [5387] = 1,
    ACTIONS(1486), 1,
      aux_sym__string_token3,
  [5391] = 1,
    ACTIONS(1488), 1,
      aux_sym_key_token1,
  [5395] = 1,
    ACTIONS(1490), 1,
      aux_sym__string_token1,
  [5399] = 1,
    ACTIONS(1492), 1,
      sym_function,
  [5403] = 1,
    ACTIONS(1494), 1,
      aux_sym__string_token2,
  [5407] = 1,
    ACTIONS(1496), 1,
      aux_sym__string_token3,
  [5411] = 1,
    ACTIONS(1498), 1,
      sym_function,
  [5415] = 1,
    ACTIONS(1500), 1,
      sym_mime_type,
  [5419] = 1,
    ACTIONS(1502), 1,
      anon_sym_BQUOTE,
  [5423] = 1,
    ACTIONS(1504), 1,
      anon_sym_DQUOTE,
  [5427] = 1,
    ACTIONS(1504), 1,
      anon_sym_SQUOTE,
  [5431] = 1,
    ACTIONS(1506), 1,
      anon_sym_GT,
  [5435] = 1,
    ACTIONS(1508), 1,
      anon_sym_BQUOTE,
  [5439] = 1,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
  [5443] = 1,
    ACTIONS(1508), 1,
      anon_sym_SQUOTE,
  [5447] = 1,
    ACTIONS(1510), 1,
      sym_option,
  [5451] = 1,
    ACTIONS(1512), 1,
      sym__eol,
  [5455] = 1,
    ACTIONS(1514), 1,
      sym_mime_type,
  [5459] = 1,
    ACTIONS(1516), 1,
      sym_int,
  [5463] = 1,
    ACTIONS(1518), 1,
      aux_sym_setenv_directive_token1,
  [5467] = 1,
    ACTIONS(1520), 1,
      anon_sym_SQUOTE,
  [5471] = 1,
    ACTIONS(1520), 1,
      anon_sym_DQUOTE,
  [5475] = 1,
    ACTIONS(1520), 1,
      anon_sym_BQUOTE,
  [5479] = 1,
    ACTIONS(1522), 1,
      anon_sym_GT,
  [5483] = 1,
    ACTIONS(1524), 1,
      anon_sym_SQUOTE,
  [5487] = 1,
    ACTIONS(1524), 1,
      anon_sym_DQUOTE,
  [5491] = 1,
    ACTIONS(1526), 1,
      anon_sym_BQUOTE,
  [5495] = 1,
    ACTIONS(1518), 1,
      sym_option,
  [5499] = 1,
    ACTIONS(1528), 1,
      anon_sym_SQUOTE,
  [5503] = 1,
    ACTIONS(1528), 1,
      anon_sym_DQUOTE,
  [5507] = 1,
    ACTIONS(1528), 1,
      anon_sym_BQUOTE,
  [5511] = 1,
    ACTIONS(1530), 1,
      anon_sym_GT,
  [5515] = 1,
    ACTIONS(1468), 1,
      anon_sym_SQUOTE,
  [5519] = 1,
    ACTIONS(592), 1,
      sym_mime_type,
  [5523] = 1,
    ACTIONS(1532), 1,
      anon_sym_BQUOTE,
  [5527] = 1,
    ACTIONS(1534), 1,
      sym_option,
  [5531] = 1,
    ACTIONS(1536), 1,
      anon_sym_SQUOTE,
  [5535] = 1,
    ACTIONS(1536), 1,
      anon_sym_DQUOTE,
  [5539] = 1,
    ACTIONS(1536), 1,
      anon_sym_BQUOTE,
  [5543] = 1,
    ACTIONS(1538), 1,
      anon_sym_SQUOTE,
  [5547] = 1,
    ACTIONS(1538), 1,
      anon_sym_DQUOTE,
  [5551] = 1,
    ACTIONS(596), 1,
      sym_mime_type,
  [5555] = 1,
    ACTIONS(1540), 1,
      anon_sym_SQUOTE,
  [5559] = 1,
    ACTIONS(1540), 1,
      anon_sym_DQUOTE,
  [5563] = 1,
    ACTIONS(1540), 1,
      anon_sym_BQUOTE,
  [5567] = 1,
    ACTIONS(1542), 1,
      anon_sym_SQUOTE,
  [5571] = 1,
    ACTIONS(1542), 1,
      anon_sym_DQUOTE,
  [5575] = 1,
    ACTIONS(1542), 1,
      anon_sym_BQUOTE,
  [5579] = 1,
    ACTIONS(1544), 1,
      anon_sym_SQUOTE,
  [5583] = 1,
    ACTIONS(1544), 1,
      anon_sym_DQUOTE,
  [5587] = 1,
    ACTIONS(1544), 1,
      anon_sym_BQUOTE,
  [5591] = 1,
    ACTIONS(1546), 1,
      anon_sym_SQUOTE,
  [5595] = 1,
    ACTIONS(1546), 1,
      anon_sym_DQUOTE,
  [5599] = 1,
    ACTIONS(1546), 1,
      anon_sym_BQUOTE,
  [5603] = 1,
    ACTIONS(1548), 1,
      anon_sym_SQUOTE,
  [5607] = 1,
    ACTIONS(1548), 1,
      anon_sym_DQUOTE,
  [5611] = 1,
    ACTIONS(1548), 1,
      anon_sym_BQUOTE,
  [5615] = 1,
    ACTIONS(1550), 1,
      aux_sym__string_token1,
  [5619] = 1,
    ACTIONS(1552), 1,
      aux_sym__string_token2,
  [5623] = 1,
    ACTIONS(1554), 1,
      aux_sym__string_token3,
  [5627] = 1,
    ACTIONS(1556), 1,
      aux_sym_key_token1,
  [5631] = 1,
    ACTIONS(1558), 1,
      aux_sym__string_token1,
  [5635] = 1,
    ACTIONS(1560), 1,
      aux_sym__string_token2,
  [5639] = 1,
    ACTIONS(1562), 1,
      aux_sym__string_token3,
  [5643] = 1,
    ACTIONS(1564), 1,
      aux_sym__string_token1,
  [5647] = 1,
    ACTIONS(1566), 1,
      aux_sym__string_token2,
  [5651] = 1,
    ACTIONS(1568), 1,
      aux_sym__string_token3,
  [5655] = 1,
    ACTIONS(1570), 1,
      aux_sym_key_token1,
  [5659] = 1,
    ACTIONS(1572), 1,
      aux_sym__string_token1,
  [5663] = 1,
    ACTIONS(1574), 1,
      aux_sym__string_token2,
  [5667] = 1,
    ACTIONS(1576), 1,
      aux_sym__string_token3,
  [5671] = 1,
    ACTIONS(1578), 1,
      aux_sym__string_token1,
  [5675] = 1,
    ACTIONS(1580), 1,
      aux_sym__string_token2,
  [5679] = 1,
    ACTIONS(1582), 1,
      aux_sym__string_token3,
  [5683] = 1,
    ACTIONS(1584), 1,
      aux_sym__string_token1,
  [5687] = 1,
    ACTIONS(1586), 1,
      aux_sym__string_token2,
  [5691] = 1,
    ACTIONS(1588), 1,
      aux_sym__string_token3,
  [5695] = 1,
    ACTIONS(1590), 1,
      aux_sym__string_token1,
  [5699] = 1,
    ACTIONS(1592), 1,
      aux_sym__string_token2,
  [5703] = 1,
    ACTIONS(1594), 1,
      aux_sym__string_token3,
  [5707] = 1,
    ACTIONS(1596), 1,
      aux_sym__string_token1,
  [5711] = 1,
    ACTIONS(1598), 1,
      aux_sym__string_token2,
  [5715] = 1,
    ACTIONS(1600), 1,
      aux_sym__string_token3,
  [5719] = 1,
    ACTIONS(1602), 1,
      aux_sym__string_token1,
  [5723] = 1,
    ACTIONS(1604), 1,
      aux_sym__string_token2,
  [5727] = 1,
    ACTIONS(1606), 1,
      aux_sym__string_token3,
  [5731] = 1,
    ACTIONS(1608), 1,
      aux_sym__string_token1,
  [5735] = 1,
    ACTIONS(1610), 1,
      aux_sym__string_token2,
  [5739] = 1,
    ACTIONS(1612), 1,
      aux_sym__string_token3,
  [5743] = 1,
    ACTIONS(1614), 1,
      aux_sym__string_token1,
  [5747] = 1,
    ACTIONS(1616), 1,
      aux_sym__string_token2,
  [5751] = 1,
    ACTIONS(1618), 1,
      aux_sym__string_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 58,
  [SMALL_STATE(28)] = 116,
  [SMALL_STATE(29)] = 149,
  [SMALL_STATE(30)] = 176,
  [SMALL_STATE(31)] = 209,
  [SMALL_STATE(32)] = 234,
  [SMALL_STATE(33)] = 253,
  [SMALL_STATE(34)] = 272,
  [SMALL_STATE(35)] = 297,
  [SMALL_STATE(36)] = 319,
  [SMALL_STATE(37)] = 341,
  [SMALL_STATE(38)] = 360,
  [SMALL_STATE(39)] = 380,
  [SMALL_STATE(40)] = 400,
  [SMALL_STATE(41)] = 420,
  [SMALL_STATE(42)] = 440,
  [SMALL_STATE(43)] = 460,
  [SMALL_STATE(44)] = 480,
  [SMALL_STATE(45)] = 500,
  [SMALL_STATE(46)] = 520,
  [SMALL_STATE(47)] = 540,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 605,
  [SMALL_STATE(51)] = 636,
  [SMALL_STATE(52)] = 667,
  [SMALL_STATE(53)] = 698,
  [SMALL_STATE(54)] = 712,
  [SMALL_STATE(55)] = 740,
  [SMALL_STATE(56)] = 768,
  [SMALL_STATE(57)] = 782,
  [SMALL_STATE(58)] = 810,
  [SMALL_STATE(59)] = 838,
  [SMALL_STATE(60)] = 864,
  [SMALL_STATE(61)] = 892,
  [SMALL_STATE(62)] = 918,
  [SMALL_STATE(63)] = 935,
  [SMALL_STATE(64)] = 960,
  [SMALL_STATE(65)] = 985,
  [SMALL_STATE(66)] = 1002,
  [SMALL_STATE(67)] = 1019,
  [SMALL_STATE(68)] = 1044,
  [SMALL_STATE(69)] = 1069,
  [SMALL_STATE(70)] = 1094,
  [SMALL_STATE(71)] = 1117,
  [SMALL_STATE(72)] = 1142,
  [SMALL_STATE(73)] = 1164,
  [SMALL_STATE(74)] = 1186,
  [SMALL_STATE(75)] = 1208,
  [SMALL_STATE(76)] = 1230,
  [SMALL_STATE(77)] = 1252,
  [SMALL_STATE(78)] = 1274,
  [SMALL_STATE(79)] = 1290,
  [SMALL_STATE(80)] = 1312,
  [SMALL_STATE(81)] = 1334,
  [SMALL_STATE(82)] = 1356,
  [SMALL_STATE(83)] = 1378,
  [SMALL_STATE(84)] = 1388,
  [SMALL_STATE(85)] = 1410,
  [SMALL_STATE(86)] = 1432,
  [SMALL_STATE(87)] = 1448,
  [SMALL_STATE(88)] = 1470,
  [SMALL_STATE(89)] = 1490,
  [SMALL_STATE(90)] = 1512,
  [SMALL_STATE(91)] = 1534,
  [SMALL_STATE(92)] = 1553,
  [SMALL_STATE(93)] = 1572,
  [SMALL_STATE(94)] = 1581,
  [SMALL_STATE(95)] = 1600,
  [SMALL_STATE(96)] = 1619,
  [SMALL_STATE(97)] = 1638,
  [SMALL_STATE(98)] = 1657,
  [SMALL_STATE(99)] = 1676,
  [SMALL_STATE(100)] = 1695,
  [SMALL_STATE(101)] = 1714,
  [SMALL_STATE(102)] = 1731,
  [SMALL_STATE(103)] = 1750,
  [SMALL_STATE(104)] = 1763,
  [SMALL_STATE(105)] = 1782,
  [SMALL_STATE(106)] = 1801,
  [SMALL_STATE(107)] = 1820,
  [SMALL_STATE(108)] = 1839,
  [SMALL_STATE(109)] = 1858,
  [SMALL_STATE(110)] = 1877,
  [SMALL_STATE(111)] = 1888,
  [SMALL_STATE(112)] = 1907,
  [SMALL_STATE(113)] = 1926,
  [SMALL_STATE(114)] = 1945,
  [SMALL_STATE(115)] = 1964,
  [SMALL_STATE(116)] = 1983,
  [SMALL_STATE(117)] = 2002,
  [SMALL_STATE(118)] = 2021,
  [SMALL_STATE(119)] = 2040,
  [SMALL_STATE(120)] = 2059,
  [SMALL_STATE(121)] = 2078,
  [SMALL_STATE(122)] = 2097,
  [SMALL_STATE(123)] = 2116,
  [SMALL_STATE(124)] = 2135,
  [SMALL_STATE(125)] = 2154,
  [SMALL_STATE(126)] = 2173,
  [SMALL_STATE(127)] = 2192,
  [SMALL_STATE(128)] = 2211,
  [SMALL_STATE(129)] = 2230,
  [SMALL_STATE(130)] = 2249,
  [SMALL_STATE(131)] = 2268,
  [SMALL_STATE(132)] = 2287,
  [SMALL_STATE(133)] = 2306,
  [SMALL_STATE(134)] = 2325,
  [SMALL_STATE(135)] = 2344,
  [SMALL_STATE(136)] = 2363,
  [SMALL_STATE(137)] = 2382,
  [SMALL_STATE(138)] = 2401,
  [SMALL_STATE(139)] = 2420,
  [SMALL_STATE(140)] = 2439,
  [SMALL_STATE(141)] = 2458,
  [SMALL_STATE(142)] = 2477,
  [SMALL_STATE(143)] = 2496,
  [SMALL_STATE(144)] = 2515,
  [SMALL_STATE(145)] = 2534,
  [SMALL_STATE(146)] = 2553,
  [SMALL_STATE(147)] = 2572,
  [SMALL_STATE(148)] = 2591,
  [SMALL_STATE(149)] = 2610,
  [SMALL_STATE(150)] = 2629,
  [SMALL_STATE(151)] = 2648,
  [SMALL_STATE(152)] = 2667,
  [SMALL_STATE(153)] = 2686,
  [SMALL_STATE(154)] = 2705,
  [SMALL_STATE(155)] = 2716,
  [SMALL_STATE(156)] = 2735,
  [SMALL_STATE(157)] = 2747,
  [SMALL_STATE(158)] = 2759,
  [SMALL_STATE(159)] = 2771,
  [SMALL_STATE(160)] = 2783,
  [SMALL_STATE(161)] = 2791,
  [SMALL_STATE(162)] = 2807,
  [SMALL_STATE(163)] = 2819,
  [SMALL_STATE(164)] = 2835,
  [SMALL_STATE(165)] = 2847,
  [SMALL_STATE(166)] = 2861,
  [SMALL_STATE(167)] = 2877,
  [SMALL_STATE(168)] = 2893,
  [SMALL_STATE(169)] = 2901,
  [SMALL_STATE(170)] = 2913,
  [SMALL_STATE(171)] = 2925,
  [SMALL_STATE(172)] = 2939,
  [SMALL_STATE(173)] = 2953,
  [SMALL_STATE(174)] = 2965,
  [SMALL_STATE(175)] = 2977,
  [SMALL_STATE(176)] = 2989,
  [SMALL_STATE(177)] = 3003,
  [SMALL_STATE(178)] = 3015,
  [SMALL_STATE(179)] = 3031,
  [SMALL_STATE(180)] = 3047,
  [SMALL_STATE(181)] = 3059,
  [SMALL_STATE(182)] = 3071,
  [SMALL_STATE(183)] = 3079,
  [SMALL_STATE(184)] = 3095,
  [SMALL_STATE(185)] = 3107,
  [SMALL_STATE(186)] = 3119,
  [SMALL_STATE(187)] = 3135,
  [SMALL_STATE(188)] = 3151,
  [SMALL_STATE(189)] = 3163,
  [SMALL_STATE(190)] = 3175,
  [SMALL_STATE(191)] = 3187,
  [SMALL_STATE(192)] = 3199,
  [SMALL_STATE(193)] = 3211,
  [SMALL_STATE(194)] = 3223,
  [SMALL_STATE(195)] = 3235,
  [SMALL_STATE(196)] = 3251,
  [SMALL_STATE(197)] = 3263,
  [SMALL_STATE(198)] = 3275,
  [SMALL_STATE(199)] = 3289,
  [SMALL_STATE(200)] = 3301,
  [SMALL_STATE(201)] = 3315,
  [SMALL_STATE(202)] = 3327,
  [SMALL_STATE(203)] = 3337,
  [SMALL_STATE(204)] = 3349,
  [SMALL_STATE(205)] = 3361,
  [SMALL_STATE(206)] = 3373,
  [SMALL_STATE(207)] = 3385,
  [SMALL_STATE(208)] = 3397,
  [SMALL_STATE(209)] = 3409,
  [SMALL_STATE(210)] = 3425,
  [SMALL_STATE(211)] = 3439,
  [SMALL_STATE(212)] = 3451,
  [SMALL_STATE(213)] = 3467,
  [SMALL_STATE(214)] = 3483,
  [SMALL_STATE(215)] = 3499,
  [SMALL_STATE(216)] = 3515,
  [SMALL_STATE(217)] = 3527,
  [SMALL_STATE(218)] = 3539,
  [SMALL_STATE(219)] = 3547,
  [SMALL_STATE(220)] = 3559,
  [SMALL_STATE(221)] = 3571,
  [SMALL_STATE(222)] = 3583,
  [SMALL_STATE(223)] = 3595,
  [SMALL_STATE(224)] = 3603,
  [SMALL_STATE(225)] = 3615,
  [SMALL_STATE(226)] = 3627,
  [SMALL_STATE(227)] = 3639,
  [SMALL_STATE(228)] = 3651,
  [SMALL_STATE(229)] = 3659,
  [SMALL_STATE(230)] = 3675,
  [SMALL_STATE(231)] = 3687,
  [SMALL_STATE(232)] = 3699,
  [SMALL_STATE(233)] = 3713,
  [SMALL_STATE(234)] = 3725,
  [SMALL_STATE(235)] = 3737,
  [SMALL_STATE(236)] = 3753,
  [SMALL_STATE(237)] = 3769,
  [SMALL_STATE(238)] = 3781,
  [SMALL_STATE(239)] = 3797,
  [SMALL_STATE(240)] = 3805,
  [SMALL_STATE(241)] = 3817,
  [SMALL_STATE(242)] = 3829,
  [SMALL_STATE(243)] = 3845,
  [SMALL_STATE(244)] = 3857,
  [SMALL_STATE(245)] = 3865,
  [SMALL_STATE(246)] = 3877,
  [SMALL_STATE(247)] = 3889,
  [SMALL_STATE(248)] = 3901,
  [SMALL_STATE(249)] = 3908,
  [SMALL_STATE(250)] = 3915,
  [SMALL_STATE(251)] = 3922,
  [SMALL_STATE(252)] = 3929,
  [SMALL_STATE(253)] = 3936,
  [SMALL_STATE(254)] = 3943,
  [SMALL_STATE(255)] = 3950,
  [SMALL_STATE(256)] = 3957,
  [SMALL_STATE(257)] = 3968,
  [SMALL_STATE(258)] = 3975,
  [SMALL_STATE(259)] = 3982,
  [SMALL_STATE(260)] = 3991,
  [SMALL_STATE(261)] = 4000,
  [SMALL_STATE(262)] = 4007,
  [SMALL_STATE(263)] = 4016,
  [SMALL_STATE(264)] = 4023,
  [SMALL_STATE(265)] = 4032,
  [SMALL_STATE(266)] = 4039,
  [SMALL_STATE(267)] = 4046,
  [SMALL_STATE(268)] = 4053,
  [SMALL_STATE(269)] = 4060,
  [SMALL_STATE(270)] = 4073,
  [SMALL_STATE(271)] = 4080,
  [SMALL_STATE(272)] = 4087,
  [SMALL_STATE(273)] = 4094,
  [SMALL_STATE(274)] = 4101,
  [SMALL_STATE(275)] = 4108,
  [SMALL_STATE(276)] = 4121,
  [SMALL_STATE(277)] = 4128,
  [SMALL_STATE(278)] = 4141,
  [SMALL_STATE(279)] = 4148,
  [SMALL_STATE(280)] = 4155,
  [SMALL_STATE(281)] = 4164,
  [SMALL_STATE(282)] = 4171,
  [SMALL_STATE(283)] = 4178,
  [SMALL_STATE(284)] = 4185,
  [SMALL_STATE(285)] = 4192,
  [SMALL_STATE(286)] = 4199,
  [SMALL_STATE(287)] = 4206,
  [SMALL_STATE(288)] = 4213,
  [SMALL_STATE(289)] = 4220,
  [SMALL_STATE(290)] = 4227,
  [SMALL_STATE(291)] = 4236,
  [SMALL_STATE(292)] = 4249,
  [SMALL_STATE(293)] = 4258,
  [SMALL_STATE(294)] = 4267,
  [SMALL_STATE(295)] = 4274,
  [SMALL_STATE(296)] = 4281,
  [SMALL_STATE(297)] = 4292,
  [SMALL_STATE(298)] = 4301,
  [SMALL_STATE(299)] = 4308,
  [SMALL_STATE(300)] = 4317,
  [SMALL_STATE(301)] = 4326,
  [SMALL_STATE(302)] = 4333,
  [SMALL_STATE(303)] = 4340,
  [SMALL_STATE(304)] = 4349,
  [SMALL_STATE(305)] = 4358,
  [SMALL_STATE(306)] = 4367,
  [SMALL_STATE(307)] = 4376,
  [SMALL_STATE(308)] = 4383,
  [SMALL_STATE(309)] = 4390,
  [SMALL_STATE(310)] = 4396,
  [SMALL_STATE(311)] = 4402,
  [SMALL_STATE(312)] = 4408,
  [SMALL_STATE(313)] = 4414,
  [SMALL_STATE(314)] = 4420,
  [SMALL_STATE(315)] = 4426,
  [SMALL_STATE(316)] = 4432,
  [SMALL_STATE(317)] = 4438,
  [SMALL_STATE(318)] = 4444,
  [SMALL_STATE(319)] = 4450,
  [SMALL_STATE(320)] = 4456,
  [SMALL_STATE(321)] = 4462,
  [SMALL_STATE(322)] = 4468,
  [SMALL_STATE(323)] = 4474,
  [SMALL_STATE(324)] = 4480,
  [SMALL_STATE(325)] = 4486,
  [SMALL_STATE(326)] = 4492,
  [SMALL_STATE(327)] = 4498,
  [SMALL_STATE(328)] = 4504,
  [SMALL_STATE(329)] = 4510,
  [SMALL_STATE(330)] = 4516,
  [SMALL_STATE(331)] = 4522,
  [SMALL_STATE(332)] = 4528,
  [SMALL_STATE(333)] = 4534,
  [SMALL_STATE(334)] = 4540,
  [SMALL_STATE(335)] = 4546,
  [SMALL_STATE(336)] = 4552,
  [SMALL_STATE(337)] = 4558,
  [SMALL_STATE(338)] = 4564,
  [SMALL_STATE(339)] = 4570,
  [SMALL_STATE(340)] = 4576,
  [SMALL_STATE(341)] = 4582,
  [SMALL_STATE(342)] = 4588,
  [SMALL_STATE(343)] = 4594,
  [SMALL_STATE(344)] = 4600,
  [SMALL_STATE(345)] = 4606,
  [SMALL_STATE(346)] = 4612,
  [SMALL_STATE(347)] = 4618,
  [SMALL_STATE(348)] = 4624,
  [SMALL_STATE(349)] = 4630,
  [SMALL_STATE(350)] = 4636,
  [SMALL_STATE(351)] = 4642,
  [SMALL_STATE(352)] = 4648,
  [SMALL_STATE(353)] = 4654,
  [SMALL_STATE(354)] = 4660,
  [SMALL_STATE(355)] = 4666,
  [SMALL_STATE(356)] = 4672,
  [SMALL_STATE(357)] = 4678,
  [SMALL_STATE(358)] = 4684,
  [SMALL_STATE(359)] = 4690,
  [SMALL_STATE(360)] = 4696,
  [SMALL_STATE(361)] = 4702,
  [SMALL_STATE(362)] = 4708,
  [SMALL_STATE(363)] = 4714,
  [SMALL_STATE(364)] = 4720,
  [SMALL_STATE(365)] = 4726,
  [SMALL_STATE(366)] = 4732,
  [SMALL_STATE(367)] = 4738,
  [SMALL_STATE(368)] = 4744,
  [SMALL_STATE(369)] = 4750,
  [SMALL_STATE(370)] = 4756,
  [SMALL_STATE(371)] = 4762,
  [SMALL_STATE(372)] = 4768,
  [SMALL_STATE(373)] = 4774,
  [SMALL_STATE(374)] = 4780,
  [SMALL_STATE(375)] = 4786,
  [SMALL_STATE(376)] = 4792,
  [SMALL_STATE(377)] = 4798,
  [SMALL_STATE(378)] = 4804,
  [SMALL_STATE(379)] = 4810,
  [SMALL_STATE(380)] = 4816,
  [SMALL_STATE(381)] = 4822,
  [SMALL_STATE(382)] = 4828,
  [SMALL_STATE(383)] = 4834,
  [SMALL_STATE(384)] = 4840,
  [SMALL_STATE(385)] = 4846,
  [SMALL_STATE(386)] = 4852,
  [SMALL_STATE(387)] = 4858,
  [SMALL_STATE(388)] = 4866,
  [SMALL_STATE(389)] = 4872,
  [SMALL_STATE(390)] = 4878,
  [SMALL_STATE(391)] = 4884,
  [SMALL_STATE(392)] = 4890,
  [SMALL_STATE(393)] = 4896,
  [SMALL_STATE(394)] = 4902,
  [SMALL_STATE(395)] = 4908,
  [SMALL_STATE(396)] = 4918,
  [SMALL_STATE(397)] = 4924,
  [SMALL_STATE(398)] = 4930,
  [SMALL_STATE(399)] = 4936,
  [SMALL_STATE(400)] = 4942,
  [SMALL_STATE(401)] = 4948,
  [SMALL_STATE(402)] = 4958,
  [SMALL_STATE(403)] = 4964,
  [SMALL_STATE(404)] = 4970,
  [SMALL_STATE(405)] = 4976,
  [SMALL_STATE(406)] = 4982,
  [SMALL_STATE(407)] = 4988,
  [SMALL_STATE(408)] = 4994,
  [SMALL_STATE(409)] = 5000,
  [SMALL_STATE(410)] = 5006,
  [SMALL_STATE(411)] = 5012,
  [SMALL_STATE(412)] = 5018,
  [SMALL_STATE(413)] = 5024,
  [SMALL_STATE(414)] = 5030,
  [SMALL_STATE(415)] = 5036,
  [SMALL_STATE(416)] = 5042,
  [SMALL_STATE(417)] = 5048,
  [SMALL_STATE(418)] = 5054,
  [SMALL_STATE(419)] = 5060,
  [SMALL_STATE(420)] = 5066,
  [SMALL_STATE(421)] = 5072,
  [SMALL_STATE(422)] = 5078,
  [SMALL_STATE(423)] = 5084,
  [SMALL_STATE(424)] = 5090,
  [SMALL_STATE(425)] = 5096,
  [SMALL_STATE(426)] = 5102,
  [SMALL_STATE(427)] = 5108,
  [SMALL_STATE(428)] = 5114,
  [SMALL_STATE(429)] = 5120,
  [SMALL_STATE(430)] = 5126,
  [SMALL_STATE(431)] = 5132,
  [SMALL_STATE(432)] = 5142,
  [SMALL_STATE(433)] = 5148,
  [SMALL_STATE(434)] = 5154,
  [SMALL_STATE(435)] = 5160,
  [SMALL_STATE(436)] = 5166,
  [SMALL_STATE(437)] = 5172,
  [SMALL_STATE(438)] = 5178,
  [SMALL_STATE(439)] = 5188,
  [SMALL_STATE(440)] = 5194,
  [SMALL_STATE(441)] = 5200,
  [SMALL_STATE(442)] = 5206,
  [SMALL_STATE(443)] = 5212,
  [SMALL_STATE(444)] = 5218,
  [SMALL_STATE(445)] = 5224,
  [SMALL_STATE(446)] = 5230,
  [SMALL_STATE(447)] = 5236,
  [SMALL_STATE(448)] = 5242,
  [SMALL_STATE(449)] = 5249,
  [SMALL_STATE(450)] = 5256,
  [SMALL_STATE(451)] = 5263,
  [SMALL_STATE(452)] = 5270,
  [SMALL_STATE(453)] = 5277,
  [SMALL_STATE(454)] = 5284,
  [SMALL_STATE(455)] = 5291,
  [SMALL_STATE(456)] = 5298,
  [SMALL_STATE(457)] = 5305,
  [SMALL_STATE(458)] = 5312,
  [SMALL_STATE(459)] = 5319,
  [SMALL_STATE(460)] = 5326,
  [SMALL_STATE(461)] = 5333,
  [SMALL_STATE(462)] = 5340,
  [SMALL_STATE(463)] = 5347,
  [SMALL_STATE(464)] = 5351,
  [SMALL_STATE(465)] = 5355,
  [SMALL_STATE(466)] = 5359,
  [SMALL_STATE(467)] = 5363,
  [SMALL_STATE(468)] = 5367,
  [SMALL_STATE(469)] = 5371,
  [SMALL_STATE(470)] = 5375,
  [SMALL_STATE(471)] = 5379,
  [SMALL_STATE(472)] = 5383,
  [SMALL_STATE(473)] = 5387,
  [SMALL_STATE(474)] = 5391,
  [SMALL_STATE(475)] = 5395,
  [SMALL_STATE(476)] = 5399,
  [SMALL_STATE(477)] = 5403,
  [SMALL_STATE(478)] = 5407,
  [SMALL_STATE(479)] = 5411,
  [SMALL_STATE(480)] = 5415,
  [SMALL_STATE(481)] = 5419,
  [SMALL_STATE(482)] = 5423,
  [SMALL_STATE(483)] = 5427,
  [SMALL_STATE(484)] = 5431,
  [SMALL_STATE(485)] = 5435,
  [SMALL_STATE(486)] = 5439,
  [SMALL_STATE(487)] = 5443,
  [SMALL_STATE(488)] = 5447,
  [SMALL_STATE(489)] = 5451,
  [SMALL_STATE(490)] = 5455,
  [SMALL_STATE(491)] = 5459,
  [SMALL_STATE(492)] = 5463,
  [SMALL_STATE(493)] = 5467,
  [SMALL_STATE(494)] = 5471,
  [SMALL_STATE(495)] = 5475,
  [SMALL_STATE(496)] = 5479,
  [SMALL_STATE(497)] = 5483,
  [SMALL_STATE(498)] = 5487,
  [SMALL_STATE(499)] = 5491,
  [SMALL_STATE(500)] = 5495,
  [SMALL_STATE(501)] = 5499,
  [SMALL_STATE(502)] = 5503,
  [SMALL_STATE(503)] = 5507,
  [SMALL_STATE(504)] = 5511,
  [SMALL_STATE(505)] = 5515,
  [SMALL_STATE(506)] = 5519,
  [SMALL_STATE(507)] = 5523,
  [SMALL_STATE(508)] = 5527,
  [SMALL_STATE(509)] = 5531,
  [SMALL_STATE(510)] = 5535,
  [SMALL_STATE(511)] = 5539,
  [SMALL_STATE(512)] = 5543,
  [SMALL_STATE(513)] = 5547,
  [SMALL_STATE(514)] = 5551,
  [SMALL_STATE(515)] = 5555,
  [SMALL_STATE(516)] = 5559,
  [SMALL_STATE(517)] = 5563,
  [SMALL_STATE(518)] = 5567,
  [SMALL_STATE(519)] = 5571,
  [SMALL_STATE(520)] = 5575,
  [SMALL_STATE(521)] = 5579,
  [SMALL_STATE(522)] = 5583,
  [SMALL_STATE(523)] = 5587,
  [SMALL_STATE(524)] = 5591,
  [SMALL_STATE(525)] = 5595,
  [SMALL_STATE(526)] = 5599,
  [SMALL_STATE(527)] = 5603,
  [SMALL_STATE(528)] = 5607,
  [SMALL_STATE(529)] = 5611,
  [SMALL_STATE(530)] = 5615,
  [SMALL_STATE(531)] = 5619,
  [SMALL_STATE(532)] = 5623,
  [SMALL_STATE(533)] = 5627,
  [SMALL_STATE(534)] = 5631,
  [SMALL_STATE(535)] = 5635,
  [SMALL_STATE(536)] = 5639,
  [SMALL_STATE(537)] = 5643,
  [SMALL_STATE(538)] = 5647,
  [SMALL_STATE(539)] = 5651,
  [SMALL_STATE(540)] = 5655,
  [SMALL_STATE(541)] = 5659,
  [SMALL_STATE(542)] = 5663,
  [SMALL_STATE(543)] = 5667,
  [SMALL_STATE(544)] = 5671,
  [SMALL_STATE(545)] = 5675,
  [SMALL_STATE(546)] = 5679,
  [SMALL_STATE(547)] = 5683,
  [SMALL_STATE(548)] = 5687,
  [SMALL_STATE(549)] = 5691,
  [SMALL_STATE(550)] = 5695,
  [SMALL_STATE(551)] = 5699,
  [SMALL_STATE(552)] = 5703,
  [SMALL_STATE(553)] = 5707,
  [SMALL_STATE(554)] = 5711,
  [SMALL_STATE(555)] = 5715,
  [SMALL_STATE(556)] = 5719,
  [SMALL_STATE(557)] = 5723,
  [SMALL_STATE(558)] = 5727,
  [SMALL_STATE(559)] = 5731,
  [SMALL_STATE(560)] = 5735,
  [SMALL_STATE(561)] = 5739,
  [SMALL_STATE(562)] = 5743,
  [SMALL_STATE(563)] = 5747,
  [SMALL_STATE(564)] = 5751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(242),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(88),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(70),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(69),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(60),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(401),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(269),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(61),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(59),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(395),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(291),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(36),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(126),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(125),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(26),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(92),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(161),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(119),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(449),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(118),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(117),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(100),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(94),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(178),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(104),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(85),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(64),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(96),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(155),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(393),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(153),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(81),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(452),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(450),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(454),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(451),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(35),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(34),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(80),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(146),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(67),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(63),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(71),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(145),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(144),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(143),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(137),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(431),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(277),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(27),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(135),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(186),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(77),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(195),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(209),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(212),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(214),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(132),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(131),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(120),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(215),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(115),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(229),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(114),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(113),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(112),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(29),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(232),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(456),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(458),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(459),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(460),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(466),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(79),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(108),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(82),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(179),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(468),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(296),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 9),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 9),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 1, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 1, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, .production_id = 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, .production_id = 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, .production_id = 10),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, .production_id = 10),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, .production_id = 9),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, .production_id = 9),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composeobject, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(110),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreground, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(474),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(62),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(533),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(86),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5, .production_id = 15),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 3),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 3),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 2, .production_id = 8),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 1, .production_id = 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, .production_id = 3),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 1),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 2),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 1),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 2),
  [973] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(540),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(176),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 2),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 2),
  [993] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 8), SHIFT_REPEAT(238),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 8),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 6, .production_id = 19),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 6, .production_id = 17),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 2, .production_id = 8), SHIFT_REPEAT(488),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 2, .production_id = 8),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 1, .production_id = 3),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2), SHIFT_REPEAT(448),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5, .production_id = 18),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 1),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 1),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 1),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4, .production_id = 16),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4, .production_id = 12),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1046] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2), SHIFT_REPEAT(111),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2),
  [1051] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2), SHIFT_REPEAT(465),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2), SHIFT_REPEAT(109),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 2),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 1),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(470),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_name, 1, .production_id = 3),
  [1078] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2), SHIFT_REPEAT(387),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 3, .production_id = 7),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2), SHIFT_REPEAT(37),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 3),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 1),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 2),
  [1102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2), SHIFT_REPEAT(98),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 2, .production_id = 8),
  [1109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2), SHIFT_REPEAT(476),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 4),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2), SHIFT_REPEAT(124),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(97),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 8), SHIFT_REPEAT(163),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 8),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 1),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 3, .production_id = 11),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(256),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quadoption, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 3),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 3),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 2),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, .production_id = 3),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 2),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 4),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 4, .production_id = 12),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 5),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_field, 1, .production_id = 3),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 5, .production_id = 15),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1, .production_id = 3),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, .production_id = 3),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, .production_id = 3),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 6),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailbox, 1, .production_id = 3),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 6, .production_id = 17),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1, .production_id = 3),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, .production_id = 3),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset, 1, .production_id = 3),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset, 1, .production_id = 3),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 3),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_pin_directive, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifndef_directive, 3),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lists_directive, 3, .production_id = 7),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3, .production_id = 7),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_directive, 3, .production_id = 7),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3, .production_id = 7),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmacro_directive, 3),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 3, .production_id = 6),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_hook_directive, 3, .production_id = 4),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_save_hook_directive, 3),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmono_directive, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_hook_directive, 3, .production_id = 6),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1, .production_id = 3),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_hook_directive, 3, .production_id = 6),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append_hook_directive, 3, .production_id = 6),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reply_hook_directive, 3, .production_id = 4),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send_hook_directive, 3, .production_id = 4),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send2_hook_directive, 3, .production_id = 4),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spam_directive, 3, .production_id = 2),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 1, .production_id = 3),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectrx_directive, 3, .production_id = 2),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1, .production_id = 3),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifdef_directive, 3),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 2),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3, .production_id = 7),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 3, .production_id = 7),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setenv_directive, 3),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_directive, 3),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2, .production_id = 2),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 3, .production_id = 6),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_hook_directive, 3, .production_id = 4),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 4, .production_id = 4),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_hook_directive, 3, .production_id = 4),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhdr_order_directive, 2),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyid, 1, .production_id = 3),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_crypt_hook_directive, 3, .production_id = 6),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncolor_directive, 3),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 2, .production_id = 2),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 4),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2, .production_id = 2),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iconv_hook_directive, 3, .production_id = 4),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 4),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_hook_directive, 3, .production_id = 4),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbind_directive, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_directive, 4),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 3),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 4),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hdr_order_directive, 2),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3, .production_id = 7),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 4, .production_id = 12),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 3, .production_id = 7),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 4, .production_id = 13),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 3),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternative_order_directive, 2),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_directive, 4),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1, .production_id = 3),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 3, .production_id = 4),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 2),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_hook_directive, 3, .production_id = 6),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 4, .production_id = 14),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mono_directive, 4, .production_id = 12),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 2),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_directive, 2, .production_id = 5),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unscore_directive, 2),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_unpin_directive, 2),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finish_directive, 1),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsetenv_directive, 2),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toggle_directive, 2),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reset_directive, 2),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_directive, 2),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2, .production_id = 2),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhook_directive, 2),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hook_type, 1),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shutdown_hook_directive, 2, .production_id = 4),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5, .production_id = 15),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 5, .production_id = 15),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup_hook_directive, 2, .production_id = 4),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeout_hook_directive, 2, .production_id = 4),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_from_directive, 2),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 1, .production_id = 3),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_to_directive, 2),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2, .production_id = 2),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_view_directive, 2),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2, .production_id = 2),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 6, .production_id = 17),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unauto_view_directive, 2),
  [1406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_directive, 2, .production_id = 2),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative_order_directive, 2),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmy_hdr_directive, 2),
  [1412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_my_hdr_directive, 2, .production_id = 2),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2, .production_id = 2),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmime_lookup_directive, 2),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime_lookup_directive, 2),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 2, .production_id = 2),
  [1426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 1, .production_id = 3),
  [1428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cd_directive, 2),
  [1430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, .production_id = 3),
  [1432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_directive, 2),
  [1434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailto_allow_directive, 2),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto_allow_directive, 2),
  [1438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailboxes_directive, 2),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailboxes_directive, 2),
  [1442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_directive, 2),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2, .production_id = 2),
  [1446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignore_directive, 2, .production_id = 2),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1478] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disposition, 1, .production_id = 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_muttrc() {
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
