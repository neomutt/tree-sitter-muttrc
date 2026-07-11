{
  pkgs ? import <nixpkgs> { },
}:

with pkgs;
mkShell {
  name = "tree-sitter-muttrc";
  buildInputs = [
    tree-sitter
  ];
}
