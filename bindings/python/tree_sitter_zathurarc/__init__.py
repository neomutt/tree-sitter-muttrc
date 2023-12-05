r"""Tree sitter
===============
"""
from pathlib import Path

from tree_sitter import Language, Parser

try:
    from ._version import __version__, __version_tuple__  # type: ignore
except ImportError:  # for setuptools-generate
    __version__ = "rolling"
    __version_tuple__ = (0, 0, 0, __version__, "")

language = Language(
    str(next((Path(__file__).parent / "data" / "lib").glob("libparser.*"))),
    "zathurarc",
)
parser = Parser()
parser.set_language(language)
