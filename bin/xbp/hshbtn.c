/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\hshbtn.prg>
 * Command: -oxbp\hshbtn.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\hshbtn.prg 
 * Created: 2020.09.03 14:41:37 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\hshbtn.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HSHADEBUTTON );
HB_FUNC_STATIC( HSHADEBUTTON_NEW );
HB_FUNC_STATIC( HSHADEBUTTON_PAINT );
HB_FUNC_STATIC( HSHADEBUTTON_END );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HOWNBUTTON );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( SHADE_NEW );
HB_FUNC_EXTERN( SHADE_SET );
HB_FUNC_EXTERN( DEFINEPAINTSTRU );
HB_FUNC_EXTERN( BEGINPAINT );
HB_FUNC_EXTERN( GETFOCUS );
HB_FUNC_EXTERN( SHADE_DRAW );
HB_FUNC_EXTERN( ENDPAINT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HSHBTN )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HSHADEBUTTON", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHADEBUTTON )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HOWNBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HOWNBUTTON )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSHADEBUTTON_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHADEBUTTON_NEW )}, &ModuleFakeDyn },
{ "HSHADEBUTTON_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHADEBUTTON_PAINT )}, &ModuleFakeDyn },
{ "HSHADEBUTTON_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHADEBUTTON_END )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HOWNBUTTON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HSHADE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SHADE_NEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHADE_NEW )}, NULL },
{ "SHADE_SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHADE_SET )}, NULL },
{ "HSHADE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DEFINEPAINTSTRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEFINEPAINTSTRU )}, NULL },
{ "BEGINPAINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( BEGINPAINT )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_STATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LENABLED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFOCUS )}, NULL },
{ "SHADE_DRAW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHADE_DRAW )}, NULL },
{ "DRAWITEMS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENDPAINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDPAINT )}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HSHBTN, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HSHBTN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HSHBTN )
   #include "hbiniseg.h"
#endif

HB_FUNC( HSHADEBUTTON )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,36,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,205,0,48,2,0,108,3,100,12,
	0,106,13,72,83,104,97,100,101,66,117,116,116,111,
	110,0,48,4,0,108,5,100,12,0,112,0,4,1,
	0,112,2,82,1,0,133,23,0,48,6,0,103,1,
	0,100,100,95,2,106,7,104,83,104,97,100,101,0,
	4,1,0,9,9,112,6,73,134,7,48,7,0,103,
	1,0,106,4,78,101,119,0,108,8,14,95,2,9,
	112,4,73,134,8,48,7,0,103,1,0,106,6,80,
	97,105,110,116,0,108,9,14,95,2,9,112,4,73,
	134,9,48,7,0,103,1,0,106,4,69,78,68,0,
	108,10,14,95,2,9,112,4,73,48,14,0,103,1,
	0,112,0,73,108,15,100,48,12,0,103,1,0,112,
	0,12,1,80,1,108,16,100,95,1,106,10,73,110,
	105,116,67,108,97,115,115,0,12,2,28,32,48,17,
	0,95,1,108,18,100,12,0,112,1,73,25,17,108,
	15,100,48,12,0,103,1,0,112,0,12,1,80,1,
	108,19,100,12,0,121,15,28,10,103,1,0,108,0,
	14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSHADEBUTTON_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,33,102,80,34,133,47,0,48,2,0,48,20,
	0,95,34,112,0,95,1,95,2,95,3,95,4,95,
	5,95,6,95,7,95,8,95,9,95,10,95,11,95,
	12,95,13,95,14,95,15,95,16,95,17,100,100,95,
	18,95,19,95,20,95,21,95,22,95,23,95,24,95,
	25,95,26,95,27,112,29,73,134,2,48,21,0,95,
	34,108,22,100,121,121,95,6,95,7,95,12,12,5,
	112,1,73,134,3,108,23,100,48,24,0,95,34,112,
	0,95,28,95,29,95,30,95,31,95,32,95,33,20,
	7,134,4,95,34,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSHADEBUTTON_PAINT )
{
   static const BYTE pcode[] =
   {
	13,4,0,102,80,1,133,57,0,108,25,100,12,0,
	80,2,134,1,108,26,100,48,27,0,95,1,112,0,
	95,2,12,2,80,3,134,3,48,28,0,95,1,112,
	0,121,8,28,13,134,4,48,29,0,95,1,122,112,
	1,73,134,7,48,30,0,95,1,112,0,28,64,134,
	10,48,28,0,95,1,112,0,92,3,8,28,6,92,
	2,25,21,122,48,28,0,95,1,112,0,92,2,8,
	28,6,92,8,25,3,121,72,108,31,100,12,0,48,
	27,0,95,1,112,0,8,28,6,92,4,25,3,121,
	72,80,4,25,8,134,12,126,4,16,0,134,15,108,
	32,100,48,24,0,95,1,112,0,95,3,95,4,20,
	3,134,17,48,33,0,95,1,95,3,112,1,73,134,
	19,108,34,100,48,27,0,95,1,112,0,95,2,20,
	2,134,20,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSHADEBUTTON_END )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,81,0,48,35,0,48,20,
	0,95,1,112,0,112,0,73,134,2,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,36,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

