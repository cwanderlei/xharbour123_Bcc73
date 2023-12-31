/*
   XWT - xHarbour Windowing Toolkit

   (C) 2003 Giancarlo Niccolai

   $Id: image.prg,v 1.4 2003/07/22 16:04:11 xthefull Exp $

   Pane class. A basic void container.
   (Container is an abstract class, and have not a DRV method)
*/

#include "hbclass.ch"
#include "xwt.ch"

CLASS XWTImage FROM XWTWidget
   DATA cFilename
   DATA iStatus

   METHOD New()
   METHOD Load( cFilename )
ENDCLASS

METHOD New( cFilename, oParent ) CLASS XWTImage
   ::Super:New()
   ::nWidgetType := XWT_TYPE_IMAGE
   ::oRawWidget := XWT_Create( Self, XWT_TYPE_IMAGE )

   ::iStatus := XWT_IMG_NOTREADY

   IF .not. Empty( cFilename )
      ::Load( cFilename )
   ENDIF

   IF oParent != NIL
      oParent:Add( Self )
   ENDIF

RETURN Self

METHOD Load( cFilename ) CLASS XWTImage
   LOCAL bRet := XWT_SetProperty( ::oRawWidget, XWT_PROP_IMAGE, cFilename )
   IF bRet
      ::iStatus := XWT_IMG_READY
   ENDIF
RETURN bRet

