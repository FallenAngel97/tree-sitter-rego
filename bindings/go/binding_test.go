package tree_sitter_rego_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rego "github.com/fallenangel97/tree-sitter-rego/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rego.Language())
	if language == nil {
		t.Errorf("Error loading Rego grammar")
	}
}
