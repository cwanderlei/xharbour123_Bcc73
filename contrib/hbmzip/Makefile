#
# $Id: Makefile,v 1.1 2008/07/30 10:15:55 marchuet Exp $
#

ROOT = ../../

C_SOURCES =\
	ioapi.c \
	zip.c \
	unzip.c \
	hbmzip.c

PRG_HEADERS=\
	hbmzip.ch

LIBNAME=hbmzip

include $(TOP)$(ROOT)config/header.cf
INSTALL_RULE_HEADERS := $(INSTALL_RULE)
include $(TOP)$(ROOT)config/lib.cf

install::
	$(INSTALL_RULE_HEADERS)
