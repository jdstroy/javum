## Makefile.am for texinfo.
## $Id: Makefile.am,v 1.6 1999/01/21 10:39:10 gerald Exp $
## Process this file with automake to produce Makefile.in in all directories.

# Be sure we're using the right version of Automake.
# 1.2f was the first version that supported .txi as a Texinfo suffix.
AUTOMAKE_OPTIONS = 1.2f

# Additional files to distribute.
EXTRA_DIST = INTRODUCTION dir-example

# All subdirectories.
# Do intl/ and lib/ first since the C programs depend on them.
# Do doc/ last so makeinfo will be built when we get there.
# Others are alphabetical.
SUBDIRS = intl lib info makeinfo po util doc
# ??? For EGCS, only build the stuff we actually need.  This eliminates the
# need for xgettext that exists in the po subdirectory.  We do need util in
# order to get install-info, which is used as part of the gcc build/install
# process.
SUBDIRS = intl lib makeinfo util
