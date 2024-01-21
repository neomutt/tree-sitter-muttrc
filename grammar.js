module.exports = grammar({
  name: "zathurarc",

  extras: (_) => [/ /],

  conflicts: ($) => [[$.map_directive]],

  rules: {
    file: ($) => repeat(seq(optional($._code), $._end)),

    _code: ($) =>
      choice(
        $.set_directive,
        $.include_directive,
        $.map_directive,
        $.unmap_directive
      ),

    set_directive: ($) =>
      seq(
        alias("set", $.command),
        $.option,
        choice($.int, $.float, $.string, $.bool)
      ),

    option: (_) => /[a-z-]+/,

    _int: (_) => /\d+/,
    int: ($) => $._int,
    float: ($) =>
      prec(2, choice(seq(optional($._int), ".", $._int), seq($._int, "."))),
    string: ($) => choice($._quoted_string, $._word),
    bool: (_) => choice("true", "false"),

    _word: (_) => repeat1(/(\S|\\ )/),
    _quoted_string: (_) =>
      choice(
        seq('"', field("content", repeat1(/[^"]|\\"/)), '"'),
        seq("'", field("content", repeat1(/[^']|\\'/)), "'")
      ),

    include_directive: ($) =>
      seq(alias("include", $.command), alias($._word, $.path)),

    unmap_directive: ($) =>
      seq(alias("unmap", $.command), optional($.mode), $.key),

    map_directive: ($) =>
      seq(
        alias("map", $.command),
        optional($.mode),
        $.key,
        alias(/[a-z_]+/, $.function),
        optional(seq($._space, alias(/[a-z_]+/, $.argument)))
      ),

    key: ($) =>
      choice(seq("<", alias(/[A-Z][a-zA-Z0-9-]+/, $.key_name), ">"), /\S/, /[^ \n\[\]<>]+/),
    mode: ($) => seq("[", alias($._word, $.mode_name), "]"),

    comment: (_) => /#[^\n]*/,
    _eol: (_) => /\r?\n/,
    _space: (_) => prec(-1, repeat1(/[ \t]/)),
    _end: ($) => seq(optional($._space), optional($.comment), $._eol),
  },
});
