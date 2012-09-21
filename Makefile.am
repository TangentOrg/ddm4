# vim:ft=automake

ACLOCAL_AMFLAGS = -I m4

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

dist_pkgdata_DATA= AUTHORS COPYING README
aclocaldir= $(datadir)/aclocal
dist_aclocal_DATA=

maintainer-clean-local:
	@rm -f Makefile.in aclocal.m4
	@rm -f config.log config.status
	@rm -f ddm4-*.*.tar.* 

TESTS+= ${check_PROGRAMS}

include tests/include.am
include m4/include.m4

