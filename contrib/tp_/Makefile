#
# $Id: Makefile,v 1.4 2005/10/13 10:45:46 mauriliolongo Exp $
#

ROOT = ../../

ifneq ($(HB_ARCHITECTURE),dos)

ifeq ($(HB_ARCHITECTURE),linux)
C_SOURCES=\
	linux.c
else
C_SOURCES=\
	os2.c
endif

PRG_SOURCES=\
        telepath.prg

LIBNAME=telepath

include $(TOP)$(ROOT)config/lib.cf

endif

