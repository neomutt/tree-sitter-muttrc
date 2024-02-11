r"""Tree sitter
===============
"""

import os
import sysconfig

from tree_sitter import Language, Parser

from . import __name__ as NAME

NAME = NAME.split("_")[-1]
DLL = sysconfig.get_config_var("SHLIB_SUFFIX")
if DLL is None:
    DLL = ".dll"

try:
    from ._version import __version__, __version_tuple__  # type: ignore
except ImportError:  # for setuptools-generate
    __version__ = "rolling"
    __version_tuple__ = (0, 0, 0, __version__, "")

paths = [
    os.path.join(
        os.path.join(
            os.path.join(sysconfig.get_path("data", scheme), "lib"), "parser"
        ),
        NAME + DLL,
    )
    for scheme in [
        sysconfig.get_preferred_scheme("user"),
        sysconfig.get_default_scheme(),
    ]
]
for path in paths:
    if os.path.isfile(path):
        break
else:
    raise FileNotFoundError(paths)
language = Language(path, NAME)
parser = Parser()
parser.set_language(language)
