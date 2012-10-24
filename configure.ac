#!/usr/bin/env bash
# DDM4
# Copyright (C) 2012 Data Differential, http://datadifferential.com/
# All rights reserved.
#
# Use and distribution licensed under the BSD license.  See
# the COPYING file in this directory for full text.

AC_INIT([ddm4], [0.1.0], [brian@tangent.org], [ddm4], [https://github.com/TangentOrg/ddm4])

AC_CONFIG_AUX_DIR([build-aux])

AC_CANONICAL_TARGET

AM_INIT_AUTOMAKE([1.11 color-tests -Wno-portability subdir-objects foreign tar-ustar])
AC_PREREQ([2.63])

AC_CANONICAL_HOST
AC_CANONICAL_BUILD

AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_HEADERS([config.h:config.in])dnl Keep filename to 8.3 for MS-DOS.

AC_CONFIG_SRCDIR([bin/cflags.c])

LT_PREREQ([2.2])
LT_INIT
LT_LANG([C++])

AX_PLATFORM
AX_ASSERT

# Checks for programs.
AX_PROG_SPHINX_BUILD

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AX_UUID
AX_LIBEVENT2
AX_ENDIAN
AX_HEX_VERSION([DDm4], [$VERSION])
AX_HARDEN_COMPILER_FLAGS

AC_DEFINE_UNQUOTED([CC], ["$CC"], [Compiler information for CC compiler])
AC_DEFINE_UNQUOTED([CXX], ["$CC"], [Compiler information for CXX compiler])
AC_DEFINE_UNQUOTED([CC_VERSION], ["$CC_VERSION"], [Version information for CC compiler])
AC_DEFINE_UNQUOTED([CXX_VERSION], ["$CXX_VERSION"], [Version information for CXX compiler])
AC_DEFINE_UNQUOTED([CFLAGS], ["$CFLAGS"], [CFLAGS used for compiling binary])
AC_DEFINE_UNQUOTED([CXXFLAGS], ["$CXXFLAGS"], [CXXFLAGS used for compiling binary])

AX_AM_JOBSERVER([yes])

AC_CONFIG_FILES([
  Makefile
  rpm/spec
  version.h
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
echo "   * LIB Flags:                 $LIB"
echo "   * Assertions enabled:        $ax_enable_assert"
echo "   * Debug enabled:             $ax_enable_debug"
echo "   * Warnings as failure:       $ac_cv_warnings_as_errors"
echo "   * libevent:                  $ax_cv_libevent"
echo "   * libevent2:                 $ax_cv_libevent2"
echo "   * uuid/uuid.h:               $ax_uuid"
echo "   * make -j:                   $enable_jobserver"
echo "   * VCS checkout:              $ac_cv_vcs_checkout"
echo ""
echo "---"
