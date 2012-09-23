#!/usr/bin/env bash
# DDM4
# Copyright (C) 2012 Data Differential, http://datadifferential.com/
# All rights reserved.
#
# Use and distribution licensed under the BSD license.  See
# the COPYING file in this directory for full text.

AC_INIT([ddm4], [0.1], [brian@tangent.org])

AC_CONFIG_AUX_DIR([build-aux])

AC_CANONICAL_TARGET

AM_INIT_AUTOMAKE([-Wall -Werror -Wno-portability subdir-objects foreign tar-ustar])
AC_PREREQ([2.63])

AC_CANONICAL_HOST
AC_CANONICAL_BUILD

AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_HEADERS([config.h:config.in])dnl Keep filename to 8.3 for MS-DOS.

AC_CONFIG_SRCDIR([bin/cflags.c])

LT_PREREQ([2.2])
LT_INIT
LT_LANG([C++])

# Checks for programs.

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AX_ASSERT
AX_CXX_COMPILER_VERSION
AX_HARDEN_COMPILER_FLAGS

AC_DEFINE_UNQUOTED([CC], ["$CC"], [Compiler information for CC compiler])
AC_DEFINE_UNQUOTED([CXX], ["$CC"], [Compiler information for CXX compiler])
AC_DEFINE_UNQUOTED([CC_VERSION], ["$CC_VERSION"], [Version information for CC compiler])
AC_DEFINE_UNQUOTED([CXX_VERSION], ["$CXX_VERSION"], [Version information for CXX compiler])
AC_DEFINE_UNQUOTED([CFLAGS], ["$CFLAGS"], [CFLAGS used for compiling binary])
AC_DEFINE_UNQUOTED([CXXFLAGS], ["$CXXFLAGS"], [CXXFLAGS used for compiling binary])

AC_CONFIG_FILES([
  Makefile
  ])

AC_OUTPUT

echo "---"
echo "Configuration summary for $PACKAGE_NAME version $VERSION"
echo ""
echo "   * Installation prefix:       $prefix"
echo "   * System type:               $host_vendor-$host_os"
echo "   * Host CPU:                  $host_cpu"
echo "   * C Compiler:                $CC_VERSION"
echo "   * C Flags:                   $CFLAGS"
echo "   * C++ Compiler:              $CXX_VERSION"
echo "   * C++ Flags:                 $CXXFLAGS"
echo "   * CPP Flags:                 $CPPFLAGS"
echo "   * Assertions enabled:        $ax_enable_assert"
echo "   * Debug enabled:             $ax_enable_debug"
echo "   * Warnings as failure:       $ac_cv_warnings_as_errors"
echo ""
echo "---"
