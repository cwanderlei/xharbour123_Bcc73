#
# $Id: common.mak,v 1.3 2008/07/30 14:24:50 marchuet Exp $
#

LIBNAME = $(LIBPREF)hbmzip

LIB_PATH = $(LIB_DIR)$(LIBNAME)$(LIBEXT)

PRG_HEADERS = \
    hbmzip.ch \

LIB_OBJS = \
    $(OBJ_DIR)$(DIR_SEP)ioapi$(OBJEXT) \
    $(OBJ_DIR)$(DIR_SEP)zip$(OBJEXT) \
    $(OBJ_DIR)$(DIR_SEP)unzip$(OBJEXT) \
    $(OBJ_DIR)$(DIR_SEP)hbmzip$(OBJEXT) \

all: \
    $(LIB_PATH) \
