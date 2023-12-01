#!/usr/bin/env python
r"""Setup
=========
"""
from setuptools import setup

from tree_sitter import Language

Language.build_library(
    "build/lib/tree_sitter_zathurarc/data/lib/zathurarc.so", ["."]
)

setup()
