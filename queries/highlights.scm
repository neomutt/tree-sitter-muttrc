; Comments
(comment) @comment @spell

; General
(int) @number

(string) @string

[
  (map)
  (object)
  (composeobject)
  (color)
  (attribute)
] @string.special

(quadoption) @boolean

(path) @string.special.path

(regex) @string.regexp

[
  (option)
  (command_line_option)
] @variable.builtin

(command) @keyword

(source_directive
  (command) @keyword.import)

(uri) @string.special.url

(key_name) @type.builtin

(escape) @string.escape

(function) @function.call

; Literals
[
  "<"
  ">"
] @punctuation.bracket

"," @punctuation.delimiter

[
  "&"
  "?"
  "*"
] @punctuation.special
