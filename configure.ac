#!/usr/bin/env bash
# DDM4
# Copyright (C) 2012 Data Differential, http://datadifferential.com/
# All rights reserved.
#
# Use and distribution licensed under the BSD license.  See
# the COPYING file in this directory for full text.

AC_COPYRIGHT([Data Differential, http://datadifferential.com/])
#AC_REVISION([m4_esyscmd_s([git describe --always])])

AC_INIT([ddm4],[0.1.0],[brian@tangent.org],[ddm4],[https://github.com/TangentOrg/ddm4])

AC_CONFIG_AUX_DIR([build-aux])

AC_CANONICAL_TARGET

AM_INIT_AUTOMAKE([1.11 color-tests -Wno-portability subdir-objects foreign tar-ustar])
AC_PREREQ([2.63])

AC_PREREQ([2.63])
AC_ARG_PROGRAM
AC_DEFUN([PROTECT_AC_USE_SYSTEM_EXTENSIONS],
         [AX_SAVE_FLAGS
          AC_LANG_PUSH([C++])
          AC_USE_SYSTEM_EXTENSIONS
          AC_LANG_POP([C++])
          AX_RESTORE_FLAGS
          ])
PROTECT_AC_USE_SYSTEM_EXTENSIONS

AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_HEADERS([config.h:config.in])dnl Keep filename to 8.3 for MS-DOS.

AC_CONFIG_SRCDIR([bin/cflags.c])

LT_PREREQ([2.2])
LT_INIT
LT_LANG([C++])

AX_PLATFORM
AX_ASSERT

AC_DEFUN([CHECK_FOR_MINGW],
         [AC_REQUIRE([AX_PLATFORM])
         AS_IF([test "x${TARGET_WINDOWS}" == "xtrue"],
               [AX_APPEND_LINK_FLAGS([-static-libstdc++],[LDFLAGS])
               AX_APPEND_LINK_FLAGS([-lmingw64],[LIBS])
               AX_APPEND_LINK_FLAGS([-lssp],[LIBS])
               ])
         ])
CHECK_FOR_MINGW

# Checks for programs.
AC_CHECK_PROGS([VALGRIND],['valgrind'])
AC_CHECK_PROGS([WINE],['wine'])
AX_PROG_SPHINX_BUILD

# Checks for libraries.
AX_CXX_GCC_ABI_DEMANGLE

# Checks for header files.
#  We use the header to cross test our m4 rules that also test
AC_DEFUN([CHECK_FOR_CXXABI],
         [AC_REQUIRE([AX_PLATFORM])
         AC_LANG_PUSH([C++])
         AS_IF([test "x${TARGET_WINDOWS}" != "xtrue"],
               [AC_CHECK_HEADERS([cxxabi.h])])
         AC_LANG_POP
         ])
CHECK_FOR_CXXABI

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AX_PTHREAD_TIMEDJOIN_NP

AX_UUID
AX_LIBEVENT2
AX_ENDIAN
AX_HEX_VERSION([DDm4],[$VERSION])
AX_HARDEN_COMPILER_FLAGS

AC_DEFINE_UNQUOTED([C_COMPILER_VENDOR],["$ax_cv_c_compiler_vendor"],[Compiler vendor])
AC_DEFINE_UNQUOTED([CXX_COMPILER_VENDOR],["$ax_cv_cxx_compiler_vendor"],[Compiler vendor])
AC_DEFINE_UNQUOTED([CC],["$CC"],[Compiler information for CC compiler])
AC_DEFINE_UNQUOTED([CXX],["$CXX"],[Compiler information for CXX compiler])
AC_DEFINE_UNQUOTED([CC_VERSION],["$CC_VERSION"],[Version information for CC compiler])
AC_DEFINE_UNQUOTED([CXX_VERSION],["$CXX_VERSION"],[Version information for CXX compiler])
AC_DEFINE_UNQUOTED([CFLAGS],["$CFLAGS"],[CFLAGS used for compiling binary])
AC_DEFINE_UNQUOTED([CXXFLAGS],["$CXXFLAGS"],[CXXFLAGS used for compiling binary])

AX_AM_JOBSERVER([yes])

AC_CONFIG_FILES([Makefile
                 docs/conf.py
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
echo "   * Compiler Vendor:           $ax_cv_c_compiler_vendor"
echo "   * C Compiler:                $CC"
echo "   * C Compiler Version:        $ax_c_compiler_version"
echo "   * C Flags:                   $CFLAGS"
echo "   * C++ Compiler:              $CXX"
echo "   * C++ Version:               $ax_cxx_compiler_version"
echo "   * C++ Flags:                 $CXXFLAGS"
echo "   * CPP Flags:                 $CPPFLAGS"
echo "   * LIBS Flags:                $LIBS"
echo "   * LDFLAGS Flags:             $LDFLAGS"
echo "   * Assertions enabled:        $ax_enable_assert"
echo "   * Debug enabled:             $ax_enable_debug"
echo "   * Warnings as failure:       $ac_cv_warnings_as_errors"
echo "   * libevent:                  $ax_cv_libevent"
echo "   * libevent2:                 $ax_cv_libevent2"
echo "   * uuid/uuid.h:               $ax_libuuid"
echo "   * make -j:                   $enable_jobserver"
echo "   * VCS checkout:              $ac_cv_vcs_system"
echo ""
echo "---"
