((regex) @injection.content
  (#set! injection.language "regex"))

((shell) @injection.content
  (#set! injection.language "bash"))

(set_directive
  (command)
  (option) @_option
  content: (string) @injection.content
  (#set! injection.language "expando")
  (#match? @_option "_format$"))

((comment) @injection.content
  (#set! injection.language "comment"))
