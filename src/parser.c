#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 543
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 343
#define ALIAS_COUNT 3
#define TOKEN_COUNT 192
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
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
  anon_sym_ = 12,
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
  anon_sym_body = 45,
  anon_sym_bold = 46,
  anon_sym_error = 47,
  anon_sym_hdrdefault = 48,
  anon_sym_header = 49,
  anon_sym_index_author = 50,
  anon_sym_index_collapsed = 51,
  anon_sym_index_date = 52,
  anon_sym_index_flags = 53,
  anon_sym_index_label = 54,
  anon_sym_index_number = 55,
  anon_sym_index_size = 56,
  anon_sym_index_subject = 57,
  anon_sym_index_tag = 58,
  anon_sym_index_tags = 59,
  anon_sym_indicator = 60,
  anon_sym_markers = 61,
  anon_sym_message = 62,
  anon_sym_normal = 63,
  anon_sym_progress = 64,
  anon_sym_prompt = 65,
  aux_sym_object_token1 = 66,
  anon_sym_search = 67,
  anon_sym_signature = 68,
  anon_sym_status = 69,
  anon_sym_tilde = 70,
  anon_sym_tree = 71,
  anon_sym_underline = 72,
  anon_sym_sidebar_background = 73,
  anon_sym_sidebar_divider = 74,
  anon_sym_sidebar_flagged = 75,
  anon_sym_sidebar_highlight = 76,
  anon_sym_sidebar_indicator = 77,
  anon_sym_sidebar_new = 78,
  anon_sym_sidebar_ordinary = 79,
  anon_sym_sidebar_spool_file = 80,
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
  anon_sym_LF = 186,
  sym__word = 187,
  anon_sym_source = 188,
  sym_comment = 189,
  sym__eol = 190,
  aux_sym__space_token1 = 191,
  sym_file = 192,
  sym__command = 193,
  sym_account_hook_directive = 194,
  sym_group_name = 195,
  sym__group = 196,
  sym__addresses = 197,
  sym_alias_directive = 198,
  sym_address = 199,
  sym_unalias_directive = 200,
  sym_key = 201,
  sym__regexes = 202,
  sym_alternates_directive = 203,
  sym_unalternates_directive = 204,
  sym_alternative_order_directive = 205,
  sym_unalternative_order_directive = 206,
  sym_mime = 207,
  sym__mime_types = 208,
  sym__mimes = 209,
  sym_disposition = 210,
  sym_attachments_directive = 211,
  sym_unattachments_directive = 212,
  sym_auto_view_directive = 213,
  sym_unauto_view_directive = 214,
  sym_map = 215,
  sym__maps = 216,
  sym__functions = 217,
  sym_bind_directive = 218,
  sym_unbind_directive = 219,
  sym_alias = 220,
  sym_charset = 221,
  sym_charset_hook_directive = 222,
  sym_iconv_hook_directive = 223,
  sym_pattern = 224,
  sym_object = 225,
  sym_composeobject = 226,
  sym_color = 227,
  sym_attribute = 228,
  sym__attributes = 229,
  sym_foreground = 230,
  sym_background = 231,
  sym_color_directive = 232,
  sym_uncolor_directive = 233,
  sym_keyid = 234,
  sym_crypt_hook_directive = 235,
  sym_name = 236,
  sym_index_format_hook_directive = 237,
  sym_exec_directive = 238,
  sym_fcc_save_hook_directive = 239,
  sym_fcc_hook_directive = 240,
  sym_save_hook_directive = 241,
  sym_folder_hook_directive = 242,
  sym__rx_addr = 243,
  sym_group_directive = 244,
  sym_ungroup_directive = 245,
  sym_header = 246,
  sym__headers = 247,
  sym_hdr_order_directive = 248,
  sym_unhdr_order_directive = 249,
  sym_symbol = 250,
  sym_ifdef_directive = 251,
  sym_ifndef_directive = 252,
  sym_finish_directive = 253,
  sym__strings = 254,
  sym_ignore_directive = 255,
  sym_unignore_directive = 256,
  sym_lists_directive = 257,
  sym_unlists_directive = 258,
  sym_subscribe_directive = 259,
  sym_unsubscribe_directive = 260,
  sym_sequence = 261,
  sym_macro_directive = 262,
  sym_unmacro_directive = 263,
  sym_mailbox = 264,
  sym__mailboxes = 265,
  sym_description = 266,
  sym_mailboxes_directive = 267,
  sym_named_mailboxes_directive = 268,
  sym_unmailboxes_directive = 269,
  sym_header_field = 270,
  sym__header_fields = 271,
  sym_mailto_allow_directive = 272,
  sym_unmailto_allow_directive = 273,
  sym_message = 274,
  sym_echo_directive = 275,
  sym_directory = 276,
  sym_cd_directive = 277,
  sym_mbox_hook_directive = 278,
  sym_message_hook_directive = 279,
  sym_mime_lookup_directive = 280,
  sym_unmime_lookup_directive = 281,
  sym_mono_directive = 282,
  sym_unmono_directive = 283,
  sym_my_hdr_directive = 284,
  sym_unmy_hdr_directive = 285,
  sym_shell_command = 286,
  sym_open_hook_directive = 287,
  sym_close_hook_directive = 288,
  sym_append_hook_directive = 289,
  sym_push_directive = 290,
  sym_reply_hook_directive = 291,
  sym_send_hook_directive = 292,
  sym_send2_hook_directive = 293,
  sym_format = 294,
  sym_spam_directive = 295,
  sym_nospam_directive = 296,
  sym_replacement = 297,
  sym_subjectrx_directive = 298,
  sym_unsubjectrx_directive = 299,
  sym_uri = 300,
  sym_subscribe_to_directive = 301,
  sym_unsubscribe_from_directive = 302,
  sym_timeout_hook_directive = 303,
  sym_startup_hook_directive = 304,
  sym_shutdown_hook_directive = 305,
  sym_hook_type = 306,
  sym_unhook_directive = 307,
  sym_set_directive = 308,
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
  aux_sym__options2_repeat1 = 340,
  aux_sym__options_repeat1 = 341,
  aux_sym__space_repeat1 = 342,
  alias_sym_path = 343,
  alias_sym_regex = 344,
  alias_sym_sub_mime_type = 345,
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
  [anon_sym_] = " ",
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
  [anon_sym_body] = "body",
  [anon_sym_bold] = "bold",
  [anon_sym_error] = "error",
  [anon_sym_hdrdefault] = "hdrdefault",
  [anon_sym_header] = "header",
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
  [anon_sym_LF] = "\n",
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
  [anon_sym_] = anon_sym_,
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
  [anon_sym_body] = anon_sym_body,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_hdrdefault] = anon_sym_hdrdefault,
  [anon_sym_header] = anon_sym_header,
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
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_] = {
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
  [anon_sym_body] = {
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
  [anon_sym_header] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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

enum {
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
  [16] = {.index = 8, .length = 1},
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 95,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 95,
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
  [134] = 134,
  [135] = 95,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 62,
  [143] = 65,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 17,
  [151] = 16,
  [152] = 17,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 16,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 18,
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
  [176] = 176,
  [177] = 177,
  [178] = 74,
  [179] = 179,
  [180] = 180,
  [181] = 62,
  [182] = 22,
  [183] = 183,
  [184] = 54,
  [185] = 49,
  [186] = 18,
  [187] = 23,
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
  [198] = 24,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 16,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
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
  [224] = 154,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 153,
  [231] = 231,
  [232] = 232,
  [233] = 65,
  [234] = 234,
  [235] = 17,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 24,
  [245] = 245,
  [246] = 17,
  [247] = 16,
  [248] = 17,
  [249] = 16,
  [250] = 17,
  [251] = 16,
  [252] = 252,
  [253] = 253,
  [254] = 23,
  [255] = 255,
  [256] = 74,
  [257] = 257,
  [258] = 258,
  [259] = 153,
  [260] = 154,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
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
  [280] = 22,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 17,
  [291] = 291,
  [292] = 16,
  [293] = 154,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 153,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
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
  [319] = 153,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 154,
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
  [339] = 24,
  [340] = 340,
  [341] = 22,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 18,
  [352] = 352,
  [353] = 353,
  [354] = 23,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 54,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
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
  [411] = 193,
  [412] = 412,
  [413] = 257,
  [414] = 258,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 206,
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
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 17,
  [445] = 16,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 442,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 443,
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
  [471] = 443,
  [472] = 472,
  [473] = 469,
  [474] = 463,
  [475] = 452,
  [476] = 442,
  [477] = 446,
  [478] = 472,
  [479] = 443,
  [480] = 472,
  [481] = 469,
  [482] = 463,
  [483] = 452,
  [484] = 484,
  [485] = 446,
  [486] = 486,
  [487] = 443,
  [488] = 472,
  [489] = 469,
  [490] = 452,
  [491] = 442,
  [492] = 446,
  [493] = 493,
  [494] = 472,
  [495] = 469,
  [496] = 443,
  [497] = 472,
  [498] = 469,
  [499] = 443,
  [500] = 472,
  [501] = 469,
  [502] = 443,
  [503] = 472,
  [504] = 469,
  [505] = 443,
  [506] = 472,
  [507] = 469,
  [508] = 468,
  [509] = 470,
  [510] = 486,
  [511] = 448,
  [512] = 453,
  [513] = 451,
  [514] = 465,
  [515] = 468,
  [516] = 470,
  [517] = 486,
  [518] = 448,
  [519] = 453,
  [520] = 451,
  [521] = 465,
  [522] = 468,
  [523] = 470,
  [524] = 486,
  [525] = 453,
  [526] = 451,
  [527] = 465,
  [528] = 468,
  [529] = 470,
  [530] = 486,
  [531] = 468,
  [532] = 470,
  [533] = 486,
  [534] = 468,
  [535] = 470,
  [536] = 486,
  [537] = 468,
  [538] = 470,
  [539] = 486,
  [540] = 468,
  [541] = 470,
  [542] = 486,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(966);
      if (lookahead == '!') ADVANCE(1134);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '#') ADVANCE(960);
      if (lookahead == '&') ADVANCE(1195);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '+') ADVANCE(1006);
      if (lookahead == ',') ADVANCE(970);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '/') ADVANCE(1004);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '=') ADVANCE(1194);
      if (lookahead == '>') ADVANCE(978);
      if (lookahead == '?') ADVANCE(1010);
      if (lookahead == '\\') SKIP(962)
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(447);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(1535);
      if (lookahead == '\n') ADVANCE(1531);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(996);
      if (lookahead == '#') ADVANCE(1530);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(1004);
      if (lookahead == '=') ADVANCE(1194);
      if (lookahead == '\\') SKIP(29)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(980);
      if (lookahead == '\n') ADVANCE(1532);
      if (lookahead == '\r') ADVANCE(980);
      if (lookahead == ' ') ADVANCE(1536);
      if (lookahead == '#') ADVANCE(991);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1533);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1530);
      if (lookahead == ',') ADVANCE(970);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1537);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1238);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '\\') ADVANCE(1251);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'b') ADVANCE(1440);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == 'h') ADVANCE(1342);
      if (lookahead == 'i') ADVANCE(1430);
      if (lookahead == 'm') ADVANCE(1311);
      if (lookahead == 'n') ADVANCE(1445);
      if (lookahead == 'p') ADVANCE(1471);
      if (lookahead == 'q') ADVANCE(1513);
      if (lookahead == 's') ADVANCE(1363);
      if (lookahead == 't') ADVANCE(1402);
      if (lookahead == 'u') ADVANCE(1431);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1250);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1239);
      if (lookahead == ' ') ADVANCE(997);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1255);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == 'a') ADVANCE(1493);
      if (lookahead == 'n') ADVANCE(1442);
      if (lookahead == 'y') ADVANCE(1373);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1254);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1288);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1289);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1290);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1291);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1292);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(1240);
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '<') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(981);
      if (lookahead != 0) ADVANCE(988);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1293);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1294);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1295);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead != 0) ADVANCE(992);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(38)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(40)
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1534);
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '#') ADVANCE(1530);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(99)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(99)
      if (lookahead == '\r') SKIP(45)
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1296);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1241);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1258);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == 'a') ADVANCE(1493);
      if (lookahead == 'n') ADVANCE(1442);
      if (lookahead == 'y') ADVANCE(1373);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '+') ADVANCE(1007);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead == '?') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(1261);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1243);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '+') ADVANCE(1007);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead == '\\') ADVANCE(1264);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1244);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '-') ADVANCE(1395);
      if (lookahead == '\\') ADVANCE(1267);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1245);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(1270);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1246);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1395);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(1247);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '\\') ADVANCE(1279);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(1248);
      if (lookahead == '!') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '\\') ADVANCE(1282);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1285);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(998);
      if (lookahead == '#') ADVANCE(960);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'b') ADVANCE(510);
      if (lookahead == 'c') ADVANCE(714);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'g') ADVANCE(795);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == 'w') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(960);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'b') ADVANCE(511);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(795);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(769);
      if (lookahead == 'q') ADVANCE(910);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(609);
      if (lookahead == 'w') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '&') ADVANCE(1195);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '=') ADVANCE(1194);
      if (lookahead == '?') ADVANCE(1010);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1206);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(448);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(982);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(983);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(741);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'q') ADVANCE(911);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1003);
      END_STATE();
    case 65:
      if (lookahead == ',') ADVANCE(970);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(984);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(989);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(985);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(68)
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(426);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(427);
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(433);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(437);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(438);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(441);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 90:
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(986);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(90)
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 91:
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(987);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(91)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(990);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 92:
      if (lookahead == '=') ADVANCE(1192);
      END_STATE();
    case 93:
      if (lookahead == '=') ADVANCE(1193);
      END_STATE();
    case 94:
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1229);
      END_STATE();
    case 95:
      if (lookahead == '\\') ADVANCE(1219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1222);
      END_STATE();
    case 96:
      if (lookahead == '\\') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (lookahead != 0) ADVANCE(1200);
      END_STATE();
    case 97:
      if (lookahead == '\\') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1236);
      END_STATE();
    case 98:
      if (lookahead == '\\') SKIP(44)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 99:
      if (lookahead == '\\') SKIP(46)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(977);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(733);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(414);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(919);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(386);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(538);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(660);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(421);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(547);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(716);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(718);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'b') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(1210);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead == 'r') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(831);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'c') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'c') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'h') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'c') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'h') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == 'g') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(1121);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(899);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead == 'c') ADVANCE(904);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 't') ADVANCE(1191);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(880);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(878);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(909);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(896);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(913);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(925);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(481);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(627);
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == 's') ADVANCE(738);
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(701);
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(705);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(353);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(482);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(730);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(862);
      if (lookahead == 'u') ADVANCE(864);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(730);
      if (lookahead == 't') ADVANCE(893);
      if (lookahead == 'u') ADVANCE(864);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(1136);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(1019);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(631);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(855);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(805);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(876);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(797);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(709);
      if (lookahead == 'e') ADVANCE(850);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(1165);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(1165);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(1117);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(1117);
      if (lookahead == 'p') ADVANCE(516);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(1117);
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(1030);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(1040);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(1082);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(1031);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(1050);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(1099);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(1095);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(743);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(766);
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(587);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(763);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(796);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(704);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'g') ADVANCE(587);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1120);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(1073);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(1152);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1085);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(1156);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(1072);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(765);
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(825);
      if (lookahead == 'i') ADVANCE(926);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 383:
      if (lookahead == 'f') ADVANCE(1148);
      END_STATE();
    case 384:
      if (lookahead == 'f') ADVANCE(1149);
      END_STATE();
    case 385:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 386:
      if (lookahead == 'f') ADVANCE(469);
      END_STATE();
    case 387:
      if (lookahead == 'f') ADVANCE(794);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(691);
      END_STATE();
    case 389:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(1065);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(530);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(823);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 399:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 401:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(793);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(1177);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(1015);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(1150);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(1083);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(1113);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(536);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(669);
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(857);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(468);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(672);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(563);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(676);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(677);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(679);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(680);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(684);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(686);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(687);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(690);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(692);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(694);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(695);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(698);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(564);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(953);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(935);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(920);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 480:
      if (lookahead == 'j') ADVANCE(329);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 481:
      if (lookahead == 'j') ADVANCE(363);
      END_STATE();
    case 482:
      if (lookahead == 'j') ADVANCE(370);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 483:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 484:
      if (lookahead == 'k') ADVANCE(1116);
      END_STATE();
    case 485:
      if (lookahead == 'k') ADVANCE(1190);
      END_STATE();
    case 486:
      if (lookahead == 'k') ADVANCE(1138);
      END_STATE();
    case 487:
      if (lookahead == 'k') ADVANCE(1166);
      END_STATE();
    case 488:
      if (lookahead == 'k') ADVANCE(1174);
      END_STATE();
    case 489:
      if (lookahead == 'k') ADVANCE(1139);
      END_STATE();
    case 490:
      if (lookahead == 'k') ADVANCE(1179);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(1175);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(1132);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(1033);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(1178);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(1180);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(1176);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(1140);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(967);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(1032);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(1167);
      END_STATE();
    case 501:
      if (lookahead == 'k') ADVANCE(1188);
      END_STATE();
    case 502:
      if (lookahead == 'k') ADVANCE(1187);
      END_STATE();
    case 503:
      if (lookahead == 'k') ADVANCE(1137);
      END_STATE();
    case 504:
      if (lookahead == 'k') ADVANCE(1189);
      END_STATE();
    case 505:
      if (lookahead == 'k') ADVANCE(1133);
      END_STATE();
    case 506:
      if (lookahead == 'k') ADVANCE(405);
      END_STATE();
    case 507:
      if (lookahead == 'k') ADVANCE(360);
      END_STATE();
    case 508:
      if (lookahead == 'k') ADVANCE(903);
      END_STATE();
    case 509:
      if (lookahead == 'k') ADVANCE(906);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(1056);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(532);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == 's') ADVANCE(1207);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(645);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 't') ADVANCE(869);
      if (lookahead == 'u') ADVANCE(887);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(1181);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(1182);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(1186);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 555:
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(1023);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 557:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 558:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 559:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 560:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 561:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 562:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 564:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 565:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(1118);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(1112);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(918);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 't') ADVANCE(1191);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(933);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(941);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(1157);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(1171);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(1158);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(848);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(908);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(945);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(1025);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(1144);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(1145);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(1168);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(1169);
      END_STATE();
    case 725:
      if (lookahead == 'p') ADVANCE(968);
      END_STATE();
    case 726:
      if (lookahead == 'p') ADVANCE(516);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 727:
      if (lookahead == 'p') ADVANCE(516);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 728:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 729:
      if (lookahead == 'p') ADVANCE(888);
      END_STATE();
    case 730:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 731:
      if (lookahead == 'p') ADVANCE(851);
      END_STATE();
    case 732:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 733:
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 735:
      if (lookahead == 'p') ADVANCE(702);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 737:
      if (lookahead == 'p') ADVANCE(841);
      END_STATE();
    case 738:
      if (lookahead == 'p') ADVANCE(697);
      END_STATE();
    case 739:
      if (lookahead == 'p') ADVANCE(708);
      END_STATE();
    case 740:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(1130);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(1042);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(1146);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(1048);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(1097);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(1103);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(1143);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(817);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(1087);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(1211);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(972);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(1154);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(1077);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(1054);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(1000);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(861);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 834:
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 838:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 839:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 840:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 841:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 842:
      if (lookahead == 's') ADVANCE(867);
      END_STATE();
    case 843:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 844:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(844);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 848:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(1196);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(814);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(819);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(831);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(721);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(865);
      END_STATE();
    case 899:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 900:
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 901:
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 902:
      if (lookahead == 'u') ADVANCE(722);
      END_STATE();
    case 903:
      if (lookahead == 'u') ADVANCE(723);
      END_STATE();
    case 904:
      if (lookahead == 'u') ADVANCE(800);
      END_STATE();
    case 905:
      if (lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 906:
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 907:
      if (lookahead == 'u') ADVANCE(725);
      END_STATE();
    case 908:
      if (lookahead == 'u') ADVANCE(853);
      END_STATE();
    case 909:
      if (lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 910:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 911:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 912:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 913:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 914:
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 915:
      if (lookahead == 'u') ADVANCE(792);
      END_STATE();
    case 916:
      if (lookahead == 'u') ADVANCE(891);
      END_STATE();
    case 917:
      if (lookahead == 'v') ADVANCE(1199);
      END_STATE();
    case 918:
      if (lookahead == 'v') ADVANCE(1201);
      END_STATE();
    case 919:
      if (lookahead == 'v') ADVANCE(461);
      END_STATE();
    case 920:
      if (lookahead == 'v') ADVANCE(478);
      END_STATE();
    case 921:
      if (lookahead == 'v') ADVANCE(375);
      END_STATE();
    case 922:
      if (lookahead == 'v') ADVANCE(380);
      END_STATE();
    case 923:
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 924:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 925:
      if (lookahead == 'v') ADVANCE(377);
      END_STATE();
    case 926:
      if (lookahead == 'v') ADVANCE(381);
      END_STATE();
    case 927:
      if (lookahead == 'w') ADVANCE(1119);
      END_STATE();
    case 928:
      if (lookahead == 'w') ADVANCE(1013);
      END_STATE();
    case 929:
      if (lookahead == 'w') ADVANCE(1105);
      END_STATE();
    case 930:
      if (lookahead == 'w') ADVANCE(1014);
      END_STATE();
    case 931:
      if (lookahead == 'w') ADVANCE(1162);
      END_STATE();
    case 932:
      if (lookahead == 'w') ADVANCE(1163);
      END_STATE();
    case 933:
      if (lookahead == 'w') ADVANCE(843);
      END_STATE();
    case 934:
      if (lookahead == 'w') ADVANCE(611);
      END_STATE();
    case 935:
      if (lookahead == 'x') ADVANCE(1023);
      END_STATE();
    case 936:
      if (lookahead == 'x') ADVANCE(1022);
      END_STATE();
    case 937:
      if (lookahead == 'x') ADVANCE(1183);
      END_STATE();
    case 938:
      if (lookahead == 'x') ADVANCE(1184);
      END_STATE();
    case 939:
      if (lookahead == 'x') ADVANCE(1142);
      END_STATE();
    case 940:
      if (lookahead == 'x') ADVANCE(1020);
      END_STATE();
    case 941:
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 942:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 943:
      if (lookahead == 'x') ADVANCE(336);
      END_STATE();
    case 944:
      if (lookahead == 'x') ADVANCE(342);
      END_STATE();
    case 945:
      if (lookahead == 'x') ADVANCE(347);
      END_STATE();
    case 946:
      if (lookahead == 'y') ADVANCE(1038);
      END_STATE();
    case 947:
      if (lookahead == 'y') ADVANCE(1027);
      END_STATE();
    case 948:
      if (lookahead == 'y') ADVANCE(1107);
      END_STATE();
    case 949:
      if (lookahead == 'y') ADVANCE(729);
      END_STATE();
    case 950:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 951:
      if (lookahead == 'y') ADVANCE(734);
      END_STATE();
    case 952:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 953:
      if (lookahead == 'z') ADVANCE(301);
      END_STATE();
    case 954:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1125);
      END_STATE();
    case 955:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1124);
      END_STATE();
    case 956:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      END_STATE();
    case 957:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      END_STATE();
    case 958:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      END_STATE();
    case 959:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(958);
      END_STATE();
    case 960:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(959);
      END_STATE();
    case 961:
      if (eof) ADVANCE(966);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 962:
      if (eof) ADVANCE(966);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(961)
      END_STATE();
    case 963:
      if (eof) ADVANCE(966);
      if (lookahead == '\n') SKIP(965)
      END_STATE();
    case 964:
      if (eof) ADVANCE(966);
      if (lookahead == '\n') SKIP(965)
      if (lookahead == '\r') SKIP(963)
      END_STATE();
    case 965:
      if (eof) ADVANCE(966);
      if (lookahead == '\n') ADVANCE(1533);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1530);
      if (lookahead == ',') ADVANCE(970);
      if (lookahead == '\\') SKIP(964)
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1537);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_account_DASHhook);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_unalias);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\t') ADVANCE(980);
      if (lookahead == '\n') ADVANCE(1532);
      if (lookahead == '\r') ADVANCE(980);
      if (lookahead == ' ') ADVANCE(1536);
      if (lookahead == '#') ADVANCE(991);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\n') ADVANCE(1240);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '<') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(988);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == ',') ADVANCE(970);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(987);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(979);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == 'g') ADVANCE(806);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1530);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_key_token3);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\n') ADVANCE(1273);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(1535);
      if (lookahead == '\n') ADVANCE(1531);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(1239);
      if (lookahead == ' ') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(1255);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(998);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_alternates);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_unalternates);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_alternative_order);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_unalternative_order);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1003);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_attachments);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_unattachments);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_auto_view);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_unauto_view);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_browser);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_compose);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_editor);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == '_') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_mix);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_pager);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_pgp);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_postpone);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_smime);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_unbind);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_charset_DASHhook);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_iconv_DASHhook);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_attachment);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_attachment);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_index_author);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_index_author);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_index_date);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_index_date);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_index_flags);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_index_flags);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_index_label);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_index_label);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_index_number);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_index_number);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_index_size);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_index_size);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_index_subject);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_index_subject);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_index_tags);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_index_tags);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_indicator);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_indicator);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_markers);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_markers);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '-') ADVANCE(437);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_normal);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_progress);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\\') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_search);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_signature);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_signature);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_tilde);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_tilde);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_tree);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_tree);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_security_encrypt);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_security_sign);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_security_both);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_security_none);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_color_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_standout);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_color);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1125);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_uncolor);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_crypt_DASHhook);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_index_DASHformat_DASHhook);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_fcc_DASHsave_DASHhook);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_fcc_DASHhook);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_save_DASHhook);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_folder_DASHhook);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_DASHnoregex);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_DASHrx);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_DASHaddr);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_hdr_order);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_unhdr_order);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_ifdef);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_ifndef);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_finish);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_unignore);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_lists);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_unlists);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_subscribe);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_unsubscribe);
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_unmacro);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_mailboxes);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_named_DASHmailboxes);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_unmailboxes);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_mailto_allow);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_unmailto_allow);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_mbox_DASHhook);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_message_DASHhook);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_mime_lookup);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_unmime_lookup);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_mono);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_unmono);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_my_hdr);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_unmy_hdr);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_open_DASHhook);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_close_DASHhook);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_append_DASHhook);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_reply_DASHhook);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_send_DASHhook);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_send2_DASHhook);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_spam);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_nospam);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_subjectrx);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_unsubjectrx);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_subscribe_DASHto);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_unsubscribe_DASHfrom);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_timeout_DASHhook);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_startup_DASHhook);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_shutdown_DASHhook);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_unhook);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_setenv_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1200);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_unsetenv);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_sidebar_pin);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_sidebar_unpin);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_unscore);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '\\') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '\r') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1222);
      if (lookahead == '\\') ADVANCE(1223);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1221);
      if (lookahead == '\\') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1222);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1222);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1222);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1222);
      if (lookahead == '\\') ADVANCE(1223);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '\r') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1229);
      if (lookahead == '\\') ADVANCE(1230);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1228);
      if (lookahead == '\\') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1229);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1229);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1229);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1229);
      if (lookahead == '\\') ADVANCE(1230);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1235);
      if (lookahead == '\r') ADVANCE(1234);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead != 0) ADVANCE(1236);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1235);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1236);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1236);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1236);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead != 0) ADVANCE(1236);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1238);
      if (lookahead == '\\') ADVANCE(1251);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1239);
      if (lookahead == ' ') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(1255);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1240);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(981);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(1258);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '\\') ADVANCE(1261);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1243);
      if (lookahead == '\\') ADVANCE(1264);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1244);
      if (lookahead == '\\') ADVANCE(1267);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1245);
      if (lookahead == '\\') ADVANCE(1270);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1246);
      if (lookahead == '\\') ADVANCE(1276);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1247);
      if (lookahead == '\\') ADVANCE(1279);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1248);
      if (lookahead == '\\') ADVANCE(1282);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '\\') ADVANCE(1285);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1238);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '\\') ADVANCE(1252);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'b') ADVANCE(1440);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == 'h') ADVANCE(1342);
      if (lookahead == 'i') ADVANCE(1430);
      if (lookahead == 'm') ADVANCE(1311);
      if (lookahead == 'n') ADVANCE(1445);
      if (lookahead == 'p') ADVANCE(1471);
      if (lookahead == 'q') ADVANCE(1513);
      if (lookahead == 's') ADVANCE(1363);
      if (lookahead == 't') ADVANCE(1402);
      if (lookahead == 'u') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1250);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1250);
      if (lookahead == '\r') ADVANCE(1253);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1250);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1239);
      if (lookahead == ' ') ADVANCE(997);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '-') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1256);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead == 'a') ADVANCE(1493);
      if (lookahead == 'n') ADVANCE(1442);
      if (lookahead == 'y') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(1527);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '\r') ADVANCE(1257);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\r') ADVANCE(1260);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1289);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1289);
      if (lookahead == '\r') ADVANCE(1263);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1289);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1290);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1290);
      if (lookahead == '\r') ADVANCE(1266);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1290);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1291);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1291);
      if (lookahead == '\r') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1291);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1292);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1292);
      if (lookahead == '\r') ADVANCE(1272);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1292);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1240);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '<') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(1275);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(988);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(994);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1273);
      if (lookahead == '\r') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(995);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1293);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1293);
      if (lookahead == '\r') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1293);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1294);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1294);
      if (lookahead == '\r') ADVANCE(1281);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1294);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1295);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1295);
      if (lookahead == '\r') ADVANCE(1284);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1295);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1296);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1296);
      if (lookahead == '\r') ADVANCE(1287);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1296);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1241);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '-') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1259);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead == 'a') ADVANCE(1493);
      if (lookahead == 'n') ADVANCE(1442);
      if (lookahead == 'y') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1242);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '+') ADVANCE(1007);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead == '?') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(1262);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1243);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '+') ADVANCE(1007);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead == '\\') ADVANCE(1265);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1244);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '-') ADVANCE(1395);
      if (lookahead == '\\') ADVANCE(1268);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1245);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(1271);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1246);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '-') ADVANCE(1395);
      if (lookahead == '\\') ADVANCE(1277);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1247);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '\\') ADVANCE(1280);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1248);
      if (lookahead == '!') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '\\') ADVANCE(1283);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1249);
      if (lookahead == '"') ADVANCE(1225);
      if (lookahead == '\'') ADVANCE(1218);
      if (lookahead == '-') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1286);
      if (lookahead == '`') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(1434);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == '_') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == '_') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == '_') ADVANCE(1399);
      if (lookahead == 'm') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1460);
      if (lookahead == 'e') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'c') ADVANCE(1446);
      if (lookahead == 'd') ADVANCE(1319);
      if (lookahead == 'f') ADVANCE(1421);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(1511);
      if (lookahead == 's') ADVANCE(1403);
      if (lookahead == 't') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'a') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'b') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'b') ADVANCE(1306);
      if (lookahead == 'd') ADVANCE(1404);
      if (lookahead == 'f') ADVANCE(1423);
      if (lookahead == 'h') ADVANCE(1406);
      if (lookahead == 'i') ADVANCE(1432);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead == 'o') ADVANCE(1475);
      if (lookahead == 's') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'b') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'b') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'b') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'c') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1523);
      if (lookahead == 'l') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1352);
      if (lookahead == 'g') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1483);
      if (lookahead == 'e') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'd') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1521);
      if (lookahead == 'i') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == 't') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'f') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1478);
      if (lookahead == 'm') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'h') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'r') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1525);
      if (lookahead == 'u') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'i') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'j') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'k') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'k') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'k') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'l') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'm') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'm') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1443);
      if (lookahead == 'y') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'o') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'p') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'p') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'p') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'p') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'r') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 's') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'u') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'v') ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'w') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'x') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'x') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'y') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'y') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead == 'z') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1527);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1528);
      if (lookahead != 0) ADVANCE(1527);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1530);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(1535);
      if (lookahead == '\n') ADVANCE(1531);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(980);
      if (lookahead == '\n') ADVANCE(1532);
      if (lookahead == '\r') ADVANCE(980);
      if (lookahead == ' ') ADVANCE(1536);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1533);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1537);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1534);
      if (lookahead == '\r') ADVANCE(42);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(1535);
      if (lookahead == '\n') ADVANCE(1531);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(980);
      if (lookahead == '\n') ADVANCE(1532);
      if (lookahead == '\r') ADVANCE(980);
      if (lookahead == ' ') ADVANCE(1536);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(1533);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1537);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 965},
  [2] = {.lex_state = 965},
  [3] = {.lex_state = 965},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 965},
  [20] = {.lex_state = 965},
  [21] = {.lex_state = 965},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 58},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 52},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 52},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 54},
  [85] = {.lex_state = 54},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 54},
  [89] = {.lex_state = 54},
  [90] = {.lex_state = 56},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 54},
  [94] = {.lex_state = 54},
  [95] = {.lex_state = 54},
  [96] = {.lex_state = 54},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 54},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 54},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 54},
  [103] = {.lex_state = 54},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 54},
  [107] = {.lex_state = 54},
  [108] = {.lex_state = 54},
  [109] = {.lex_state = 54},
  [110] = {.lex_state = 54},
  [111] = {.lex_state = 54},
  [112] = {.lex_state = 54},
  [113] = {.lex_state = 54},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 54},
  [116] = {.lex_state = 54},
  [117] = {.lex_state = 54},
  [118] = {.lex_state = 54},
  [119] = {.lex_state = 54},
  [120] = {.lex_state = 54},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 56},
  [123] = {.lex_state = 54},
  [124] = {.lex_state = 54},
  [125] = {.lex_state = 54},
  [126] = {.lex_state = 54},
  [127] = {.lex_state = 54},
  [128] = {.lex_state = 54},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 54},
  [131] = {.lex_state = 54},
  [132] = {.lex_state = 54},
  [133] = {.lex_state = 54},
  [134] = {.lex_state = 54},
  [135] = {.lex_state = 54},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 54},
  [138] = {.lex_state = 54},
  [139] = {.lex_state = 54},
  [140] = {.lex_state = 54},
  [141] = {.lex_state = 54},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 68},
  [145] = {.lex_state = 54},
  [146] = {.lex_state = 54},
  [147] = {.lex_state = 62},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 55},
  [152] = {.lex_state = 52},
  [153] = {.lex_state = 52},
  [154] = {.lex_state = 52},
  [155] = {.lex_state = 54},
  [156] = {.lex_state = 52},
  [157] = {.lex_state = 54},
  [158] = {.lex_state = 54},
  [159] = {.lex_state = 54},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 965},
  [163] = {.lex_state = 54},
  [164] = {.lex_state = 54},
  [165] = {.lex_state = 59},
  [166] = {.lex_state = 54},
  [167] = {.lex_state = 54},
  [168] = {.lex_state = 60},
  [169] = {.lex_state = 54},
  [170] = {.lex_state = 54},
  [171] = {.lex_state = 54},
  [172] = {.lex_state = 54},
  [173] = {.lex_state = 54},
  [174] = {.lex_state = 54},
  [175] = {.lex_state = 54},
  [176] = {.lex_state = 60},
  [177] = {.lex_state = 60},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 54},
  [180] = {.lex_state = 90},
  [181] = {.lex_state = 91},
  [182] = {.lex_state = 54},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 54},
  [185] = {.lex_state = 54},
  [186] = {.lex_state = 54},
  [187] = {.lex_state = 54},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 965},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 54},
  [194] = {.lex_state = 65},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 54},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 54},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 54},
  [207] = {.lex_state = 90},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 90},
  [210] = {.lex_state = 90},
  [211] = {.lex_state = 54},
  [212] = {.lex_state = 65},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 965},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 54},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 60},
  [224] = {.lex_state = 54},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 54},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 91},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 54},
  [236] = {.lex_state = 965},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 90},
  [242] = {.lex_state = 65},
  [243] = {.lex_state = 965},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 64},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 62},
  [248] = {.lex_state = 965},
  [249] = {.lex_state = 965},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 60},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 64},
  [256] = {.lex_state = 91},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 62},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 65},
  [264] = {.lex_state = 64},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 965},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 965},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 65},
  [277] = {.lex_state = 59},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 965},
  [282] = {.lex_state = 965},
  [283] = {.lex_state = 965},
  [284] = {.lex_state = 64},
  [285] = {.lex_state = 64},
  [286] = {.lex_state = 965},
  [287] = {.lex_state = 965},
  [288] = {.lex_state = 965},
  [289] = {.lex_state = 965},
  [290] = {.lex_state = 90},
  [291] = {.lex_state = 965},
  [292] = {.lex_state = 90},
  [293] = {.lex_state = 90},
  [294] = {.lex_state = 965},
  [295] = {.lex_state = 965},
  [296] = {.lex_state = 965},
  [297] = {.lex_state = 965},
  [298] = {.lex_state = 965},
  [299] = {.lex_state = 965},
  [300] = {.lex_state = 965},
  [301] = {.lex_state = 965},
  [302] = {.lex_state = 965},
  [303] = {.lex_state = 90},
  [304] = {.lex_state = 965},
  [305] = {.lex_state = 965},
  [306] = {.lex_state = 965},
  [307] = {.lex_state = 965},
  [308] = {.lex_state = 965},
  [309] = {.lex_state = 965},
  [310] = {.lex_state = 965},
  [311] = {.lex_state = 965},
  [312] = {.lex_state = 965},
  [313] = {.lex_state = 965},
  [314] = {.lex_state = 965},
  [315] = {.lex_state = 965},
  [316] = {.lex_state = 965},
  [317] = {.lex_state = 965},
  [318] = {.lex_state = 965},
  [319] = {.lex_state = 60},
  [320] = {.lex_state = 965},
  [321] = {.lex_state = 965},
  [322] = {.lex_state = 965},
  [323] = {.lex_state = 965},
  [324] = {.lex_state = 60},
  [325] = {.lex_state = 965},
  [326] = {.lex_state = 965},
  [327] = {.lex_state = 965},
  [328] = {.lex_state = 965},
  [329] = {.lex_state = 965},
  [330] = {.lex_state = 965},
  [331] = {.lex_state = 965},
  [332] = {.lex_state = 965},
  [333] = {.lex_state = 965},
  [334] = {.lex_state = 965},
  [335] = {.lex_state = 965},
  [336] = {.lex_state = 965},
  [337] = {.lex_state = 965},
  [338] = {.lex_state = 965},
  [339] = {.lex_state = 965},
  [340] = {.lex_state = 60},
  [341] = {.lex_state = 965},
  [342] = {.lex_state = 965},
  [343] = {.lex_state = 965},
  [344] = {.lex_state = 965},
  [345] = {.lex_state = 965},
  [346] = {.lex_state = 965},
  [347] = {.lex_state = 965},
  [348] = {.lex_state = 965},
  [349] = {.lex_state = 965},
  [350] = {.lex_state = 965},
  [351] = {.lex_state = 965},
  [352] = {.lex_state = 965},
  [353] = {.lex_state = 965},
  [354] = {.lex_state = 965},
  [355] = {.lex_state = 965},
  [356] = {.lex_state = 965},
  [357] = {.lex_state = 965},
  [358] = {.lex_state = 965},
  [359] = {.lex_state = 965},
  [360] = {.lex_state = 965},
  [361] = {.lex_state = 965},
  [362] = {.lex_state = 965},
  [363] = {.lex_state = 965},
  [364] = {.lex_state = 965},
  [365] = {.lex_state = 965},
  [366] = {.lex_state = 965},
  [367] = {.lex_state = 965},
  [368] = {.lex_state = 965},
  [369] = {.lex_state = 965},
  [370] = {.lex_state = 965},
  [371] = {.lex_state = 965},
  [372] = {.lex_state = 965},
  [373] = {.lex_state = 965},
  [374] = {.lex_state = 965},
  [375] = {.lex_state = 965},
  [376] = {.lex_state = 965},
  [377] = {.lex_state = 965},
  [378] = {.lex_state = 965},
  [379] = {.lex_state = 965},
  [380] = {.lex_state = 965},
  [381] = {.lex_state = 965},
  [382] = {.lex_state = 965},
  [383] = {.lex_state = 965},
  [384] = {.lex_state = 965},
  [385] = {.lex_state = 59},
  [386] = {.lex_state = 965},
  [387] = {.lex_state = 965},
  [388] = {.lex_state = 965},
  [389] = {.lex_state = 965},
  [390] = {.lex_state = 965},
  [391] = {.lex_state = 965},
  [392] = {.lex_state = 965},
  [393] = {.lex_state = 965},
  [394] = {.lex_state = 965},
  [395] = {.lex_state = 965},
  [396] = {.lex_state = 965},
  [397] = {.lex_state = 965},
  [398] = {.lex_state = 965},
  [399] = {.lex_state = 64},
  [400] = {.lex_state = 965},
  [401] = {.lex_state = 965},
  [402] = {.lex_state = 965},
  [403] = {.lex_state = 965},
  [404] = {.lex_state = 965},
  [405] = {.lex_state = 965},
  [406] = {.lex_state = 965},
  [407] = {.lex_state = 965},
  [408] = {.lex_state = 965},
  [409] = {.lex_state = 965},
  [410] = {.lex_state = 965},
  [411] = {.lex_state = 965},
  [412] = {.lex_state = 965},
  [413] = {.lex_state = 965},
  [414] = {.lex_state = 965},
  [415] = {.lex_state = 965},
  [416] = {.lex_state = 965},
  [417] = {.lex_state = 965},
  [418] = {.lex_state = 965},
  [419] = {.lex_state = 965},
  [420] = {.lex_state = 965},
  [421] = {.lex_state = 965},
  [422] = {.lex_state = 965},
  [423] = {.lex_state = 965},
  [424] = {.lex_state = 965},
  [425] = {.lex_state = 965},
  [426] = {.lex_state = 965},
  [427] = {.lex_state = 59},
  [428] = {.lex_state = 59},
  [429] = {.lex_state = 60},
  [430] = {.lex_state = 60},
  [431] = {.lex_state = 64},
  [432] = {.lex_state = 64},
  [433] = {.lex_state = 60},
  [434] = {.lex_state = 60},
  [435] = {.lex_state = 42},
  [436] = {.lex_state = 64},
  [437] = {.lex_state = 59},
  [438] = {.lex_state = 59},
  [439] = {.lex_state = 64},
  [440] = {.lex_state = 64},
  [441] = {.lex_state = 98},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 64},
  [445] = {.lex_state = 64},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 59},
  [448] = {.lex_state = 99},
  [449] = {.lex_state = 64},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 94},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 95},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 64},
  [456] = {.lex_state = 59},
  [457] = {.lex_state = 59},
  [458] = {.lex_state = 59},
  [459] = {.lex_state = 59},
  [460] = {.lex_state = 96},
  [461] = {.lex_state = 42},
  [462] = {.lex_state = 60},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 97},
  [466] = {.lex_state = 42},
  [467] = {.lex_state = 98},
  [468] = {.lex_state = 95},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 94},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 64},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 97},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 98},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 95},
  [509] = {.lex_state = 94},
  [510] = {.lex_state = 97},
  [511] = {.lex_state = 99},
  [512] = {.lex_state = 95},
  [513] = {.lex_state = 94},
  [514] = {.lex_state = 97},
  [515] = {.lex_state = 95},
  [516] = {.lex_state = 94},
  [517] = {.lex_state = 97},
  [518] = {.lex_state = 99},
  [519] = {.lex_state = 95},
  [520] = {.lex_state = 94},
  [521] = {.lex_state = 97},
  [522] = {.lex_state = 95},
  [523] = {.lex_state = 94},
  [524] = {.lex_state = 97},
  [525] = {.lex_state = 95},
  [526] = {.lex_state = 94},
  [527] = {.lex_state = 97},
  [528] = {.lex_state = 95},
  [529] = {.lex_state = 94},
  [530] = {.lex_state = 97},
  [531] = {.lex_state = 95},
  [532] = {.lex_state = 94},
  [533] = {.lex_state = 97},
  [534] = {.lex_state = 95},
  [535] = {.lex_state = 94},
  [536] = {.lex_state = 97},
  [537] = {.lex_state = 95},
  [538] = {.lex_state = 94},
  [539] = {.lex_state = 97},
  [540] = {.lex_state = 95},
  [541] = {.lex_state = 94},
  [542] = {.lex_state = 97},
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
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_hdrdefault] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
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
    [sym_file] = STATE(464),
    [sym__command] = STATE(162),
    [sym_account_hook_directive] = STATE(162),
    [sym_alias_directive] = STATE(162),
    [sym_unalias_directive] = STATE(162),
    [sym_alternates_directive] = STATE(162),
    [sym_unalternates_directive] = STATE(162),
    [sym_alternative_order_directive] = STATE(162),
    [sym_unalternative_order_directive] = STATE(162),
    [sym_attachments_directive] = STATE(162),
    [sym_unattachments_directive] = STATE(162),
    [sym_auto_view_directive] = STATE(162),
    [sym_unauto_view_directive] = STATE(162),
    [sym_bind_directive] = STATE(162),
    [sym_unbind_directive] = STATE(162),
    [sym_charset_hook_directive] = STATE(162),
    [sym_iconv_hook_directive] = STATE(162),
    [sym_color_directive] = STATE(162),
    [sym_uncolor_directive] = STATE(162),
    [sym_crypt_hook_directive] = STATE(162),
    [sym_index_format_hook_directive] = STATE(162),
    [sym_exec_directive] = STATE(162),
    [sym_fcc_save_hook_directive] = STATE(162),
    [sym_fcc_hook_directive] = STATE(162),
    [sym_save_hook_directive] = STATE(162),
    [sym_folder_hook_directive] = STATE(162),
    [sym_group_directive] = STATE(162),
    [sym_ungroup_directive] = STATE(162),
    [sym_hdr_order_directive] = STATE(162),
    [sym_unhdr_order_directive] = STATE(162),
    [sym_ifdef_directive] = STATE(162),
    [sym_ifndef_directive] = STATE(162),
    [sym_finish_directive] = STATE(162),
    [sym_ignore_directive] = STATE(162),
    [sym_unignore_directive] = STATE(162),
    [sym_lists_directive] = STATE(162),
    [sym_unlists_directive] = STATE(162),
    [sym_subscribe_directive] = STATE(162),
    [sym_unsubscribe_directive] = STATE(162),
    [sym_macro_directive] = STATE(162),
    [sym_unmacro_directive] = STATE(162),
    [sym_mailboxes_directive] = STATE(162),
    [sym_named_mailboxes_directive] = STATE(162),
    [sym_unmailboxes_directive] = STATE(162),
    [sym_mailto_allow_directive] = STATE(162),
    [sym_unmailto_allow_directive] = STATE(162),
    [sym_echo_directive] = STATE(162),
    [sym_cd_directive] = STATE(162),
    [sym_mbox_hook_directive] = STATE(162),
    [sym_message_hook_directive] = STATE(162),
    [sym_mime_lookup_directive] = STATE(162),
    [sym_unmime_lookup_directive] = STATE(162),
    [sym_mono_directive] = STATE(162),
    [sym_unmono_directive] = STATE(162),
    [sym_my_hdr_directive] = STATE(162),
    [sym_unmy_hdr_directive] = STATE(162),
    [sym_open_hook_directive] = STATE(162),
    [sym_close_hook_directive] = STATE(162),
    [sym_append_hook_directive] = STATE(162),
    [sym_push_directive] = STATE(162),
    [sym_reply_hook_directive] = STATE(162),
    [sym_send_hook_directive] = STATE(162),
    [sym_send2_hook_directive] = STATE(162),
    [sym_spam_directive] = STATE(162),
    [sym_nospam_directive] = STATE(162),
    [sym_subjectrx_directive] = STATE(162),
    [sym_unsubjectrx_directive] = STATE(162),
    [sym_subscribe_to_directive] = STATE(162),
    [sym_unsubscribe_from_directive] = STATE(162),
    [sym_timeout_hook_directive] = STATE(162),
    [sym_startup_hook_directive] = STATE(162),
    [sym_shutdown_hook_directive] = STATE(162),
    [sym_unhook_directive] = STATE(162),
    [sym_set_directive] = STATE(162),
    [sym_unset_directive] = STATE(162),
    [sym_reset_directive] = STATE(162),
    [sym_toggle_directive] = STATE(162),
    [sym_setenv_directive] = STATE(162),
    [sym_unsetenv_directive] = STATE(162),
    [sym_sidebar_pin_directive] = STATE(162),
    [sym_sidebar_unpin_directive] = STATE(162),
    [sym_score_directive] = STATE(162),
    [sym_unscore_directive] = STATE(162),
    [sym_source_directive] = STATE(162),
    [sym__space] = STATE(435),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(281),
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
    [sym__command] = STATE(162),
    [sym_account_hook_directive] = STATE(162),
    [sym_alias_directive] = STATE(162),
    [sym_unalias_directive] = STATE(162),
    [sym_alternates_directive] = STATE(162),
    [sym_unalternates_directive] = STATE(162),
    [sym_alternative_order_directive] = STATE(162),
    [sym_unalternative_order_directive] = STATE(162),
    [sym_attachments_directive] = STATE(162),
    [sym_unattachments_directive] = STATE(162),
    [sym_auto_view_directive] = STATE(162),
    [sym_unauto_view_directive] = STATE(162),
    [sym_bind_directive] = STATE(162),
    [sym_unbind_directive] = STATE(162),
    [sym_charset_hook_directive] = STATE(162),
    [sym_iconv_hook_directive] = STATE(162),
    [sym_color_directive] = STATE(162),
    [sym_uncolor_directive] = STATE(162),
    [sym_crypt_hook_directive] = STATE(162),
    [sym_index_format_hook_directive] = STATE(162),
    [sym_exec_directive] = STATE(162),
    [sym_fcc_save_hook_directive] = STATE(162),
    [sym_fcc_hook_directive] = STATE(162),
    [sym_save_hook_directive] = STATE(162),
    [sym_folder_hook_directive] = STATE(162),
    [sym_group_directive] = STATE(162),
    [sym_ungroup_directive] = STATE(162),
    [sym_hdr_order_directive] = STATE(162),
    [sym_unhdr_order_directive] = STATE(162),
    [sym_ifdef_directive] = STATE(162),
    [sym_ifndef_directive] = STATE(162),
    [sym_finish_directive] = STATE(162),
    [sym_ignore_directive] = STATE(162),
    [sym_unignore_directive] = STATE(162),
    [sym_lists_directive] = STATE(162),
    [sym_unlists_directive] = STATE(162),
    [sym_subscribe_directive] = STATE(162),
    [sym_unsubscribe_directive] = STATE(162),
    [sym_macro_directive] = STATE(162),
    [sym_unmacro_directive] = STATE(162),
    [sym_mailboxes_directive] = STATE(162),
    [sym_named_mailboxes_directive] = STATE(162),
    [sym_unmailboxes_directive] = STATE(162),
    [sym_mailto_allow_directive] = STATE(162),
    [sym_unmailto_allow_directive] = STATE(162),
    [sym_echo_directive] = STATE(162),
    [sym_cd_directive] = STATE(162),
    [sym_mbox_hook_directive] = STATE(162),
    [sym_message_hook_directive] = STATE(162),
    [sym_mime_lookup_directive] = STATE(162),
    [sym_unmime_lookup_directive] = STATE(162),
    [sym_mono_directive] = STATE(162),
    [sym_unmono_directive] = STATE(162),
    [sym_my_hdr_directive] = STATE(162),
    [sym_unmy_hdr_directive] = STATE(162),
    [sym_open_hook_directive] = STATE(162),
    [sym_close_hook_directive] = STATE(162),
    [sym_append_hook_directive] = STATE(162),
    [sym_push_directive] = STATE(162),
    [sym_reply_hook_directive] = STATE(162),
    [sym_send_hook_directive] = STATE(162),
    [sym_send2_hook_directive] = STATE(162),
    [sym_spam_directive] = STATE(162),
    [sym_nospam_directive] = STATE(162),
    [sym_subjectrx_directive] = STATE(162),
    [sym_unsubjectrx_directive] = STATE(162),
    [sym_subscribe_to_directive] = STATE(162),
    [sym_unsubscribe_from_directive] = STATE(162),
    [sym_timeout_hook_directive] = STATE(162),
    [sym_startup_hook_directive] = STATE(162),
    [sym_shutdown_hook_directive] = STATE(162),
    [sym_unhook_directive] = STATE(162),
    [sym_set_directive] = STATE(162),
    [sym_unset_directive] = STATE(162),
    [sym_reset_directive] = STATE(162),
    [sym_toggle_directive] = STATE(162),
    [sym_setenv_directive] = STATE(162),
    [sym_unsetenv_directive] = STATE(162),
    [sym_sidebar_pin_directive] = STATE(162),
    [sym_sidebar_unpin_directive] = STATE(162),
    [sym_score_directive] = STATE(162),
    [sym_unscore_directive] = STATE(162),
    [sym_source_directive] = STATE(162),
    [sym__space] = STATE(435),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(281),
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
    [sym__command] = STATE(162),
    [sym_account_hook_directive] = STATE(162),
    [sym_alias_directive] = STATE(162),
    [sym_unalias_directive] = STATE(162),
    [sym_alternates_directive] = STATE(162),
    [sym_unalternates_directive] = STATE(162),
    [sym_alternative_order_directive] = STATE(162),
    [sym_unalternative_order_directive] = STATE(162),
    [sym_attachments_directive] = STATE(162),
    [sym_unattachments_directive] = STATE(162),
    [sym_auto_view_directive] = STATE(162),
    [sym_unauto_view_directive] = STATE(162),
    [sym_bind_directive] = STATE(162),
    [sym_unbind_directive] = STATE(162),
    [sym_charset_hook_directive] = STATE(162),
    [sym_iconv_hook_directive] = STATE(162),
    [sym_color_directive] = STATE(162),
    [sym_uncolor_directive] = STATE(162),
    [sym_crypt_hook_directive] = STATE(162),
    [sym_index_format_hook_directive] = STATE(162),
    [sym_exec_directive] = STATE(162),
    [sym_fcc_save_hook_directive] = STATE(162),
    [sym_fcc_hook_directive] = STATE(162),
    [sym_save_hook_directive] = STATE(162),
    [sym_folder_hook_directive] = STATE(162),
    [sym_group_directive] = STATE(162),
    [sym_ungroup_directive] = STATE(162),
    [sym_hdr_order_directive] = STATE(162),
    [sym_unhdr_order_directive] = STATE(162),
    [sym_ifdef_directive] = STATE(162),
    [sym_ifndef_directive] = STATE(162),
    [sym_finish_directive] = STATE(162),
    [sym_ignore_directive] = STATE(162),
    [sym_unignore_directive] = STATE(162),
    [sym_lists_directive] = STATE(162),
    [sym_unlists_directive] = STATE(162),
    [sym_subscribe_directive] = STATE(162),
    [sym_unsubscribe_directive] = STATE(162),
    [sym_macro_directive] = STATE(162),
    [sym_unmacro_directive] = STATE(162),
    [sym_mailboxes_directive] = STATE(162),
    [sym_named_mailboxes_directive] = STATE(162),
    [sym_unmailboxes_directive] = STATE(162),
    [sym_mailto_allow_directive] = STATE(162),
    [sym_unmailto_allow_directive] = STATE(162),
    [sym_echo_directive] = STATE(162),
    [sym_cd_directive] = STATE(162),
    [sym_mbox_hook_directive] = STATE(162),
    [sym_message_hook_directive] = STATE(162),
    [sym_mime_lookup_directive] = STATE(162),
    [sym_unmime_lookup_directive] = STATE(162),
    [sym_mono_directive] = STATE(162),
    [sym_unmono_directive] = STATE(162),
    [sym_my_hdr_directive] = STATE(162),
    [sym_unmy_hdr_directive] = STATE(162),
    [sym_open_hook_directive] = STATE(162),
    [sym_close_hook_directive] = STATE(162),
    [sym_append_hook_directive] = STATE(162),
    [sym_push_directive] = STATE(162),
    [sym_reply_hook_directive] = STATE(162),
    [sym_send_hook_directive] = STATE(162),
    [sym_send2_hook_directive] = STATE(162),
    [sym_spam_directive] = STATE(162),
    [sym_nospam_directive] = STATE(162),
    [sym_subjectrx_directive] = STATE(162),
    [sym_unsubjectrx_directive] = STATE(162),
    [sym_subscribe_to_directive] = STATE(162),
    [sym_unsubscribe_from_directive] = STATE(162),
    [sym_timeout_hook_directive] = STATE(162),
    [sym_startup_hook_directive] = STATE(162),
    [sym_shutdown_hook_directive] = STATE(162),
    [sym_unhook_directive] = STATE(162),
    [sym_set_directive] = STATE(162),
    [sym_unset_directive] = STATE(162),
    [sym_reset_directive] = STATE(162),
    [sym_toggle_directive] = STATE(162),
    [sym_setenv_directive] = STATE(162),
    [sym_unsetenv_directive] = STATE(162),
    [sym_sidebar_pin_directive] = STATE(162),
    [sym_sidebar_unpin_directive] = STATE(162),
    [sym_score_directive] = STATE(162),
    [sym_unscore_directive] = STATE(162),
    [sym_source_directive] = STATE(162),
    [sym__space] = STATE(435),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(281),
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
    [sym__command] = STATE(330),
    [sym_account_hook_directive] = STATE(330),
    [sym_alias_directive] = STATE(330),
    [sym_unalias_directive] = STATE(330),
    [sym_alternates_directive] = STATE(330),
    [sym_unalternates_directive] = STATE(330),
    [sym_alternative_order_directive] = STATE(330),
    [sym_unalternative_order_directive] = STATE(330),
    [sym_attachments_directive] = STATE(330),
    [sym_unattachments_directive] = STATE(330),
    [sym_auto_view_directive] = STATE(330),
    [sym_unauto_view_directive] = STATE(330),
    [sym_bind_directive] = STATE(330),
    [sym_unbind_directive] = STATE(330),
    [sym_charset_hook_directive] = STATE(330),
    [sym_iconv_hook_directive] = STATE(330),
    [sym_color_directive] = STATE(330),
    [sym_uncolor_directive] = STATE(330),
    [sym_crypt_hook_directive] = STATE(330),
    [sym_index_format_hook_directive] = STATE(330),
    [sym_exec_directive] = STATE(330),
    [sym_fcc_save_hook_directive] = STATE(330),
    [sym_fcc_hook_directive] = STATE(330),
    [sym_save_hook_directive] = STATE(330),
    [sym_folder_hook_directive] = STATE(330),
    [sym_group_directive] = STATE(330),
    [sym_ungroup_directive] = STATE(330),
    [sym_hdr_order_directive] = STATE(330),
    [sym_unhdr_order_directive] = STATE(330),
    [sym_ifdef_directive] = STATE(330),
    [sym_ifndef_directive] = STATE(330),
    [sym_finish_directive] = STATE(330),
    [sym_ignore_directive] = STATE(330),
    [sym_unignore_directive] = STATE(330),
    [sym_lists_directive] = STATE(330),
    [sym_unlists_directive] = STATE(330),
    [sym_subscribe_directive] = STATE(330),
    [sym_unsubscribe_directive] = STATE(330),
    [sym_macro_directive] = STATE(330),
    [sym_unmacro_directive] = STATE(330),
    [sym_mailboxes_directive] = STATE(330),
    [sym_named_mailboxes_directive] = STATE(330),
    [sym_unmailboxes_directive] = STATE(330),
    [sym_mailto_allow_directive] = STATE(330),
    [sym_unmailto_allow_directive] = STATE(330),
    [sym_echo_directive] = STATE(330),
    [sym_cd_directive] = STATE(330),
    [sym_mbox_hook_directive] = STATE(330),
    [sym_message_hook_directive] = STATE(330),
    [sym_mime_lookup_directive] = STATE(330),
    [sym_unmime_lookup_directive] = STATE(330),
    [sym_mono_directive] = STATE(330),
    [sym_unmono_directive] = STATE(330),
    [sym_my_hdr_directive] = STATE(330),
    [sym_unmy_hdr_directive] = STATE(330),
    [sym_open_hook_directive] = STATE(330),
    [sym_close_hook_directive] = STATE(330),
    [sym_append_hook_directive] = STATE(330),
    [sym_push_directive] = STATE(330),
    [sym_reply_hook_directive] = STATE(330),
    [sym_send_hook_directive] = STATE(330),
    [sym_send2_hook_directive] = STATE(330),
    [sym_spam_directive] = STATE(330),
    [sym_nospam_directive] = STATE(330),
    [sym_subjectrx_directive] = STATE(330),
    [sym_unsubjectrx_directive] = STATE(330),
    [sym_subscribe_to_directive] = STATE(330),
    [sym_unsubscribe_from_directive] = STATE(330),
    [sym_timeout_hook_directive] = STATE(330),
    [sym_startup_hook_directive] = STATE(330),
    [sym_shutdown_hook_directive] = STATE(330),
    [sym_unhook_directive] = STATE(330),
    [sym_set_directive] = STATE(330),
    [sym_unset_directive] = STATE(330),
    [sym_reset_directive] = STATE(330),
    [sym_toggle_directive] = STATE(330),
    [sym_setenv_directive] = STATE(330),
    [sym_unsetenv_directive] = STATE(330),
    [sym_sidebar_pin_directive] = STATE(330),
    [sym_sidebar_unpin_directive] = STATE(330),
    [sym_score_directive] = STATE(330),
    [sym_unscore_directive] = STATE(330),
    [sym_source_directive] = STATE(330),
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
    [sym__command] = STATE(286),
    [sym_account_hook_directive] = STATE(286),
    [sym_alias_directive] = STATE(286),
    [sym_unalias_directive] = STATE(286),
    [sym_alternates_directive] = STATE(286),
    [sym_unalternates_directive] = STATE(286),
    [sym_alternative_order_directive] = STATE(286),
    [sym_unalternative_order_directive] = STATE(286),
    [sym_attachments_directive] = STATE(286),
    [sym_unattachments_directive] = STATE(286),
    [sym_auto_view_directive] = STATE(286),
    [sym_unauto_view_directive] = STATE(286),
    [sym_bind_directive] = STATE(286),
    [sym_unbind_directive] = STATE(286),
    [sym_charset_hook_directive] = STATE(286),
    [sym_iconv_hook_directive] = STATE(286),
    [sym_color_directive] = STATE(286),
    [sym_uncolor_directive] = STATE(286),
    [sym_crypt_hook_directive] = STATE(286),
    [sym_index_format_hook_directive] = STATE(286),
    [sym_exec_directive] = STATE(286),
    [sym_fcc_save_hook_directive] = STATE(286),
    [sym_fcc_hook_directive] = STATE(286),
    [sym_save_hook_directive] = STATE(286),
    [sym_folder_hook_directive] = STATE(286),
    [sym_group_directive] = STATE(286),
    [sym_ungroup_directive] = STATE(286),
    [sym_hdr_order_directive] = STATE(286),
    [sym_unhdr_order_directive] = STATE(286),
    [sym_ifdef_directive] = STATE(286),
    [sym_ifndef_directive] = STATE(286),
    [sym_finish_directive] = STATE(286),
    [sym_ignore_directive] = STATE(286),
    [sym_unignore_directive] = STATE(286),
    [sym_lists_directive] = STATE(286),
    [sym_unlists_directive] = STATE(286),
    [sym_subscribe_directive] = STATE(286),
    [sym_unsubscribe_directive] = STATE(286),
    [sym_macro_directive] = STATE(286),
    [sym_unmacro_directive] = STATE(286),
    [sym_mailboxes_directive] = STATE(286),
    [sym_named_mailboxes_directive] = STATE(286),
    [sym_unmailboxes_directive] = STATE(286),
    [sym_mailto_allow_directive] = STATE(286),
    [sym_unmailto_allow_directive] = STATE(286),
    [sym_echo_directive] = STATE(286),
    [sym_cd_directive] = STATE(286),
    [sym_mbox_hook_directive] = STATE(286),
    [sym_message_hook_directive] = STATE(286),
    [sym_mime_lookup_directive] = STATE(286),
    [sym_unmime_lookup_directive] = STATE(286),
    [sym_mono_directive] = STATE(286),
    [sym_unmono_directive] = STATE(286),
    [sym_my_hdr_directive] = STATE(286),
    [sym_unmy_hdr_directive] = STATE(286),
    [sym_open_hook_directive] = STATE(286),
    [sym_close_hook_directive] = STATE(286),
    [sym_append_hook_directive] = STATE(286),
    [sym_push_directive] = STATE(286),
    [sym_reply_hook_directive] = STATE(286),
    [sym_send_hook_directive] = STATE(286),
    [sym_send2_hook_directive] = STATE(286),
    [sym_spam_directive] = STATE(286),
    [sym_nospam_directive] = STATE(286),
    [sym_subjectrx_directive] = STATE(286),
    [sym_unsubjectrx_directive] = STATE(286),
    [sym_subscribe_to_directive] = STATE(286),
    [sym_unsubscribe_from_directive] = STATE(286),
    [sym_timeout_hook_directive] = STATE(286),
    [sym_startup_hook_directive] = STATE(286),
    [sym_shutdown_hook_directive] = STATE(286),
    [sym_unhook_directive] = STATE(286),
    [sym_set_directive] = STATE(286),
    [sym_unset_directive] = STATE(286),
    [sym_reset_directive] = STATE(286),
    [sym_toggle_directive] = STATE(286),
    [sym_setenv_directive] = STATE(286),
    [sym_unsetenv_directive] = STATE(286),
    [sym_sidebar_pin_directive] = STATE(286),
    [sym_sidebar_unpin_directive] = STATE(286),
    [sym_score_directive] = STATE(286),
    [sym_unscore_directive] = STATE(286),
    [sym_source_directive] = STATE(286),
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
    [sym__command] = STATE(297),
    [sym_account_hook_directive] = STATE(297),
    [sym_alias_directive] = STATE(297),
    [sym_unalias_directive] = STATE(297),
    [sym_alternates_directive] = STATE(297),
    [sym_unalternates_directive] = STATE(297),
    [sym_alternative_order_directive] = STATE(297),
    [sym_unalternative_order_directive] = STATE(297),
    [sym_attachments_directive] = STATE(297),
    [sym_unattachments_directive] = STATE(297),
    [sym_auto_view_directive] = STATE(297),
    [sym_unauto_view_directive] = STATE(297),
    [sym_bind_directive] = STATE(297),
    [sym_unbind_directive] = STATE(297),
    [sym_charset_hook_directive] = STATE(297),
    [sym_iconv_hook_directive] = STATE(297),
    [sym_color_directive] = STATE(297),
    [sym_uncolor_directive] = STATE(297),
    [sym_crypt_hook_directive] = STATE(297),
    [sym_index_format_hook_directive] = STATE(297),
    [sym_exec_directive] = STATE(297),
    [sym_fcc_save_hook_directive] = STATE(297),
    [sym_fcc_hook_directive] = STATE(297),
    [sym_save_hook_directive] = STATE(297),
    [sym_folder_hook_directive] = STATE(297),
    [sym_group_directive] = STATE(297),
    [sym_ungroup_directive] = STATE(297),
    [sym_hdr_order_directive] = STATE(297),
    [sym_unhdr_order_directive] = STATE(297),
    [sym_ifdef_directive] = STATE(297),
    [sym_ifndef_directive] = STATE(297),
    [sym_finish_directive] = STATE(297),
    [sym_ignore_directive] = STATE(297),
    [sym_unignore_directive] = STATE(297),
    [sym_lists_directive] = STATE(297),
    [sym_unlists_directive] = STATE(297),
    [sym_subscribe_directive] = STATE(297),
    [sym_unsubscribe_directive] = STATE(297),
    [sym_macro_directive] = STATE(297),
    [sym_unmacro_directive] = STATE(297),
    [sym_mailboxes_directive] = STATE(297),
    [sym_named_mailboxes_directive] = STATE(297),
    [sym_unmailboxes_directive] = STATE(297),
    [sym_mailto_allow_directive] = STATE(297),
    [sym_unmailto_allow_directive] = STATE(297),
    [sym_echo_directive] = STATE(297),
    [sym_cd_directive] = STATE(297),
    [sym_mbox_hook_directive] = STATE(297),
    [sym_message_hook_directive] = STATE(297),
    [sym_mime_lookup_directive] = STATE(297),
    [sym_unmime_lookup_directive] = STATE(297),
    [sym_mono_directive] = STATE(297),
    [sym_unmono_directive] = STATE(297),
    [sym_my_hdr_directive] = STATE(297),
    [sym_unmy_hdr_directive] = STATE(297),
    [sym_open_hook_directive] = STATE(297),
    [sym_close_hook_directive] = STATE(297),
    [sym_append_hook_directive] = STATE(297),
    [sym_push_directive] = STATE(297),
    [sym_reply_hook_directive] = STATE(297),
    [sym_send_hook_directive] = STATE(297),
    [sym_send2_hook_directive] = STATE(297),
    [sym_spam_directive] = STATE(297),
    [sym_nospam_directive] = STATE(297),
    [sym_subjectrx_directive] = STATE(297),
    [sym_unsubjectrx_directive] = STATE(297),
    [sym_subscribe_to_directive] = STATE(297),
    [sym_unsubscribe_from_directive] = STATE(297),
    [sym_timeout_hook_directive] = STATE(297),
    [sym_startup_hook_directive] = STATE(297),
    [sym_shutdown_hook_directive] = STATE(297),
    [sym_unhook_directive] = STATE(297),
    [sym_set_directive] = STATE(297),
    [sym_unset_directive] = STATE(297),
    [sym_reset_directive] = STATE(297),
    [sym_toggle_directive] = STATE(297),
    [sym_setenv_directive] = STATE(297),
    [sym_unsetenv_directive] = STATE(297),
    [sym_sidebar_pin_directive] = STATE(297),
    [sym_sidebar_unpin_directive] = STATE(297),
    [sym_score_directive] = STATE(297),
    [sym_unscore_directive] = STATE(297),
    [sym_source_directive] = STATE(297),
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
    [sym__command] = STATE(323),
    [sym_account_hook_directive] = STATE(323),
    [sym_alias_directive] = STATE(323),
    [sym_unalias_directive] = STATE(323),
    [sym_alternates_directive] = STATE(323),
    [sym_unalternates_directive] = STATE(323),
    [sym_alternative_order_directive] = STATE(323),
    [sym_unalternative_order_directive] = STATE(323),
    [sym_attachments_directive] = STATE(323),
    [sym_unattachments_directive] = STATE(323),
    [sym_auto_view_directive] = STATE(323),
    [sym_unauto_view_directive] = STATE(323),
    [sym_bind_directive] = STATE(323),
    [sym_unbind_directive] = STATE(323),
    [sym_charset_hook_directive] = STATE(323),
    [sym_iconv_hook_directive] = STATE(323),
    [sym_color_directive] = STATE(323),
    [sym_uncolor_directive] = STATE(323),
    [sym_crypt_hook_directive] = STATE(323),
    [sym_index_format_hook_directive] = STATE(323),
    [sym_exec_directive] = STATE(323),
    [sym_fcc_save_hook_directive] = STATE(323),
    [sym_fcc_hook_directive] = STATE(323),
    [sym_save_hook_directive] = STATE(323),
    [sym_folder_hook_directive] = STATE(323),
    [sym_group_directive] = STATE(323),
    [sym_ungroup_directive] = STATE(323),
    [sym_hdr_order_directive] = STATE(323),
    [sym_unhdr_order_directive] = STATE(323),
    [sym_ifdef_directive] = STATE(323),
    [sym_ifndef_directive] = STATE(323),
    [sym_finish_directive] = STATE(323),
    [sym_ignore_directive] = STATE(323),
    [sym_unignore_directive] = STATE(323),
    [sym_lists_directive] = STATE(323),
    [sym_unlists_directive] = STATE(323),
    [sym_subscribe_directive] = STATE(323),
    [sym_unsubscribe_directive] = STATE(323),
    [sym_macro_directive] = STATE(323),
    [sym_unmacro_directive] = STATE(323),
    [sym_mailboxes_directive] = STATE(323),
    [sym_named_mailboxes_directive] = STATE(323),
    [sym_unmailboxes_directive] = STATE(323),
    [sym_mailto_allow_directive] = STATE(323),
    [sym_unmailto_allow_directive] = STATE(323),
    [sym_echo_directive] = STATE(323),
    [sym_cd_directive] = STATE(323),
    [sym_mbox_hook_directive] = STATE(323),
    [sym_message_hook_directive] = STATE(323),
    [sym_mime_lookup_directive] = STATE(323),
    [sym_unmime_lookup_directive] = STATE(323),
    [sym_mono_directive] = STATE(323),
    [sym_unmono_directive] = STATE(323),
    [sym_my_hdr_directive] = STATE(323),
    [sym_unmy_hdr_directive] = STATE(323),
    [sym_open_hook_directive] = STATE(323),
    [sym_close_hook_directive] = STATE(323),
    [sym_append_hook_directive] = STATE(323),
    [sym_push_directive] = STATE(323),
    [sym_reply_hook_directive] = STATE(323),
    [sym_send_hook_directive] = STATE(323),
    [sym_send2_hook_directive] = STATE(323),
    [sym_spam_directive] = STATE(323),
    [sym_nospam_directive] = STATE(323),
    [sym_subjectrx_directive] = STATE(323),
    [sym_unsubjectrx_directive] = STATE(323),
    [sym_subscribe_to_directive] = STATE(323),
    [sym_unsubscribe_from_directive] = STATE(323),
    [sym_timeout_hook_directive] = STATE(323),
    [sym_startup_hook_directive] = STATE(323),
    [sym_shutdown_hook_directive] = STATE(323),
    [sym_unhook_directive] = STATE(323),
    [sym_set_directive] = STATE(323),
    [sym_unset_directive] = STATE(323),
    [sym_reset_directive] = STATE(323),
    [sym_toggle_directive] = STATE(323),
    [sym_setenv_directive] = STATE(323),
    [sym_unsetenv_directive] = STATE(323),
    [sym_sidebar_pin_directive] = STATE(323),
    [sym_sidebar_unpin_directive] = STATE(323),
    [sym_score_directive] = STATE(323),
    [sym_unscore_directive] = STATE(323),
    [sym_source_directive] = STATE(323),
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
    [sym__command] = STATE(360),
    [sym_account_hook_directive] = STATE(360),
    [sym_alias_directive] = STATE(360),
    [sym_unalias_directive] = STATE(360),
    [sym_alternates_directive] = STATE(360),
    [sym_unalternates_directive] = STATE(360),
    [sym_alternative_order_directive] = STATE(360),
    [sym_unalternative_order_directive] = STATE(360),
    [sym_attachments_directive] = STATE(360),
    [sym_unattachments_directive] = STATE(360),
    [sym_auto_view_directive] = STATE(360),
    [sym_unauto_view_directive] = STATE(360),
    [sym_bind_directive] = STATE(360),
    [sym_unbind_directive] = STATE(360),
    [sym_charset_hook_directive] = STATE(360),
    [sym_iconv_hook_directive] = STATE(360),
    [sym_color_directive] = STATE(360),
    [sym_uncolor_directive] = STATE(360),
    [sym_crypt_hook_directive] = STATE(360),
    [sym_index_format_hook_directive] = STATE(360),
    [sym_exec_directive] = STATE(360),
    [sym_fcc_save_hook_directive] = STATE(360),
    [sym_fcc_hook_directive] = STATE(360),
    [sym_save_hook_directive] = STATE(360),
    [sym_folder_hook_directive] = STATE(360),
    [sym_group_directive] = STATE(360),
    [sym_ungroup_directive] = STATE(360),
    [sym_hdr_order_directive] = STATE(360),
    [sym_unhdr_order_directive] = STATE(360),
    [sym_ifdef_directive] = STATE(360),
    [sym_ifndef_directive] = STATE(360),
    [sym_finish_directive] = STATE(360),
    [sym_ignore_directive] = STATE(360),
    [sym_unignore_directive] = STATE(360),
    [sym_lists_directive] = STATE(360),
    [sym_unlists_directive] = STATE(360),
    [sym_subscribe_directive] = STATE(360),
    [sym_unsubscribe_directive] = STATE(360),
    [sym_macro_directive] = STATE(360),
    [sym_unmacro_directive] = STATE(360),
    [sym_mailboxes_directive] = STATE(360),
    [sym_named_mailboxes_directive] = STATE(360),
    [sym_unmailboxes_directive] = STATE(360),
    [sym_mailto_allow_directive] = STATE(360),
    [sym_unmailto_allow_directive] = STATE(360),
    [sym_echo_directive] = STATE(360),
    [sym_cd_directive] = STATE(360),
    [sym_mbox_hook_directive] = STATE(360),
    [sym_message_hook_directive] = STATE(360),
    [sym_mime_lookup_directive] = STATE(360),
    [sym_unmime_lookup_directive] = STATE(360),
    [sym_mono_directive] = STATE(360),
    [sym_unmono_directive] = STATE(360),
    [sym_my_hdr_directive] = STATE(360),
    [sym_unmy_hdr_directive] = STATE(360),
    [sym_open_hook_directive] = STATE(360),
    [sym_close_hook_directive] = STATE(360),
    [sym_append_hook_directive] = STATE(360),
    [sym_push_directive] = STATE(360),
    [sym_reply_hook_directive] = STATE(360),
    [sym_send_hook_directive] = STATE(360),
    [sym_send2_hook_directive] = STATE(360),
    [sym_spam_directive] = STATE(360),
    [sym_nospam_directive] = STATE(360),
    [sym_subjectrx_directive] = STATE(360),
    [sym_unsubjectrx_directive] = STATE(360),
    [sym_subscribe_to_directive] = STATE(360),
    [sym_unsubscribe_from_directive] = STATE(360),
    [sym_timeout_hook_directive] = STATE(360),
    [sym_startup_hook_directive] = STATE(360),
    [sym_shutdown_hook_directive] = STATE(360),
    [sym_unhook_directive] = STATE(360),
    [sym_set_directive] = STATE(360),
    [sym_unset_directive] = STATE(360),
    [sym_reset_directive] = STATE(360),
    [sym_toggle_directive] = STATE(360),
    [sym_setenv_directive] = STATE(360),
    [sym_unsetenv_directive] = STATE(360),
    [sym_sidebar_pin_directive] = STATE(360),
    [sym_sidebar_unpin_directive] = STATE(360),
    [sym_score_directive] = STATE(360),
    [sym_unscore_directive] = STATE(360),
    [sym_source_directive] = STATE(360),
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
    [sym__command] = STATE(331),
    [sym_account_hook_directive] = STATE(331),
    [sym_alias_directive] = STATE(331),
    [sym_unalias_directive] = STATE(331),
    [sym_alternates_directive] = STATE(331),
    [sym_unalternates_directive] = STATE(331),
    [sym_alternative_order_directive] = STATE(331),
    [sym_unalternative_order_directive] = STATE(331),
    [sym_attachments_directive] = STATE(331),
    [sym_unattachments_directive] = STATE(331),
    [sym_auto_view_directive] = STATE(331),
    [sym_unauto_view_directive] = STATE(331),
    [sym_bind_directive] = STATE(331),
    [sym_unbind_directive] = STATE(331),
    [sym_charset_hook_directive] = STATE(331),
    [sym_iconv_hook_directive] = STATE(331),
    [sym_color_directive] = STATE(331),
    [sym_uncolor_directive] = STATE(331),
    [sym_crypt_hook_directive] = STATE(331),
    [sym_index_format_hook_directive] = STATE(331),
    [sym_exec_directive] = STATE(331),
    [sym_fcc_save_hook_directive] = STATE(331),
    [sym_fcc_hook_directive] = STATE(331),
    [sym_save_hook_directive] = STATE(331),
    [sym_folder_hook_directive] = STATE(331),
    [sym_group_directive] = STATE(331),
    [sym_ungroup_directive] = STATE(331),
    [sym_hdr_order_directive] = STATE(331),
    [sym_unhdr_order_directive] = STATE(331),
    [sym_ifdef_directive] = STATE(331),
    [sym_ifndef_directive] = STATE(331),
    [sym_finish_directive] = STATE(331),
    [sym_ignore_directive] = STATE(331),
    [sym_unignore_directive] = STATE(331),
    [sym_lists_directive] = STATE(331),
    [sym_unlists_directive] = STATE(331),
    [sym_subscribe_directive] = STATE(331),
    [sym_unsubscribe_directive] = STATE(331),
    [sym_macro_directive] = STATE(331),
    [sym_unmacro_directive] = STATE(331),
    [sym_mailboxes_directive] = STATE(331),
    [sym_named_mailboxes_directive] = STATE(331),
    [sym_unmailboxes_directive] = STATE(331),
    [sym_mailto_allow_directive] = STATE(331),
    [sym_unmailto_allow_directive] = STATE(331),
    [sym_echo_directive] = STATE(331),
    [sym_cd_directive] = STATE(331),
    [sym_mbox_hook_directive] = STATE(331),
    [sym_message_hook_directive] = STATE(331),
    [sym_mime_lookup_directive] = STATE(331),
    [sym_unmime_lookup_directive] = STATE(331),
    [sym_mono_directive] = STATE(331),
    [sym_unmono_directive] = STATE(331),
    [sym_my_hdr_directive] = STATE(331),
    [sym_unmy_hdr_directive] = STATE(331),
    [sym_open_hook_directive] = STATE(331),
    [sym_close_hook_directive] = STATE(331),
    [sym_append_hook_directive] = STATE(331),
    [sym_push_directive] = STATE(331),
    [sym_reply_hook_directive] = STATE(331),
    [sym_send_hook_directive] = STATE(331),
    [sym_send2_hook_directive] = STATE(331),
    [sym_spam_directive] = STATE(331),
    [sym_nospam_directive] = STATE(331),
    [sym_subjectrx_directive] = STATE(331),
    [sym_unsubjectrx_directive] = STATE(331),
    [sym_subscribe_to_directive] = STATE(331),
    [sym_unsubscribe_from_directive] = STATE(331),
    [sym_timeout_hook_directive] = STATE(331),
    [sym_startup_hook_directive] = STATE(331),
    [sym_shutdown_hook_directive] = STATE(331),
    [sym_unhook_directive] = STATE(331),
    [sym_set_directive] = STATE(331),
    [sym_unset_directive] = STATE(331),
    [sym_reset_directive] = STATE(331),
    [sym_toggle_directive] = STATE(331),
    [sym_setenv_directive] = STATE(331),
    [sym_unsetenv_directive] = STATE(331),
    [sym_sidebar_pin_directive] = STATE(331),
    [sym_sidebar_unpin_directive] = STATE(331),
    [sym_score_directive] = STATE(331),
    [sym_unscore_directive] = STATE(331),
    [sym_source_directive] = STATE(331),
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
    [sym__command] = STATE(332),
    [sym_account_hook_directive] = STATE(332),
    [sym_alias_directive] = STATE(332),
    [sym_unalias_directive] = STATE(332),
    [sym_alternates_directive] = STATE(332),
    [sym_unalternates_directive] = STATE(332),
    [sym_alternative_order_directive] = STATE(332),
    [sym_unalternative_order_directive] = STATE(332),
    [sym_attachments_directive] = STATE(332),
    [sym_unattachments_directive] = STATE(332),
    [sym_auto_view_directive] = STATE(332),
    [sym_unauto_view_directive] = STATE(332),
    [sym_bind_directive] = STATE(332),
    [sym_unbind_directive] = STATE(332),
    [sym_charset_hook_directive] = STATE(332),
    [sym_iconv_hook_directive] = STATE(332),
    [sym_color_directive] = STATE(332),
    [sym_uncolor_directive] = STATE(332),
    [sym_crypt_hook_directive] = STATE(332),
    [sym_index_format_hook_directive] = STATE(332),
    [sym_exec_directive] = STATE(332),
    [sym_fcc_save_hook_directive] = STATE(332),
    [sym_fcc_hook_directive] = STATE(332),
    [sym_save_hook_directive] = STATE(332),
    [sym_folder_hook_directive] = STATE(332),
    [sym_group_directive] = STATE(332),
    [sym_ungroup_directive] = STATE(332),
    [sym_hdr_order_directive] = STATE(332),
    [sym_unhdr_order_directive] = STATE(332),
    [sym_ifdef_directive] = STATE(332),
    [sym_ifndef_directive] = STATE(332),
    [sym_finish_directive] = STATE(332),
    [sym_ignore_directive] = STATE(332),
    [sym_unignore_directive] = STATE(332),
    [sym_lists_directive] = STATE(332),
    [sym_unlists_directive] = STATE(332),
    [sym_subscribe_directive] = STATE(332),
    [sym_unsubscribe_directive] = STATE(332),
    [sym_macro_directive] = STATE(332),
    [sym_unmacro_directive] = STATE(332),
    [sym_mailboxes_directive] = STATE(332),
    [sym_named_mailboxes_directive] = STATE(332),
    [sym_unmailboxes_directive] = STATE(332),
    [sym_mailto_allow_directive] = STATE(332),
    [sym_unmailto_allow_directive] = STATE(332),
    [sym_echo_directive] = STATE(332),
    [sym_cd_directive] = STATE(332),
    [sym_mbox_hook_directive] = STATE(332),
    [sym_message_hook_directive] = STATE(332),
    [sym_mime_lookup_directive] = STATE(332),
    [sym_unmime_lookup_directive] = STATE(332),
    [sym_mono_directive] = STATE(332),
    [sym_unmono_directive] = STATE(332),
    [sym_my_hdr_directive] = STATE(332),
    [sym_unmy_hdr_directive] = STATE(332),
    [sym_open_hook_directive] = STATE(332),
    [sym_close_hook_directive] = STATE(332),
    [sym_append_hook_directive] = STATE(332),
    [sym_push_directive] = STATE(332),
    [sym_reply_hook_directive] = STATE(332),
    [sym_send_hook_directive] = STATE(332),
    [sym_send2_hook_directive] = STATE(332),
    [sym_spam_directive] = STATE(332),
    [sym_nospam_directive] = STATE(332),
    [sym_subjectrx_directive] = STATE(332),
    [sym_unsubjectrx_directive] = STATE(332),
    [sym_subscribe_to_directive] = STATE(332),
    [sym_unsubscribe_from_directive] = STATE(332),
    [sym_timeout_hook_directive] = STATE(332),
    [sym_startup_hook_directive] = STATE(332),
    [sym_shutdown_hook_directive] = STATE(332),
    [sym_unhook_directive] = STATE(332),
    [sym_set_directive] = STATE(332),
    [sym_unset_directive] = STATE(332),
    [sym_reset_directive] = STATE(332),
    [sym_toggle_directive] = STATE(332),
    [sym_setenv_directive] = STATE(332),
    [sym_unsetenv_directive] = STATE(332),
    [sym_sidebar_pin_directive] = STATE(332),
    [sym_sidebar_unpin_directive] = STATE(332),
    [sym_score_directive] = STATE(332),
    [sym_unscore_directive] = STATE(332),
    [sym_source_directive] = STATE(332),
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
    [sym__command] = STATE(357),
    [sym_account_hook_directive] = STATE(357),
    [sym_alias_directive] = STATE(357),
    [sym_unalias_directive] = STATE(357),
    [sym_alternates_directive] = STATE(357),
    [sym_unalternates_directive] = STATE(357),
    [sym_alternative_order_directive] = STATE(357),
    [sym_unalternative_order_directive] = STATE(357),
    [sym_attachments_directive] = STATE(357),
    [sym_unattachments_directive] = STATE(357),
    [sym_auto_view_directive] = STATE(357),
    [sym_unauto_view_directive] = STATE(357),
    [sym_bind_directive] = STATE(357),
    [sym_unbind_directive] = STATE(357),
    [sym_charset_hook_directive] = STATE(357),
    [sym_iconv_hook_directive] = STATE(357),
    [sym_color_directive] = STATE(357),
    [sym_uncolor_directive] = STATE(357),
    [sym_crypt_hook_directive] = STATE(357),
    [sym_index_format_hook_directive] = STATE(357),
    [sym_exec_directive] = STATE(357),
    [sym_fcc_save_hook_directive] = STATE(357),
    [sym_fcc_hook_directive] = STATE(357),
    [sym_save_hook_directive] = STATE(357),
    [sym_folder_hook_directive] = STATE(357),
    [sym_group_directive] = STATE(357),
    [sym_ungroup_directive] = STATE(357),
    [sym_hdr_order_directive] = STATE(357),
    [sym_unhdr_order_directive] = STATE(357),
    [sym_ifdef_directive] = STATE(357),
    [sym_ifndef_directive] = STATE(357),
    [sym_finish_directive] = STATE(357),
    [sym_ignore_directive] = STATE(357),
    [sym_unignore_directive] = STATE(357),
    [sym_lists_directive] = STATE(357),
    [sym_unlists_directive] = STATE(357),
    [sym_subscribe_directive] = STATE(357),
    [sym_unsubscribe_directive] = STATE(357),
    [sym_macro_directive] = STATE(357),
    [sym_unmacro_directive] = STATE(357),
    [sym_mailboxes_directive] = STATE(357),
    [sym_named_mailboxes_directive] = STATE(357),
    [sym_unmailboxes_directive] = STATE(357),
    [sym_mailto_allow_directive] = STATE(357),
    [sym_unmailto_allow_directive] = STATE(357),
    [sym_echo_directive] = STATE(357),
    [sym_cd_directive] = STATE(357),
    [sym_mbox_hook_directive] = STATE(357),
    [sym_message_hook_directive] = STATE(357),
    [sym_mime_lookup_directive] = STATE(357),
    [sym_unmime_lookup_directive] = STATE(357),
    [sym_mono_directive] = STATE(357),
    [sym_unmono_directive] = STATE(357),
    [sym_my_hdr_directive] = STATE(357),
    [sym_unmy_hdr_directive] = STATE(357),
    [sym_open_hook_directive] = STATE(357),
    [sym_close_hook_directive] = STATE(357),
    [sym_append_hook_directive] = STATE(357),
    [sym_push_directive] = STATE(357),
    [sym_reply_hook_directive] = STATE(357),
    [sym_send_hook_directive] = STATE(357),
    [sym_send2_hook_directive] = STATE(357),
    [sym_spam_directive] = STATE(357),
    [sym_nospam_directive] = STATE(357),
    [sym_subjectrx_directive] = STATE(357),
    [sym_unsubjectrx_directive] = STATE(357),
    [sym_subscribe_to_directive] = STATE(357),
    [sym_unsubscribe_from_directive] = STATE(357),
    [sym_timeout_hook_directive] = STATE(357),
    [sym_startup_hook_directive] = STATE(357),
    [sym_shutdown_hook_directive] = STATE(357),
    [sym_unhook_directive] = STATE(357),
    [sym_set_directive] = STATE(357),
    [sym_unset_directive] = STATE(357),
    [sym_reset_directive] = STATE(357),
    [sym_toggle_directive] = STATE(357),
    [sym_setenv_directive] = STATE(357),
    [sym_unsetenv_directive] = STATE(357),
    [sym_sidebar_pin_directive] = STATE(357),
    [sym_sidebar_unpin_directive] = STATE(357),
    [sym_score_directive] = STATE(357),
    [sym_unscore_directive] = STATE(357),
    [sym_source_directive] = STATE(357),
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
    [sym__command] = STATE(359),
    [sym_account_hook_directive] = STATE(359),
    [sym_alias_directive] = STATE(359),
    [sym_unalias_directive] = STATE(359),
    [sym_alternates_directive] = STATE(359),
    [sym_unalternates_directive] = STATE(359),
    [sym_alternative_order_directive] = STATE(359),
    [sym_unalternative_order_directive] = STATE(359),
    [sym_attachments_directive] = STATE(359),
    [sym_unattachments_directive] = STATE(359),
    [sym_auto_view_directive] = STATE(359),
    [sym_unauto_view_directive] = STATE(359),
    [sym_bind_directive] = STATE(359),
    [sym_unbind_directive] = STATE(359),
    [sym_charset_hook_directive] = STATE(359),
    [sym_iconv_hook_directive] = STATE(359),
    [sym_color_directive] = STATE(359),
    [sym_uncolor_directive] = STATE(359),
    [sym_crypt_hook_directive] = STATE(359),
    [sym_index_format_hook_directive] = STATE(359),
    [sym_exec_directive] = STATE(359),
    [sym_fcc_save_hook_directive] = STATE(359),
    [sym_fcc_hook_directive] = STATE(359),
    [sym_save_hook_directive] = STATE(359),
    [sym_folder_hook_directive] = STATE(359),
    [sym_group_directive] = STATE(359),
    [sym_ungroup_directive] = STATE(359),
    [sym_hdr_order_directive] = STATE(359),
    [sym_unhdr_order_directive] = STATE(359),
    [sym_ifdef_directive] = STATE(359),
    [sym_ifndef_directive] = STATE(359),
    [sym_finish_directive] = STATE(359),
    [sym_ignore_directive] = STATE(359),
    [sym_unignore_directive] = STATE(359),
    [sym_lists_directive] = STATE(359),
    [sym_unlists_directive] = STATE(359),
    [sym_subscribe_directive] = STATE(359),
    [sym_unsubscribe_directive] = STATE(359),
    [sym_macro_directive] = STATE(359),
    [sym_unmacro_directive] = STATE(359),
    [sym_mailboxes_directive] = STATE(359),
    [sym_named_mailboxes_directive] = STATE(359),
    [sym_unmailboxes_directive] = STATE(359),
    [sym_mailto_allow_directive] = STATE(359),
    [sym_unmailto_allow_directive] = STATE(359),
    [sym_echo_directive] = STATE(359),
    [sym_cd_directive] = STATE(359),
    [sym_mbox_hook_directive] = STATE(359),
    [sym_message_hook_directive] = STATE(359),
    [sym_mime_lookup_directive] = STATE(359),
    [sym_unmime_lookup_directive] = STATE(359),
    [sym_mono_directive] = STATE(359),
    [sym_unmono_directive] = STATE(359),
    [sym_my_hdr_directive] = STATE(359),
    [sym_unmy_hdr_directive] = STATE(359),
    [sym_open_hook_directive] = STATE(359),
    [sym_close_hook_directive] = STATE(359),
    [sym_append_hook_directive] = STATE(359),
    [sym_push_directive] = STATE(359),
    [sym_reply_hook_directive] = STATE(359),
    [sym_send_hook_directive] = STATE(359),
    [sym_send2_hook_directive] = STATE(359),
    [sym_spam_directive] = STATE(359),
    [sym_nospam_directive] = STATE(359),
    [sym_subjectrx_directive] = STATE(359),
    [sym_unsubjectrx_directive] = STATE(359),
    [sym_subscribe_to_directive] = STATE(359),
    [sym_unsubscribe_from_directive] = STATE(359),
    [sym_timeout_hook_directive] = STATE(359),
    [sym_startup_hook_directive] = STATE(359),
    [sym_shutdown_hook_directive] = STATE(359),
    [sym_unhook_directive] = STATE(359),
    [sym_set_directive] = STATE(359),
    [sym_unset_directive] = STATE(359),
    [sym_reset_directive] = STATE(359),
    [sym_toggle_directive] = STATE(359),
    [sym_setenv_directive] = STATE(359),
    [sym_unsetenv_directive] = STATE(359),
    [sym_sidebar_pin_directive] = STATE(359),
    [sym_sidebar_unpin_directive] = STATE(359),
    [sym_score_directive] = STATE(359),
    [sym_unscore_directive] = STATE(359),
    [sym_source_directive] = STATE(359),
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
    [sym__command] = STATE(370),
    [sym_account_hook_directive] = STATE(370),
    [sym_alias_directive] = STATE(370),
    [sym_unalias_directive] = STATE(370),
    [sym_alternates_directive] = STATE(370),
    [sym_unalternates_directive] = STATE(370),
    [sym_alternative_order_directive] = STATE(370),
    [sym_unalternative_order_directive] = STATE(370),
    [sym_attachments_directive] = STATE(370),
    [sym_unattachments_directive] = STATE(370),
    [sym_auto_view_directive] = STATE(370),
    [sym_unauto_view_directive] = STATE(370),
    [sym_bind_directive] = STATE(370),
    [sym_unbind_directive] = STATE(370),
    [sym_charset_hook_directive] = STATE(370),
    [sym_iconv_hook_directive] = STATE(370),
    [sym_color_directive] = STATE(370),
    [sym_uncolor_directive] = STATE(370),
    [sym_crypt_hook_directive] = STATE(370),
    [sym_index_format_hook_directive] = STATE(370),
    [sym_exec_directive] = STATE(370),
    [sym_fcc_save_hook_directive] = STATE(370),
    [sym_fcc_hook_directive] = STATE(370),
    [sym_save_hook_directive] = STATE(370),
    [sym_folder_hook_directive] = STATE(370),
    [sym_group_directive] = STATE(370),
    [sym_ungroup_directive] = STATE(370),
    [sym_hdr_order_directive] = STATE(370),
    [sym_unhdr_order_directive] = STATE(370),
    [sym_ifdef_directive] = STATE(370),
    [sym_ifndef_directive] = STATE(370),
    [sym_finish_directive] = STATE(370),
    [sym_ignore_directive] = STATE(370),
    [sym_unignore_directive] = STATE(370),
    [sym_lists_directive] = STATE(370),
    [sym_unlists_directive] = STATE(370),
    [sym_subscribe_directive] = STATE(370),
    [sym_unsubscribe_directive] = STATE(370),
    [sym_macro_directive] = STATE(370),
    [sym_unmacro_directive] = STATE(370),
    [sym_mailboxes_directive] = STATE(370),
    [sym_named_mailboxes_directive] = STATE(370),
    [sym_unmailboxes_directive] = STATE(370),
    [sym_mailto_allow_directive] = STATE(370),
    [sym_unmailto_allow_directive] = STATE(370),
    [sym_echo_directive] = STATE(370),
    [sym_cd_directive] = STATE(370),
    [sym_mbox_hook_directive] = STATE(370),
    [sym_message_hook_directive] = STATE(370),
    [sym_mime_lookup_directive] = STATE(370),
    [sym_unmime_lookup_directive] = STATE(370),
    [sym_mono_directive] = STATE(370),
    [sym_unmono_directive] = STATE(370),
    [sym_my_hdr_directive] = STATE(370),
    [sym_unmy_hdr_directive] = STATE(370),
    [sym_open_hook_directive] = STATE(370),
    [sym_close_hook_directive] = STATE(370),
    [sym_append_hook_directive] = STATE(370),
    [sym_push_directive] = STATE(370),
    [sym_reply_hook_directive] = STATE(370),
    [sym_send_hook_directive] = STATE(370),
    [sym_send2_hook_directive] = STATE(370),
    [sym_spam_directive] = STATE(370),
    [sym_nospam_directive] = STATE(370),
    [sym_subjectrx_directive] = STATE(370),
    [sym_unsubjectrx_directive] = STATE(370),
    [sym_subscribe_to_directive] = STATE(370),
    [sym_unsubscribe_from_directive] = STATE(370),
    [sym_timeout_hook_directive] = STATE(370),
    [sym_startup_hook_directive] = STATE(370),
    [sym_shutdown_hook_directive] = STATE(370),
    [sym_unhook_directive] = STATE(370),
    [sym_set_directive] = STATE(370),
    [sym_unset_directive] = STATE(370),
    [sym_reset_directive] = STATE(370),
    [sym_toggle_directive] = STATE(370),
    [sym_setenv_directive] = STATE(370),
    [sym_unsetenv_directive] = STATE(370),
    [sym_sidebar_pin_directive] = STATE(370),
    [sym_sidebar_unpin_directive] = STATE(370),
    [sym_score_directive] = STATE(370),
    [sym_unscore_directive] = STATE(370),
    [sym_source_directive] = STATE(370),
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
    [sym__command] = STATE(306),
    [sym_account_hook_directive] = STATE(306),
    [sym_alias_directive] = STATE(306),
    [sym_unalias_directive] = STATE(306),
    [sym_alternates_directive] = STATE(306),
    [sym_unalternates_directive] = STATE(306),
    [sym_alternative_order_directive] = STATE(306),
    [sym_unalternative_order_directive] = STATE(306),
    [sym_attachments_directive] = STATE(306),
    [sym_unattachments_directive] = STATE(306),
    [sym_auto_view_directive] = STATE(306),
    [sym_unauto_view_directive] = STATE(306),
    [sym_bind_directive] = STATE(306),
    [sym_unbind_directive] = STATE(306),
    [sym_charset_hook_directive] = STATE(306),
    [sym_iconv_hook_directive] = STATE(306),
    [sym_color_directive] = STATE(306),
    [sym_uncolor_directive] = STATE(306),
    [sym_crypt_hook_directive] = STATE(306),
    [sym_index_format_hook_directive] = STATE(306),
    [sym_exec_directive] = STATE(306),
    [sym_fcc_save_hook_directive] = STATE(306),
    [sym_fcc_hook_directive] = STATE(306),
    [sym_save_hook_directive] = STATE(306),
    [sym_folder_hook_directive] = STATE(306),
    [sym_group_directive] = STATE(306),
    [sym_ungroup_directive] = STATE(306),
    [sym_hdr_order_directive] = STATE(306),
    [sym_unhdr_order_directive] = STATE(306),
    [sym_ifdef_directive] = STATE(306),
    [sym_ifndef_directive] = STATE(306),
    [sym_finish_directive] = STATE(306),
    [sym_ignore_directive] = STATE(306),
    [sym_unignore_directive] = STATE(306),
    [sym_lists_directive] = STATE(306),
    [sym_unlists_directive] = STATE(306),
    [sym_subscribe_directive] = STATE(306),
    [sym_unsubscribe_directive] = STATE(306),
    [sym_macro_directive] = STATE(306),
    [sym_unmacro_directive] = STATE(306),
    [sym_mailboxes_directive] = STATE(306),
    [sym_named_mailboxes_directive] = STATE(306),
    [sym_unmailboxes_directive] = STATE(306),
    [sym_mailto_allow_directive] = STATE(306),
    [sym_unmailto_allow_directive] = STATE(306),
    [sym_echo_directive] = STATE(306),
    [sym_cd_directive] = STATE(306),
    [sym_mbox_hook_directive] = STATE(306),
    [sym_message_hook_directive] = STATE(306),
    [sym_mime_lookup_directive] = STATE(306),
    [sym_unmime_lookup_directive] = STATE(306),
    [sym_mono_directive] = STATE(306),
    [sym_unmono_directive] = STATE(306),
    [sym_my_hdr_directive] = STATE(306),
    [sym_unmy_hdr_directive] = STATE(306),
    [sym_open_hook_directive] = STATE(306),
    [sym_close_hook_directive] = STATE(306),
    [sym_append_hook_directive] = STATE(306),
    [sym_push_directive] = STATE(306),
    [sym_reply_hook_directive] = STATE(306),
    [sym_send_hook_directive] = STATE(306),
    [sym_send2_hook_directive] = STATE(306),
    [sym_spam_directive] = STATE(306),
    [sym_nospam_directive] = STATE(306),
    [sym_subjectrx_directive] = STATE(306),
    [sym_unsubjectrx_directive] = STATE(306),
    [sym_subscribe_to_directive] = STATE(306),
    [sym_unsubscribe_from_directive] = STATE(306),
    [sym_timeout_hook_directive] = STATE(306),
    [sym_startup_hook_directive] = STATE(306),
    [sym_shutdown_hook_directive] = STATE(306),
    [sym_unhook_directive] = STATE(306),
    [sym_set_directive] = STATE(306),
    [sym_unset_directive] = STATE(306),
    [sym_reset_directive] = STATE(306),
    [sym_toggle_directive] = STATE(306),
    [sym_setenv_directive] = STATE(306),
    [sym_unsetenv_directive] = STATE(306),
    [sym_sidebar_pin_directive] = STATE(306),
    [sym_sidebar_unpin_directive] = STATE(306),
    [sym_score_directive] = STATE(306),
    [sym_unscore_directive] = STATE(306),
    [sym_source_directive] = STATE(306),
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
    [sym__command] = STATE(305),
    [sym_account_hook_directive] = STATE(305),
    [sym_alias_directive] = STATE(305),
    [sym_unalias_directive] = STATE(305),
    [sym_alternates_directive] = STATE(305),
    [sym_unalternates_directive] = STATE(305),
    [sym_alternative_order_directive] = STATE(305),
    [sym_unalternative_order_directive] = STATE(305),
    [sym_attachments_directive] = STATE(305),
    [sym_unattachments_directive] = STATE(305),
    [sym_auto_view_directive] = STATE(305),
    [sym_unauto_view_directive] = STATE(305),
    [sym_bind_directive] = STATE(305),
    [sym_unbind_directive] = STATE(305),
    [sym_charset_hook_directive] = STATE(305),
    [sym_iconv_hook_directive] = STATE(305),
    [sym_color_directive] = STATE(305),
    [sym_uncolor_directive] = STATE(305),
    [sym_crypt_hook_directive] = STATE(305),
    [sym_index_format_hook_directive] = STATE(305),
    [sym_exec_directive] = STATE(305),
    [sym_fcc_save_hook_directive] = STATE(305),
    [sym_fcc_hook_directive] = STATE(305),
    [sym_save_hook_directive] = STATE(305),
    [sym_folder_hook_directive] = STATE(305),
    [sym_group_directive] = STATE(305),
    [sym_ungroup_directive] = STATE(305),
    [sym_hdr_order_directive] = STATE(305),
    [sym_unhdr_order_directive] = STATE(305),
    [sym_ifdef_directive] = STATE(305),
    [sym_ifndef_directive] = STATE(305),
    [sym_finish_directive] = STATE(305),
    [sym_ignore_directive] = STATE(305),
    [sym_unignore_directive] = STATE(305),
    [sym_lists_directive] = STATE(305),
    [sym_unlists_directive] = STATE(305),
    [sym_subscribe_directive] = STATE(305),
    [sym_unsubscribe_directive] = STATE(305),
    [sym_macro_directive] = STATE(305),
    [sym_unmacro_directive] = STATE(305),
    [sym_mailboxes_directive] = STATE(305),
    [sym_named_mailboxes_directive] = STATE(305),
    [sym_unmailboxes_directive] = STATE(305),
    [sym_mailto_allow_directive] = STATE(305),
    [sym_unmailto_allow_directive] = STATE(305),
    [sym_echo_directive] = STATE(305),
    [sym_cd_directive] = STATE(305),
    [sym_mbox_hook_directive] = STATE(305),
    [sym_message_hook_directive] = STATE(305),
    [sym_mime_lookup_directive] = STATE(305),
    [sym_unmime_lookup_directive] = STATE(305),
    [sym_mono_directive] = STATE(305),
    [sym_unmono_directive] = STATE(305),
    [sym_my_hdr_directive] = STATE(305),
    [sym_unmy_hdr_directive] = STATE(305),
    [sym_open_hook_directive] = STATE(305),
    [sym_close_hook_directive] = STATE(305),
    [sym_append_hook_directive] = STATE(305),
    [sym_push_directive] = STATE(305),
    [sym_reply_hook_directive] = STATE(305),
    [sym_send_hook_directive] = STATE(305),
    [sym_send2_hook_directive] = STATE(305),
    [sym_spam_directive] = STATE(305),
    [sym_nospam_directive] = STATE(305),
    [sym_subjectrx_directive] = STATE(305),
    [sym_unsubjectrx_directive] = STATE(305),
    [sym_subscribe_to_directive] = STATE(305),
    [sym_unsubscribe_from_directive] = STATE(305),
    [sym_timeout_hook_directive] = STATE(305),
    [sym_startup_hook_directive] = STATE(305),
    [sym_shutdown_hook_directive] = STATE(305),
    [sym_unhook_directive] = STATE(305),
    [sym_set_directive] = STATE(305),
    [sym_unset_directive] = STATE(305),
    [sym_reset_directive] = STATE(305),
    [sym_toggle_directive] = STATE(305),
    [sym_setenv_directive] = STATE(305),
    [sym_unsetenv_directive] = STATE(305),
    [sym_sidebar_pin_directive] = STATE(305),
    [sym_sidebar_unpin_directive] = STATE(305),
    [sym_score_directive] = STATE(305),
    [sym_unscore_directive] = STATE(305),
    [sym_source_directive] = STATE(305),
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
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_account_DASHhook] = ACTIONS(604),
    [anon_sym_alias] = ACTIONS(604),
    [anon_sym_unalias] = ACTIONS(604),
    [anon_sym_alternates] = ACTIONS(604),
    [anon_sym_unalternates] = ACTIONS(604),
    [anon_sym_alternative_order] = ACTIONS(604),
    [anon_sym_unalternative_order] = ACTIONS(604),
    [anon_sym_attachments] = ACTIONS(604),
    [anon_sym_unattachments] = ACTIONS(604),
    [anon_sym_auto_view] = ACTIONS(604),
    [anon_sym_unauto_view] = ACTIONS(604),
    [anon_sym_bind] = ACTIONS(604),
    [anon_sym_unbind] = ACTIONS(604),
    [anon_sym_charset_DASHhook] = ACTIONS(604),
    [anon_sym_iconv_DASHhook] = ACTIONS(604),
    [anon_sym_color] = ACTIONS(604),
    [anon_sym_uncolor] = ACTIONS(604),
    [anon_sym_crypt_DASHhook] = ACTIONS(604),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(604),
    [anon_sym_exec] = ACTIONS(604),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(604),
    [anon_sym_fcc_DASHhook] = ACTIONS(604),
    [anon_sym_save_DASHhook] = ACTIONS(604),
    [anon_sym_folder_DASHhook] = ACTIONS(604),
    [anon_sym_group] = ACTIONS(604),
    [anon_sym_ungroup] = ACTIONS(604),
    [anon_sym_hdr_order] = ACTIONS(604),
    [anon_sym_unhdr_order] = ACTIONS(604),
    [anon_sym_ifdef] = ACTIONS(604),
    [anon_sym_ifndef] = ACTIONS(604),
    [anon_sym_finish] = ACTIONS(604),
    [anon_sym_ignore] = ACTIONS(604),
    [anon_sym_unignore] = ACTIONS(604),
    [anon_sym_lists] = ACTIONS(604),
    [anon_sym_unlists] = ACTIONS(604),
    [anon_sym_subscribe] = ACTIONS(604),
    [anon_sym_unsubscribe] = ACTIONS(604),
    [anon_sym_macro] = ACTIONS(604),
    [anon_sym_unmacro] = ACTIONS(604),
    [anon_sym_mailboxes] = ACTIONS(604),
    [anon_sym_named_DASHmailboxes] = ACTIONS(604),
    [anon_sym_unmailboxes] = ACTIONS(604),
    [anon_sym_mailto_allow] = ACTIONS(604),
    [anon_sym_unmailto_allow] = ACTIONS(604),
    [anon_sym_echo] = ACTIONS(604),
    [anon_sym_cd] = ACTIONS(604),
    [anon_sym_mbox_DASHhook] = ACTIONS(604),
    [anon_sym_message_DASHhook] = ACTIONS(604),
    [anon_sym_mime_lookup] = ACTIONS(604),
    [anon_sym_unmime_lookup] = ACTIONS(604),
    [anon_sym_mono] = ACTIONS(604),
    [anon_sym_unmono] = ACTIONS(604),
    [anon_sym_my_hdr] = ACTIONS(604),
    [anon_sym_unmy_hdr] = ACTIONS(604),
    [anon_sym_open_DASHhook] = ACTIONS(604),
    [anon_sym_close_DASHhook] = ACTIONS(604),
    [anon_sym_append_DASHhook] = ACTIONS(604),
    [anon_sym_push] = ACTIONS(604),
    [anon_sym_reply_DASHhook] = ACTIONS(604),
    [anon_sym_send_DASHhook] = ACTIONS(604),
    [anon_sym_send2_DASHhook] = ACTIONS(604),
    [anon_sym_spam] = ACTIONS(604),
    [anon_sym_nospam] = ACTIONS(604),
    [anon_sym_subjectrx] = ACTIONS(604),
    [anon_sym_unsubjectrx] = ACTIONS(604),
    [anon_sym_subscribe_DASHto] = ACTIONS(604),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(604),
    [anon_sym_timeout_DASHhook] = ACTIONS(604),
    [anon_sym_startup_DASHhook] = ACTIONS(604),
    [anon_sym_shutdown_DASHhook] = ACTIONS(604),
    [anon_sym_unhook] = ACTIONS(604),
    [anon_sym_set] = ACTIONS(604),
    [anon_sym_unset] = ACTIONS(604),
    [anon_sym_reset] = ACTIONS(604),
    [anon_sym_toggle] = ACTIONS(604),
    [anon_sym_setenv] = ACTIONS(604),
    [anon_sym_unsetenv] = ACTIONS(604),
    [anon_sym_sidebar_pin] = ACTIONS(604),
    [anon_sym_sidebar_unpin] = ACTIONS(604),
    [anon_sym_score] = ACTIONS(604),
    [anon_sym_unscore] = ACTIONS(604),
    [anon_sym_source] = ACTIONS(604),
    [sym_comment] = ACTIONS(604),
    [sym__eol] = ACTIONS(604),
    [aux_sym__space_token1] = ACTIONS(604),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(606),
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
  [0] = 7,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
    STATE(176), 2,
      sym_pattern,
      sym_object,
    ACTIONS(630), 39,
      anon_sym_index,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_body,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_header,
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
  [62] = 4,
    ACTIONS(640), 1,
      anon_sym_compose,
    STATE(29), 1,
      sym_object,
    ACTIONS(630), 2,
      anon_sym_index,
      anon_sym_index_tag,
    ACTIONS(642), 37,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_body,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_header,
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
  [112] = 3,
    ACTIONS(646), 1,
      anon_sym_STAR,
    STATE(352), 1,
      sym_hook_type,
    ACTIONS(644), 18,
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
  [139] = 6,
    STATE(40), 1,
      sym__attributes,
    STATE(41), 1,
      sym_attribute,
    STATE(43), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(648), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(650), 11,
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
  [172] = 6,
    STATE(38), 1,
      sym__attributes,
    STATE(41), 1,
      sym_attribute,
    STATE(45), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(648), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(650), 11,
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
  [205] = 1,
    ACTIONS(652), 16,
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
  [224] = 4,
    ACTIONS(656), 1,
      anon_sym_STAR,
    STATE(194), 1,
      sym_map,
    STATE(210), 1,
      sym__maps,
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
  [249] = 4,
    ACTIONS(658), 1,
      anon_sym_STAR,
    STATE(194), 1,
      sym_map,
    STATE(207), 1,
      sym__maps,
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
  [274] = 1,
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
  [293] = 3,
    STATE(194), 1,
      sym_map,
    STATE(209), 1,
      sym__maps,
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
  [315] = 3,
    STATE(180), 1,
      sym__maps,
    STATE(194), 1,
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
  [337] = 2,
    STATE(276), 1,
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
  [356] = 3,
    STATE(39), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(650), 11,
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
  [376] = 3,
    STATE(405), 1,
      sym_background,
    STATE(423), 1,
      sym_color,
    ACTIONS(662), 11,
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
  [396] = 3,
    STATE(47), 1,
      sym_foreground,
    STATE(53), 1,
      sym_color,
    ACTIONS(650), 11,
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
  [416] = 3,
    ACTIONS(664), 1,
      anon_sym_,
    STATE(46), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(666), 11,
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
  [436] = 9,
    ACTIONS(668), 1,
      anon_sym_,
    ACTIONS(672), 1,
      sym_int,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(282), 1,
      sym_quadoption,
    STATE(390), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
    ACTIONS(670), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [468] = 3,
    STATE(171), 1,
      sym_background,
    STATE(206), 1,
      sym_color,
    ACTIONS(682), 11,
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
  [488] = 3,
    ACTIONS(684), 1,
      anon_sym_,
    STATE(44), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(687), 11,
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
  [508] = 3,
    STATE(397), 1,
      sym_background,
    STATE(423), 1,
      sym_color,
    ACTIONS(662), 11,
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
  [528] = 3,
    ACTIONS(664), 1,
      anon_sym_,
    STATE(44), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(689), 11,
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
  [548] = 3,
    STATE(145), 1,
      sym_background,
    STATE(206), 1,
      sym_color,
    ACTIONS(682), 11,
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
  [568] = 9,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(691), 1,
      anon_sym_,
    ACTIONS(693), 1,
      sym_int,
    STATE(402), 1,
      sym_quadoption,
    STATE(403), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
    ACTIONS(670), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [600] = 2,
    ACTIONS(695), 1,
      anon_sym_,
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
  [617] = 2,
    ACTIONS(699), 1,
      anon_sym_,
    ACTIONS(687), 11,
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
  [634] = 8,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(701), 1,
      sym_int,
    STATE(407), 1,
      sym_quadoption,
    STATE(408), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
    ACTIONS(670), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [663] = 8,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym_int,
    STATE(402), 1,
      sym_quadoption,
    STATE(404), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
    ACTIONS(670), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [692] = 1,
    ACTIONS(703), 11,
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
  [706] = 1,
    ACTIONS(705), 11,
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
  [720] = 8,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_BQUOTE,
    STATE(439), 1,
      sym_disposition,
    STATE(449), 1,
      sym__string,
    ACTIONS(707), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(717), 2,
      anon_sym_LF,
      sym__word,
  [747] = 8,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_BQUOTE,
    ACTIONS(719), 1,
      anon_sym_STAR,
    STATE(440), 1,
      sym_disposition,
    STATE(449), 1,
      sym__string,
    ACTIONS(717), 2,
      anon_sym_LF,
      sym__word,
    ACTIONS(721), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [774] = 10,
    ACTIONS(723), 1,
      anon_sym_DASHgroup,
    ACTIONS(725), 1,
      anon_sym_STAR,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    STATE(76), 1,
      sym__group,
    STATE(234), 1,
      sym__regex,
    STATE(425), 1,
      sym__regexes,
  [805] = 8,
    ACTIONS(737), 1,
      anon_sym_STAR,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(204), 1,
      sym_mailbox,
    STATE(257), 1,
      sym__string,
    STATE(422), 1,
      sym__mailboxes,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [831] = 8,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    ACTIONS(747), 1,
      anon_sym_STAR,
    STATE(183), 1,
      sym_header_field,
    STATE(258), 1,
      sym__string,
    STATE(421), 1,
      sym__header_fields,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [857] = 8,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    ACTIONS(749), 1,
      anon_sym_STAR,
    STATE(183), 1,
      sym_header_field,
    STATE(258), 1,
      sym__string,
    STATE(419), 1,
      sym__header_fields,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [883] = 8,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    ACTIONS(751), 1,
      anon_sym_STAR,
    STATE(204), 1,
      sym_mailbox,
    STATE(257), 1,
      sym__string,
    STATE(318), 1,
      sym__mailboxes,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [909] = 4,
    ACTIONS(753), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    ACTIONS(755), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(757), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [927] = 9,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    ACTIONS(759), 1,
      anon_sym_DASHgroup,
    STATE(106), 1,
      sym__group,
    STATE(234), 1,
      sym__regex,
    STATE(316), 1,
      sym__regexes,
  [955] = 8,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    ACTIONS(761), 1,
      anon_sym_STAR,
    STATE(237), 1,
      sym_header,
    STATE(253), 1,
      sym__string,
    STATE(371), 1,
      sym__headers,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [981] = 4,
    ACTIONS(763), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    ACTIONS(766), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(769), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [999] = 8,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    ACTIONS(771), 1,
      anon_sym_STAR,
    STATE(234), 1,
      sym__regex,
    STATE(310), 1,
      sym__regexes,
  [1024] = 8,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    ACTIONS(773), 1,
      anon_sym_STAR,
    STATE(234), 1,
      sym__regex,
    STATE(313), 1,
      sym__regexes,
  [1049] = 7,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(204), 1,
      sym_mailbox,
    STATE(257), 1,
      sym__string,
    STATE(424), 1,
      sym__mailboxes,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1072] = 7,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(237), 1,
      sym_header,
    STATE(253), 1,
      sym__string,
    STATE(349), 1,
      sym__headers,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1095] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(236), 1,
      sym_address,
    STATE(243), 1,
      sym__string,
    STATE(299), 1,
      sym__addresses,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1118] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(236), 1,
      sym_address,
    STATE(243), 1,
      sym__string,
    STATE(348), 1,
      sym__addresses,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1141] = 7,
    ACTIONS(775), 1,
      anon_sym_DASHgroup,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_LT,
    STATE(142), 1,
      aux_sym_key_repeat1,
    STATE(147), 1,
      sym__group,
    STATE(347), 1,
      sym_key,
    ACTIONS(781), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [1164] = 7,
    ACTIONS(783), 1,
      anon_sym_BANG,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(158), 1,
      sym_pattern,
    STATE(186), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1187] = 1,
    ACTIONS(793), 8,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [1198] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(236), 1,
      sym_address,
    STATE(243), 1,
      sym__string,
    STATE(345), 1,
      sym__addresses,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1221] = 8,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    ACTIONS(795), 1,
      anon_sym_STAR,
    STATE(234), 1,
      sym__regex,
    STATE(415), 1,
      sym__regexes,
  [1246] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(797), 1,
      anon_sym_STAR,
    STATE(388), 1,
      sym_header_field,
    STATE(414), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1269] = 4,
    ACTIONS(799), 1,
      anon_sym_,
    STATE(220), 1,
      aux_sym__options2_repeat1,
    ACTIONS(801), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
    ACTIONS(803), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1286] = 7,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(204), 1,
      sym_mailbox,
    STATE(257), 1,
      sym__string,
    STATE(320), 1,
      sym__mailboxes,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1309] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      anon_sym_STAR,
    STATE(325), 1,
      sym_pattern,
    STATE(351), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1332] = 7,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    ACTIONS(807), 1,
      anon_sym_STAR,
    STATE(228), 1,
      sym__string,
    STATE(426), 1,
      sym__strings,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1355] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(809), 1,
      anon_sym_STAR,
    STATE(314), 1,
      sym_pattern,
    STATE(351), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1378] = 7,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(287), 1,
      sym_pattern,
    STATE(351), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1401] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(136), 1,
      sym_pattern,
    STATE(186), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1421] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(7), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [1441] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(253), 1,
      sym__string,
    STATE(273), 1,
      sym_header,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1461] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(138), 1,
      sym_pattern,
    STATE(186), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1481] = 6,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      anon_sym_BQUOTE,
    STATE(73), 1,
      sym_name,
    STATE(148), 1,
      sym__string,
    ACTIONS(819), 2,
      anon_sym_LF,
      sym__word,
  [1501] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(172), 1,
      sym_pattern,
    STATE(186), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1521] = 7,
    ACTIONS(821), 1,
      anon_sym_DASHnoregex,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_BQUOTE,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(831), 1,
      sym__word,
    STATE(6), 1,
      sym__regex,
  [1543] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(257), 1,
      sym__string,
    STATE(271), 1,
      sym_mailbox,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1563] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(258), 1,
      sym__string,
    STATE(270), 1,
      sym_header_field,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [1583] = 6,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      anon_sym_BQUOTE,
    STATE(83), 1,
      sym_pattern,
    STATE(161), 1,
      sym__string,
    ACTIONS(839), 2,
      anon_sym_LF,
      sym__word,
  [1603] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(130), 1,
      sym_charset,
    STATE(193), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1623] = 6,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(845), 1,
      anon_sym_BQUOTE,
    STATE(293), 1,
      sym_group_name,
    STATE(303), 1,
      sym__string,
    ACTIONS(847), 2,
      anon_sym_LF,
      sym__word,
  [1643] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym__string,
    STATE(462), 1,
      sym_pattern,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [1663] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(383), 1,
      sym_mailbox,
    STATE(413), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1683] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(137), 1,
      sym_pattern,
    STATE(186), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1703] = 6,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      anon_sym_BQUOTE,
    STATE(153), 1,
      sym__string,
    STATE(154), 1,
      sym_group_name,
    ACTIONS(839), 2,
      anon_sym_LF,
      sym__word,
  [1723] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(243), 1,
      sym__string,
    STATE(266), 1,
      sym_address,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1743] = 7,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    STATE(234), 1,
      sym__regex,
    STATE(308), 1,
      sym__regexes,
  [1765] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(361), 1,
      sym_uri,
    STATE(362), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1785] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(362), 1,
      sym__string,
    STATE(363), 1,
      sym_uri,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1805] = 7,
    ACTIONS(849), 1,
      anon_sym_STAR,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      anon_sym_LF,
    ACTIONS(859), 1,
      sym__word,
    STATE(364), 1,
      sym__regex,
  [1827] = 7,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(859), 1,
      sym__word,
    ACTIONS(861), 1,
      anon_sym_STAR,
    ACTIONS(863), 1,
      anon_sym_LF,
    STATE(366), 1,
      sym__regex,
  [1849] = 7,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    STATE(234), 1,
      sym__regex,
    STATE(420), 1,
      sym__regexes,
  [1871] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(129), 1,
      sym_alias,
    STATE(221), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1891] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [1911] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(9), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [1931] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(4), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [1951] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(132), 1,
      sym_description,
    STATE(211), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [1971] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(335), 1,
      sym_replacement,
    STATE(336), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [1991] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(333), 1,
      sym_format,
    STATE(334), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2011] = 6,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      anon_sym_BQUOTE,
    STATE(80), 1,
      sym_pattern,
    STATE(161), 1,
      sym__string,
    ACTIONS(839), 2,
      anon_sym_LF,
      sym__word,
  [2031] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(375), 1,
      sym_sequence,
    STATE(376), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2051] = 6,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_BQUOTE,
    STATE(431), 1,
      sym_disposition,
    STATE(449), 1,
      sym__string,
    ACTIONS(717), 2,
      anon_sym_LF,
      sym__word,
  [2071] = 6,
    ACTIONS(865), 1,
      anon_sym_SQUOTE,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(869), 1,
      anon_sym_BQUOTE,
    STATE(259), 1,
      sym__string,
    STATE(260), 1,
      sym_group_name,
    ACTIONS(871), 2,
      anon_sym_LF,
      sym__word,
  [2091] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(327), 1,
      sym__string,
    STATE(329), 1,
      sym_shell_command,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2111] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(327), 1,
      sym__string,
    STATE(328), 1,
      sym_shell_command,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2131] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(326), 1,
      sym_shell_command,
    STATE(327), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2151] = 6,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_BQUOTE,
    STATE(436), 1,
      sym_disposition,
    STATE(449), 1,
      sym__string,
    ACTIONS(717), 2,
      anon_sym_LF,
      sym__word,
  [2171] = 7,
    ACTIONS(873), 1,
      anon_sym_DASHnoregex,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(881), 1,
      anon_sym_LF,
    ACTIONS(883), 1,
      sym__word,
    STATE(124), 1,
      sym__regex,
  [2193] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(224), 1,
      sym_group_name,
    STATE(230), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [2213] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(322), 1,
      sym_mailbox,
    STATE(413), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2233] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(226), 1,
      sym_mailbox,
    STATE(257), 1,
      sym__string,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [2253] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(410), 1,
      sym__string,
    STATE(412), 1,
      sym_directory,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2273] = 7,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    STATE(234), 1,
      sym__regex,
    STATE(311), 1,
      sym__regexes,
  [2295] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(417), 1,
      sym__string,
    STATE(418), 1,
      sym_message,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2315] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(381), 1,
      sym_charset,
    STATE(411), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2335] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(377), 1,
      sym_charset,
    STATE(411), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2355] = 6,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_BQUOTE,
    STATE(125), 1,
      sym_description,
    STATE(211), 1,
      sym__string,
    ACTIONS(791), 2,
      anon_sym_LF,
      sym__word,
  [2375] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(257), 1,
      sym__string,
    STATE(261), 1,
      sym_mailbox,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [2395] = 6,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(228), 1,
      sym__string,
    STATE(382), 1,
      sym__strings,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [2415] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(288), 1,
      sym_keyid,
    STATE(289), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2435] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(319), 1,
      sym__string,
    STATE(324), 1,
      sym_group_name,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [2455] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(294), 1,
      sym_mailbox,
    STATE(413), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2475] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(295), 1,
      sym_mailbox,
    STATE(413), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2495] = 6,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(296), 1,
      sym_mailbox,
    STATE(413), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2515] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      sym_symbol,
    STATE(25), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [2535] = 7,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__word,
    STATE(234), 1,
      sym__regex,
    STATE(298), 1,
      sym__regexes,
  [2557] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(15), 1,
      sym_symbol,
    STATE(25), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [2577] = 4,
    ACTIONS(779), 1,
      anon_sym_LT,
    STATE(143), 1,
      aux_sym_key_repeat1,
    ACTIONS(885), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(757), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2593] = 4,
    ACTIONS(887), 1,
      anon_sym_LT,
    STATE(143), 1,
      aux_sym_key_repeat1,
    ACTIONS(890), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(769), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2609] = 6,
    ACTIONS(753), 1,
      anon_sym_LT,
    ACTIONS(893), 1,
      anon_sym_DASHgroup,
    STATE(62), 1,
      aux_sym_key_repeat1,
    STATE(75), 1,
      sym_key,
    STATE(241), 1,
      sym__group,
    ACTIONS(895), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2629] = 6,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(859), 1,
      sym__word,
    ACTIONS(897), 1,
      anon_sym_LF,
    STATE(406), 1,
      sym__regex,
  [2648] = 5,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(391), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2665] = 5,
    ACTIONS(779), 1,
      anon_sym_LT,
    ACTIONS(899), 1,
      anon_sym_STAR,
    STATE(142), 1,
      aux_sym_key_repeat1,
    STATE(368), 1,
      sym_key,
    ACTIONS(781), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2682] = 1,
    ACTIONS(901), 6,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2691] = 6,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_BQUOTE,
    ACTIONS(831), 1,
      sym__word,
    ACTIONS(903), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__regex,
  [2710] = 1,
    ACTIONS(598), 6,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2719] = 1,
    ACTIONS(594), 6,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2728] = 1,
    ACTIONS(598), 6,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2737] = 1,
    ACTIONS(905), 6,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2746] = 1,
    ACTIONS(907), 6,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2755] = 6,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      anon_sym_BQUOTE,
    ACTIONS(735), 1,
      sym__word,
    ACTIONS(909), 1,
      anon_sym_LF,
    STATE(275), 1,
      sym__regex,
  [2774] = 1,
    ACTIONS(594), 6,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2783] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(911), 1,
      anon_sym_LF,
    STATE(134), 1,
      sym__regex,
  [2802] = 5,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(367), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2819] = 5,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(272), 1,
      sym__string,
    ACTIONS(745), 2,
      anon_sym_LF,
      sym__word,
  [2836] = 2,
    STATE(30), 1,
      sym_composeobject,
    ACTIONS(913), 5,
      anon_sym_header,
      anon_sym_security_encrypt,
      anon_sym_security_sign,
      anon_sym_security_both,
      anon_sym_security_none,
  [2847] = 1,
    ACTIONS(602), 6,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [2856] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__space_token1,
    ACTIONS(915), 1,
      sym__eol,
    STATE(19), 1,
      sym__end,
    STATE(281), 1,
      aux_sym__space_repeat1,
    STATE(435), 1,
      sym__space,
  [2875] = 5,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(307), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [2892] = 6,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(859), 1,
      sym__word,
    ACTIONS(917), 1,
      anon_sym_LF,
    STATE(384), 1,
      sym__regex,
  [2911] = 3,
    ACTIONS(923), 1,
      sym_option,
    ACTIONS(919), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(921), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [2924] = 5,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    STATE(5), 1,
      sym__string,
    ACTIONS(638), 2,
      anon_sym_LF,
      sym__word,
  [2941] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(925), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym__regex,
  [2960] = 2,
    STATE(50), 1,
      sym_attribute,
    ACTIONS(648), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [2971] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(927), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym__regex,
  [2990] = 5,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(380), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [3007] = 6,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(859), 1,
      sym__word,
    ACTIONS(929), 1,
      anon_sym_LF,
    STATE(400), 1,
      sym__regex,
  [3026] = 5,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_BQUOTE,
    STATE(401), 1,
      sym__string,
    ACTIONS(680), 2,
      anon_sym_LF,
      sym__word,
  [3043] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(931), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym__regex,
  [3062] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(933), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym__regex,
  [3081] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(935), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym__regex,
  [3100] = 2,
    STATE(164), 1,
      sym_attribute,
    ACTIONS(937), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [3111] = 6,
    ACTIONS(939), 1,
      anon_sym_DASHgroup,
    ACTIONS(941), 1,
      anon_sym_STAR,
    ACTIONS(943), 1,
      anon_sym_DASHrx,
    ACTIONS(945), 1,
      anon_sym_DASHaddr,
    STATE(252), 1,
      sym__group,
    STATE(346), 1,
      sym__rx_addr,
  [3130] = 1,
    ACTIONS(793), 6,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3139] = 6,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    ACTIONS(883), 1,
      sym__word,
    ACTIONS(947), 1,
      anon_sym_LF,
    STATE(97), 1,
      sym__regex,
  [3158] = 4,
    ACTIONS(753), 1,
      anon_sym_LT,
    STATE(62), 1,
      aux_sym_key_repeat1,
    STATE(115), 1,
      sym_key,
    ACTIONS(895), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3172] = 4,
    ACTIONS(757), 1,
      sym_function,
    ACTIONS(949), 1,
      anon_sym_LT,
    STATE(233), 1,
      aux_sym_key_repeat1,
    ACTIONS(951), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3186] = 1,
    ACTIONS(616), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3194] = 3,
    ACTIONS(953), 1,
      anon_sym_,
    STATE(225), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(955), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3206] = 1,
    ACTIONS(957), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3214] = 1,
    ACTIONS(697), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3222] = 1,
    ACTIONS(602), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3230] = 1,
    ACTIONS(620), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3238] = 3,
    ACTIONS(959), 1,
      anon_sym_,
    STATE(188), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(962), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3250] = 3,
    ACTIONS(964), 1,
      anon_sym_,
    STATE(189), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(967), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3262] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(972), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3274] = 3,
    ACTIONS(974), 1,
      anon_sym_,
    STATE(191), 1,
      aux_sym__options_repeat1,
    ACTIONS(977), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3286] = 3,
    ACTIONS(979), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym__options2_repeat1,
    ACTIONS(982), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3298] = 1,
    ACTIONS(984), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3306] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__maps_repeat1,
    ACTIONS(988), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3318] = 3,
    ACTIONS(990), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym__options2_repeat1,
    ACTIONS(992), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3330] = 3,
    ACTIONS(994), 1,
      anon_sym_,
    STATE(196), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(997), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3342] = 3,
    ACTIONS(999), 1,
      anon_sym_,
    STATE(188), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1001), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3354] = 1,
    ACTIONS(624), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3362] = 3,
    ACTIONS(1003), 1,
      anon_sym_,
    STATE(199), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1006), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3374] = 3,
    ACTIONS(1008), 1,
      anon_sym_,
    STATE(200), 1,
      aux_sym__strings_repeat1,
    ACTIONS(1011), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3386] = 3,
    ACTIONS(1013), 1,
      anon_sym_,
    STATE(201), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1016), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3398] = 3,
    ACTIONS(1018), 1,
      anon_sym_,
    STATE(202), 1,
      aux_sym__functions_repeat1,
    ACTIONS(1021), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3410] = 1,
    ACTIONS(594), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3418] = 3,
    ACTIONS(1023), 1,
      anon_sym_,
    STATE(227), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1025), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3430] = 3,
    ACTIONS(1027), 1,
      anon_sym_,
    STATE(208), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1029), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3442] = 1,
    ACTIONS(1031), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3450] = 4,
    ACTIONS(779), 1,
      anon_sym_LT,
    STATE(142), 1,
      aux_sym_key_repeat1,
    STATE(315), 1,
      sym_key,
    ACTIONS(781), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3464] = 3,
    ACTIONS(1027), 1,
      anon_sym_,
    STATE(214), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1033), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3476] = 4,
    ACTIONS(949), 1,
      anon_sym_LT,
    STATE(181), 1,
      aux_sym_key_repeat1,
    STATE(493), 1,
      sym_key,
    ACTIONS(1035), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3490] = 4,
    ACTIONS(779), 1,
      anon_sym_LT,
    STATE(142), 1,
      aux_sym_key_repeat1,
    STATE(387), 1,
      sym_key,
    ACTIONS(781), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3504] = 1,
    ACTIONS(1037), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3512] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1042), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3524] = 3,
    ACTIONS(1044), 1,
      anon_sym_,
    STATE(189), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1046), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3536] = 3,
    ACTIONS(1048), 1,
      anon_sym_,
    STATE(214), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1051), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3548] = 3,
    ACTIONS(1053), 1,
      anon_sym_,
    STATE(215), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1056), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3560] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1060), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3572] = 2,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    ACTIONS(1062), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3582] = 3,
    ACTIONS(1066), 1,
      anon_sym_,
    STATE(191), 1,
      aux_sym__options_repeat1,
    ACTIONS(1068), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3594] = 3,
    ACTIONS(1066), 1,
      anon_sym_,
    STATE(218), 1,
      aux_sym__options_repeat1,
    ACTIONS(1070), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3606] = 3,
    ACTIONS(990), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym__options2_repeat1,
    ACTIONS(1072), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3618] = 1,
    ACTIONS(1074), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3626] = 3,
    ACTIONS(990), 1,
      anon_sym_,
    STATE(195), 1,
      aux_sym__options2_repeat1,
    ACTIONS(1072), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3638] = 5,
    ACTIONS(939), 1,
      anon_sym_DASHgroup,
    ACTIONS(943), 1,
      anon_sym_DASHrx,
    ACTIONS(945), 1,
      anon_sym_DASHaddr,
    STATE(317), 1,
      sym__rx_addr,
    STATE(340), 1,
      sym__group,
  [3654] = 1,
    ACTIONS(907), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3662] = 3,
    ACTIONS(953), 1,
      anon_sym_,
    STATE(196), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(1076), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3674] = 3,
    ACTIONS(999), 1,
      anon_sym_,
    STATE(197), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1078), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3686] = 3,
    ACTIONS(1023), 1,
      anon_sym_,
    STATE(199), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1080), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3698] = 3,
    ACTIONS(1082), 1,
      anon_sym_,
    STATE(229), 1,
      aux_sym__strings_repeat1,
    ACTIONS(1084), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3710] = 3,
    ACTIONS(1082), 1,
      anon_sym_,
    STATE(200), 1,
      aux_sym__strings_repeat1,
    ACTIONS(1086), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3722] = 1,
    ACTIONS(905), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3730] = 3,
    ACTIONS(1088), 1,
      anon_sym_,
    STATE(201), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1090), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3742] = 3,
    ACTIONS(1092), 1,
      anon_sym_,
    STATE(202), 1,
      aux_sym__functions_repeat1,
    ACTIONS(1094), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3754] = 4,
    ACTIONS(769), 1,
      sym_function,
    ACTIONS(1096), 1,
      anon_sym_LT,
    STATE(233), 1,
      aux_sym_key_repeat1,
    ACTIONS(1099), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3768] = 3,
    ACTIONS(1102), 1,
      anon_sym_,
    STATE(238), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1104), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3780] = 1,
    ACTIONS(598), 5,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      sym__word,
  [3788] = 3,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1106), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3800] = 3,
    ACTIONS(1088), 1,
      anon_sym_,
    STATE(231), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1108), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3812] = 3,
    ACTIONS(1102), 1,
      anon_sym_,
    STATE(215), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1110), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3824] = 3,
    ACTIONS(1092), 1,
      anon_sym_,
    STATE(232), 1,
      aux_sym__functions_repeat1,
    ACTIONS(1112), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3836] = 3,
    ACTIONS(1044), 1,
      anon_sym_,
    STATE(213), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1114), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3848] = 4,
    ACTIONS(753), 1,
      anon_sym_LT,
    STATE(62), 1,
      aux_sym_key_repeat1,
    STATE(71), 1,
      sym_key,
    ACTIONS(895), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3862] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1116), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3874] = 1,
    ACTIONS(1118), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3881] = 1,
    ACTIONS(624), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3888] = 4,
    ACTIONS(1120), 1,
      anon_sym_STAR,
    ACTIONS(1122), 1,
      sym_mime_type,
    STATE(205), 1,
      sym_mime,
    STATE(374), 1,
      sym__mimes,
  [3901] = 1,
    ACTIONS(598), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3908] = 1,
    ACTIONS(594), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3915] = 1,
    ACTIONS(598), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3922] = 1,
    ACTIONS(594), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3929] = 1,
    ACTIONS(598), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3936] = 1,
    ACTIONS(594), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3943] = 4,
    ACTIONS(943), 1,
      anon_sym_DASHrx,
    ACTIONS(945), 1,
      anon_sym_DASHaddr,
    ACTIONS(1124), 1,
      anon_sym_STAR,
    STATE(302), 1,
      sym__rx_addr,
  [3956] = 1,
    ACTIONS(1126), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3963] = 1,
    ACTIONS(620), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3970] = 4,
    ACTIONS(1122), 1,
      sym_mime_type,
    ACTIONS(1128), 1,
      anon_sym_STAR,
    STATE(205), 1,
      sym_mime,
    STATE(396), 1,
      sym__mimes,
  [3983] = 1,
    ACTIONS(793), 4,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_function,
  [3990] = 1,
    ACTIONS(1130), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3997] = 1,
    ACTIONS(1132), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4004] = 1,
    ACTIONS(905), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4011] = 1,
    ACTIONS(907), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4018] = 1,
    ACTIONS(1134), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4025] = 1,
    ACTIONS(1136), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4032] = 1,
    ACTIONS(1138), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4039] = 4,
    ACTIONS(1122), 1,
      sym_mime_type,
    ACTIONS(1140), 1,
      anon_sym_STAR,
    STATE(205), 1,
      sym_mime,
    STATE(394), 1,
      sym__mimes,
  [4052] = 1,
    ACTIONS(967), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4059] = 1,
    ACTIONS(972), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4066] = 1,
    ACTIONS(977), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4073] = 3,
    ACTIONS(1144), 1,
      aux_sym__space_token1,
    STATE(268), 1,
      aux_sym__space_repeat1,
    ACTIONS(1142), 2,
      sym_comment,
      sym__eol,
  [4084] = 1,
    ACTIONS(982), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4091] = 1,
    ACTIONS(997), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4098] = 1,
    ACTIONS(1006), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4105] = 1,
    ACTIONS(1147), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4112] = 1,
    ACTIONS(1016), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4119] = 1,
    ACTIONS(1021), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4126] = 1,
    ACTIONS(1149), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4133] = 1,
    ACTIONS(1042), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4140] = 3,
    ACTIONS(1153), 1,
      sym_option,
    STATE(350), 1,
      sym__options2,
    ACTIONS(1151), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [4151] = 1,
    ACTIONS(1155), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4158] = 1,
    ACTIONS(1051), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4165] = 1,
    ACTIONS(616), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4172] = 3,
    ACTIONS(1159), 1,
      aux_sym__space_token1,
    STATE(268), 1,
      aux_sym__space_repeat1,
    ACTIONS(1157), 2,
      sym_comment,
      sym__eol,
  [4183] = 1,
    ACTIONS(1161), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4189] = 1,
    ACTIONS(1163), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4195] = 3,
    ACTIONS(1122), 1,
      sym_mime_type,
    STATE(205), 1,
      sym_mime,
    STATE(372), 1,
      sym__mimes,
  [4205] = 3,
    ACTIONS(1122), 1,
      sym_mime_type,
    STATE(205), 1,
      sym_mime,
    STATE(392), 1,
      sym__mimes,
  [4215] = 1,
    ACTIONS(1165), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4221] = 1,
    ACTIONS(1167), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4227] = 1,
    ACTIONS(1169), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4233] = 1,
    ACTIONS(1171), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4239] = 1,
    ACTIONS(598), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4245] = 1,
    ACTIONS(1173), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4251] = 1,
    ACTIONS(594), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4257] = 1,
    ACTIONS(907), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4263] = 1,
    ACTIONS(1175), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4269] = 1,
    ACTIONS(1177), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4275] = 1,
    ACTIONS(1179), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4281] = 1,
    ACTIONS(1181), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4287] = 1,
    ACTIONS(1183), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4293] = 1,
    ACTIONS(1185), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4299] = 1,
    ACTIONS(1187), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4305] = 1,
    ACTIONS(1189), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4311] = 1,
    ACTIONS(1191), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4317] = 1,
    ACTIONS(905), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4323] = 1,
    ACTIONS(1193), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4329] = 1,
    ACTIONS(1195), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4335] = 1,
    ACTIONS(1197), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4341] = 1,
    ACTIONS(1199), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4347] = 1,
    ACTIONS(1201), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4353] = 1,
    ACTIONS(1203), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4359] = 1,
    ACTIONS(1205), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4365] = 1,
    ACTIONS(1207), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4371] = 1,
    ACTIONS(1209), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4377] = 1,
    ACTIONS(1211), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4383] = 1,
    ACTIONS(1213), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4389] = 1,
    ACTIONS(1215), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4395] = 1,
    ACTIONS(1217), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4401] = 1,
    ACTIONS(1219), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4407] = 1,
    ACTIONS(1221), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4413] = 1,
    ACTIONS(1223), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [4419] = 1,
    ACTIONS(1225), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4425] = 1,
    ACTIONS(1227), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4431] = 1,
    ACTIONS(1229), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4437] = 1,
    ACTIONS(1231), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4443] = 1,
    ACTIONS(1233), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [4449] = 1,
    ACTIONS(1235), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4455] = 1,
    ACTIONS(1237), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4461] = 1,
    ACTIONS(1239), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4467] = 1,
    ACTIONS(1241), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4473] = 1,
    ACTIONS(1243), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4479] = 1,
    ACTIONS(1245), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4485] = 1,
    ACTIONS(1247), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4491] = 1,
    ACTIONS(1249), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4497] = 1,
    ACTIONS(1251), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4503] = 1,
    ACTIONS(1253), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4509] = 1,
    ACTIONS(1255), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4515] = 1,
    ACTIONS(1257), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4521] = 1,
    ACTIONS(1259), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4527] = 1,
    ACTIONS(1261), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4533] = 1,
    ACTIONS(624), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4539] = 3,
    ACTIONS(943), 1,
      anon_sym_DASHrx,
    ACTIONS(945), 1,
      anon_sym_DASHaddr,
    STATE(300), 1,
      sym__rx_addr,
  [4549] = 1,
    ACTIONS(616), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4555] = 1,
    ACTIONS(1263), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4561] = 1,
    ACTIONS(1265), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4567] = 1,
    ACTIONS(1267), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4573] = 1,
    ACTIONS(1269), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4579] = 1,
    ACTIONS(1271), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4585] = 1,
    ACTIONS(1273), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4591] = 1,
    ACTIONS(1275), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4597] = 1,
    ACTIONS(1277), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4603] = 1,
    ACTIONS(1279), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4609] = 1,
    ACTIONS(602), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4615] = 1,
    ACTIONS(1281), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4621] = 1,
    ACTIONS(1283), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4627] = 1,
    ACTIONS(620), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4633] = 1,
    ACTIONS(1285), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4639] = 1,
    ACTIONS(1287), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4645] = 1,
    ACTIONS(1289), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4651] = 1,
    ACTIONS(1291), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4657] = 1,
    ACTIONS(1293), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4663] = 1,
    ACTIONS(1295), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4669] = 1,
    ACTIONS(1297), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4675] = 1,
    ACTIONS(1299), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4681] = 1,
    ACTIONS(1301), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4687] = 1,
    ACTIONS(1303), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4693] = 1,
    ACTIONS(1305), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4699] = 1,
    ACTIONS(1307), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4705] = 1,
    ACTIONS(1309), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4711] = 1,
    ACTIONS(1311), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4717] = 1,
    ACTIONS(1313), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4723] = 1,
    ACTIONS(1315), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4729] = 1,
    ACTIONS(1317), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4735] = 1,
    ACTIONS(1319), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4741] = 1,
    ACTIONS(1321), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4747] = 1,
    ACTIONS(1323), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4753] = 1,
    ACTIONS(1325), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4759] = 1,
    ACTIONS(1327), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4765] = 1,
    ACTIONS(1329), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4771] = 1,
    ACTIONS(1331), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4777] = 1,
    ACTIONS(957), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4783] = 1,
    ACTIONS(1333), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4789] = 1,
    ACTIONS(1335), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4795] = 1,
    ACTIONS(1337), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4801] = 1,
    ACTIONS(1339), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4807] = 1,
    ACTIONS(1341), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4813] = 2,
    ACTIONS(923), 1,
      sym_option,
    ACTIONS(919), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [4821] = 1,
    ACTIONS(1343), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4827] = 1,
    ACTIONS(1345), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4833] = 1,
    ACTIONS(1347), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4839] = 1,
    ACTIONS(1349), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4845] = 1,
    ACTIONS(1351), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4851] = 1,
    ACTIONS(1353), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4857] = 1,
    ACTIONS(1355), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4863] = 1,
    ACTIONS(1357), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4869] = 1,
    ACTIONS(1359), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4875] = 1,
    ACTIONS(1361), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4881] = 1,
    ACTIONS(1363), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4887] = 1,
    ACTIONS(1365), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4893] = 1,
    ACTIONS(1367), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4899] = 3,
    ACTIONS(1122), 1,
      sym_mime_type,
    STATE(205), 1,
      sym_mime,
    STATE(395), 1,
      sym__mimes,
  [4909] = 1,
    ACTIONS(1369), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4915] = 1,
    ACTIONS(1371), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4921] = 1,
    ACTIONS(1373), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4927] = 1,
    ACTIONS(1375), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4933] = 1,
    ACTIONS(1375), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4939] = 1,
    ACTIONS(1377), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4945] = 1,
    ACTIONS(1379), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4951] = 1,
    ACTIONS(1381), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4957] = 1,
    ACTIONS(1383), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4963] = 1,
    ACTIONS(1385), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4969] = 1,
    ACTIONS(1387), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4975] = 1,
    ACTIONS(984), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4981] = 1,
    ACTIONS(1389), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4987] = 1,
    ACTIONS(1130), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4993] = 1,
    ACTIONS(1132), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4999] = 1,
    ACTIONS(1391), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5005] = 1,
    ACTIONS(1393), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5011] = 1,
    ACTIONS(1395), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5017] = 1,
    ACTIONS(1397), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5023] = 1,
    ACTIONS(1399), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5029] = 1,
    ACTIONS(1401), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5035] = 1,
    ACTIONS(1403), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5041] = 1,
    ACTIONS(1405), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5047] = 1,
    ACTIONS(1031), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5053] = 1,
    ACTIONS(1407), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5059] = 1,
    ACTIONS(1409), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5065] = 1,
    ACTIONS(1411), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5071] = 2,
    ACTIONS(1413), 1,
      sym_option,
    STATE(291), 1,
      sym__options,
  [5078] = 2,
    ACTIONS(1415), 1,
      anon_sym_QMARK,
    ACTIONS(1417), 1,
      sym_option,
  [5085] = 2,
    ACTIONS(1419), 1,
      anon_sym_DASHgroup,
    STATE(127), 1,
      sym__group,
  [5092] = 2,
    ACTIONS(1419), 1,
      anon_sym_DASHgroup,
    STATE(101), 1,
      sym__group,
  [5099] = 2,
    ACTIONS(1421), 1,
      sym_mime_type,
    STATE(353), 1,
      sym__mime_types,
  [5106] = 2,
    ACTIONS(1122), 1,
      sym_mime_type,
    STATE(279), 1,
      sym_mime,
  [5113] = 2,
    ACTIONS(1423), 1,
      anon_sym_DASHgroup,
    STATE(66), 1,
      sym__group,
  [5120] = 2,
    ACTIONS(1423), 1,
      anon_sym_DASHgroup,
    STATE(67), 1,
      sym__group,
  [5127] = 2,
    ACTIONS(1425), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym__eol,
  [5134] = 2,
    ACTIONS(1421), 1,
      sym_mime_type,
    STATE(356), 1,
      sym__mime_types,
  [5141] = 2,
    ACTIONS(1413), 1,
      sym_option,
    STATE(342), 1,
      sym__options,
  [5148] = 2,
    ACTIONS(1413), 1,
      sym_option,
    STATE(338), 1,
      sym__options,
  [5155] = 2,
    ACTIONS(1421), 1,
      sym_mime_type,
    STATE(398), 1,
      sym__mime_types,
  [5162] = 2,
    ACTIONS(1421), 1,
      sym_mime_type,
    STATE(393), 1,
      sym__mime_types,
  [5169] = 2,
    ACTIONS(1429), 1,
      sym_function,
    STATE(373), 1,
      sym__functions,
  [5176] = 1,
    ACTIONS(1431), 1,
      anon_sym_DQUOTE,
  [5180] = 1,
    ACTIONS(1433), 1,
      anon_sym_SQUOTE,
  [5184] = 1,
    ACTIONS(596), 1,
      sym_mime_type,
  [5188] = 1,
    ACTIONS(592), 1,
      sym_mime_type,
  [5192] = 1,
    ACTIONS(1435), 1,
      anon_sym_BQUOTE,
  [5196] = 1,
    ACTIONS(1437), 1,
      sym_option,
  [5200] = 1,
    ACTIONS(1439), 1,
      aux_sym_key_token1,
  [5204] = 1,
    ACTIONS(1441), 1,
      sym_mime_type,
  [5208] = 1,
    ACTIONS(1443), 1,
      anon_sym_DQUOTE,
  [5212] = 1,
    ACTIONS(1445), 1,
      aux_sym__string_token2,
  [5216] = 1,
    ACTIONS(1443), 1,
      anon_sym_SQUOTE,
  [5220] = 1,
    ACTIONS(1447), 1,
      aux_sym__string_token1,
  [5224] = 1,
    ACTIONS(1449), 1,
      anon_sym_SQUOTE,
  [5228] = 1,
    ACTIONS(1451), 1,
      sym_mime_type,
  [5232] = 1,
    ACTIONS(1453), 1,
      sym_option,
  [5236] = 1,
    ACTIONS(1455), 1,
      sym_option,
  [5240] = 1,
    ACTIONS(1457), 1,
      sym_option,
  [5244] = 1,
    ACTIONS(1459), 1,
      sym_option,
  [5248] = 1,
    ACTIONS(1459), 1,
      aux_sym_setenv_directive_token1,
  [5252] = 1,
    ACTIONS(1427), 1,
      sym__eol,
  [5256] = 1,
    ACTIONS(1461), 1,
      sym_int,
  [5260] = 1,
    ACTIONS(1463), 1,
      anon_sym_GT,
  [5264] = 1,
    ACTIONS(1465), 1,
      ts_builtin_sym_end,
  [5268] = 1,
    ACTIONS(1467), 1,
      aux_sym__string_token3,
  [5272] = 1,
    ACTIONS(1469), 1,
      sym__eol,
  [5276] = 1,
    ACTIONS(1471), 1,
      sym_function,
  [5280] = 1,
    ACTIONS(1473), 1,
      aux_sym__string_token1,
  [5284] = 1,
    ACTIONS(1449), 1,
      anon_sym_BQUOTE,
  [5288] = 1,
    ACTIONS(1475), 1,
      aux_sym__string_token2,
  [5292] = 1,
    ACTIONS(1477), 1,
      anon_sym_SQUOTE,
  [5296] = 1,
    ACTIONS(1477), 1,
      anon_sym_DQUOTE,
  [5300] = 1,
    ACTIONS(1477), 1,
      anon_sym_BQUOTE,
  [5304] = 1,
    ACTIONS(1479), 1,
      anon_sym_GT,
  [5308] = 1,
    ACTIONS(1481), 1,
      anon_sym_SQUOTE,
  [5312] = 1,
    ACTIONS(1481), 1,
      anon_sym_DQUOTE,
  [5316] = 1,
    ACTIONS(1483), 1,
      anon_sym_BQUOTE,
  [5320] = 1,
    ACTIONS(1449), 1,
      anon_sym_DQUOTE,
  [5324] = 1,
    ACTIONS(1485), 1,
      anon_sym_SQUOTE,
  [5328] = 1,
    ACTIONS(1485), 1,
      anon_sym_DQUOTE,
  [5332] = 1,
    ACTIONS(1485), 1,
      anon_sym_BQUOTE,
  [5336] = 1,
    ACTIONS(1487), 1,
      anon_sym_GT,
  [5340] = 1,
    ACTIONS(1431), 1,
      anon_sym_SQUOTE,
  [5344] = 1,
    ACTIONS(1489), 1,
      sym_mime_type,
  [5348] = 1,
    ACTIONS(1491), 1,
      anon_sym_BQUOTE,
  [5352] = 1,
    ACTIONS(1493), 1,
      aux_sym__string_token3,
  [5356] = 1,
    ACTIONS(1495), 1,
      anon_sym_SQUOTE,
  [5360] = 1,
    ACTIONS(1495), 1,
      anon_sym_DQUOTE,
  [5364] = 1,
    ACTIONS(1495), 1,
      anon_sym_BQUOTE,
  [5368] = 1,
    ACTIONS(1497), 1,
      anon_sym_SQUOTE,
  [5372] = 1,
    ACTIONS(1497), 1,
      anon_sym_DQUOTE,
  [5376] = 1,
    ACTIONS(1499), 1,
      anon_sym_BQUOTE,
  [5380] = 1,
    ACTIONS(1501), 1,
      sym_function,
  [5384] = 1,
    ACTIONS(1433), 1,
      anon_sym_DQUOTE,
  [5388] = 1,
    ACTIONS(1433), 1,
      anon_sym_BQUOTE,
  [5392] = 1,
    ACTIONS(1503), 1,
      anon_sym_SQUOTE,
  [5396] = 1,
    ACTIONS(1503), 1,
      anon_sym_DQUOTE,
  [5400] = 1,
    ACTIONS(1503), 1,
      anon_sym_BQUOTE,
  [5404] = 1,
    ACTIONS(1505), 1,
      anon_sym_SQUOTE,
  [5408] = 1,
    ACTIONS(1505), 1,
      anon_sym_DQUOTE,
  [5412] = 1,
    ACTIONS(1505), 1,
      anon_sym_BQUOTE,
  [5416] = 1,
    ACTIONS(1507), 1,
      anon_sym_SQUOTE,
  [5420] = 1,
    ACTIONS(1507), 1,
      anon_sym_DQUOTE,
  [5424] = 1,
    ACTIONS(1507), 1,
      anon_sym_BQUOTE,
  [5428] = 1,
    ACTIONS(1509), 1,
      anon_sym_SQUOTE,
  [5432] = 1,
    ACTIONS(1509), 1,
      anon_sym_DQUOTE,
  [5436] = 1,
    ACTIONS(1509), 1,
      anon_sym_BQUOTE,
  [5440] = 1,
    ACTIONS(1511), 1,
      aux_sym__string_token1,
  [5444] = 1,
    ACTIONS(1513), 1,
      aux_sym__string_token2,
  [5448] = 1,
    ACTIONS(1515), 1,
      aux_sym__string_token3,
  [5452] = 1,
    ACTIONS(1517), 1,
      aux_sym_key_token1,
  [5456] = 1,
    ACTIONS(1519), 1,
      aux_sym__string_token1,
  [5460] = 1,
    ACTIONS(1521), 1,
      aux_sym__string_token2,
  [5464] = 1,
    ACTIONS(1523), 1,
      aux_sym__string_token3,
  [5468] = 1,
    ACTIONS(1525), 1,
      aux_sym__string_token1,
  [5472] = 1,
    ACTIONS(1527), 1,
      aux_sym__string_token2,
  [5476] = 1,
    ACTIONS(1529), 1,
      aux_sym__string_token3,
  [5480] = 1,
    ACTIONS(1531), 1,
      aux_sym_key_token1,
  [5484] = 1,
    ACTIONS(1533), 1,
      aux_sym__string_token1,
  [5488] = 1,
    ACTIONS(1535), 1,
      aux_sym__string_token2,
  [5492] = 1,
    ACTIONS(1537), 1,
      aux_sym__string_token3,
  [5496] = 1,
    ACTIONS(1539), 1,
      aux_sym__string_token1,
  [5500] = 1,
    ACTIONS(1541), 1,
      aux_sym__string_token2,
  [5504] = 1,
    ACTIONS(1543), 1,
      aux_sym__string_token3,
  [5508] = 1,
    ACTIONS(1545), 1,
      aux_sym__string_token1,
  [5512] = 1,
    ACTIONS(1547), 1,
      aux_sym__string_token2,
  [5516] = 1,
    ACTIONS(1549), 1,
      aux_sym__string_token3,
  [5520] = 1,
    ACTIONS(1551), 1,
      aux_sym__string_token1,
  [5524] = 1,
    ACTIONS(1553), 1,
      aux_sym__string_token2,
  [5528] = 1,
    ACTIONS(1555), 1,
      aux_sym__string_token3,
  [5532] = 1,
    ACTIONS(1557), 1,
      aux_sym__string_token1,
  [5536] = 1,
    ACTIONS(1559), 1,
      aux_sym__string_token2,
  [5540] = 1,
    ACTIONS(1561), 1,
      aux_sym__string_token3,
  [5544] = 1,
    ACTIONS(1563), 1,
      aux_sym__string_token1,
  [5548] = 1,
    ACTIONS(1565), 1,
      aux_sym__string_token2,
  [5552] = 1,
    ACTIONS(1567), 1,
      aux_sym__string_token3,
  [5556] = 1,
    ACTIONS(1569), 1,
      aux_sym__string_token1,
  [5560] = 1,
    ACTIONS(1571), 1,
      aux_sym__string_token2,
  [5564] = 1,
    ACTIONS(1573), 1,
      aux_sym__string_token3,
  [5568] = 1,
    ACTIONS(1575), 1,
      aux_sym__string_token1,
  [5572] = 1,
    ACTIONS(1577), 1,
      aux_sym__string_token2,
  [5576] = 1,
    ACTIONS(1579), 1,
      aux_sym__string_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 62,
  [SMALL_STATE(28)] = 112,
  [SMALL_STATE(29)] = 139,
  [SMALL_STATE(30)] = 172,
  [SMALL_STATE(31)] = 205,
  [SMALL_STATE(32)] = 224,
  [SMALL_STATE(33)] = 249,
  [SMALL_STATE(34)] = 274,
  [SMALL_STATE(35)] = 293,
  [SMALL_STATE(36)] = 315,
  [SMALL_STATE(37)] = 337,
  [SMALL_STATE(38)] = 356,
  [SMALL_STATE(39)] = 376,
  [SMALL_STATE(40)] = 396,
  [SMALL_STATE(41)] = 416,
  [SMALL_STATE(42)] = 436,
  [SMALL_STATE(43)] = 468,
  [SMALL_STATE(44)] = 488,
  [SMALL_STATE(45)] = 508,
  [SMALL_STATE(46)] = 528,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 568,
  [SMALL_STATE(49)] = 600,
  [SMALL_STATE(50)] = 617,
  [SMALL_STATE(51)] = 634,
  [SMALL_STATE(52)] = 663,
  [SMALL_STATE(53)] = 692,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 720,
  [SMALL_STATE(56)] = 747,
  [SMALL_STATE(57)] = 774,
  [SMALL_STATE(58)] = 805,
  [SMALL_STATE(59)] = 831,
  [SMALL_STATE(60)] = 857,
  [SMALL_STATE(61)] = 883,
  [SMALL_STATE(62)] = 909,
  [SMALL_STATE(63)] = 927,
  [SMALL_STATE(64)] = 955,
  [SMALL_STATE(65)] = 981,
  [SMALL_STATE(66)] = 999,
  [SMALL_STATE(67)] = 1024,
  [SMALL_STATE(68)] = 1049,
  [SMALL_STATE(69)] = 1072,
  [SMALL_STATE(70)] = 1095,
  [SMALL_STATE(71)] = 1118,
  [SMALL_STATE(72)] = 1141,
  [SMALL_STATE(73)] = 1164,
  [SMALL_STATE(74)] = 1187,
  [SMALL_STATE(75)] = 1198,
  [SMALL_STATE(76)] = 1221,
  [SMALL_STATE(77)] = 1246,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1286,
  [SMALL_STATE(80)] = 1309,
  [SMALL_STATE(81)] = 1332,
  [SMALL_STATE(82)] = 1355,
  [SMALL_STATE(83)] = 1378,
  [SMALL_STATE(84)] = 1401,
  [SMALL_STATE(85)] = 1421,
  [SMALL_STATE(86)] = 1441,
  [SMALL_STATE(87)] = 1461,
  [SMALL_STATE(88)] = 1481,
  [SMALL_STATE(89)] = 1501,
  [SMALL_STATE(90)] = 1521,
  [SMALL_STATE(91)] = 1543,
  [SMALL_STATE(92)] = 1563,
  [SMALL_STATE(93)] = 1583,
  [SMALL_STATE(94)] = 1603,
  [SMALL_STATE(95)] = 1623,
  [SMALL_STATE(96)] = 1643,
  [SMALL_STATE(97)] = 1663,
  [SMALL_STATE(98)] = 1683,
  [SMALL_STATE(99)] = 1703,
  [SMALL_STATE(100)] = 1723,
  [SMALL_STATE(101)] = 1743,
  [SMALL_STATE(102)] = 1765,
  [SMALL_STATE(103)] = 1785,
  [SMALL_STATE(104)] = 1805,
  [SMALL_STATE(105)] = 1827,
  [SMALL_STATE(106)] = 1849,
  [SMALL_STATE(107)] = 1871,
  [SMALL_STATE(108)] = 1891,
  [SMALL_STATE(109)] = 1911,
  [SMALL_STATE(110)] = 1931,
  [SMALL_STATE(111)] = 1951,
  [SMALL_STATE(112)] = 1971,
  [SMALL_STATE(113)] = 1991,
  [SMALL_STATE(114)] = 2011,
  [SMALL_STATE(115)] = 2031,
  [SMALL_STATE(116)] = 2051,
  [SMALL_STATE(117)] = 2071,
  [SMALL_STATE(118)] = 2091,
  [SMALL_STATE(119)] = 2111,
  [SMALL_STATE(120)] = 2131,
  [SMALL_STATE(121)] = 2151,
  [SMALL_STATE(122)] = 2171,
  [SMALL_STATE(123)] = 2193,
  [SMALL_STATE(124)] = 2213,
  [SMALL_STATE(125)] = 2233,
  [SMALL_STATE(126)] = 2253,
  [SMALL_STATE(127)] = 2273,
  [SMALL_STATE(128)] = 2295,
  [SMALL_STATE(129)] = 2315,
  [SMALL_STATE(130)] = 2335,
  [SMALL_STATE(131)] = 2355,
  [SMALL_STATE(132)] = 2375,
  [SMALL_STATE(133)] = 2395,
  [SMALL_STATE(134)] = 2415,
  [SMALL_STATE(135)] = 2435,
  [SMALL_STATE(136)] = 2455,
  [SMALL_STATE(137)] = 2475,
  [SMALL_STATE(138)] = 2495,
  [SMALL_STATE(139)] = 2515,
  [SMALL_STATE(140)] = 2535,
  [SMALL_STATE(141)] = 2557,
  [SMALL_STATE(142)] = 2577,
  [SMALL_STATE(143)] = 2593,
  [SMALL_STATE(144)] = 2609,
  [SMALL_STATE(145)] = 2629,
  [SMALL_STATE(146)] = 2648,
  [SMALL_STATE(147)] = 2665,
  [SMALL_STATE(148)] = 2682,
  [SMALL_STATE(149)] = 2691,
  [SMALL_STATE(150)] = 2710,
  [SMALL_STATE(151)] = 2719,
  [SMALL_STATE(152)] = 2728,
  [SMALL_STATE(153)] = 2737,
  [SMALL_STATE(154)] = 2746,
  [SMALL_STATE(155)] = 2755,
  [SMALL_STATE(156)] = 2774,
  [SMALL_STATE(157)] = 2783,
  [SMALL_STATE(158)] = 2802,
  [SMALL_STATE(159)] = 2819,
  [SMALL_STATE(160)] = 2836,
  [SMALL_STATE(161)] = 2847,
  [SMALL_STATE(162)] = 2856,
  [SMALL_STATE(163)] = 2875,
  [SMALL_STATE(164)] = 2892,
  [SMALL_STATE(165)] = 2911,
  [SMALL_STATE(166)] = 2924,
  [SMALL_STATE(167)] = 2941,
  [SMALL_STATE(168)] = 2960,
  [SMALL_STATE(169)] = 2971,
  [SMALL_STATE(170)] = 2990,
  [SMALL_STATE(171)] = 3007,
  [SMALL_STATE(172)] = 3026,
  [SMALL_STATE(173)] = 3043,
  [SMALL_STATE(174)] = 3062,
  [SMALL_STATE(175)] = 3081,
  [SMALL_STATE(176)] = 3100,
  [SMALL_STATE(177)] = 3111,
  [SMALL_STATE(178)] = 3130,
  [SMALL_STATE(179)] = 3139,
  [SMALL_STATE(180)] = 3158,
  [SMALL_STATE(181)] = 3172,
  [SMALL_STATE(182)] = 3186,
  [SMALL_STATE(183)] = 3194,
  [SMALL_STATE(184)] = 3206,
  [SMALL_STATE(185)] = 3214,
  [SMALL_STATE(186)] = 3222,
  [SMALL_STATE(187)] = 3230,
  [SMALL_STATE(188)] = 3238,
  [SMALL_STATE(189)] = 3250,
  [SMALL_STATE(190)] = 3262,
  [SMALL_STATE(191)] = 3274,
  [SMALL_STATE(192)] = 3286,
  [SMALL_STATE(193)] = 3298,
  [SMALL_STATE(194)] = 3306,
  [SMALL_STATE(195)] = 3318,
  [SMALL_STATE(196)] = 3330,
  [SMALL_STATE(197)] = 3342,
  [SMALL_STATE(198)] = 3354,
  [SMALL_STATE(199)] = 3362,
  [SMALL_STATE(200)] = 3374,
  [SMALL_STATE(201)] = 3386,
  [SMALL_STATE(202)] = 3398,
  [SMALL_STATE(203)] = 3410,
  [SMALL_STATE(204)] = 3418,
  [SMALL_STATE(205)] = 3430,
  [SMALL_STATE(206)] = 3442,
  [SMALL_STATE(207)] = 3450,
  [SMALL_STATE(208)] = 3464,
  [SMALL_STATE(209)] = 3476,
  [SMALL_STATE(210)] = 3490,
  [SMALL_STATE(211)] = 3504,
  [SMALL_STATE(212)] = 3512,
  [SMALL_STATE(213)] = 3524,
  [SMALL_STATE(214)] = 3536,
  [SMALL_STATE(215)] = 3548,
  [SMALL_STATE(216)] = 3560,
  [SMALL_STATE(217)] = 3572,
  [SMALL_STATE(218)] = 3582,
  [SMALL_STATE(219)] = 3594,
  [SMALL_STATE(220)] = 3606,
  [SMALL_STATE(221)] = 3618,
  [SMALL_STATE(222)] = 3626,
  [SMALL_STATE(223)] = 3638,
  [SMALL_STATE(224)] = 3654,
  [SMALL_STATE(225)] = 3662,
  [SMALL_STATE(226)] = 3674,
  [SMALL_STATE(227)] = 3686,
  [SMALL_STATE(228)] = 3698,
  [SMALL_STATE(229)] = 3710,
  [SMALL_STATE(230)] = 3722,
  [SMALL_STATE(231)] = 3730,
  [SMALL_STATE(232)] = 3742,
  [SMALL_STATE(233)] = 3754,
  [SMALL_STATE(234)] = 3768,
  [SMALL_STATE(235)] = 3780,
  [SMALL_STATE(236)] = 3788,
  [SMALL_STATE(237)] = 3800,
  [SMALL_STATE(238)] = 3812,
  [SMALL_STATE(239)] = 3824,
  [SMALL_STATE(240)] = 3836,
  [SMALL_STATE(241)] = 3848,
  [SMALL_STATE(242)] = 3862,
  [SMALL_STATE(243)] = 3874,
  [SMALL_STATE(244)] = 3881,
  [SMALL_STATE(245)] = 3888,
  [SMALL_STATE(246)] = 3901,
  [SMALL_STATE(247)] = 3908,
  [SMALL_STATE(248)] = 3915,
  [SMALL_STATE(249)] = 3922,
  [SMALL_STATE(250)] = 3929,
  [SMALL_STATE(251)] = 3936,
  [SMALL_STATE(252)] = 3943,
  [SMALL_STATE(253)] = 3956,
  [SMALL_STATE(254)] = 3963,
  [SMALL_STATE(255)] = 3970,
  [SMALL_STATE(256)] = 3983,
  [SMALL_STATE(257)] = 3990,
  [SMALL_STATE(258)] = 3997,
  [SMALL_STATE(259)] = 4004,
  [SMALL_STATE(260)] = 4011,
  [SMALL_STATE(261)] = 4018,
  [SMALL_STATE(262)] = 4025,
  [SMALL_STATE(263)] = 4032,
  [SMALL_STATE(264)] = 4039,
  [SMALL_STATE(265)] = 4052,
  [SMALL_STATE(266)] = 4059,
  [SMALL_STATE(267)] = 4066,
  [SMALL_STATE(268)] = 4073,
  [SMALL_STATE(269)] = 4084,
  [SMALL_STATE(270)] = 4091,
  [SMALL_STATE(271)] = 4098,
  [SMALL_STATE(272)] = 4105,
  [SMALL_STATE(273)] = 4112,
  [SMALL_STATE(274)] = 4119,
  [SMALL_STATE(275)] = 4126,
  [SMALL_STATE(276)] = 4133,
  [SMALL_STATE(277)] = 4140,
  [SMALL_STATE(278)] = 4151,
  [SMALL_STATE(279)] = 4158,
  [SMALL_STATE(280)] = 4165,
  [SMALL_STATE(281)] = 4172,
  [SMALL_STATE(282)] = 4183,
  [SMALL_STATE(283)] = 4189,
  [SMALL_STATE(284)] = 4195,
  [SMALL_STATE(285)] = 4205,
  [SMALL_STATE(286)] = 4215,
  [SMALL_STATE(287)] = 4221,
  [SMALL_STATE(288)] = 4227,
  [SMALL_STATE(289)] = 4233,
  [SMALL_STATE(290)] = 4239,
  [SMALL_STATE(291)] = 4245,
  [SMALL_STATE(292)] = 4251,
  [SMALL_STATE(293)] = 4257,
  [SMALL_STATE(294)] = 4263,
  [SMALL_STATE(295)] = 4269,
  [SMALL_STATE(296)] = 4275,
  [SMALL_STATE(297)] = 4281,
  [SMALL_STATE(298)] = 4287,
  [SMALL_STATE(299)] = 4293,
  [SMALL_STATE(300)] = 4299,
  [SMALL_STATE(301)] = 4305,
  [SMALL_STATE(302)] = 4311,
  [SMALL_STATE(303)] = 4317,
  [SMALL_STATE(304)] = 4323,
  [SMALL_STATE(305)] = 4329,
  [SMALL_STATE(306)] = 4335,
  [SMALL_STATE(307)] = 4341,
  [SMALL_STATE(308)] = 4347,
  [SMALL_STATE(309)] = 4353,
  [SMALL_STATE(310)] = 4359,
  [SMALL_STATE(311)] = 4365,
  [SMALL_STATE(312)] = 4371,
  [SMALL_STATE(313)] = 4377,
  [SMALL_STATE(314)] = 4383,
  [SMALL_STATE(315)] = 4389,
  [SMALL_STATE(316)] = 4395,
  [SMALL_STATE(317)] = 4401,
  [SMALL_STATE(318)] = 4407,
  [SMALL_STATE(319)] = 4413,
  [SMALL_STATE(320)] = 4419,
  [SMALL_STATE(321)] = 4425,
  [SMALL_STATE(322)] = 4431,
  [SMALL_STATE(323)] = 4437,
  [SMALL_STATE(324)] = 4443,
  [SMALL_STATE(325)] = 4449,
  [SMALL_STATE(326)] = 4455,
  [SMALL_STATE(327)] = 4461,
  [SMALL_STATE(328)] = 4467,
  [SMALL_STATE(329)] = 4473,
  [SMALL_STATE(330)] = 4479,
  [SMALL_STATE(331)] = 4485,
  [SMALL_STATE(332)] = 4491,
  [SMALL_STATE(333)] = 4497,
  [SMALL_STATE(334)] = 4503,
  [SMALL_STATE(335)] = 4509,
  [SMALL_STATE(336)] = 4515,
  [SMALL_STATE(337)] = 4521,
  [SMALL_STATE(338)] = 4527,
  [SMALL_STATE(339)] = 4533,
  [SMALL_STATE(340)] = 4539,
  [SMALL_STATE(341)] = 4549,
  [SMALL_STATE(342)] = 4555,
  [SMALL_STATE(343)] = 4561,
  [SMALL_STATE(344)] = 4567,
  [SMALL_STATE(345)] = 4573,
  [SMALL_STATE(346)] = 4579,
  [SMALL_STATE(347)] = 4585,
  [SMALL_STATE(348)] = 4591,
  [SMALL_STATE(349)] = 4597,
  [SMALL_STATE(350)] = 4603,
  [SMALL_STATE(351)] = 4609,
  [SMALL_STATE(352)] = 4615,
  [SMALL_STATE(353)] = 4621,
  [SMALL_STATE(354)] = 4627,
  [SMALL_STATE(355)] = 4633,
  [SMALL_STATE(356)] = 4639,
  [SMALL_STATE(357)] = 4645,
  [SMALL_STATE(358)] = 4651,
  [SMALL_STATE(359)] = 4657,
  [SMALL_STATE(360)] = 4663,
  [SMALL_STATE(361)] = 4669,
  [SMALL_STATE(362)] = 4675,
  [SMALL_STATE(363)] = 4681,
  [SMALL_STATE(364)] = 4687,
  [SMALL_STATE(365)] = 4693,
  [SMALL_STATE(366)] = 4699,
  [SMALL_STATE(367)] = 4705,
  [SMALL_STATE(368)] = 4711,
  [SMALL_STATE(369)] = 4717,
  [SMALL_STATE(370)] = 4723,
  [SMALL_STATE(371)] = 4729,
  [SMALL_STATE(372)] = 4735,
  [SMALL_STATE(373)] = 4741,
  [SMALL_STATE(374)] = 4747,
  [SMALL_STATE(375)] = 4753,
  [SMALL_STATE(376)] = 4759,
  [SMALL_STATE(377)] = 4765,
  [SMALL_STATE(378)] = 4771,
  [SMALL_STATE(379)] = 4777,
  [SMALL_STATE(380)] = 4783,
  [SMALL_STATE(381)] = 4789,
  [SMALL_STATE(382)] = 4795,
  [SMALL_STATE(383)] = 4801,
  [SMALL_STATE(384)] = 4807,
  [SMALL_STATE(385)] = 4813,
  [SMALL_STATE(386)] = 4821,
  [SMALL_STATE(387)] = 4827,
  [SMALL_STATE(388)] = 4833,
  [SMALL_STATE(389)] = 4839,
  [SMALL_STATE(390)] = 4845,
  [SMALL_STATE(391)] = 4851,
  [SMALL_STATE(392)] = 4857,
  [SMALL_STATE(393)] = 4863,
  [SMALL_STATE(394)] = 4869,
  [SMALL_STATE(395)] = 4875,
  [SMALL_STATE(396)] = 4881,
  [SMALL_STATE(397)] = 4887,
  [SMALL_STATE(398)] = 4893,
  [SMALL_STATE(399)] = 4899,
  [SMALL_STATE(400)] = 4909,
  [SMALL_STATE(401)] = 4915,
  [SMALL_STATE(402)] = 4921,
  [SMALL_STATE(403)] = 4927,
  [SMALL_STATE(404)] = 4933,
  [SMALL_STATE(405)] = 4939,
  [SMALL_STATE(406)] = 4945,
  [SMALL_STATE(407)] = 4951,
  [SMALL_STATE(408)] = 4957,
  [SMALL_STATE(409)] = 4963,
  [SMALL_STATE(410)] = 4969,
  [SMALL_STATE(411)] = 4975,
  [SMALL_STATE(412)] = 4981,
  [SMALL_STATE(413)] = 4987,
  [SMALL_STATE(414)] = 4993,
  [SMALL_STATE(415)] = 4999,
  [SMALL_STATE(416)] = 5005,
  [SMALL_STATE(417)] = 5011,
  [SMALL_STATE(418)] = 5017,
  [SMALL_STATE(419)] = 5023,
  [SMALL_STATE(420)] = 5029,
  [SMALL_STATE(421)] = 5035,
  [SMALL_STATE(422)] = 5041,
  [SMALL_STATE(423)] = 5047,
  [SMALL_STATE(424)] = 5053,
  [SMALL_STATE(425)] = 5059,
  [SMALL_STATE(426)] = 5065,
  [SMALL_STATE(427)] = 5071,
  [SMALL_STATE(428)] = 5078,
  [SMALL_STATE(429)] = 5085,
  [SMALL_STATE(430)] = 5092,
  [SMALL_STATE(431)] = 5099,
  [SMALL_STATE(432)] = 5106,
  [SMALL_STATE(433)] = 5113,
  [SMALL_STATE(434)] = 5120,
  [SMALL_STATE(435)] = 5127,
  [SMALL_STATE(436)] = 5134,
  [SMALL_STATE(437)] = 5141,
  [SMALL_STATE(438)] = 5148,
  [SMALL_STATE(439)] = 5155,
  [SMALL_STATE(440)] = 5162,
  [SMALL_STATE(441)] = 5169,
  [SMALL_STATE(442)] = 5176,
  [SMALL_STATE(443)] = 5180,
  [SMALL_STATE(444)] = 5184,
  [SMALL_STATE(445)] = 5188,
  [SMALL_STATE(446)] = 5192,
  [SMALL_STATE(447)] = 5196,
  [SMALL_STATE(448)] = 5200,
  [SMALL_STATE(449)] = 5204,
  [SMALL_STATE(450)] = 5208,
  [SMALL_STATE(451)] = 5212,
  [SMALL_STATE(452)] = 5216,
  [SMALL_STATE(453)] = 5220,
  [SMALL_STATE(454)] = 5224,
  [SMALL_STATE(455)] = 5228,
  [SMALL_STATE(456)] = 5232,
  [SMALL_STATE(457)] = 5236,
  [SMALL_STATE(458)] = 5240,
  [SMALL_STATE(459)] = 5244,
  [SMALL_STATE(460)] = 5248,
  [SMALL_STATE(461)] = 5252,
  [SMALL_STATE(462)] = 5256,
  [SMALL_STATE(463)] = 5260,
  [SMALL_STATE(464)] = 5264,
  [SMALL_STATE(465)] = 5268,
  [SMALL_STATE(466)] = 5272,
  [SMALL_STATE(467)] = 5276,
  [SMALL_STATE(468)] = 5280,
  [SMALL_STATE(469)] = 5284,
  [SMALL_STATE(470)] = 5288,
  [SMALL_STATE(471)] = 5292,
  [SMALL_STATE(472)] = 5296,
  [SMALL_STATE(473)] = 5300,
  [SMALL_STATE(474)] = 5304,
  [SMALL_STATE(475)] = 5308,
  [SMALL_STATE(476)] = 5312,
  [SMALL_STATE(477)] = 5316,
  [SMALL_STATE(478)] = 5320,
  [SMALL_STATE(479)] = 5324,
  [SMALL_STATE(480)] = 5328,
  [SMALL_STATE(481)] = 5332,
  [SMALL_STATE(482)] = 5336,
  [SMALL_STATE(483)] = 5340,
  [SMALL_STATE(484)] = 5344,
  [SMALL_STATE(485)] = 5348,
  [SMALL_STATE(486)] = 5352,
  [SMALL_STATE(487)] = 5356,
  [SMALL_STATE(488)] = 5360,
  [SMALL_STATE(489)] = 5364,
  [SMALL_STATE(490)] = 5368,
  [SMALL_STATE(491)] = 5372,
  [SMALL_STATE(492)] = 5376,
  [SMALL_STATE(493)] = 5380,
  [SMALL_STATE(494)] = 5384,
  [SMALL_STATE(495)] = 5388,
  [SMALL_STATE(496)] = 5392,
  [SMALL_STATE(497)] = 5396,
  [SMALL_STATE(498)] = 5400,
  [SMALL_STATE(499)] = 5404,
  [SMALL_STATE(500)] = 5408,
  [SMALL_STATE(501)] = 5412,
  [SMALL_STATE(502)] = 5416,
  [SMALL_STATE(503)] = 5420,
  [SMALL_STATE(504)] = 5424,
  [SMALL_STATE(505)] = 5428,
  [SMALL_STATE(506)] = 5432,
  [SMALL_STATE(507)] = 5436,
  [SMALL_STATE(508)] = 5440,
  [SMALL_STATE(509)] = 5444,
  [SMALL_STATE(510)] = 5448,
  [SMALL_STATE(511)] = 5452,
  [SMALL_STATE(512)] = 5456,
  [SMALL_STATE(513)] = 5460,
  [SMALL_STATE(514)] = 5464,
  [SMALL_STATE(515)] = 5468,
  [SMALL_STATE(516)] = 5472,
  [SMALL_STATE(517)] = 5476,
  [SMALL_STATE(518)] = 5480,
  [SMALL_STATE(519)] = 5484,
  [SMALL_STATE(520)] = 5488,
  [SMALL_STATE(521)] = 5492,
  [SMALL_STATE(522)] = 5496,
  [SMALL_STATE(523)] = 5500,
  [SMALL_STATE(524)] = 5504,
  [SMALL_STATE(525)] = 5508,
  [SMALL_STATE(526)] = 5512,
  [SMALL_STATE(527)] = 5516,
  [SMALL_STATE(528)] = 5520,
  [SMALL_STATE(529)] = 5524,
  [SMALL_STATE(530)] = 5528,
  [SMALL_STATE(531)] = 5532,
  [SMALL_STATE(532)] = 5536,
  [SMALL_STATE(533)] = 5540,
  [SMALL_STATE(534)] = 5544,
  [SMALL_STATE(535)] = 5548,
  [SMALL_STATE(536)] = 5552,
  [SMALL_STATE(537)] = 5556,
  [SMALL_STATE(538)] = 5560,
  [SMALL_STATE(539)] = 5564,
  [SMALL_STATE(540)] = 5568,
  [SMALL_STATE(541)] = 5572,
  [SMALL_STATE(542)] = 5576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(166),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(144),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(72),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(63),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(57),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(284),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(245),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(55),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(56),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(285),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(255),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(35),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(32),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(107),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(94),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(27),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(93),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(157),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(88),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(441),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(84),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(98),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(87),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(90),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(223),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(177),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(69),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(64),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(141),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(139),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(409),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(133),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(81),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(430),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(433),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(429),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(434),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(36),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(33),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(131),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(58),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(59),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(60),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(128),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(126),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(122),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(85),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(399),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(264),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(26),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(114),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(146),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(77),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(175),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(174),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(173),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(170),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(110),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(109),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(108),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(169),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(105),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(167),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(104),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(103),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(102),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(12),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(11),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(28),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(277),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(437),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(427),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(438),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(428),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(458),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(79),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(61),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(96),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(82),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(163),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(461),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(281),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 9),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 9),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 1, .production_id = 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 1, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, .production_id = 9),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, .production_id = 9),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, .production_id = 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, .production_id = 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composeobject, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(168),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreground, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(448),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(65),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 1),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(511),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(143),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, .production_id = 3),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_name, 1, .production_id = 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 1),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2), SHIFT_REPEAT(111),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2), SHIFT_REPEAT(455),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2), SHIFT_REPEAT(100),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(457),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2), SHIFT_REPEAT(385),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset, 1, .production_id = 3),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 1),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 3),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2), SHIFT_REPEAT(92),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 4),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2), SHIFT_REPEAT(91),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 8), SHIFT_REPEAT(159),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 8),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(86),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2), SHIFT_REPEAT(467),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 1),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 1),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 2),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, .production_id = 3),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2), SHIFT_REPEAT(37),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 2),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2), SHIFT_REPEAT(432),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 8), SHIFT_REPEAT(155),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 8),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 1),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 1),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 2),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1, .production_id = 3),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 2),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 3),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 1, .production_id = 3),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 2, .production_id = 8),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 2),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 2),
  [1096] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(518),
  [1099] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(233),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 1, .production_id = 3),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 1),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 1),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 2, .production_id = 8),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 1),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 2),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, .production_id = 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailbox, 1, .production_id = 3),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_field, 1, .production_id = 3),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 3),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 3),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(268),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, .production_id = 2),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, .production_id = 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 3, .production_id = 11),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 4),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hook_type, 1),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_hook_directive, 3, .production_id = 6),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncolor_directive, 3),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_crypt_hook_directive, 3, .production_id = 6),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyid, 1, .production_id = 3),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reset_directive, 2),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_save_hook_directive, 3),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_hook_directive, 3, .production_id = 4),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_hook_directive, 3, .production_id = 4),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 3, .production_id = 6),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2, .production_id = 2),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 3, .production_id = 7),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3, .production_id = 7),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifdef_directive, 3),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifndef_directive, 3),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_directive, 2, .production_id = 5),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lists_directive, 3, .production_id = 7),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3, .production_id = 7),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_directive, 3, .production_id = 7),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3, .production_id = 7),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unscore_directive, 2),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmacro_directive, 3),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 2, .production_id = 2),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 2, .production_id = 2),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_unpin_directive, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1, .production_id = 3),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_pin_directive, 2),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsetenv_directive, 2),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 3, .production_id = 6),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_hook_directive, 3, .production_id = 4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmono_directive, 3),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_hook_directive, 3, .production_id = 6),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1, .production_id = 3),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_hook_directive, 3, .production_id = 6),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append_hook_directive, 3, .production_id = 6),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reply_hook_directive, 3, .production_id = 4),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send_hook_directive, 3, .production_id = 4),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send2_hook_directive, 3, .production_id = 4),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spam_directive, 3, .production_id = 2),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 1, .production_id = 3),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectrx_directive, 3, .production_id = 2),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1, .production_id = 3),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toggle_directive, 2),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_directive, 2),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setenv_directive, 3),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_directive, 3),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 3, .production_id = 4),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2, .production_id = 2),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 2),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 4, .production_id = 4),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hdr_order_directive, 2),
  [1279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhook_directive, 2),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 4),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 4),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shutdown_hook_directive, 2, .production_id = 4),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_directive, 4),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup_hook_directive, 2, .production_id = 4),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeout_hook_directive, 2, .production_id = 4),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_from_directive, 2),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 1, .production_id = 3),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_to_directive, 2),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2, .production_id = 2),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2, .production_id = 2),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 4, .production_id = 12),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 3),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 4, .production_id = 13),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhdr_order_directive, 2),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative_order_directive, 2),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_directive, 2),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternative_order_directive, 2),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_directive, 4),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1, .production_id = 3),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iconv_hook_directive, 3, .production_id = 4),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 2),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_directive, 2, .production_id = 2),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_hook_directive, 3, .production_id = 4),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignore_directive, 2, .production_id = 2),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 4, .production_id = 14),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mono_directive, 4, .production_id = 12),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 2),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbind_directive, 3),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmy_hdr_directive, 2),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quadoption, 1),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 4, .production_id = 12),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_my_hdr_directive, 2, .production_id = 2),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_view_directive, 2),
  [1357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 3),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmime_lookup_directive, 2),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime_lookup_directive, 2),
  [1363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unauto_view_directive, 2),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 3),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5, .production_id = 15),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 5, .production_id = 15),
  [1373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 5),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 5, .production_id = 15),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 6),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 6, .production_id = 16),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 6),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 6, .production_id = 16),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finish_directive, 1),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 1, .production_id = 3),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cd_directive, 2),
  [1391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3, .production_id = 7),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, .production_id = 3),
  [1397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_directive, 2),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailto_allow_directive, 2),
  [1401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 3, .production_id = 7),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto_allow_directive, 2),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailboxes_directive, 2),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailboxes_directive, 2),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2, .production_id = 2),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2, .production_id = 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disposition, 1, .production_id = 3),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_muttrc(void) {
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
