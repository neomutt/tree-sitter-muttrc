#!/usr/bin/env bash
cd "$(dirname "$(readlink -f "$0")")/.." || exit 1

tree-sitter generate
cmake -Bbuild
cmake --build build
cp build/libparser.so "${1:-$HOME/.local/share/nvim/repos/github.com/nvim-treesitter/nvim-treesitter/parser}/zathurarc.so"
