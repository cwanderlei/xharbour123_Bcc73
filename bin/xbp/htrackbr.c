/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\htrackbr.prg>
 * Command: -oxbp\htrackbr.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\htrackbr.prg 
 * Created: 2020.09.03 14:41:43 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\htrackbr.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HTRACKBAR );
HB_FUNC_STATIC( HTRACKBAR_NEW );
HB_FUNC_STATIC( HTRACKBAR_ACTIVATE );
HB_FUNC_STATIC( HTRACKBAR_ONEVENT );
HB_FUNC_STATIC( HTRACKBAR_INIT );
HB_FUNC_STATIC( HTRACKBAR_SETVALUE );
HB_FUNC_STATIC( HTRACKBAR_GETVALUE );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HWG_INITCOMMONCONTROLSEX );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HWG_SETCURSOR );
HB_FUNC_EXTERN( GETCLIENTRECT );
HB_FUNC_EXTERN( FILLRECT );
HB_FUNC_EXTERN( GETSKIP );
HB_FUNC_EXTERN( ISCTRLSHIFT );
HB_FUNC_EXTERN( PROCKEYLIST );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITTRACKPROC );

/* Forward declarations of all DUMP defined Functions. */
HB_FUNC( INITTRACKBAR );
HB_FUNC( TRACKBARSETRANGE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTRACKBR )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HTRACKBAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTRACKBAR_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_NEW )}, &ModuleFakeDyn },
{ "HTRACKBAR_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_ACTIVATE )}, &ModuleFakeDyn },
{ "HTRACKBAR_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_ONEVENT )}, &ModuleFakeDyn },
{ "HTRACKBAR_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_INIT )}, &ModuleFakeDyn },
{ "HTRACKBAR_SETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_SETVALUE )}, &ModuleFakeDyn },
{ "HTRACKBAR_GETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTRACKBAR_GETVALUE )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
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
{ "_BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BTHUMBDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLOW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHIGH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_INITCOMMONCONTROLSEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITCOMMONCONTROLSEX )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INITTRACKBAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INITTRACKBAR )}, &ModuleFakeDyn },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLOW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHIGH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCURSOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SETCURSOR )}, NULL },
{ "BRUSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETCLIENTRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETCLIENTRECT )}, NULL },
{ "FILLRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILLRECT )}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSKIP )}, NULL },
{ "ISCTRLSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCTRLSHIFT )}, NULL },
{ "PROCKEYLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCKEYLIST )}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TRACKBARSETRANGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRACKBARSETRANGE )}, &ModuleFakeDyn },
{ "VALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITTRACKPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITTRACKPROC )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HTRACKBR, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HTRACKBR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HTRACKBR )
   #include "hbiniseg.h"
#endif

HB_FUNC( HTRACKBAR )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,68,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,28,2,48,2,0,108,3,100,12,
	0,106,10,72,84,114,97,99,107,66,97,114,0,48,
	4,0,108,5,100,12,0,112,0,4,1,0,112,2,
	82,1,0,133,25,0,48,6,0,103,1,0,100,106,
	18,109,115,99,116,108,115,95,116,114,97,99,107,98,
	97,114,51,50,0,95,2,106,9,119,105,110,99,108,
	97,115,115,0,4,1,0,9,112,5,73,134,2,48,
	7,0,103,1,0,100,100,95,2,106,6,118,97,108,
	117,101,0,4,1,0,9,9,112,6,73,134,3,48,
	7,0,103,1,0,100,100,95,2,106,8,98,67,104,
	97,110,103,101,0,4,1,0,9,9,112,6,73,134,
	4,48,7,0,103,1,0,100,100,95,2,106,11,98,
	84,104,117,109,98,68,114,97,103,0,4,1,0,9,
	9,112,6,73,134,5,48,7,0,103,1,0,100,100,
	95,2,106,5,110,76,111,119,0,4,1,0,9,9,
	112,6,73,134,6,48,7,0,103,1,0,100,100,95,
	2,106,6,110,72,105,103,104,0,4,1,0,9,9,
	112,6,73,134,7,48,7,0,103,1,0,100,100,95,
	2,106,8,104,67,117,114,115,111,114,0,4,1,0,
	9,9,112,6,73,134,11,48,8,0,103,1,0,106,
	4,78,101,119,0,108,9,14,95,2,9,112,4,73,
	134,12,48,8,0,103,1,0,106,9,65,99,116,105,
	118,97,116,101,0,108,10,14,95,2,9,112,4,73,
	134,13,48,8,0,103,1,0,106,8,111,110,69,118,
	101,110,116,0,108,11,14,95,2,9,112,4,73,134,
	14,48,8,0,103,1,0,106,5,73,110,105,116,0,
	108,12,14,95,2,9,112,4,73,134,15,48,8,0,
	103,1,0,106,9,83,101,116,86,97,108,117,101,0,
	108,13,14,95,2,9,112,4,73,134,16,48,8,0,
	103,1,0,106,9,71,101,116,86,97,108,117,101,0,
	108,14,14,95,2,9,112,4,73,134,17,48,15,0,
	103,1,0,106,11,71,101,116,78,117,109,84,105,99,
	115,0,89,28,0,1,0,0,0,95,1,73,108,16,
	100,48,17,0,95,1,112,0,93,16,4,121,121,12,
	4,6,95,2,9,112,4,73,48,21,0,103,1,0,
	112,0,73,108,22,100,48,19,0,103,1,0,112,0,
	12,1,80,1,108,23,100,95,1,106,10,73,110,105,
	116,67,108,97,115,115,0,12,2,28,32,48,24,0,
	95,1,108,25,100,12,0,112,1,73,25,17,108,22,
	100,48,19,0,103,1,0,112,0,12,1,80,1,108,
	26,100,12,0,121,15,28,10,103,1,0,108,0,14,
	121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,19,102,80,20,133,50,0,95,18,100,8,28,
	6,126,18,1,0,134,1,95,19,100,8,28,6,126,
	19,0,0,134,2,95,11,100,69,28,14,134,3,108,
	27,100,95,18,122,12,2,80,18,134,6,108,27,100,
	95,4,100,8,28,5,121,25,4,95,4,97,0,0,
	1,80,12,2,80,4,134,7,9,95,17,100,69,28,
	5,73,95,17,28,6,92,2,25,3,121,167,4,134,
	8,95,18,95,19,72,167,4,134,11,48,2,0,48,
	28,0,95,20,112,0,95,1,95,2,95,4,95,5,
	95,6,95,7,95,8,100,95,9,95,10,95,11,95,
	12,112,12,73,134,13,48,29,0,95,20,108,30,100,
	95,3,12,1,106,2,78,0,8,28,6,95,3,25,
	3,121,112,1,73,134,14,48,31,0,95,20,95,13,
	112,1,73,134,15,48,32,0,95,20,95,14,112,1,
	73,134,16,48,33,0,95,20,95,15,100,8,28,5,
	121,25,4,95,15,112,1,73,134,17,48,34,0,95,
	20,95,16,100,8,28,6,92,100,25,4,95,16,112,
	1,73,134,19,108,35,100,20,0,134,20,48,36,0,
	95,20,112,0,73,134,22,95,20,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,75,0,108,37,100,48,17,
	0,48,38,0,95,1,112,0,112,0,12,1,31,95,
	134,3,48,39,0,95,1,108,40,100,48,17,0,48,
	38,0,95,1,112,0,112,0,48,41,0,95,1,112,
	0,48,42,0,95,1,112,0,48,43,0,95,1,112,
	0,48,44,0,95,1,112,0,48,45,0,95,1,112,
	0,48,46,0,95,1,112,0,48,47,0,95,1,112,
	0,48,48,0,95,1,112,0,12,9,112,1,73,134,
	4,48,49,0,95,1,112,0,73,134,6,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,2,3,102,80,4,133,86,0,95,1,92,15,8,
	28,38,134,1,48,50,0,95,4,112,0,100,69,29,
	47,1,134,2,48,51,0,48,50,0,95,4,112,0,
	95,4,112,1,73,134,3,121,110,7,134,6,95,1,
	93,0,2,8,28,33,134,7,48,52,0,95,4,112,
	0,100,69,29,1,1,134,8,108,53,100,48,52,0,
	95,4,112,0,20,1,26,240,0,134,11,95,1,92,
	20,8,28,83,134,12,48,54,0,95,4,112,0,100,
	69,29,217,0,134,13,108,55,100,48,17,0,95,4,
	112,0,12,1,80,5,134,15,108,56,100,95,2,95,
	5,122,1,95,5,92,2,1,95,5,92,3,1,128,
	1,0,95,5,92,4,1,128,1,0,48,17,0,48,
	54,0,95,4,112,0,112,0,20,6,134,16,122,110,
	7,134,19,95,1,92,2,8,28,15,134,20,48,57,
	0,95,4,112,0,73,26,128,0,134,22,95,1,93,
	2,1,8,28,52,134,23,95,2,92,9,5,28,108,
	134,25,108,58,100,48,38,0,95,4,112,0,48,17,
	0,95,4,112,0,100,108,59,100,9,120,12,2,28,
	6,92,255,25,3,122,20,4,134,26,121,110,7,134,
	29,95,1,93,0,1,5,28,20,134,30,108,60,100,
	95,4,95,2,12,2,28,44,134,31,121,110,7,134,
	34,48,61,0,95,4,112,0,100,69,28,26,134,35,
	48,51,0,48,61,0,95,4,112,0,95,4,95,1,
	95,2,95,3,112,4,110,7,134,39,92,255,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,128,0,48,62,0,95,1,
	112,0,31,124,134,1,48,49,0,48,28,0,95,1,
	112,0,112,0,73,134,2,108,63,100,48,17,0,95,
	1,112,0,48,47,0,95,1,112,0,48,48,0,95,
	1,112,0,20,3,134,3,108,16,100,48,17,0,95,
	1,112,0,93,5,4,122,48,64,0,95,1,112,0,
	20,4,134,5,48,50,0,95,1,112,0,100,69,28,
	43,134,6,48,65,0,95,1,122,112,1,73,134,7,
	108,66,100,48,17,0,95,1,112,0,95,1,20,2,
	134,8,108,67,100,48,17,0,95,1,112,0,20,1,
	134,11,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_SETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,142,0,108,30,100,95,1,
	12,1,106,2,78,0,8,28,34,134,1,108,16,100,
	48,17,0,95,2,112,0,93,5,4,122,95,1,20,
	4,134,2,48,29,0,95,2,95,1,112,1,73,134,
	4,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTRACKBAR_GETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,149,0,48,29,0,95,1,
	108,16,100,48,17,0,95,1,112,0,93,0,4,121,
	121,12,4,112,1,73,134,1,48,64,0,95,1,112,
	0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,68,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

#line 153 "\\hwgui\\source\\htrackbr.prg"

#include "hwingui.h"
#include <commctrl.h>

HB_FUNC ( INITTRACKBAR )
{
    HWND hTrackBar;

    hTrackBar = CreateWindow( TRACKBAR_CLASS,
                             0,
                             ( LONG )  hb_parnl( 3 ),
                                       hb_parni( 4 ),
                                       hb_parni( 5 ),
                                       hb_parni( 6 ),
                                       hb_parni( 7 ),
                             ( HWND )  HB_PARHANDLE( 1 ),
                             ( HMENU ) hb_parni( 2 ),
                             GetModuleHandle( NULL ),
                             NULL ) ;

    HB_RETHANDLE(  hTrackBar );
}

HB_FUNC ( TRACKBARSETRANGE )
{
    SendMessage( (HWND) HB_PARHANDLE( 1 ), TBM_SETRANGE, TRUE,
                  MAKELONG( hb_parni( 2 ), hb_parni( 3 ) ) );
}

