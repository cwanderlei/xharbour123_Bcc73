
// What32.Lib
// DateTimePicker functions

#define HB_OS_WIN_32_USED
#define _WIN32_WINNT   0x0400

#include <windows.h>
#include <shlobj.h>
//#include <commctrl.h>

#include "hbapi.h"
#include "hbvm.h"
#include "hbstack.h"
#include "hbapiitm.h"
#include "winreg.h"
#include "tchar.h"

#ifdef __DMC__
#define GDT_VALID           0
#define DTM_FIRST           0x1000
#define DTM_GETMONTHCAL     (DTM_FIRST + 8)
#define DTM_GETMCCOLOR      (DTM_FIRST + 7)
#define DTM_SETMCFONT       (DTM_FIRST + 9)
#define DTM_GETRANGE        (DTM_FIRST + 3)
#define DTM_SETSYSTEMTIME   (DTM_FIRST + 2)
#define DTM_GETSYSTEMTIME   (DTM_FIRST + 1)
#define DTM_GETMCFONT       (DTM_FIRST + 10)
#define DTM_SETFORMAT       (DTM_FIRST + 5)
#define DTM_SETMCCOLOR      (DTM_FIRST + 6)
#define DateTime_GetMonthCalColor(hdp, iColor) SNDMSG(hdp, DTM_GETMCCOLOR, iColor, 0)
#define DateTime_GetMonthCal(hdp) (HWND)SNDMSG(hdp, DTM_GETMONTHCAL, 0, 0)
#define DateTime_SetMonthCalFont(hdp, hfont, fRedraw) SNDMSG(hdp, DTM_SETMCFONT, (WPARAM)(hfont), (LPARAM)(fRedraw))
#define DateTime_GetRange(hdp, rgst)  (DWORD)SNDMSG(hdp, DTM_GETRANGE, 0, (LPARAM)(rgst))
#define DateTime_SetSystemtime(hdp, gd, pst)    (BOOL)SNDMSG(hdp, DTM_SETSYSTEMTIME, (WPARAM)(gd), (LPARAM)(pst))
#define DateTime_GetSystemtime(hdp, pst)    (DWORD)SNDMSG(hdp, DTM_GETSYSTEMTIME, 0, (LPARAM)(pst))
#define DateTime_SetMonthCalFont(hdp, hfont, fRedraw) SNDMSG(hdp, DTM_SETMCFONT, (WPARAM)(hfont), (LPARAM)(fRedraw))
#define DateTime_GetMonthCalFont(hdp) SNDMSG(hdp, DTM_GETMCFONT, 0, 0)
#define DateTime_SetSystemtime(hdp, gd, pst)    (BOOL)SNDMSG(hdp, DTM_SETSYSTEMTIME, (WPARAM)(gd), (LPARAM)(pst))
#define DateTime_SetFormat(hdp, sz)  (BOOL)SNDMSG(hdp, DTM_SETFORMAT, 0, (LPARAM)(sz))
#define DateTime_SetMonthCalColor(hdp, iColor, clr) SNDMSG(hdp, DTM_SETMCCOLOR, iColor, clr)
#endif

//-----------------------------------------------------------------------------

// SYNTAX:
// DatePicker_Create( nExStyle, nStyle, x, y, nWidth, nHeight, hWndParent, nId ) --> hDTP

HB_FUNC( DATETIME_CREATE )
{

   hb_retnl( (LONG) CreateWindowEx( ISNIL( 1 ) ? 0 : hb_parnl( 1 ) ,
                                    "SysDateTimePick32"   ,   // CLASSNAME
                                    0                     ,   // Window Name   // ????????
                                    (DWORD) hb_parnl( 2 ) ,   // nStyle
                                    hb_parni( 3 )         ,   // x
                                    hb_parni( 4 )         ,   // y
                                    hb_parni( 5 )         ,   // nWidth
                                    hb_parni( 6 )         ,   // nHeight
                                    (HWND) hb_parnl( 7 )  ,   // hParent
                                    (HMENU) hb_parni( 8 ) ,   // hMenu
                                    GetModuleHandle(NULL) ,   // hInstance
                                    ISNIL( 9 ) ? NULL : (void *) hb_parnl( 9 ) ) ) ;   // lpParam
}

//-----------------------------------------------------------------------------


// Retrieves the handle to a date and time picker's (DTP) child month calendar control.
// You can use this macro or send the DTM_GETMONTHCAL message explicitly.
//
// SYNTAX:
// DateTime_GetMonthCal( hWnd ) --> hDTP
//
// #define DateTime_GetMonthCal(hdp) (HWND)SNDMSG(hdp, DTM_GETMONTHCAL, 0, 0)

HB_FUNC( DATETIME_GETMONTHCAL )
{

   hb_retnl( (LONG) DateTime_GetMonthCal(
                                            (HWND) hb_parnl( 1 )  // Handle to a DTP control
                                          ) );
}

//-----------------------------------------------------------------------------

// Retrieves the color for a given portion of the month calendar within a date and time
// picker (DTP) control. You can use this macro or send the DTM_GETMCCOLOR message explicitly
//
// SYNTAX:
// DateTime_GetMonthCalColor( hWndDP, nColor ) --> nCOLORREF
//
// #define DateTime_GetMonthCalColor(hdp, iColor) SNDMSG(hdp, DTM_GETMCCOLOR, iColor, 0)

HB_FUNC( DATETIME_GETMONTHCALCOLOR )
{

   hb_retnl( (LONG) DateTime_GetMonthCalColor(
                                            (HWND) hb_parnl( 1 ),  // Handle to a DTP control
                                                   hb_parni( 2 )   // Value of type int specifying which month calendar color to retrieve.

                                             ) );
}

//-----------------------------------------------------------------------------

// Retrieves the font that the date and time picker (DTP) control's child month calendar
// control is currently using. You can use this macro or send the DTM_GETMCFONT message explicitly
//
// SYNTAX:
// DateTime_GetMonthCalFont( hWndDP ) --> hFont
//
// #define DateTime_GetMonthCalFont(hdp) SNDMSG(hdp, DTM_GETMCFONT, 0, 0)

HB_FUNC( DATETIME_GETMONTHCALFONT )
{

   hb_retnl( (LONG) DateTime_GetMonthCalFont(
                                            (HWND) hb_parnl( 1 )   // Handle to a DTP control
                                             ) );
}

//-----------------------------------------------------------------------------

// #define DateTime_GetRange(hdp, rgst)  (DWORD)SNDMSG(hdp, DTM_GETRANGE, 0, (LPARAM)(rgst))
//
// Retrieves the current minimum and maximum allowable system times for a date and time picker
// (DTP) control. You can use this macro, or send the DTM_GETRANGE message explicitly
//
// SYNTAX:
// DateTime_GetRange( hWndDP ) --> aMinMaxDate
//
//

HB_FUNC( DATETIME_GETRANGE )
{
   LPSYSTEMTIME lpSysTimeArray = (SYSTEMTIME *) hb_xgrab( 2 * sizeof(SYSTEMTIME)) ;
   PHB_ITEM aMinMaxDate, aMinDate, aMaxDate ;
   PHB_ITEM temp ;
   DWORD dwRet ;

   dwRet = DateTime_GetRange( (HWND) hb_parnl( 1 ), (SYSTEMTIME *)lpSysTimeArray ) ;

   if ( ISBYREF(2) )
      hb_stornl(dwRet,2);


   aMinMaxDate = hb_itemArrayNew( 2 ) ;
   aMinDate    = hb_itemArrayNew( 8 ) ;

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wYear );
       hb_arraySet( aMinDate, 1, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wMonth );
       hb_arraySet( aMinDate, 2, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wDayOfWeek );
       hb_arraySet( aMinDate, 3, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wDay );
       hb_arraySet( aMinDate, 4, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wHour );
       hb_arraySet( aMinDate, 5, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wMinute );
       hb_arraySet( aMinDate, 6, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wSecond );
       hb_arraySet( aMinDate, 7, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[0].wMilliseconds );
       hb_arraySet( aMinDate, 8, temp );
       hb_itemRelease( temp );

   hb_arraySet( aMinMaxDate, 1, aMinDate );


   aMaxDate    = hb_itemArrayNew( 8 ) ;

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wYear );
       hb_arraySet( aMaxDate, 1, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wMonth );
       hb_arraySet( aMaxDate, 2, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wDayOfWeek );
       hb_arraySet( aMaxDate, 3, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wDay );
       hb_arraySet( aMaxDate, 4, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wHour );
       hb_arraySet( aMaxDate, 5, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wMinute );
       hb_arraySet( aMaxDate, 6, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wSecond );
       hb_arraySet( aMaxDate, 7, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, lpSysTimeArray[1].wMilliseconds );
       hb_arraySet( aMaxDate, 8, temp );
       hb_itemRelease( temp );

   hb_arraySet( aMinMaxDate, 2, aMaxDate );

   hb_itemReturn( aMinMaxDate );
   hb_itemRelease( aMinMaxDate );
   hb_itemRelease( aMinDate );
   hb_itemRelease( aMaxDate );
   hb_xfree(lpSysTimeArray);

}

//-----------------------------------------------------------------------------

// #define DateTime_GetSystemtime(hdp, pst)    (DWORD)SNDMSG(hdp, DTM_GETSYSTEMTIME, 0, (LPARAM)(pst))
//
// Retrieves the currently selected time from a date and time picker (DTP)
// control and places it in a specified SYSTEMTIME structure.
// You can use this macro, or send the DTM_GETSYSTEMTIME message explicitly.
//
// SYNTAX:
// DateTime_GetSystemtime( hWndDP ) --> aSystemTime
//
//

HB_FUNC( DATETIME_GETSYSTEMTIME )
{
   SYSTEMTIME SysTime ;
   PHB_ITEM aSysTime ;
   PHB_ITEM temp ;
   long nRet;


   nRet = DateTime_GetSystemtime(
                      (HWND) hb_parnl( 1 ),   // Handle to a DTP control
                      &SysTime              // Pointer to a SYSTEMTIME structure. If DTM_GETSYSTEMTIME returns
                                              // GDT_VALID, this structure will contain the system time.
                                              // Otherwise, it will not contain valid information.
                                              // This parameter must be a valid pointer; it cannot be NULL.
                                );

   if (nRet == GDT_VALID)  // Time is valid
   {
       aSysTime = hb_itemArrayNew( 8 ) ;

       temp = hb_itemPutNL( NULL, SysTime.wYear );
       hb_arraySet( aSysTime, 1, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wMonth );
       hb_arraySet( aSysTime, 2, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wDayOfWeek );
       hb_arraySet( aSysTime, 3, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wDay );
       hb_arraySet( aSysTime, 4, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wHour );
       hb_arraySet( aSysTime, 5, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wMinute );
       hb_arraySet( aSysTime, 6, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wSecond );
       hb_arraySet( aSysTime, 7, temp );
       hb_itemRelease( temp );

       temp = hb_itemPutNL( NULL, SysTime.wMilliseconds );
       hb_arraySet( aSysTime, 8, temp );
       hb_itemRelease( temp );

       hb_itemReturn( aSysTime );
       hb_itemRelease( aSysTime );
   }

}

//-----------------------------------------------------------------------------

// #define DateTime_SetFormat(hdp, sz)  (BOOL)SNDMSG(hdp, DTM_SETFORMAT, 0, (LPARAM)(sz))
//
// Sets the display of a date and time picker (DTP) control based on a
// given format string. You can use this macro or send the DTM_SETFORMAT
// message explicitly.
//
// SYNTAX:
// DateTime_SetFormat( hWndDP, cFormat ) --> lOk
//
//

HB_FUNC( DATETIME_SETFORMAT )
{
   hb_retl( DateTime_SetFormat(
                      (HWND) hb_parnl( 1 ),   // Handle to a DTP control
                   (LPCTSTR) hb_parcx( 2 )     // Pointer to a zero-terminated format string that defines
                                              // the desired display. Setting this parameter to NULL will
                                              // reset the control to the default format string for the current style.
                          )  );
}

//-----------------------------------------------------------------------------

// #define DateTime_SetMonthCalColor(hdp, iColor, clr) SNDMSG(hdp, DTM_SETMCCOLOR, iColor, clr)
//
// Sets the color for a given portion of the month calendar within a date
// and time picker (DTP) control. You can use this macro or send the DTM_SETMCCOLOR
// message explicitly.
//
// SYNTAX:
// DateTime_SetMonthCalColor( hWndDP, iColor, nColorRef ) --> nOldColorRef
//
//

HB_FUNC( DATETIME_SETMONTHCALCOLOR )
{
   hb_retnl( (LONG) DateTime_SetMonthCalColor(
                      (HWND) hb_parnl( 1 ),   // Handle to a DTP control
                             hb_parni( 2 ),   // Value of type int specifying which month calendar color to set.
                  (COLORREF) hb_parnl( 3 )    // COLORREF value that represents the color that will be set for the specified area of the month calendar.
                                    )  );
}

//-----------------------------------------------------------------------------

// #define DateTime_SetMonthCalFont(hdp, hfont, fRedraw) SNDMSG(hdp, DTM_SETMCFONT, (WPARAM)(hfont), (LPARAM)(fRedraw))
//
// Sets the font to be used by the date and time picker (DTP) control's child
// month calendar control. You can use this macro or explicitly send the DTM_SETMCFONT message.
//
// SYNTAX:
// DateTime_SetMonthCalFont( hWndDP, hFont, lRedraw ) --> NIL
//
//

HB_FUNC( DATETIME_SETMONTHCALFONT )
{

   DateTime_SetMonthCalFont(
                      (HWND) hb_parnl( 1 ),   // Handle to a DTP control
                     (HFONT) hb_parnl( 2 ),   // Handle to the font that will be set.
                      (BOOL) hb_parl( 3 )     // Specifies whether the control should be redrawn
                                              // immediately upon setting the font. Setting this
                                              // parameter to TRUE causes the control to redraw itself.
                           );

}

//-----------------------------------------------------------------------------

// #define DateTime_SetSystemtime(hdp, gd, pst)    (BOOL)SNDMSG(hdp, DTM_SETSYSTEMTIME, (WPARAM)(gd), (LPARAM)(pst))
//
// Sets a date and time picker (DTP) control to a given date and time.
// You can use this macro or send the DTM_SETSYSTEMTIME message explicitly.
//
// SYNTAX:
// DateTime_SetSystemtime( hWndDP, nFlag, aSystemTime ) --> lOk
// or
// DateTime_SetSystemTime( hWndDP, nFlag, SYSTEMTIME.value ) -> lSuccess
//
//

HB_FUNC( DATETIME_SETSYSTEMTIME )
{
   SYSTEMTIME SysTime, *lpSysTime ;

   if ( ISARRAY( 3 ) ) // array
   {
      SysTime.wYear         = (WORD)  hb_parnl( 3, 1 );
      SysTime.wMonth        = (WORD)  hb_parnl( 3, 2 );
      SysTime.wDayOfWeek    = (WORD)  hb_parnl( 3, 3 );
      SysTime.wDay          = (WORD)  hb_parnl( 3, 4 );
      SysTime.wHour         = (WORD)  hb_parnl( 3, 5 );
      SysTime.wMinute       = (WORD)  hb_parnl( 3, 6 );
      SysTime.wSecond       = (WORD)  hb_parnl( 3, 7 );
      SysTime.wMilliseconds = (WORD)  hb_parnl( 3, 8 );
      lpSysTime = &SysTime;
   }
   else
   {
     if ( ISCHAR(2) )  // xHarbour structure
     {
        lpSysTime =( SYSTEMTIME *) hb_param( 3, HB_IT_STRING)->item.asString.value;
     }
     else
     {
      hb_retl(0);
      return;
     }
   }

   hb_retl( DateTime_SetSystemtime(
                      (HWND) hb_parnl( 1 ) ,   // Handle to a DTP control
                      (DWORD) hb_parnl( 2 ),   // Value that specifies the action that should be performed.
                      lpSysTime                // Pointer to SYSTEMTIME structures
                               ) );
}

