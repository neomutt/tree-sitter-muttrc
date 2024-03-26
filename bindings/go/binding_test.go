package tree_sitter_muttrc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-muttrc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_muttrc.Language())
	if language == nil {
		t.Errorf("Error loading Muttrc grammar")
	}
}
