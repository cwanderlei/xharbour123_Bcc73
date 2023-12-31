/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\hmonthc.prg>
 * Command: -oxbp\hmonthc.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\hmonthc.prg 
 * Created: 2020.09.03 14:41:26 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\hmonthc.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HMONTHCALENDAR );
HB_FUNC_STATIC( HMONTHCALENDAR_NEW );
HB_FUNC_STATIC( HMONTHCALENDAR_ACTIVATE );
HB_FUNC_STATIC( HMONTHCALENDAR_INIT );
HB_FUNC_STATIC( HMONTHCALENDAR_SETVALUE );
HB_FUNC_STATIC( HMONTHCALENDAR_GETVALUE );
HB_FUNC_STATIC( HMONTHCALENDAR_ONCHANGE );
HB_FUNC_STATIC( HMONTHCALENDAR_ONSELECT );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HWG_INITCOMMONCONTROLSEX );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( MAKELPARAM );

/* Forward declarations of all DUMP defined Functions. */
HB_FUNC( INITMONTHCALENDAR );
HB_FUNC( SETMONTHCALENDARDATE );
HB_FUNC( GETMONTHCALENDARDATE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HMONTHC )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HMONTHCALENDAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HMONTHCALENDAR_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_NEW )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_ACTIVATE )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_INIT )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_SETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_SETVALUE )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_GETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_GETVALUE )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_ONCHANGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_ONCHANGE )}, &ModuleFakeDyn },
{ "HMONTHCALENDAR_ONSELECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HMONTHCALENDAR_ONSELECT )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HWG_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITOR )}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_VALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "_BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BSELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_INITCOMMONCONTROLSEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITCOMMONCONTROLSEX )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INITMONTHCALENDAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INITMONTHCALENDAR )}, &ModuleFakeDyn },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETMONTHCALENDARDATE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETMONTHCALENDARDATE )}, &ModuleFakeDyn },
{ "ADDEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ONSELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ONCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETMONTHCALENDARDATE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETMONTHCALENDARDATE )}, &ModuleFakeDyn },
{ "BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LSUSPENDMSGSHANDLING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "MAKELPARAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAKELPARAM )}, NULL },
{ "_LSUSPENDMSGSHANDLING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BSELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HMONTHC, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HMONTHC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HMONTHC )
   #include "hbiniseg.h"
#endif

HB_FUNC( HMONTHCALENDAR )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,60,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,171,1,48,2,0,108,3,100,12,
	0,106,15,72,77,111,110,116,104,67,97,108,101,110,
	100,97,114,0,48,4,0,108,5,100,12,0,112,0,
	4,1,0,112,2,82,1,0,133,27,0,48,6,0,
	103,1,0,100,106,14,83,121,115,77,111,110,116,104,
	67,97,108,51,50,0,95,2,106,9,119,105,110,99,
	108,97,115,115,0,4,1,0,9,112,5,73,134,2,
	48,7,0,103,1,0,100,100,95,2,106,6,118,97,
	108,117,101,0,4,1,0,9,9,112,6,73,134,3,
	48,7,0,103,1,0,100,100,95,2,106,8,98,67,
	104,97,110,103,101,0,4,1,0,9,9,112,6,73,
	134,4,48,7,0,103,1,0,100,100,95,2,106,8,
	98,83,101,108,101,99,116,0,4,1,0,9,9,112,
	6,73,134,8,48,8,0,103,1,0,106,4,78,101,
	119,0,108,9,14,95,2,9,112,4,73,134,9,48,
	8,0,103,1,0,106,9,65,99,116,105,118,97,116,
	101,0,108,10,14,95,2,9,112,4,73,134,10,48,
	8,0,103,1,0,106,5,73,110,105,116,0,108,11,
	14,95,2,9,112,4,73,134,11,48,8,0,103,1,
	0,106,9,83,101,116,86,97,108,117,101,0,108,12,
	14,95,2,9,112,4,73,134,12,48,8,0,103,1,
	0,106,9,71,101,116,86,97,108,117,101,0,108,13,
	14,95,2,9,112,4,73,134,13,48,8,0,103,1,
	0,106,9,111,110,67,104,97,110,103,101,0,108,14,
	14,95,2,9,112,4,73,134,14,48,8,0,103,1,
	0,106,9,111,110,83,101,108,101,99,116,0,108,15,
	14,95,2,9,112,4,73,48,19,0,103,1,0,112,
	0,73,108,20,100,48,17,0,103,1,0,112,0,12,
	1,80,1,108,21,100,95,1,106,10,73,110,105,116,
	67,108,97,115,115,0,12,2,28,32,48,22,0,95,
	1,108,23,100,12,0,112,1,73,25,17,108,20,100,
	48,17,0,103,1,0,112,0,12,1,80,1,108,24,
	100,12,0,121,15,28,10,103,1,0,108,0,14,121,
	178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,16,102,80,17,133,52,0,108,25,100,95,4,
	100,8,28,5,121,25,4,95,4,121,12,2,80,4,
	134,1,95,13,100,8,21,31,6,73,95,13,68,28,
	5,121,25,4,92,16,167,4,134,2,95,14,100,8,
	21,31,6,73,95,14,68,28,5,121,25,4,92,8,
	167,4,134,3,95,15,100,8,21,31,6,73,95,15,
	68,28,5,121,25,4,92,4,167,4,134,5,48,2,
	0,48,26,0,95,17,112,0,95,1,95,2,95,4,
	95,5,95,6,95,7,95,8,95,9,95,10,100,100,
	95,12,112,12,73,134,7,48,27,0,95,17,9,108,
	28,100,95,3,12,1,106,2,68,0,8,28,11,73,
	108,29,100,95,3,12,1,68,28,6,95,3,25,7,
	108,30,100,12,0,112,1,73,134,9,48,31,0,95,
	17,95,11,112,1,73,134,10,48,32,0,95,17,95,
	16,112,1,73,134,12,108,33,100,20,0,134,21,48,
	34,0,95,17,112,0,73,134,22,95,17,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,80,0,108,29,100,48,35,
	0,48,36,0,95,1,112,0,112,0,12,1,31,81,
	134,2,48,37,0,95,1,108,38,100,48,35,0,48,
	36,0,95,1,112,0,112,0,48,39,0,95,1,112,
	0,48,40,0,95,1,112,0,48,41,0,95,1,112,
	0,48,42,0,95,1,112,0,48,43,0,95,1,112,
	0,48,44,0,95,1,112,0,12,7,112,1,73,134,
	3,48,45,0,95,1,112,0,73,134,6,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,92,0,48,46,0,95,1,
	112,0,32,153,0,134,1,48,45,0,48,26,0,95,
	1,112,0,112,0,73,134,2,108,29,100,48,47,0,
	95,1,112,0,12,1,31,23,134,3,108,48,100,48,
	35,0,95,1,112,0,48,47,0,95,1,112,0,20,
	2,134,5,48,49,0,48,36,0,95,1,112,0,93,
	22,253,95,1,89,17,0,1,0,1,0,1,0,48,
	50,0,95,255,112,0,6,120,106,9,111,110,83,101,
	108,101,99,116,0,112,5,73,134,6,48,49,0,48,
	36,0,95,1,112,0,93,19,253,95,1,89,17,0,
	1,0,1,0,1,0,48,51,0,95,255,112,0,6,
	120,106,9,111,110,67,104,97,110,103,101,0,112,5,
	73,134,10,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_SETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,108,0,9,108,28,100,95,
	1,12,1,106,2,68,0,8,28,11,73,108,29,100,
	95,1,12,1,68,28,30,134,1,108,48,100,48,35,
	0,95,2,112,0,95,1,20,2,134,2,48,27,0,
	95,2,95,1,112,1,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_GETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,119,0,48,27,0,95,1,
	108,52,100,48,35,0,95,1,112,0,12,1,112,1,
	73,134,2,48,47,0,95,1,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_ONCHANGE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,125,0,9,48,53,0,95,
	1,112,0,100,69,28,16,73,48,54,0,48,36,0,
	95,1,112,0,112,0,68,28,83,134,1,108,55,100,
	48,35,0,95,1,112,0,93,1,2,121,108,56,100,
	122,122,12,2,20,4,134,2,48,57,0,48,36,0,
	95,1,112,0,120,112,1,73,134,3,48,58,0,48,
	53,0,95,1,112,0,48,47,0,95,1,112,0,95,
	1,112,2,73,134,4,48,57,0,48,36,0,95,1,
	112,0,9,112,1,73,134,7,121,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HMONTHCALENDAR_ONSELECT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,136,0,9,48,59,0,95,
	1,112,0,100,69,28,16,73,48,54,0,48,36,0,
	95,1,112,0,112,0,68,28,58,134,1,48,57,0,
	48,36,0,95,1,112,0,120,112,1,73,134,2,48,
	58,0,48,59,0,95,1,112,0,48,47,0,95,1,
	112,0,95,1,112,2,73,134,3,48,57,0,48,36,
	0,95,1,112,0,9,112,1,73,134,6,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,60,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

#line 147 "\\hwgui\\source\\hmonthc.prg"

#include "hwingui.h"
#include <commctrl.h>
#include "hbapiitm.h"
#include "hbdate.h"
#if defined(__DMC__)
#include "missing.h"
#endif

HB_FUNC ( INITMONTHCALENDAR )
{
   HWND hMC;
   RECT rc;

   hMC = CreateWindowEx( 0,
                         MONTHCAL_CLASS,
                         TEXT( "" ),
                         (LONG) hb_parnl(3), /* 0,0,0,0, */
                         hb_parni(4), hb_parni(5),      /* x, y       */
                         hb_parni(6), hb_parni(7),      /* nWidth, nHeight */
                         (HWND) HB_PARHANDLE(1),
                         (HMENU) hb_parni(2),
                         GetModuleHandle(NULL),
                         NULL );

   MonthCal_GetMinReqRect( hMC, &rc );

   //SetWindowPos( hMC, NULL, hb_parni(4), hb_parni(5), rc.right, rc.bottom, SWP_NOZORDER );
   SetWindowPos( hMC, NULL, hb_parni(4), hb_parni(5), hb_parni(6),hb_parni(7), SWP_NOZORDER );

    HB_RETHANDLE(  hMC );
}

HB_FUNC ( SETMONTHCALENDARDATE ) // adaptation of function SetDatePicker of file Control.c
{
   PHB_ITEM pDate = hb_param( 2, HB_IT_DATE );

   if( pDate )
   {
      SYSTEMTIME sysTime;
      #ifndef HARBOUR_OLD_VERSION
      int lYear, lMonth, lDay;
      #else
      long lYear, lMonth, lDay;
      #endif

      hb_dateDecode( hb_itemGetDL( pDate ), &lYear, &lMonth, &lDay );

      sysTime.wYear = (unsigned short) lYear;
      sysTime.wMonth = (unsigned short) lMonth;
      sysTime.wDay = (unsigned short) lDay;
      sysTime.wDayOfWeek = 0;
      sysTime.wHour = 0;
      sysTime.wMinute = 0;
      sysTime.wSecond = 0;
      sysTime.wMilliseconds = 0;

      MonthCal_SetCurSel( (HWND) HB_PARHANDLE (1), &sysTime);

   }
}

HB_FUNC ( GETMONTHCALENDARDATE ) // adaptation of function GetDatePicker of file Control.c
{
   SYSTEMTIME st;
   char szDate[9];

   SendMessage( (HWND) HB_PARHANDLE (1), MCM_GETCURSEL, 0, (LPARAM) &st);

   hb_dateStrPut( szDate, st.wYear, st.wMonth, st.wDay );
   szDate[8] = 0;
   hb_retds( szDate );
}

