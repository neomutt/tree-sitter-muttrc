# tree-sitter-muttrc

[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/neomutt/tree-sitter-muttrc/main.svg)](https://results.pre-commit.ci/latest/github/neomutt/tree-sitter-muttrc/main)
[![github/workflow](https://github.com/neomutt/tree-sitter-muttrc/actions/workflows/main.yml/badge.svg)](https://github.com/neomutt/tree-sitter-muttrc/actions)
[![codecov](https://codecov.io/gh/neomutt/tree-sitter-muttrc/branch/main/graph/badge.svg)](https://codecov.io/gh/neomutt/tree-sitter-muttrc)
[![DeepSource](https://deepsource.io/gh/neomutt/tree-sitter-muttrc.svg/?show_trend=true)](https://deepsource.io/gh/neomutt/tree-sitter-muttrc)

[![github/downloads](https://shields.io/github/downloads/neomutt/tree-sitter-muttrc/total)](https://github.com/neomutt/tree-sitter-muttrc/releases)
[![github/downloads/latest](https://shields.io/github/downloads/neomutt/tree-sitter-muttrc/latest/total)](https://github.com/neomutt/tree-sitter-muttrc/releases/latest)
[![github/issues](https://shields.io/github/issues/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/issues)
[![github/issues-closed](https://shields.io/github/issues-closed/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/issues?q=is%3Aissue+is%3Aclosed)
[![github/issues-pr](https://shields.io/github/issues-pr/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/pulls)
[![github/issues-pr-closed](https://shields.io/github/issues-pr-closed/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/pulls?q=is%3Apr+is%3Aclosed)
[![github/discussions](https://shields.io/github/discussions/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/discussions)
[![github/milestones](https://shields.io/github/milestones/all/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/milestones)
[![github/forks](https://shields.io/github/forks/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/network/members)
[![github/stars](https://shields.io/github/stars/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/stargazers)
[![github/watchers](https://shields.io/github/watchers/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/watchers)
[![github/contributors](https://shields.io/github/contributors/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/graphs/contributors)
[![github/commit-activity](https://shields.io/github/commit-activity/w/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/graphs/commit-activity)
[![github/last-commit](https://shields.io/github/last-commit/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/commits)
[![github/release-date](https://shields.io/github/release-date/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/releases/latest)

[![github/license](https://shields.io/github/license/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc/blob/main/LICENSE)
[![github/languages](https://shields.io/github/languages/count/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)
[![github/languages/top](https://shields.io/github/languages/top/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)
[![github/directory-file-count](https://shields.io/github/directory-file-count/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)
[![github/code-size](https://shields.io/github/languages/code-size/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)
[![github/repo-size](https://shields.io/github/repo-size/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)
[![github/v](https://shields.io/github/v/release/neomutt/tree-sitter-muttrc)](https://github.com/neomutt/tree-sitter-muttrc)

[![pypi/status](https://shields.io/pypi/status/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#description)
[![pypi/v](https://shields.io/pypi/v/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#history)
[![pypi/downloads](https://shields.io/pypi/dd/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#files)
[![pypi/format](https://shields.io/pypi/format/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#files)
[![pypi/implementation](https://shields.io/pypi/implementation/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#files)
[![pypi/pyversions](https://shields.io/pypi/pyversions/tree-sitter-muttrc)](https://pypi.org/project/tree-sitter-muttrc/#files)

[![npm](https://img.shields.io/npm/dw/tree-sitter-muttrc)](https://www.npmjs.com/package/tree-sitter-muttrc)

[![Crates.io (recent)](https://img.shields.io/crates/dr/tree-sitter-muttrc)](https://crates.io/crates/tree-sitter-muttrc)

[(neo)muttrc grammar](https://neomutt.org/man/neomuttrc) for
[tree-sitter](https://github.com/tree-sitter/tree-sitter).

It can be used by:

- Syntax highlight
  - editors
    - [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter): for
      [neovim](https://github.com/neovim/neovim)
    - [tree-sitter-langs](https://github.com/emacs-tree-sitter/tree-sitter-langs):
      for [emacs](https://www.gnu.org/software/emacs/)
    - [kak-tree-sitter](https://github.com/phaazon/kak-tree-sitter): for
      [kakoune](https://kakoune.org/)
    - [helix](https://helix-editor.com/)
    - [zed](https://zed.dev)
    - [atom](https://github.com/atom/atom)
    - [syntax-highlighter](https://github.com/EvgeniyPeshkov/syntax-highlighter):
      for [VS Code](https://github.com/microsoft/vscode)
  - pagers
    - [syncat](https://github.com/foxfriends/syncat)
    - [`tree-sitter highlight`](https://tree-sitter.github.io/tree-sitter/syntax-highlighting):
      Make sure `/the/parent/directory/of/this/repo` in `parser-directories` of
      your `~/.config/tree-sitter/config.json`
- Language servers
  - [muttrc-language-server](https://github.com/neomutt/mutt-language-server)
  - [vscode-anycode](https://github.com/microsoft/vscode-anycode)
  - [Navigating code on GitHub](https://docs.github.com/en/repositories/working-with-files/using-files/navigating-code-on-github):
    supported by [semantic](https://github.com/github/semantic)
- Libraries
  - [tree-sitter-muttrc](https://www.npmjs.com/package/tree-sitter-muttrc):
    for node
  - [tree-sitter-muttrc](https://crates.io/crates/tree-sitter-muttrc):
    for rust
  - [tree-sitter-muttrc](https://pypi.org/project/tree-sitter-muttrc):
    for python
  - [tree-sitter-languages](https://github.com/grantjenks/py-tree-sitter-languages):
    for python

## Related Projects

- [neomutt.vim](https://github.com/neomutt/neomutt.vim): vim syntax
