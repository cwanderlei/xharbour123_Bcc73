/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\hdatepic.prg>
 * Command: -oxbp\hdatepic.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\hdatepic.prg 
 * Created: 2020.09.03 14:41:15 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\hdatepic.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HDATEPICKER );
HB_FUNC_STATIC( HDATEPICKER_NEW );
HB_FUNC_STATIC( HDATEPICKER_REDEFINE );
HB_FUNC_STATIC( HDATEPICKER_ACTIVATE );
HB_FUNC_STATIC( HDATEPICKER_INIT );
HB_FUNC_STATIC( HDATEPICKER_ONEVENT );
HB_FUNC_STATIC( HDATEPICKER_VALUE );
HB_FUNC_STATIC( HDATEPICKER_GETVALUE );
HB_FUNC_STATIC( HDATEPICKER_SETVALUE );
HB_FUNC_STATIC( HDATEPICKER_REFRESH );
HB_FUNC_STATIC( HDATEPICKER_ONCHANGE );
HB_FUNC_STATIC( HDATEPICKER_WHEN );
HB_FUNC_STATIC( HDATEPICKER_VALID );
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
HB_FUNC_EXTERN( HWG_BITAND );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HWG_INITCOMMONCONTROLSEX );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CREATEDATEPICKER );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITDATEPICKERPROC );
HB_FUNC_EXTERN( SETDATEPICKERNULL );
HB_FUNC_EXTERN( SETDATEPICKER );
HB_FUNC_EXTERN( GETSKIP );
HB_FUNC_EXTERN( ISCTRLSHIFT );
HB_FUNC_EXTERN( PROCKEYLIST );
HB_FUNC_EXTERN( GETDATEPICKER );
HB_FUNC_EXTERN( GETTIMEPICKER );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( POSTMESSAGE );
HB_FUNC_EXTERN( CHECKFOCUS );
HB_FUNC_EXTERN( GETKEYSTATE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HDATEPIC )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HDATEPICKER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDATEPICKER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_NEW )}, &ModuleFakeDyn },
{ "HDATEPICKER_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_ACTIVATE )}, &ModuleFakeDyn },
{ "HDATEPICKER_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_INIT )}, &ModuleFakeDyn },
{ "HDATEPICKER_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_ONEVENT )}, &ModuleFakeDyn },
{ "HDATEPICKER_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_REFRESH )}, &ModuleFakeDyn },
{ "HDATEPICKER_GETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_GETVALUE )}, &ModuleFakeDyn },
{ "HDATEPICKER_SETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_SETVALUE )}, &ModuleFakeDyn },
{ "HDATEPICKER_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_REDEFINE )}, &ModuleFakeDyn },
{ "HDATEPICKER_ONCHANGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_ONCHANGE )}, &ModuleFakeDyn },
{ "HDATEPICKER_WHEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_WHEN )}, &ModuleFakeDyn },
{ "HDATEPICKER_VALID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_VALID )}, &ModuleFakeDyn },
{ "HDATEPICKER_VALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDATEPICKER_VALUE )}, &ModuleFakeDyn },
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
{ "_LSHOWTIME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITAND )}, NULL },
{ "_DVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "_TVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LSHOWTIME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_INITCOMMONCONTROLSEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITCOMMONCONTROLSEX )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WHEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FINDCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ONCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEDATEPICKER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEDATEPICKER )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITDATEPICKERPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITDATEPICKERPROC )}, NULL },
{ "SETDATEPICKERNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETDATEPICKERNULL )}, NULL },
{ "SETDATEPICKER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETDATEPICKER )}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSKIP )}, NULL },
{ "ISCTRLSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCTRLSHIFT )}, NULL },
{ "PROCKEYLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCKEYLIST )}, NULL },
{ "SETVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETDATEPICKER", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDATEPICKER )}, NULL },
{ "GETTIMEPICKER", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETTIMEPICKER )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "POSTMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( POSTMESSAGE )}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LSUSPENDMSGSHANDLING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CHECKFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHECKFOCUS )}, NULL },
{ "GETKEYSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETKEYSTATE )}, NULL },
{ "BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HDATEPIC, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HDATEPIC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HDATEPIC )
   #include "hbiniseg.h"
#endif

HB_FUNC( HDATEPICKER )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,93,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,138,2,48,2,0,108,3,100,12,
	0,106,12,72,68,97,116,101,80,105,99,107,101,114,
	0,48,4,0,108,5,100,12,0,112,0,4,1,0,
	112,2,82,1,0,133,23,0,48,6,0,103,1,0,
	100,106,18,83,89,83,68,65,84,69,84,73,77,69,
	80,73,67,75,51,50,0,95,2,106,9,119,105,110,
	99,108,97,115,115,0,4,1,0,9,112,5,73,134,
	1,48,7,0,103,1,0,100,100,95,2,106,8,98,
	83,101,116,71,101,116,0,4,1,0,9,9,112,6,
	73,134,2,48,7,0,103,1,0,100,100,95,2,106,
	7,100,86,97,108,117,101,0,106,7,116,86,97,108,
	117,101,0,4,2,0,9,9,112,6,73,134,3,48,
	7,0,103,1,0,100,100,95,2,106,8,98,67,104,
	97,110,103,101,0,4,1,0,9,9,112,6,73,134,
	4,48,7,0,103,1,0,100,9,95,2,106,9,108,
	110,111,86,97,108,105,100,0,4,1,0,9,9,112,
	6,73,134,5,48,7,0,103,1,0,100,120,95,2,
	106,10,108,83,104,111,119,84,105,109,101,0,4,1,
	0,9,9,112,6,73,134,8,48,8,0,103,1,0,
	106,4,78,101,119,0,108,9,14,95,2,9,112,4,
	73,134,9,48,8,0,103,1,0,106,9,65,99,116,
	105,118,97,116,101,0,108,10,14,95,2,9,112,4,
	73,134,10,48,8,0,103,1,0,106,5,73,110,105,
	116,0,108,11,14,95,2,9,112,4,73,134,11,48,
	8,0,103,1,0,106,8,79,110,69,118,101,110,116,
	0,108,12,14,95,2,9,112,4,73,134,12,48,8,
	0,103,1,0,106,8,82,101,102,114,101,115,104,0,
	108,13,14,95,2,9,112,4,73,134,13,48,8,0,
	103,1,0,106,9,71,101,116,86,97,108,117,101,0,
	108,14,14,95,2,9,112,4,73,134,14,48,8,0,
	103,1,0,106,9,83,101,116,86,97,108,117,101,0,
	108,15,14,95,2,9,112,4,73,134,16,48,8,0,
	103,1,0,106,9,82,101,100,101,102,105,110,101,0,
	108,16,14,95,2,9,112,4,73,134,17,48,8,0,
	103,1,0,106,9,111,110,67,104,97,110,103,101,0,
	108,17,14,95,2,9,112,4,73,134,18,48,8,0,
	103,1,0,106,5,87,104,101,110,0,108,18,14,95,
	2,9,112,4,73,134,19,48,8,0,103,1,0,106,
	6,86,97,108,105,100,0,108,19,14,95,2,9,112,
	4,73,134,20,48,8,0,103,1,0,106,6,86,97,
	108,117,101,0,108,20,14,92,33,9,112,4,73,48,
	8,0,103,1,0,106,7,95,86,97,108,117,101,0,
	108,20,14,112,2,73,48,24,0,103,1,0,112,0,
	73,108,25,100,48,22,0,103,1,0,112,0,12,1,
	80,1,108,26,100,95,1,106,10,73,110,105,116,67,
	108,97,115,115,0,12,2,28,32,48,27,0,95,1,
	108,28,100,12,0,112,1,73,25,17,108,25,100,48,
	22,0,103,1,0,112,0,12,1,80,1,108,29,100,
	12,0,121,15,28,10,103,1,0,108,0,14,121,178,
	95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,18,102,80,19,133,50,0,108,30,100,95,5,
	100,8,28,5,121,25,4,95,5,95,4,100,69,28,
	9,97,0,0,1,0,25,3,121,95,18,100,8,21,
	31,6,73,95,18,68,28,5,121,25,4,92,9,72,
	12,2,80,5,134,2,48,2,0,48,31,0,95,19,
	112,0,95,1,95,2,95,5,95,6,95,7,95,8,
	95,9,95,10,95,11,100,100,95,15,95,16,95,17,
	112,14,73,134,4,48,32,0,95,19,108,33,100,95,
	5,92,9,12,2,121,15,112,1,73,134,5,48,34,
	0,95,19,95,3,100,8,21,31,15,73,108,35,100,
	95,3,12,1,106,2,68,0,69,28,16,108,36,100,
	108,37,100,92,8,12,1,12,1,25,4,95,3,112,
	1,73,134,6,48,38,0,95,19,95,3,100,8,21,
	31,15,73,108,35,100,95,3,12,1,106,2,67,0,
	69,28,11,108,37,100,92,6,12,1,25,4,95,3,
	112,1,73,134,7,48,39,0,95,19,48,40,0,95,
	19,112,0,31,11,48,41,0,95,19,112,0,25,9,
	48,42,0,95,19,112,0,112,1,73,134,9,48,43,
	0,95,19,95,4,112,1,73,134,10,48,44,0,95,
	19,95,14,112,1,73,134,12,108,45,100,20,0,134,
	13,48,46,0,95,19,112,0,73,134,15,95,4,100,
	69,29,148,0,134,16,48,47,0,95,19,95,12,112,
	1,73,134,17,48,48,0,95,19,95,13,112,1,73,
	134,18,48,49,0,48,50,0,95,19,112,0,92,249,
	95,19,89,26,0,2,0,1,0,19,0,48,51,0,
	95,255,48,52,0,95,1,95,2,112,1,112,1,6,
	120,106,11,111,110,71,111,116,70,111,99,117,115,0,
	112,5,73,134,19,48,49,0,48,50,0,95,19,112,
	0,92,248,95,19,89,26,0,2,0,1,0,19,0,
	48,53,0,95,255,48,52,0,95,1,95,2,112,1,
	112,1,6,120,106,12,111,110,76,111,115,116,70,111,
	99,117,115,0,112,5,73,25,100,134,21,95,12,100,
	69,28,48,134,22,48,54,0,95,19,120,112,1,73,
	134,23,48,49,0,48,50,0,95,19,112,0,92,249,
	95,19,95,12,120,106,11,111,110,71,111,116,70,111,
	99,117,115,0,112,5,73,134,25,95,13,100,69,28,
	38,134,26,48,49,0,48,50,0,95,19,112,0,92,
	248,95,19,95,13,120,106,12,111,110,76,111,115,116,
	70,111,99,117,115,0,112,5,73,134,29,48,49,0,
	48,50,0,95,19,112,0,93,9,253,95,19,89,20,
	0,1,0,1,0,19,0,48,55,0,95,255,93,9,
	253,112,1,6,120,106,9,111,110,67,104,97,110,103,
	101,0,112,5,73,134,30,48,49,0,48,50,0,95,
	19,112,0,93,15,253,95,19,89,20,0,1,0,1,
	0,19,0,48,55,0,95,255,93,15,253,112,1,6,
	120,106,8,111,110,67,108,111,115,101,0,112,5,73,
	134,32,95,19,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_REDEFINE )
{
   static const BYTE pcode[] =
   {
	13,1,13,102,80,14,133,87,0,48,2,0,48,31,
	0,95,14,112,0,95,1,95,2,121,121,121,121,121,
	95,5,95,7,95,6,100,95,11,95,12,95,13,112,
	14,73,134,1,108,45,100,20,0,134,2,48,34,0,
	95,14,95,3,100,8,21,31,15,73,108,35,100,95,
	3,12,1,106,2,68,0,69,28,16,108,36,100,108,
	37,100,92,8,12,1,12,1,25,4,95,3,112,1,
	73,134,3,48,38,0,95,14,95,3,100,8,21,31,
	15,73,108,35,100,95,3,12,1,106,2,67,0,69,
	28,11,108,37,100,92,6,12,1,25,4,95,3,112,
	1,73,134,4,48,43,0,95,14,95,4,112,1,73,
	134,5,48,44,0,95,14,95,10,112,1,73,134,7,
	95,8,100,69,28,37,134,8,48,49,0,48,50,0,
	95,14,112,0,92,249,95,14,95,8,120,106,11,111,
	110,71,111,116,70,111,99,117,115,0,112,5,73,134,
	10,48,49,0,48,50,0,95,14,112,0,93,9,253,
	95,14,89,20,0,1,0,1,0,14,0,48,55,0,
	95,255,93,9,253,112,1,6,120,106,9,111,110,67,
	104,97,110,103,101,0,112,5,73,134,11,48,49,0,
	48,50,0,95,14,112,0,93,15,253,95,14,89,20,
	0,1,0,1,0,14,0,48,55,0,95,255,93,15,
	253,112,1,6,120,106,8,111,110,67,108,111,115,101,
	0,112,5,73,134,12,95,4,100,69,28,76,134,13,
	48,48,0,95,14,95,9,112,1,73,134,14,48,49,
	0,48,50,0,95,14,112,0,92,248,95,14,89,26,
	0,2,0,1,0,14,0,48,53,0,95,255,48,52,
	0,95,1,95,2,112,1,112,1,6,120,106,12,111,
	110,76,111,115,116,70,111,99,117,115,0,112,5,73,
	25,46,134,16,95,9,100,69,28,38,134,17,48,49,
	0,48,50,0,95,14,112,0,92,248,95,14,95,9,
	120,106,12,111,110,76,111,115,116,70,111,99,117,115,
	0,112,5,73,134,22,95,14,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,112,0,108,56,100,48,57,
	0,48,50,0,95,1,112,0,112,0,12,1,31,81,
	134,2,48,58,0,95,1,108,59,100,48,57,0,48,
	50,0,95,1,112,0,112,0,48,60,0,95,1,112,
	0,48,61,0,95,1,112,0,48,62,0,95,1,112,
	0,48,63,0,95,1,112,0,48,64,0,95,1,112,
	0,48,65,0,95,1,112,0,12,7,112,1,73,134,
	3,48,66,0,95,1,112,0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,120,0,48,67,0,95,1,
	112,0,31,118,134,1,48,68,0,95,1,122,112,1,
	73,134,2,108,69,100,48,57,0,95,1,112,0,95,
	1,20,2,134,3,108,70,100,48,57,0,95,1,112,
	0,20,1,134,4,48,66,0,48,31,0,95,1,112,
	0,112,0,73,134,5,108,56,100,48,41,0,95,1,
	112,0,12,1,28,18,134,6,108,71,100,48,57,0,
	95,1,112,0,20,1,25,30,134,8,108,72,100,48,
	57,0,95,1,112,0,48,41,0,95,1,112,0,48,
	42,0,95,1,112,0,20,3,134,11,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,1,3,102,80,4,133,135,0,48,73,0,95,4,
	112,0,100,69,28,34,134,1,48,74,0,48,73,0,
	95,4,112,0,95,4,95,1,95,2,95,3,112,4,
	92,255,69,28,7,134,2,121,110,7,134,5,95,1,
	93,2,1,8,28,89,134,6,95,2,92,9,5,28,
	43,134,7,108,75,100,48,50,0,95,4,112,0,48,
	57,0,95,4,112,0,100,108,76,100,9,120,12,2,
	28,6,92,255,25,3,122,20,4,134,8,121,110,7,
	134,9,95,2,92,13,8,28,83,134,10,108,75,100,
	48,50,0,95,4,112,0,48,57,0,95,4,112,0,
	100,122,20,4,134,11,121,110,7,134,13,95,1,93,
	0,1,5,28,20,134,14,108,77,100,95,4,95,2,
	12,2,28,32,134,15,121,110,7,134,17,95,1,93,
	135,0,5,28,17,134,18,95,2,92,9,5,28,8,
	134,20,92,2,110,7,134,24,92,255,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_VALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,163,0,95,1,100,69,28,
	53,134,1,48,40,0,95,2,112,0,28,23,134,2,
	48,78,0,95,2,48,41,0,95,2,112,0,95,1,
	112,2,73,25,21,134,4,48,78,0,95,2,95,1,
	48,42,0,95,2,112,0,112,2,73,134,7,48,40,
	0,95,2,112,0,28,11,48,42,0,95,2,112,0,
	25,9,48,41,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_GETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,173,0,48,40,0,95,1,
	112,0,31,16,108,79,100,48,57,0,95,1,112,0,
	12,1,25,14,108,80,100,48,57,0,95,1,112,0,
	12,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_SETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,177,0,108,56,100,95,1,
	12,1,28,18,134,1,108,71,100,48,57,0,95,2,
	112,0,20,1,25,85,134,2,48,40,0,95,2,112,
	0,28,39,134,3,108,72,100,48,57,0,95,2,112,
	0,48,41,0,95,2,112,0,108,81,100,95,1,106,
	2,58,0,106,1,0,12,3,20,3,25,37,134,5,
	108,72,100,48,57,0,95,2,112,0,95,1,108,81,
	100,48,42,0,95,2,112,0,106,2,58,0,106,1,
	0,12,3,20,3,134,7,48,34,0,95,2,108,79,
	100,48,57,0,95,2,112,0,12,1,112,1,73,134,
	8,48,38,0,95,2,108,80,100,48,57,0,95,2,
	112,0,12,1,112,1,73,134,9,48,39,0,95,2,
	48,40,0,95,2,112,0,28,11,48,42,0,95,2,
	112,0,25,9,48,41,0,95,2,112,0,112,1,73,
	134,10,48,82,0,95,2,112,0,100,69,28,44,134,
	11,48,74,0,48,82,0,95,2,112,0,48,40,0,
	95,2,112,0,28,11,48,42,0,95,2,112,0,25,
	9,48,41,0,95,2,112,0,95,2,112,2,73,134,
	13,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,193,0,48,82,0,95,1,
	112,0,100,69,28,63,134,1,48,40,0,95,1,112,
	0,31,28,134,2,48,34,0,95,1,48,74,0,48,
	82,0,95,1,112,0,100,100,112,2,112,1,73,25,
	26,134,4,48,38,0,95,1,48,74,0,48,82,0,
	95,1,112,0,100,100,112,2,112,1,73,134,7,108,
	56,100,48,41,0,95,1,112,0,12,1,28,18,134,
	8,108,71,100,48,57,0,95,1,112,0,20,1,25,
	30,134,10,108,72,100,48,57,0,95,1,112,0,48,
	41,0,95,1,112,0,48,42,0,95,1,112,0,20,
	3,134,12,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_ONCHANGE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,212,0,9,95,1,93,9,
	253,8,28,22,73,108,83,100,48,57,0,95,2,112,
	0,93,8,16,121,121,12,4,121,8,21,31,9,73,
	95,1,93,15,253,8,29,229,0,134,1,95,1,93,
	15,253,5,28,32,134,2,108,84,100,48,57,0,95,
	2,112,0,93,0,1,92,39,121,20,4,134,3,48,
	85,0,95,2,112,0,73,134,5,48,34,0,95,2,
	108,79,100,48,57,0,95,2,112,0,12,1,112,1,
	73,134,6,48,38,0,95,2,108,80,100,48,57,0,
	95,2,112,0,12,1,112,1,73,134,7,48,82,0,
	95,2,112,0,100,69,28,44,134,8,48,74,0,48,
	82,0,95,2,112,0,48,40,0,95,2,112,0,28,
	11,48,42,0,95,2,112,0,25,9,48,41,0,95,
	2,112,0,95,2,112,2,73,134,10,48,86,0,95,
	2,112,0,100,69,28,76,134,11,48,87,0,48,50,
	0,95,2,112,0,120,112,1,73,134,12,48,74,0,
	48,86,0,95,2,112,0,48,40,0,95,2,112,0,
	28,11,48,42,0,95,2,112,0,25,9,48,41,0,
	95,2,112,0,95,2,112,2,73,134,13,48,87,0,
	48,50,0,95,2,112,0,9,112,1,73,134,16,120,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_WHEN )
{
   static const BYTE pcode[] =
   {
	13,3,0,102,80,1,133,231,0,120,80,2,134,2,
	108,88,100,95,1,9,12,2,31,7,134,3,120,110,
	7,134,5,108,89,100,92,38,12,1,121,35,21,31,
	25,73,9,108,89,100,92,9,12,1,121,35,28,12,
	73,108,89,100,92,16,12,1,121,35,28,6,92,255,
	25,3,122,80,3,134,6,48,90,0,95,1,112,0,
	100,69,29,132,0,134,7,48,87,0,48,50,0,95,
	1,112,0,120,112,1,73,134,8,48,54,0,95,1,
	120,112,1,73,134,9,48,74,0,48,90,0,95,1,
	112,0,48,40,0,95,1,112,0,28,11,48,42,0,
	95,1,112,0,25,9,48,41,0,95,1,112,0,95,
	1,112,2,80,2,134,10,48,87,0,48,50,0,95,
	1,112,0,9,112,1,73,134,11,48,54,0,95,1,
	95,2,68,112,1,73,134,12,95,2,31,26,134,13,
	108,75,100,48,50,0,95,1,112,0,48,57,0,95,
	1,112,0,100,95,3,20,4,134,17,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDATEPICKER_VALID )
{
   static const BYTE pcode[] =
   {
	13,2,0,102,80,1,133,251,0,120,80,2,134,2,
	108,88,100,95,1,120,12,2,68,21,31,10,73,48,
	91,0,95,1,112,0,28,7,134,3,120,110,7,134,
	5,48,34,0,95,1,108,79,100,48,57,0,95,1,
	112,0,12,1,112,1,73,134,6,48,82,0,95,1,
	112,0,100,69,28,26,134,7,48,74,0,48,82,0,
	95,1,112,0,48,41,0,95,1,112,0,95,1,112,
	2,73,134,9,48,92,0,95,1,112,0,100,69,28,
	116,134,10,48,87,0,48,50,0,95,1,112,0,120,
	112,1,73,134,11,48,74,0,48,92,0,95,1,112,
	0,48,40,0,95,1,112,0,28,11,48,42,0,95,
	1,112,0,25,9,48,41,0,95,1,112,0,95,1,
	112,2,80,2,134,12,108,35,100,95,2,12,1,106,
	2,76,0,8,28,6,95,2,25,3,120,80,2,134,
	13,48,87,0,48,50,0,95,1,112,0,9,112,1,
	73,134,14,95,2,31,12,134,15,48,85,0,95,1,
	112,0,73,134,18,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,93,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

