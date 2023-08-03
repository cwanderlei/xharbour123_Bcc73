#
# $Id: Makefile,v 1.2 2004/11/01 05:38:09 likewolf Exp $
#

ROOT = ../../

PRG_HEADERS = \
    pdf.ch \
    pdfhbdoc.ch \


PRG_SOURCES= \
    pdf1.prg  \
    pdfhbdocs.prg 


LIBNAME=pdf
ifeq ($(HB_MT),MT)
  MT_LIBNAME=pdfmt
endif

include $(TOP)$(ROOT)config/header.cf
INSTALL_RULE_HEADERS := $(INSTALL_RULE)
include $(TOP)$(ROOT)config/lib.cf

install::
	$(INSTALL_RULE_HEADERS)
