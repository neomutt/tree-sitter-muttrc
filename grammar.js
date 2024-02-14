module.exports = grammar({
  name: "muttrc",

  extras: (_) => [/\s/, /\\\r?\n/],

  rules: {
    file: ($) => repeat(seq(optional($._command), $._end)),

    _command: ($) =>
      choice(
        $.alias_directive,
        $.alternates_directive,
        $.alternative_order_directive,
        $.attachments_directive,
        $.auto_view_directive,
        $.bind_directive,
        $.cd_directive,
        $.color_directive,
        $.echo_directive,
        $.exec_directive,
        $.finish_directive,
        $.group_directive,
        $.hdr_order_directive,
        $.ifdef_directive,
        $.ifndef_directive,
        $.ignore_directive,
        $.lists_directive,
        $.macro_directive,
        $.mailboxes_directive,
        $.named_mailboxes_directive,
        $.mailto_allow_directive,
        $.mime_lookup_directive,
        $.mono_directive,
        $.my_hdr_directive,
        $.nospam_directive,
        $.push_directive,
        $.reset_directive,
        $.score_directive,
        $.set_directive,
        $.setenv_directive,
        $.sidebar_pin_directive,
        $.sidebar_unpin_directive,
        $.source_directive,
        $.spam_directive,
        $.subjectrx_directive,
        $.subscribe_directive,
        $.toggle_directive,
        $.unalias_directive,
        $.unalternates_directive,
        $.unalternative_order_directive,
        $.unattachments_directive,
        $.unauto_view_directive,
        $.unbind_directive,
        $.uncolor_directive,
        $.ungroup_directive,
        $.unhdr_order_directive,
        $.unhook_directive,
        $.unignore_directive,
        $.unlists_directive,
        $.unmacro_directive,
        $.unmailboxes_directive,
        $.unmailto_allow_directive,
        $.unmime_lookup_directive,
        $.unmono_directive,
        $.unmy_hdr_directive,
        $.unscore_directive,
        $.unset_directive,
        $.unsetenv_directive,
        $.unsubjectrx_directive,
        $.unsubscribe_directive,
        $.account_hook_directive,
        $.charset_hook_directive,
        $.iconv_hook_directive,
        $.crypt_hook_directive,
        $.index_format_hook_directive,
        $.fcc_save_hook_directive,
        $.fcc_hook_directive,
        $.save_hook_directive,
        $.folder_hook_directive,
        $.mbox_hook_directive,
        $.message_hook_directive,
        $.open_hook_directive,
        $.close_hook_directive,
        $.append_hook_directive,
        $.reply_hook_directive,
        $.send_hook_directive,
        $.send2_hook_directive,
        $.timeout_hook_directive,
        $.startup_hook_directive,
        $.shutdown_hook_directive,
        $.subscribe_to_directive,
        $.unsubscribe_from_directive
      ),

    account_hook_directive: ($) =>
      command($, "account-hook", $._string, $._command),

    group_name: ($) => $._string,
    // TODO: support more `group_name`s
    _group: ($) => seq(alias("-group", $.command_line_option), $.group_name),
    _addresses: ($) => commaSep1($.address),
    alias_directive: ($) =>
      command($, "alias", optional($._group), $.key, $._addresses),
    address: ($) => $._string,
    unalias_directive: ($) =>
      command($, "unalias", optional($._group), choice("*", $.key)),
    key: ($) =>
      repeat1(
        choice(
          seq("<", alias(/[a-zA-Z-]+/, $.key_name), ">"),
          /[^\n\\ ]/,
          alias(/\\./, $.escape)
        )
      ),

    _regexes: ($) => spaceSep1($._regex),
    alternates_directive: ($) =>
      command($, "alternates", optional($._group), $._regexes),
    unalternates_directive: ($) =>
      command($, "unalternates", optional($._group), choice("*", $._regexes)),
    alternative_order_directive: ($) =>
      command($, "alternative_order", $._mimes),
    unalternative_order_directive: ($) =>
      command($, "unalternative_order", choice("*", $._mimes)),
    mime_type: (_) => /[-.a-zA-Z\d]+/,
    mime: ($) =>
      seq($.mime_type, optional(seq("/", alias($.mime_type, $.sub_mime_type)))),
    _mime_types: ($) => spaceSep1($.mime_type),
    _mimes: ($) => spaceSep1($.mime),
    disposition: ($) => $._string,
    attachments_directive: ($) =>
      command(
        $,
        "attachments",
        choice(
          seq(optional(choice("+", "-")), $.disposition, $._mime_types),
          "?"
        )
      ),
    unattachments_directive: ($) =>
      command(
        $,
        "unattachments",
        choice(
          seq(optional(choice("+", "-")), $.disposition, $._mime_types),
          "*"
        )
      ),
    auto_view_directive: ($) => command($, "auto_view", $._mimes),
    unauto_view_directive: ($) =>
      command($, "unauto_view", choice("*", $._mimes)),

    map: (_) =>
      choice(
        "alias",
        "attach",
        "browser",
        "compose",
        "editor",
        "generic",
        "index",
        "mix",
        "pager",
        "pgp",
        "postpone",
        "query",
        "smime"
      ),
    _maps: ($) => commaSep1($.map),
    function: (_) => /[a-z-]+/,
    _functions: ($) => spaceSep1($.function),
    bind_directive: ($) => command($, "bind", $._maps, $.key, $.function),
    unbind_directive: ($) => command($, "unbind", choice("*", $._maps), $.key),

    alias: ($) => $._string,
    charset: ($) => $._string,
    charset_hook_directive: ($) =>
      command($, "charset-hook", $.alias, $.charset),
    iconv_hook_directive: ($) => command($, "iconv-hook", $.charset, $.charset),

    pattern: ($) => $._string,
    object: (_) =>
      choice(
        "attach_headers",
        "attachment",
        "body",
        "bold",
        "error",
        "hdrdefault",
        "header",
        "index",
        "index_author",
        "index_collapsed",
        "index_date",
        "index_flags",
        "index_label",
        "index_number",
        "index_size",
        "index_subject",
        "index_tag",
        "index_tags",
        "indicator",
        "markers",
        "message",
        "normal",
        "progress",
        "prompt",
        /quoted\d*/,
        "search",
        "signature",
        "status",
        "tilde",
        "tree",
        "underline",
        "sidebar_background",
        "sidebar_divider",
        "sidebar_flagged",
        "sidebar_highlight",
        "sidebar_indicator",
        "sidebar_new",
        "sidebar_ordinary",
        "sidebar_spool_file"
      ),
    composeobject: (_) =>
      choice(
        "header",
        "security_encrypt",
        "security_sign",
        "security_both",
        "security_none"
      ),
    color: (_) =>
      choice(
        "default",
        "black",
        "red",
        "green",
        "yellow",
        "blue",
        "magenta",
        "cyan",
        "white",
        /#\d{6}/,
        /color\d+/
      ),
    attribute: (_) =>
      choice("none", "bold", "underline", "reverse", "standout"),
    _attributes: ($) => spaceSep1($.attribute),
    foreground: ($) => $.color,
    background: ($) => $.color,
    color_directive: ($) =>
      command(
        $,
        "color",
        choice(
          seq(
            $.object,
            optional($._attributes),
            $.foreground,
            $.background,
            $._regex
          ),
          seq(
            "compose",
            $.composeobject,
            optional($._attributes),
            $.foreground,
            $.background
          )
        )
      ),
    uncolor_directive: ($) =>
      command($, "uncolor", $.pattern, choice("*", $.pattern)),

    keyid: ($) => $._string,
    crypt_hook_directive: ($) => command($, "crypt-hook", $._regex, $.keyid),
    name: ($) => $._string,
    index_format_hook_directive: ($) =>
      command(
        $,
        "index-format-hook",
        $.name,
        optional("!"),
        $.pattern,
        $._string
      ),

    exec_directive: ($) => command($, "exec", $._functions),
    fcc_save_hook_directive: ($) =>
      command($, "fcc-save-hook", $.pattern, $.mailbox),
    fcc_hook_directive: ($) => command($, "fcc-hook", $.pattern, $.mailbox),
    save_hook_directive: ($) => command($, "save-hook", $.pattern, $.mailbox),
    folder_hook_directive: ($) =>
      command(
        $,
        "folder-hook",
        optional(alias("-noregex", $.command_line_option)),
        $._regex,
        $._command
      ),

    _rx_addr: ($) =>
      choice(
        seq(alias("-rx", $.command_line_option), $._regexes),
        seq(alias("-addr", $.command_line_option), $._addresses)
      ),
    group_directive: ($) => command($, "group", optional($._group), $._rx_addr),
    ungroup_directive: ($) =>
      command($, "ungroup", optional($._group), choice("*", $._rx_addr)),

    header: ($) => $._string,
    _headers: ($) => spaceSep1($.header),
    hdr_order_directive: ($) => command($, "hdr_order", $._headers),
    unhdr_order_directive: ($) =>
      command($, "unhdr_order", choice("*", $._headers)),

    symbol: ($) => $._string,
    ifdef_directive: ($) => command($, "ifdef", $.symbol, $._command),
    ifndef_directive: ($) => command($, "ifndef", $.symbol, $._command),
    finish_directive: ($) => command($, "finish"),

    _strings: ($) => spaceSep1($._string),
    ignore_directive: ($) => command($, "ignore", $._strings),
    unignore_directive: ($) => command($, "unignore", choice("*", $._strings)),

    lists_directive: ($) => command($, "lists", $._group, $._regexes),
    unlists_directive: ($) =>
      command($, "unlists", $._group, choice("*", $._regexes)),
    subscribe_directive: ($) => command($, "subscribe", $._group, $._regexes),
    unsubscribe_directive: ($) =>
      command($, "unsubscribe", $._group, choice("*", $._regexes)),

    sequence: ($) => $._string,
    macro_directive: ($) => command($, "macro", $._maps, $.key, $.sequence),
    unmacro_directive: ($) =>
      command($, "unmacro", choice("*", $._maps), $.key),

    mailbox: ($) => $._string,
    _mailboxes: ($) => spaceSep1($.mailbox),
    description: ($) => $._string,
    mailboxes_directive: ($) => command($, "mailboxes", $._mailboxes),
    named_mailboxes_directive: ($) =>
      command($, "named-mailboxes", spaceSep1(seq($.description, $.mailbox))),
    unmailboxes_directive: ($) =>
      command($, "unmailboxes", choice("*", $._mailboxes)),

    header_field: ($) => $._string,
    _header_fields: ($) => spaceSep1($.header_field),
    mailto_allow_directive: ($) =>
      command($, "mailto_allow", choice("*", $._header_fields)),
    unmailto_allow_directive: ($) =>
      command($, "unmailto_allow", choice("*", $._header_fields)),

    message: ($) => $._string,
    echo_directive: ($) => command($, "echo", $.message),
    directory: ($) => $._string,
    cd_directive: ($) => command($, "cd", $.directory),

    mbox_hook_directive: ($) =>
      command($, "mbox-hook", optional("-noregex"), $._regex, $.mailbox),
    message_hook_directive: ($) =>
      command($, "message-hook", $.pattern, $._command),

    mime_lookup_directive: ($) => command($, "mime_lookup", $._mimes),
    unmime_lookup_directive: ($) =>
      command($, "unmime_lookup", choice("*", $._mimes)),
    mono_directive: ($) =>
      command($, "mono", choice($.object, $.pattern), $.attribute, $._regex),
    unmono_directive: ($) =>
      command($, "unmono", $.pattern, choice("*", $.pattern)),
    my_hdr_directive: ($) => command($, "my_hdr", $._string),
    unmy_hdr_directive: ($) =>
      command($, "unmy_hdr", choice("*", $.header_field)),

    shell_command: ($) => $._string,
    open_hook_directive: ($) =>
      command($, "open-hook", $._regex, $.shell_command),
    close_hook_directive: ($) =>
      command($, "close-hook", $._regex, $.shell_command),
    append_hook_directive: ($) =>
      command($, "append-hook", $._regex, $.shell_command),

    push_directive: ($) => command($, "push", $._string),

    reply_hook_directive: ($) =>
      command($, "reply-hook", $.pattern, $._command),
    send_hook_directive: ($) => command($, "send-hook", $.pattern, $._command),
    send2_hook_directive: ($) =>
      command($, "send2-hook", $.pattern, $._command),

    format: ($) => $._string,
    spam_directive: ($) => command($, "spam", $._regex, $.format),
    nospam_directive: ($) => command($, "nospam", choice("*", $._regex)),
    replacement: ($) => $._string,
    subjectrx_directive: ($) =>
      command($, "subjectrx", $._regex, $.replacement),
    unsubjectrx_directive: ($) =>
      command($, "unsubjectrx", choice("*", $._regex)),
    uri: ($) => $._string,
    subscribe_to_directive: ($) => command($, "subscribe-to", $.uri),
    unsubscribe_from_directive: ($) => command($, "unsubscribe-from", $.uri),

    timeout_hook_directive: ($) => command($, "timeout-hook", $._command),
    startup_hook_directive: ($) => command($, "startup-hook", $._command),
    shutdown_hook_directive: ($) => command($, "shutdown-hook", $._command),

    hook_type: (_) =>
      choice(
        "account-hook",
        "charset-hook",
        "iconv-hook",
        "crypt-hook",
        "fcc-hook",
        "save-hook",
        "folder-hook",
        "mbox-hook",
        "message-hook",
        "open-hook",
        "close-hook",
        "append-hook",
        "reply-hook",
        "send-hook",
        "send2-hook",
        "timeout-hook",
        "startup-hook",
        "shutdown-hook"
      ),
    unhook_directive: ($) => command($, "unhook", choice("*", $.hook_type)),

    set_directive: ($) => command($, "set", choice($._options2, $._options3)),
    _options3: ($) =>
      spaceSep1(
        seq(
          $.option,
          optional(" "),
          choice("+=", "-=", "="),
          optional(" "),
          choice($.int, $.quadoption, $._string)
        )
      ),
    _options2: ($) => spaceSep1(seq(optional(choice("&", "?")), $.option)),
    _options: ($) => spaceSep1($.option),
    unset_directive: ($) => command($, "unset", $._options),
    reset_directive: ($) => command($, "reset", $._options),
    toggle_directive: ($) => command($, "toggle", $._options),

    setenv_directive: ($) =>
      command(
        $,
        "setenv",
        choice(seq("?", $.option), seq($.option, alias(/\S+/, $.value)))
      ),
    unsetenv_directive: ($) => command($, "unsetenv", $.option),
    sidebar_pin_directive: ($) => command($, "sidebar_pin", $._mailboxes),
    sidebar_unpin_directive: ($) =>
      command($, "sidebar_unpin", choice("*", $._mailboxes)),
    score_directive: ($) => command($, "score", $.pattern, $.int),
    unscore_directive: ($) => command($, "unscore", choice("*", $.pattern)),

    option: (_) => /[a-z_\d]+/,

    quadoption: (_) => choice("yes", "no", "ask-yes", "ask-no"),
    int: (_) => /-?\d+/,
    _string: ($) =>
      choice(
        quoted_string("'", $.string),
        quoted_string('"', $.shell),
        quoted_string("`", $.shell),
        alias($._word, $.shell),
        "\n"
      ),
    _regex: ($) =>
      choice(
        quoted_string("'", $.regex),
        quoted_string('"', $.regex),
        quoted_string("`", $.shell),
        alias($._word, $.regex),
        "\n"
      ),
    _word: (_) => /(\\\r?\n|[^"'`\s])(\S|\\\s)*/,

    source_directive: ($) => command($, "source", alias($._string, $.path)),

    comment: (_) => /#[^\n]*/,
    _eol: (_) => /\r?\n/,
    _space: (_) => prec(-1, repeat1(/[ \t]/)),
    _end: ($) => seq(optional($._space), optional($.comment), $._eol),
  },
});

function command($, cmd, ...args) {
  return seq(alias(cmd, $.command), ...args);
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ",");
}

function spaceSep1(rule) {
  return sep1(rule, " ");
}

function quoted_string(char, name) {
  return seq(
    char,
    alias(
      field("content", new RegExp("([^" + char + "]|\\\\" + char + ")+")),
      name
    ),
    char
  );
}
