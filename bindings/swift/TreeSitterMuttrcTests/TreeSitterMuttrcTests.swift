import XCTest
import SwiftTreeSitter
import TreeSitterMuttrc

final class TreeSitterMuttrcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_muttrc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Muttrc grammar")
    }
}
