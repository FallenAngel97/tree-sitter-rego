import XCTest
import SwiftTreeSitter
import TreeSitterRego

final class TreeSitterRegoTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rego())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Rego grammar")
    }
}
