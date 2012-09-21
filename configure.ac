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

AC_CONFIG_SRCDIR([tests/main_cxx.cc])

LT_PREREQ([2.4])
LT_INIT([disable-static])
LT_LANG([C++])

# Checks for programs.

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AX_CXX_COMPILER_VERSION
AX_HARDEN_CC_COMPILER_FLAGS

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
echo "   * Assertions enabled:        $ac_cv_assert"
echo "   * Debug enabled:             $with_debug"
echo "   * Warnings as failure:       $ac_cv_warnings_as_errors"
echo "   * SASL support:              $ac_enable_sasl"
echo ""
echo "---"
