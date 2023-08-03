/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\hsplit.prg>
 * Command: -oxbp\hsplit.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\hsplit.prg 
 * Created: 2020.09.03 14:41:39 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\hsplit.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HSPLITTER );
HB_FUNC_STATIC( HSPLITTER_NEW );
HB_FUNC_STATIC( HSPLITTER_ACTIVATE );
HB_FUNC_STATIC( HSPLITTER_ONEVENT );
HB_FUNC_STATIC( HSPLITTER_INIT );
HB_FUNC_STATIC( HSPLITTER_PAINT );
HB_FUNC_STATIC( HSPLITTER_DRAG );
HB_FUNC_STATIC( HSPLITTER_DRAGALL );
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
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CREATESTATIC );
HB_FUNC_EXTERN( LOADCURSOR );
HB_FUNC_EXTERN( HWG_SETCURSOR );
HB_FUNC_EXTERN( SETCAPTURE );
HB_FUNC_EXTERN( RELEASECAPTURE );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITWINCTRL );
HB_FUNC_EXTERN( DEFINEPAINTSTRU );
HB_FUNC_EXTERN( BEGINPAINT );
HB_FUNC_EXTERN( GETCLIENTRECT );
HB_FUNC_EXTERN( DRAWEDGE );
HB_FUNC_EXTERN( ENDPAINT );
HB_FUNC_EXTERN( LOWORD );
HB_FUNC_EXTERN( HIWORD );
HB_FUNC_EXTERN( MOVEWINDOW );
HB_FUNC_EXTERN( LEN );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HSPLIT )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HSPLITTER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSPLITTER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_NEW )}, &ModuleFakeDyn },
{ "HSPLITTER_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_ACTIVATE )}, &ModuleFakeDyn },
{ "HSPLITTER_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_ONEVENT )}, &ModuleFakeDyn },
{ "HSPLITTER_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_INIT )}, &ModuleFakeDyn },
{ "HSPLITTER_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_PAINT )}, &ModuleFakeDyn },
{ "HSPLITTER_DRAG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_DRAG )}, &ModuleFakeDyn },
{ "HSPLITTER_DRAGALL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLITTER_DRAGALL )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ALEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ARIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LVERTICAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATESTATIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATESTATIC )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCURSOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HCURSOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOADCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOADCURSOR )}, NULL },
{ "LVERTICAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SETCURSOR )}, NULL },
{ "LCAPTURED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETCAPTURE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCAPTURE )}, NULL },
{ "_LCAPTURED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RELEASECAPTURE", {HB_FS_PUBLIC}, {HB_FUNCNAME( RELEASECAPTURE )}, NULL },
{ "DRAGALL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BENDDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITWINCTRL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITWINCTRL )}, NULL },
{ "DEFINEPAINTSTRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEFINEPAINTSTRU )}, NULL },
{ "BEGINPAINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( BEGINPAINT )}, NULL },
{ "GETCLIENTRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETCLIENTRECT )}, NULL },
{ "BPAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DRAWEDGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWEDGE )}, NULL },
{ "ENDPAINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDPAINT )}, NULL },
{ "LOWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWORD )}, NULL },
{ "HIWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HIWORD )}, NULL },
{ "_NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MOVEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOVEWINDOW )}, NULL },
{ "_LMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ARIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MOVE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ALEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HSPLIT, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HSPLIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HSPLIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( HSPLITTER )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,80,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,17,2,48,2,0,108,3,100,12,
	0,106,10,72,83,112,108,105,116,116,101,114,0,48,
	4,0,108,5,100,12,0,112,0,4,1,0,112,2,
	82,1,0,133,18,0,48,6,0,103,1,0,100,106,
	7,83,84,65,84,73,67,0,95,2,106,9,119,105,
	110,99,108,97,115,115,0,4,1,0,9,112,5,73,
	134,2,48,7,0,103,1,0,100,100,95,2,106,6,
	97,76,101,102,116,0,4,1,0,9,9,112,6,73,
	134,3,48,7,0,103,1,0,100,100,95,2,106,7,
	97,82,105,103,104,116,0,4,1,0,9,9,112,6,
	73,134,4,48,7,0,103,1,0,100,100,95,2,106,
	10,108,86,101,114,116,105,99,97,108,0,4,1,0,
	9,9,112,6,73,134,5,48,7,0,103,1,0,100,
	100,95,2,106,8,104,67,117,114,115,111,114,0,4,
	1,0,9,9,112,6,73,134,6,48,7,0,103,1,
	0,100,9,95,2,106,10,108,67,97,112,116,117,114,
	101,100,0,4,1,0,9,9,112,6,73,134,7,48,
	7,0,103,1,0,100,9,95,2,106,7,108,77,111,
	118,101,100,0,4,1,0,9,9,112,6,73,134,8,
	48,7,0,103,1,0,100,100,95,2,106,9,98,69,
	110,100,68,114,97,103,0,4,1,0,9,9,112,6,
	73,134,11,48,8,0,103,1,0,106,4,78,101,119,
	0,108,9,14,95,2,9,112,4,73,134,12,48,8,
	0,103,1,0,106,9,65,99,116,105,118,97,116,101,
	0,108,10,14,95,2,9,112,4,73,134,13,48,8,
	0,103,1,0,106,8,111,110,69,118,101,110,116,0,
	108,11,14,95,2,9,112,4,73,134,14,48,8,0,
	103,1,0,106,5,73,110,105,116,0,108,12,14,95,
	2,9,112,4,73,134,15,48,8,0,103,1,0,106,
	6,80,97,105,110,116,0,108,13,14,95,2,9,112,
	4,73,134,16,48,8,0,103,1,0,106,5,68,114,
	97,103,0,108,14,14,95,2,9,112,4,73,134,17,
	48,8,0,103,1,0,106,8,68,114,97,103,65,108,
	108,0,108,15,14,95,2,9,112,4,73,48,19,0,
	103,1,0,112,0,73,108,20,100,48,17,0,103,1,
	0,112,0,12,1,80,1,108,21,100,95,1,106,10,
	73,110,105,116,67,108,97,115,115,0,12,2,28,32,
	48,22,0,95,1,108,23,100,12,0,112,1,73,25,
	17,108,20,100,48,17,0,103,1,0,112,0,12,1,
	80,1,108,24,100,12,0,121,15,28,10,103,1,0,
	108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,12,102,80,13,133,43,0,48,2,0,48,25,
	0,95,13,112,0,95,1,95,2,97,13,0,0,80,
	95,3,95,4,95,5,95,6,100,100,95,7,95,8,
	100,95,9,95,10,112,14,73,134,2,48,26,0,95,
	13,106,1,0,112,1,73,134,3,48,27,0,95,13,
	95,11,100,8,28,7,4,0,0,25,4,95,11,112,
	1,73,134,4,48,28,0,95,13,95,12,100,8,28,
	7,4,0,0,25,4,95,12,112,1,73,134,5,48,
	29,0,95,13,48,30,0,95,13,112,0,48,31,0,
	95,13,112,0,15,112,1,73,134,7,48,32,0,95,
	13,112,0,73,134,9,95,13,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,55,0,108,33,100,48,34,
	0,48,35,0,95,1,112,0,112,0,12,1,31,81,
	134,2,48,36,0,95,1,108,37,100,48,34,0,48,
	35,0,95,1,112,0,112,0,48,38,0,95,1,112,
	0,48,39,0,95,1,112,0,48,40,0,95,1,112,
	0,48,41,0,95,1,112,0,48,31,0,95,1,112,
	0,48,30,0,95,1,112,0,12,7,112,1,73,134,
	3,48,42,0,95,1,112,0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,1,3,102,80,4,133,64,0,95,2,80,2,134,
	2,95,1,93,0,2,8,28,88,134,3,48,43,0,
	95,4,112,0,100,8,28,34,134,4,48,44,0,95,
	4,108,45,100,48,46,0,95,4,112,0,28,7,93,
	132,127,25,5,93,133,127,12,1,112,1,73,134,6,
	108,47,100,48,43,0,95,4,112,0,20,1,134,7,
	48,48,0,95,4,112,0,29,180,0,134,8,48,49,
	0,95,4,95,3,112,1,73,26,165,0,134,10,95,
	1,92,15,8,28,15,134,11,48,50,0,95,4,112,
	0,73,26,143,0,134,12,95,1,93,1,2,8,28,
	43,134,13,108,47,100,48,43,0,95,4,112,0,20,
	1,134,14,108,51,100,48,34,0,95,4,112,0,20,
	1,134,15,48,52,0,95,4,120,112,1,73,25,91,
	134,16,95,1,93,2,2,8,28,62,134,17,108,53,
	100,20,0,134,18,48,54,0,95,4,112,0,73,134,
	19,48,52,0,95,4,9,112,1,73,134,20,48,55,
	0,95,4,112,0,100,69,28,40,134,21,48,56,0,
	48,55,0,95,4,112,0,95,4,112,1,73,25,21,
	134,23,95,1,92,2,8,28,12,134,24,48,57,0,
	95,4,112,0,73,134,27,92,255,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,95,0,48,58,0,95,1,
	112,0,31,58,134,1,48,42,0,48,25,0,95,1,
	112,0,112,0,73,134,2,48,59,0,95,1,122,112,
	1,73,134,3,108,60,100,48,34,0,95,1,112,0,
	95,1,20,2,134,4,108,61,100,48,34,0,95,1,
	112,0,20,1,134,7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_PAINT )
{
   static const BYTE pcode[] =
   {
	13,8,0,102,80,1,133,108,0,108,62,100,12,0,
	80,2,134,1,108,63,100,48,34,0,95,1,112,0,
	95,2,12,2,80,3,134,2,108,64,100,48,34,0,
	95,1,112,0,12,1,80,4,134,3,95,4,122,1,
	48,46,0,95,1,112,0,28,5,122,25,4,92,5,
	72,80,5,134,4,95,4,92,2,1,48,46,0,95,
	1,112,0,28,6,92,5,25,3,122,72,80,6,134,
	5,95,4,92,3,1,48,46,0,95,1,112,0,28,
	5,121,25,4,92,5,49,80,7,134,6,95,4,92,
	4,1,48,46,0,95,1,112,0,28,6,92,5,25,
	3,121,49,80,8,134,8,48,65,0,95,1,112,0,
	100,69,28,21,134,9,48,56,0,48,65,0,95,1,
	112,0,95,1,112,1,73,25,35,134,11,108,66,100,
	95,3,95,5,95,6,95,7,95,8,92,6,48,46,
	0,95,1,112,0,28,5,122,25,4,92,2,20,7,
	134,13,108,67,100,48,34,0,95,1,112,0,95,2,
	20,2,134,15,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_DRAG )
{
   static const BYTE pcode[] =
   {
	13,3,1,102,80,2,133,126,0,108,68,100,95,1,
	12,1,80,3,108,69,100,95,1,12,1,80,4,134,
	2,48,46,0,95,2,112,0,28,43,134,3,95,3,
	93,0,125,15,28,11,134,4,97,1,0,255,255,167,
	3,134,6,48,70,0,95,2,48,40,0,95,2,112,
	0,95,3,72,112,1,73,25,41,134,8,95,4,93,
	0,125,15,28,11,134,9,97,1,0,255,255,167,4,
	134,11,48,71,0,95,2,48,41,0,95,2,112,0,
	95,4,72,112,1,73,134,13,108,72,100,48,34,0,
	95,2,112,0,48,40,0,95,2,112,0,48,41,0,
	95,2,112,0,48,31,0,95,2,112,0,48,30,0,
	95,2,112,0,20,5,134,14,48,73,0,95,2,120,
	112,1,73,134,16,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLITTER_DRAGALL )
{
   static const BYTE pcode[] =
   {
	13,4,0,102,80,1,133,147,0,126,2,1,0,95,
	2,108,74,100,48,75,0,95,1,112,0,12,1,34,
	29,209,0,134,1,48,75,0,95,1,112,0,95,2,
	1,80,3,134,2,48,46,0,95,1,112,0,28,71,
	134,3,48,40,0,95,1,112,0,48,31,0,95,1,
	112,0,72,48,40,0,95,3,112,0,49,80,4,134,
	4,48,70,0,95,3,48,40,0,95,3,112,0,95,
	4,72,112,1,73,134,5,48,76,0,95,3,48,31,
	0,95,3,112,0,95,4,49,112,1,73,25,69,134,
	7,48,41,0,95,1,112,0,48,30,0,95,1,112,
	0,72,48,41,0,95,3,112,0,49,80,4,134,8,
	48,71,0,95,3,48,41,0,95,3,112,0,95,4,
	72,112,1,73,134,9,48,77,0,95,3,48,30,0,
	95,3,112,0,95,4,49,112,1,73,134,11,48,78,
	0,95,3,48,40,0,95,3,112,0,48,41,0,95,
	3,112,0,48,31,0,95,3,112,0,48,30,0,95,
	3,112,0,112,4,73,134,12,173,2,26,35,255,134,
	13,126,2,1,0,95,2,108,74,100,48,79,0,95,
	1,112,0,12,1,34,29,169,0,134,14,48,79,0,
	95,1,112,0,95,2,1,80,3,134,15,48,46,0,
	95,1,112,0,28,51,134,16,48,40,0,95,1,112,
	0,48,40,0,95,3,112,0,48,31,0,95,3,112,
	0,72,49,80,4,134,17,48,76,0,95,3,48,31,
	0,95,3,112,0,95,4,72,112,1,73,25,49,134,
	19,48,41,0,95,1,112,0,48,41,0,95,3,112,
	0,48,30,0,95,3,112,0,72,49,80,4,134,20,
	48,77,0,95,3,48,30,0,95,3,112,0,95,4,
	72,112,1,73,134,22,48,78,0,95,3,48,40,0,
	95,3,112,0,48,41,0,95,3,112,0,48,31,0,
	95,3,112,0,48,30,0,95,3,112,0,112,4,73,
	134,23,173,2,26,75,255,134,24,48,73,0,95,1,
	9,112,1,73,134,26,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,80,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}
