cmake_minimum_required(VERSION 3.10)
string(REGEX MATCH [[[0-9](\.[0-9])*]] VERSION "$ENV{GITHUB_REF_NAME}")
if(NOT VERSION)
  set(VERSION 0.0.0.0)
endif()
set(HOMEPAGE_URL https://github.com/Freed-Wu/tree-sitter-zathurarc)
project(
  tree-sitter-zathurarc
  VERSION ${VERSION}
  DESCRIPTION tree-sitter-zathurarc
  HOMEPAGE_URL ${HOMEPAGE_URL})
include_directories(src)
add_library(parser SHARED src/parser.c)
if(NOT DEFINED SKBUILD_PLATLIB_DIR)
  set(SKBUILD_PLATLIB_DIR ${CMAKE_SOURCE_DIR}/bindings/python)
endif()
set(CMAKE_INSTALL_LIBDIR ${SKBUILD_PLATLIB_DIR}/tree_sitter_zathurarc/data/lib)
install(TARGETS parser RUNTIME)

set(CPACK_PACKAGE_CONTACT ${HOMEPAGE_URL}/issues)
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Wu Zhenyu <wuzhenyu@ustc.edu>")
set(CPACK_RPM_PACKAGE_LICENSE GPL3)
set(CPACK_RPM_PACKAGE_URL ${HOMEPAGE_URL})
include(CPack)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set(CPACK_ARCHIVE_THREADS 0)
set(CPACK_THREADS 0)
