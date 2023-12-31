/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <D:\\hwgui_2_17\\source\\herrsys.prg>
 * Command: -oherrsys.c -m -n -p -q -gc0 -ID:\hwgui_2_17\include -ID:\xharbour123_Bcc73\include D:\hwgui_2_17\source\herrsys.prg 
 * Created: 2022.04.18 15:41:17 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\hwgui_2_17\\source\\herrsys.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HWG_ERRSYS );
HB_FUNC_STATIC( DEFERROR );
HB_FUNC( HWG_ERRMSG );
HB_FUNC( HWG_WRITELOG );
HB_FUNC_STATIC( ERRORPREVIEW );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( CURDIR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( NETERR );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCFILE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( HWG_VERSION );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_EXTERN( HWG_ENDWINDOW );
HB_FUNC_EXTERN( HWG_POSTQUITMESSAGE );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HDIALOG );
HB_FUNC_EXTERN( HEDIT );
HB_FUNC_EXTERN( HWG_SENDMESSAGE );
HB_FUNC_EXTERN( HBUTTON );
HB_FUNC_EXTERN( HWG_ENDDIALOG );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HERRSYS )
{ "HWG_ERRSYS", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( HWG_ERRSYS )}, &ModuleFakeDyn },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "DEFERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DEFERROR )}, &ModuleFakeDyn },
{ "CURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDIR )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "GENCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OSCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CANDEFAULT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NETERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETERR )}, NULL },
{ "HWG_ERRMSG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWG_ERRMSG )}, &ModuleFakeDyn },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCFILE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "HWG_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_VERSION )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "ERRORPREVIEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ERRORPREVIEW )}, &ModuleFakeDyn },
{ "HWG_ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_ENDWINDOW )}, NULL },
{ "HWG_POSTQUITMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_POSTQUITMESSAGE )}, NULL },
{ "SEVERITY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "SUBSYSTEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "SUBCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FILENAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPERATION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_WRITELOG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWG_WRITELOG )}, &ModuleFakeDyn },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDIALOG )}, NULL },
{ "HEDIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEDIT )}, NULL },
{ "HWG_SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SENDMESSAGE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBUTTON )}, NULL },
{ "HWG_ENDDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_ENDDIALOG )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HERRSYS, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HERRSYS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HERRSYS )
   #include "hbiniseg.h"
#endif

HB_FUNC( HWG_ERRSYS )
{
   static const BYTE pcode[] =
   {
	116,48,0,133,20,0,108,1,100,89,15,0,1,0,
	0,0,108,2,100,95,1,12,1,6,20,1,134,1,
	106,2,92,0,108,3,100,12,0,72,108,4,100,108,
	3,100,12,0,12,1,28,7,106,1,0,25,6,106,
	2,92,0,72,82,1,0,134,3,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DEFERROR )
{
   static const BYTE pcode[] =
   {
	13,3,1,116,48,0,133,32,0,48,5,0,95,1,
	112,0,92,5,8,28,7,134,1,121,110,7,134,7,
	9,48,5,0,95,1,112,0,92,21,8,28,24,73,
	9,48,6,0,95,1,112,0,92,32,8,28,10,73,
	48,7,0,95,1,112,0,28,15,134,8,108,8,100,
	120,20,1,134,9,9,110,7,134,14,9,48,5,0,
	95,1,112,0,92,40,8,28,10,73,48,7,0,95,
	1,112,0,28,15,134,15,108,8,100,120,20,1,134,
	16,9,110,7,134,19,108,9,100,95,1,12,1,80,
	2,134,20,108,4,100,48,6,0,95,1,112,0,12,
	1,31,43,134,21,106,12,40,68,79,83,32,69,114,
	114,111,114,32,0,108,10,100,108,11,100,48,6,0,
	95,1,112,0,12,1,12,1,72,106,2,41,0,72,
	80,3,134,24,108,4,100,48,6,0,95,1,112,0,
	12,1,31,13,134,25,106,2,32,0,95,3,72,167,
	2,134,28,126,4,2,0,134,29,108,4,100,108,12,
	100,95,4,12,1,12,1,31,77,134,30,106,15,13,
	10,67,97,108,108,101,100,32,102,114,111,109,32,0,
	108,13,100,95,4,12,1,72,106,3,45,62,0,72,
	108,12,100,95,4,12,1,72,106,2,40,0,72,108,
	14,100,108,11,100,108,15,100,95,4,173,4,12,1,
	12,1,12,1,72,106,2,41,0,72,167,2,25,167,
	134,35,106,3,13,10,0,167,2,134,37,106,3,13,
	10,0,108,16,100,122,12,1,72,167,2,134,38,106,
	8,13,10,68,97,116,101,58,0,108,17,100,108,18,
	100,12,0,12,1,72,167,2,134,39,106,8,13,10,
	84,105,109,101,58,0,108,19,100,12,0,72,167,2,
	134,42,108,20,100,103,1,0,106,10,69,114,114,111,
	114,46,108,111,103,0,72,95,2,20,2,134,44,108,
	21,100,95,2,20,1,134,45,108,22,100,20,0,134,
	46,108,23,100,121,20,1,134,48,9,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HWG_ERRMSG )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,87,0,48,24,0,95,1,112,0,122,
	15,28,12,106,6,69,114,114,111,114,0,25,12,106,
	8,87,97,114,110,105,110,103,0,106,2,32,0,72,
	80,2,134,3,108,25,100,48,26,0,95,1,112,0,
	12,1,28,15,134,4,48,26,0,95,1,112,0,167,
	2,25,12,134,6,106,4,63,63,63,0,167,2,134,
	10,108,27,100,48,28,0,95,1,112,0,12,1,106,
	2,78,0,8,28,30,134,11,106,2,47,0,108,10,
	100,108,11,100,48,28,0,95,1,112,0,12,1,12,
	1,72,167,2,25,13,134,13,106,5,47,63,63,63,
	0,167,2,134,17,108,25,100,48,29,0,95,1,112,
	0,12,1,28,19,134,18,106,3,32,32,0,48,29,
	0,95,1,112,0,72,167,2,134,23,108,4,100,48,
	30,0,95,1,112,0,12,1,31,21,134,24,106,3,
	58,32,0,48,30,0,95,1,112,0,72,167,2,25,
	35,134,25,108,4,100,48,31,0,95,1,112,0,12,
	1,31,19,134,26,106,3,58,32,0,48,31,0,95,
	1,112,0,72,167,2,134,35,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HWG_WRITELOG )
{
   static const BYTE pcode[] =
   {
	13,1,2,116,48,0,133,127,0,103,1,0,95,2,
	100,8,28,12,106,6,97,46,108,111,103,0,25,4,
	95,2,72,80,2,134,1,108,33,100,95,2,12,1,
	31,15,134,2,108,34,100,95,2,12,1,80,3,25,
	14,134,4,108,35,100,95,2,122,12,2,80,3,134,
	6,108,36,100,95,3,121,92,2,20,3,134,7,108,
	37,100,95,3,95,1,106,2,10,0,72,20,2,134,
	8,108,38,100,95,3,20,1,134,10,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ERRORPREVIEW )
{
   static const BYTE pcode[] =
   {
	13,2,1,133,143,0,48,39,0,108,40,100,12,0,
	92,11,100,92,92,92,61,93,244,1,93,244,1,106,
	10,69,114,114,111,114,46,108,111,103,0,100,100,100,
	100,100,100,100,100,9,100,100,9,100,100,9,100,100,
	9,112,25,80,2,134,4,48,39,0,108,41,100,12,
	0,100,100,95,1,100,97,4,8,48,0,92,10,92,
	10,93,224,1,93,184,1,100,100,100,100,89,27,0,
	1,0,1,0,3,0,108,42,100,48,43,0,95,255,
	112,0,93,177,0,121,121,12,4,6,100,100,97,128,
	255,255,0,121,100,9,100,9,100,100,100,112,25,80,
	3,48,44,0,95,3,106,6,111,69,100,105,116,0,
	112,1,73,134,6,48,39,0,108,45,100,12,0,100,
	100,100,93,200,0,93,204,1,92,100,92,32,106,6,
	67,108,111,115,101,0,100,100,100,100,89,13,0,1,
	0,0,0,108,46,100,12,0,6,100,100,100,112,16,
	73,48,47,0,95,2,112,0,73,134,9,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,48,0,1,0,116,48,0,106,1,0,82,1,0,
	7
   };

   hb_vmExecute( pcode, symbols );
}

