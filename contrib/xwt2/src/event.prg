/*
   XWT - xHarbour Windowing Toolkit

   (C) 2003 Giancarlo Niccolai

   $Id: event.prg,v 1.1 2004/05/11 14:57:50 jonnymind Exp $

   Event class
*/

#include "hbclass.ch"

CLASS XWTEvent
   DATA cType
   DATA oSender
   DATA aParams

   Method New( cType, oEmitter, aParams)
ENDCLASS

METHOD New( cType, oSender, aParams ) CLASS XWTEvent
   ::cType := cType
   ::oSender := oSender
   IF .not. Empty( aParams )
      ::aParams := aParams
   ELSE
      ::aParams := {}
   ENDIF
RETURN Self


