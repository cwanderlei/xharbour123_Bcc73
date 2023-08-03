/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\hcheck.prg>
 * Command: -oxbp\hcheck.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\hcheck.prg 
 * Created: 2020.09.03 14:41:10 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\hcheck.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HCHECKBUTTON );
HB_FUNC_STATIC( HCHECKBUTTON_NEW );
HB_FUNC_STATIC( HCHECKBUTTON_ACTIVATE );
HB_FUNC_STATIC( HCHECKBUTTON_REDEFINE );
HB_FUNC_STATIC( HCHECKBUTTON_INIT );
HB_FUNC_STATIC( HCHECKBUTTON_ONEVENT );
HB_FUNC_STATIC( HCHECKBUTTON_SETVALUE );
HB_FUNC_STATIC( HCHECKBUTTON_REFRESH );
HB_FUNC_STATIC( HCHECKBUTTON_ONGOTFOCUS );
HB_FUNC_STATIC( HCHECKBUTTON_ONCLICK );
HB_FUNC_STATIC( HCHECKBUTTON_KILLFOCUS );
HB_FUNC_STATIC( HCHECKBUTTON_WHEN );
HB_FUNC_STATIC( HCHECKBUTTON_VALID );
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
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CREATEBUTTON );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITBUTTONPROC );
HB_FUNC_EXTERN( GETSKIP );
HB_FUNC_EXTERN( ISCTRLSHIFT );
HB_FUNC_EXTERN( PROCKEYLIST );
HB_FUNC_EXTERN( GETDLGMESSAGE );
HB_FUNC_EXTERN( GETKEYSTATE );
HB_FUNC_EXTERN( CHECKFOCUS );
HB_FUNC_EXTERN( CHECKDLGBUTTON );
HB_FUNC_EXTERN( GETFOCUS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HCHECK )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HCHECKBUTTON", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCHECKBUTTON_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_NEW )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_ACTIVATE )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_REDEFINE )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_INIT )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_ONEVENT )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_REFRESH )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_SETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_SETVALUE )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCHECKBUTTON_ONGOTFOCUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_ONGOTFOCUS )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_ONCLICK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_ONCLICK )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_KILLFOCUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_KILLFOCUS )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_VALID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_VALID )}, &ModuleFakeDyn },
{ "HCHECKBUTTON_WHEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCHECKBUTTON_WHEN )}, &ModuleFakeDyn },
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
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_VALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "_BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BACKSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LENTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WHEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FINDCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "KILLFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEBUTTON )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITBUTTONPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITBUTTONPROC )}, NULL },
{ "VALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSKIP )}, NULL },
{ "ISCTRLSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCTRLSHIFT )}, NULL },
{ "LENTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PROCKEYLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCKEYLIST )}, NULL },
{ "GETDLGMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDLGMESSAGE )}, NULL },
{ "BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETKEYSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETKEYSTATE )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CHECKFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHECKFOCUS )}, NULL },
{ "BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LSUSPENDMSGSHANDLING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CHECKDLGBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHECKDLGBUTTON )}, NULL },
{ "BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFOCUS )}, NULL },
{ "NGETSKIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HCHECK, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HCHECK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HCHECK )
   #include "hbiniseg.h"
#endif

HB_FUNC( HCHECKBUTTON )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,87,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,93,2,48,2,0,108,3,100,12,
	0,106,13,72,67,104,101,99,107,66,117,116,116,111,
	110,0,48,4,0,108,5,100,12,0,112,0,4,1,
	0,112,2,82,1,0,133,18,0,48,6,0,103,1,
	0,100,106,7,66,85,84,84,79,78,0,95,2,106,
	9,119,105,110,99,108,97,115,115,0,4,1,0,9,
	112,5,73,134,1,48,7,0,103,1,0,100,100,95,
	2,106,8,98,83,101,116,71,101,116,0,4,1,0,
	9,9,112,6,73,134,2,48,7,0,103,1,0,100,
	100,95,2,106,6,118,97,108,117,101,0,4,1,0,
	9,9,112,6,73,134,3,48,7,0,103,1,0,100,
	100,95,2,106,7,108,69,110,116,101,114,0,4,1,
	0,9,9,112,6,73,134,6,48,8,0,103,1,0,
	106,4,78,101,119,0,108,9,14,95,2,9,112,4,
	73,134,7,48,8,0,103,1,0,106,9,65,99,116,
	105,118,97,116,101,0,108,10,14,95,2,9,112,4,
	73,134,8,48,8,0,103,1,0,106,9,82,101,100,
	101,102,105,110,101,0,108,11,14,95,2,9,112,4,
	73,134,9,48,8,0,103,1,0,106,5,73,110,105,
	116,0,108,12,14,95,2,9,112,4,73,134,10,48,
	8,0,103,1,0,106,8,111,110,69,118,101,110,116,
	0,108,13,14,95,2,9,112,4,73,134,11,48,8,
	0,103,1,0,106,8,82,101,102,114,101,115,104,0,
	108,14,14,95,2,9,112,4,73,134,14,48,8,0,
	103,1,0,106,9,83,101,116,86,97,108,117,101,0,
	108,15,14,95,2,9,112,4,73,134,15,48,16,0,
	103,1,0,106,9,71,101,116,86,97,108,117,101,0,
	89,30,0,1,0,0,0,95,1,73,108,17,100,48,
	18,0,95,1,112,0,93,240,0,121,121,12,4,122,
	8,6,95,2,9,112,4,73,134,16,48,8,0,103,
	1,0,106,11,111,110,71,111,116,70,111,99,117,115,
	0,108,19,14,95,2,9,112,4,73,134,17,48,8,
	0,103,1,0,106,8,111,110,67,108,105,99,107,0,
	108,20,14,95,2,9,112,4,73,134,18,48,8,0,
	103,1,0,106,10,75,105,108,108,70,111,99,117,115,
	0,108,21,14,95,2,9,112,4,73,134,19,48,8,
	0,103,1,0,106,6,86,97,108,105,100,0,108,22,
	14,95,2,9,112,4,73,134,20,48,8,0,103,1,
	0,106,5,87,104,101,110,0,108,23,14,95,2,9,
	112,4,73,48,27,0,103,1,0,112,0,73,108,28,
	100,48,25,0,103,1,0,112,0,12,1,80,1,108,
	29,100,95,1,106,10,73,110,105,116,67,108,97,115,
	115,0,12,2,28,32,48,30,0,95,1,108,31,100,
	12,0,112,1,73,25,17,108,28,100,48,25,0,103,
	1,0,112,0,12,1,80,1,108,32,100,12,0,121,
	15,28,10,103,1,0,108,0,14,121,178,95,1,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,21,102,80,22,133,45,0,108,33,100,95,5,
	100,8,28,5,121,25,4,95,5,97,3,64,1,0,
	12,2,80,5,134,2,48,2,0,48,34,0,95,22,
	112,0,95,1,95,2,95,5,95,6,95,7,95,8,
	95,9,95,11,95,12,95,13,95,14,95,16,95,17,
	95,18,112,14,73,134,4,48,35,0,95,22,95,10,
	112,1,73,134,5,48,36,0,95,22,95,3,100,8,
	21,31,15,73,108,37,100,95,3,12,1,106,2,76,
	0,69,28,5,9,25,4,95,3,112,1,73,134,6,
	48,38,0,95,22,95,4,112,1,73,134,7,48,39,
	0,95,22,9,95,21,100,69,28,5,73,95,21,28,
	5,122,25,4,92,2,112,1,73,134,9,48,40,0,
	95,22,112,0,73,134,11,48,41,0,95,22,95,20,
	100,8,21,31,15,73,108,37,100,95,20,12,1,106,
	2,76,0,69,28,5,9,25,4,95,20,112,1,73,
	134,12,48,42,0,95,22,95,15,112,1,73,134,13,
	48,43,0,95,22,95,19,112,1,73,134,15,95,19,
	100,69,28,72,134,17,48,44,0,48,45,0,95,22,
	112,0,92,6,95,22,89,26,0,2,0,1,0,22,
	0,48,46,0,95,255,48,47,0,95,1,95,2,112,
	1,112,1,6,100,106,11,111,110,71,111,116,70,111,
	99,117,115,0,112,5,73,134,18,48,48,0,95,22,
	120,112,1,73,134,21,48,44,0,48,45,0,95,22,
	112,0,121,95,22,89,26,0,2,0,1,0,22,0,
	48,49,0,95,255,48,47,0,95,1,95,2,112,1,
	112,1,6,100,106,8,111,110,67,108,105,99,107,0,
	112,5,73,134,22,48,44,0,48,45,0,95,22,112,
	0,92,7,95,22,89,17,0,1,0,1,0,22,0,
	48,50,0,95,255,112,0,6,112,3,73,134,24,95,
	22,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,72,0,108,51,100,48,18,
	0,48,45,0,95,1,112,0,112,0,12,1,31,88,
	134,2,48,52,0,95,1,108,53,100,48,18,0,48,
	45,0,95,1,112,0,112,0,48,54,0,95,1,112,
	0,48,55,0,95,1,112,0,48,56,0,95,1,112,
	0,48,57,0,95,1,112,0,48,58,0,95,1,112,
	0,48,59,0,95,1,112,0,48,60,0,95,1,112,
	0,12,8,112,1,73,134,3,48,61,0,95,1,112,
	0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_REDEFINE )
{
   static const BYTE pcode[] =
   {
	13,1,14,102,80,15,133,83,0,48,2,0,48,34,
	0,95,15,112,0,95,1,95,2,121,121,121,121,121,
	95,5,95,6,95,7,95,8,95,10,95,11,95,12,
	112,14,73,134,2,48,36,0,95,15,95,3,100,8,
	21,31,15,73,108,37,100,95,3,12,1,106,2,76,
	0,69,28,5,9,25,4,95,3,112,1,73,134,3,
	48,38,0,95,15,95,4,112,1,73,134,4,48,41,
	0,95,15,95,14,100,8,21,31,15,73,108,37,100,
	95,3,12,1,106,2,76,0,69,28,5,9,25,4,
	95,14,112,1,73,134,5,48,42,0,95,15,95,9,
	112,1,73,134,6,48,43,0,95,15,95,13,112,1,
	73,134,7,95,13,100,69,28,61,134,8,48,44,0,
	48,45,0,95,15,112,0,92,6,95,15,89,26,0,
	2,0,1,0,15,0,48,46,0,95,255,48,47,0,
	95,1,95,2,112,1,112,1,6,100,106,11,111,110,
	71,111,116,70,111,99,117,115,0,112,5,73,134,10,
	48,44,0,48,45,0,95,15,112,0,121,95,15,89,
	26,0,2,0,1,0,15,0,48,49,0,95,255,48,
	47,0,95,1,95,2,112,1,112,1,6,100,106,8,
	111,110,67,108,105,99,107,0,112,5,73,134,11,48,
	44,0,48,45,0,95,15,112,0,92,7,95,15,89,
	17,0,1,0,1,0,15,0,48,50,0,95,255,112,
	0,6,112,3,73,134,13,95,15,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,99,0,48,62,0,95,1,
	112,0,31,88,134,1,48,63,0,95,1,122,112,1,
	73,134,2,108,64,100,48,18,0,95,1,112,0,95,
	1,20,2,134,3,108,65,100,48,18,0,95,1,112,
	0,20,1,134,4,48,61,0,48,34,0,95,1,112,
	0,112,0,73,134,5,48,66,0,95,1,112,0,28,
	21,134,6,108,17,100,48,18,0,95,1,112,0,93,
	241,0,122,121,20,4,134,9,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,1,3,102,80,4,133,112,0,48,67,0,95,4,
	112,0,100,69,28,34,134,1,48,68,0,48,67,0,
	95,4,112,0,95,4,95,1,95,2,95,3,112,4,
	92,255,69,28,7,134,2,121,110,7,134,5,95,1,
	93,0,1,5,29,228,0,134,7,95,2,92,9,5,
	28,43,134,8,108,69,100,48,45,0,95,4,112,0,
	48,18,0,95,4,112,0,100,108,70,100,9,120,12,
	2,28,6,92,255,25,3,122,20,4,134,9,121,110,
	7,134,10,95,2,92,37,5,21,31,8,73,95,2,
	92,38,5,28,31,134,11,108,69,100,48,45,0,95,
	4,112,0,48,18,0,95,4,112,0,100,92,255,20,
	4,134,12,121,110,7,134,13,95,2,92,39,5,21,
	31,8,73,95,2,92,40,5,28,30,134,14,108,69,
	100,48,45,0,95,4,112,0,48,18,0,95,4,112,
	0,100,122,20,4,134,15,121,110,7,134,16,95,2,
	92,13,8,29,203,0,134,17,48,71,0,95,4,112,
	0,28,35,134,18,48,72,0,95,4,48,73,0,95,
	4,112,0,68,112,1,73,134,19,48,49,0,95,4,
	112,0,73,134,20,121,110,7,134,22,108,69,100,48,
	45,0,95,4,112,0,48,18,0,95,4,112,0,100,
	122,20,4,134,23,121,110,7,134,26,95,1,93,1,
	1,8,28,15,134,27,108,74,100,95,4,95,2,20,
	2,25,107,134,29,9,95,1,93,135,0,5,28,12,
	73,108,75,100,95,3,12,1,121,69,28,84,134,30,
	95,2,92,13,5,21,31,8,73,95,2,92,9,5,
	28,4,25,58,134,31,9,108,75,100,95,3,12,1,
	93,0,1,5,28,8,73,95,2,92,27,69,28,4,
	25,32,134,32,108,75,100,95,3,12,1,93,2,1,
	5,21,31,8,73,95,2,92,27,5,28,8,134,33,
	92,255,110,7,134,35,92,4,110,7,134,38,92,255,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_SETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,154,0,108,17,100,48,18,
	0,95,2,112,0,93,241,0,108,51,100,95,1,12,
	1,28,5,121,25,3,122,121,20,4,134,1,48,36,
	0,95,2,95,1,100,5,21,31,15,73,108,37,100,
	95,1,12,1,106,2,76,0,69,28,5,9,25,4,
	95,1,112,1,73,134,2,48,76,0,95,2,112,0,
	100,69,28,21,134,3,48,68,0,48,76,0,95,2,
	112,0,95,1,95,2,112,2,73,134,5,48,26,0,
	95,2,112,0,73,134,7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,2,0,102,80,1,133,166,0,48,76,0,95,1,
	112,0,100,69,28,105,134,1,48,68,0,48,76,0,
	95,1,112,0,100,95,1,112,2,80,2,134,2,95,
	2,100,5,21,31,15,73,108,37,100,95,2,12,1,
	106,2,76,0,69,28,25,134,3,108,17,100,48,18,
	0,95,1,112,0,93,240,0,121,121,12,4,122,8,
	80,2,134,5,48,36,0,95,1,95,2,100,8,21,
	31,15,73,108,37,100,95,2,12,1,106,2,76,0,
	69,28,5,9,25,4,95,2,112,1,73,134,7,108,
	17,100,48,18,0,95,1,112,0,93,241,0,48,66,
	0,95,1,112,0,28,5,122,25,3,121,121,20,4,
	134,8,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_ONGOTFOCUS )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,193,0,48,46,0,95,1,
	112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_ONCLICK )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,196,0,48,49,0,95,1,
	112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_KILLFOCUS )
{
   static const BYTE pcode[] =
   {
	13,3,0,102,80,1,133,199,0,108,77,100,92,39,
	12,1,108,77,100,92,40,12,1,72,108,77,100,92,
	9,12,1,72,80,2,134,1,126,3,0,0,134,3,
	48,78,0,48,45,0,95,1,112,0,112,0,106,5,
	72,84,65,66,0,5,28,103,134,5,108,77,100,92,
	37,12,1,108,77,100,92,38,12,1,72,121,35,21,
	31,25,73,9,108,77,100,92,9,12,1,121,35,28,
	12,73,108,77,100,92,16,12,1,121,35,28,10,134,
	6,126,3,255,255,25,16,134,7,95,2,121,35,28,
	8,134,8,126,3,1,0,134,10,95,3,121,69,28,
	26,134,11,108,69,100,48,45,0,95,1,112,0,48,
	18,0,95,1,112,0,100,95,3,20,4,134,14,9,
	108,77,100,92,13,12,1,121,35,28,10,73,48,71,
	0,95,1,112,0,28,30,134,15,48,72,0,95,1,
	48,73,0,95,1,112,0,68,112,1,73,134,16,48,
	49,0,95,1,112,0,73,134,18,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_WHEN )
{
   static const BYTE pcode[] =
   {
	13,3,0,102,80,1,133,220,0,120,80,2,134,2,
	108,79,100,95,1,9,12,2,31,7,134,3,120,110,
	7,134,5,108,77,100,92,38,12,1,121,35,21,31,
	25,73,9,108,77,100,92,9,12,1,121,35,28,12,
	73,108,77,100,92,16,12,1,121,35,28,6,92,255,
	25,3,122,80,3,134,6,48,80,0,95,1,112,0,
	100,69,29,146,0,134,7,48,48,0,95,1,120,112,
	1,73,134,8,48,81,0,48,45,0,95,1,112,0,
	120,112,1,73,134,9,48,76,0,95,1,112,0,100,
	69,28,37,134,10,48,68,0,48,80,0,95,1,112,
	0,48,68,0,48,76,0,95,1,112,0,100,95,1,
	112,2,95,1,112,2,80,2,25,27,134,12,48,68,
	0,48,80,0,95,1,112,0,48,66,0,95,1,112,
	0,95,1,112,2,80,2,134,14,48,48,0,95,1,
	95,2,68,112,1,73,134,15,95,2,31,26,134,16,
	108,69,100,48,45,0,95,1,112,0,48,18,0,95,
	1,112,0,100,95,3,20,4,134,19,48,81,0,48,
	45,0,95,1,112,0,9,112,1,73,134,20,95,2,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCHECKBUTTON_VALID )
{
   static const BYTE pcode[] =
   {
	13,2,0,102,80,1,133,243,0,108,17,100,48,18,
	0,95,1,112,0,93,240,0,121,121,12,4,80,2,
	134,2,108,79,100,95,1,120,12,2,68,21,31,10,
	73,48,82,0,95,1,112,0,28,7,134,3,120,110,
	7,134,5,95,2,92,2,8,28,61,134,6,108,83,
	100,48,18,0,48,45,0,95,1,112,0,112,0,48,
	54,0,95,1,112,0,9,20,3,134,7,108,17,100,
	48,18,0,95,1,112,0,93,241,0,121,121,20,4,
	134,8,48,36,0,95,1,9,112,1,73,25,16,134,
	10,48,36,0,95,1,95,2,122,8,112,1,73,134,
	12,48,76,0,95,1,112,0,100,69,28,26,134,13,
	48,68,0,48,76,0,95,1,112,0,48,66,0,95,
	1,112,0,95,1,112,2,73,134,15,48,84,0,95,
	1,112,0,100,69,28,58,134,16,48,81,0,48,45,
	0,95,1,112,0,120,112,1,73,134,17,48,68,0,
	48,84,0,95,1,112,0,95,1,48,66,0,95,1,
	112,0,112,2,73,134,18,48,81,0,48,45,0,95,
	1,112,0,9,112,1,73,134,20,108,51,100,108,85,
	100,12,0,12,1,28,31,134,21,108,69,100,48,45,
	0,95,1,112,0,48,18,0,95,1,112,0,100,48,
	86,0,95,1,112,0,20,4,134,24,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,87,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}
