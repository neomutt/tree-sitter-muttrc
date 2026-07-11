((regex) @injection.content
  (#set! injection.language "regex"))

((shell) @injection.content
  (#set! injection.language "bash"))

((string) @injection.content
  (#set! injection.language "expando"))

((comment) @injection.content
  (#set! injection.language "comment"))
