# vim:ft=automake

ACLOCAL_AMFLAGS = -I m4 -Wall

# includes append to these:
SUFFIXES =
.PHONY =
TESTS =
CLEANFILES =
DISTCLEANFILES =
bin_PROGRAMS =
noinst_HEADERS =
lib_LTLIBRARIES =
man_MANS =
noinst_LTLIBRARIES =
noinst_PROGRAMS =
include_HEADERS =
nobase_include_HEADERS =
check_PROGRAMS =
EXTRA_HEADERS =
BUILT_SOURCES=
EXTRA_DIST=

EXTRA_DIST+= README.md

dist_pkgdata_DATA= AUTHORS COPYING README
aclocaldir= $(datadir)/aclocal
dist_aclocal_DATA=

TESTS+= ${check_PROGRAMS}

include tests/include.am
include m4/include.am
include bin/include.am
