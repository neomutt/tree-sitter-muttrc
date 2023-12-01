r"""Tree sitter
===============
"""
from pathlib import Path

from tree_sitter import Language, Parser

__version__ = "0.0.1"
__version_tuple__ = (0, 0, 1, "", "")

language = Language(
    str(next((Path(__file__).parent / "data" / "lib").glob("libparser.*"))),
    "zathurarc",
)
parser = Parser()
parser.set_language(language)
