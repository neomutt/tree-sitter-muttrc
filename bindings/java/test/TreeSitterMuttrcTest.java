import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.muttrc.TreeSitterMuttrc;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterMuttrcTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterMuttrc.language()));
    }
}
