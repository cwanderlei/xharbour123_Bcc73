/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\printdos.prg>
 * Command: -oxbp\printdos.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\printdos.prg 
 * Created: 2020.09.03 14:41:51 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\printdos.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( PRINTDOS );
HB_FUNC_STATIC( PRINTDOS_NEW );
HB_FUNC_STATIC( PRINTDOS_COMANDO );
HB_FUNC_STATIC( PRINTDOS_GWRITE );
HB_FUNC_STATIC( PRINTDOS_EJECT );
HB_FUNC_STATIC( PRINTDOS_COMPRESS );
HB_FUNC_STATIC( PRINTDOS_DOUBLE );
HB_FUNC_STATIC( PRINTDOS_DESCOMPRESS );
HB_FUNC_STATIC( PRINTDOS_BOLD );
HB_FUNC_STATIC( PRINTDOS_UNBOLD );
HB_FUNC_STATIC( PRINTDOS_NEWLINE );
HB_FUNC_STATIC( PRINTDOS_SAY );
HB_FUNC_STATIC( PRINTDOS_SETCOLS );
HB_FUNC_STATIC( PRINTDOS_SETPRC );
HB_FUNC_STATIC( PRINTDOS_END );
HB_FUNC_STATIC( PRINTDOS_PRINTERFILE );
HB_FUNC( WPROW );
HB_FUNC( WPCOL );
HB_FUNC( WSETPRC );
HB_FUNC_STATIC( PRINTDOS_TXTTOGRAPHIC );
HB_FUNC_STATIC( PRINTDOS_PREVIEW );
HB_FUNC_STATIC( PRINTDOSPRINT );
HB_FUNC_STATIC( PRINTDOSANT );
HB_FUNC_STATIC( PRINTDOSNEXT );
HB_FUNC( REGENFILE );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( PRINTPORTNAME );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( PRINTSETUPDOS );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( CHR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( HB_ANSITOOEM );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( HPRINTER );
HB_FUNC_EXTERN( SELECTOBJECT );
HB_FUNC_EXTERN( RDSTR );
HB_FUNC_EXTERN( HFONT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HDIALOG );
HB_FUNC_EXTERN( GETDESKTOPWIDTH );
HB_FUNC_EXTERN( GETDESKTOPHEIGHT );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( HEDIT );
HB_FUNC_EXTERN( HBUTTON );
HB_FUNC_EXTERN( ENDDIALOG );
HB_FUNC_EXTERN( GETMODALHANDLE );
HB_FUNC_EXTERN( SETDLGITEMTEXT );
HB_FUNC_EXTERN( AT );

/* Forward declarations of all DUMP defined Functions. */
HB_FUNC( AFILLTEXT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PRINTDOS )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "PRINTDOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PRINTDOS_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_NEW )}, &ModuleFakeDyn },
{ "PRINTDOS_SAY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_SAY )}, &ModuleFakeDyn },
{ "PRINTDOS_SETCOLS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_SETCOLS )}, &ModuleFakeDyn },
{ "PRINTDOS_GWRITE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_GWRITE )}, &ModuleFakeDyn },
{ "PRINTDOS_NEWLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_NEWLINE )}, &ModuleFakeDyn },
{ "PRINTDOS_EJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_EJECT )}, &ModuleFakeDyn },
{ "PRINTDOS_COMPRESS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_COMPRESS )}, &ModuleFakeDyn },
{ "PRINTDOS_DOUBLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_DOUBLE )}, &ModuleFakeDyn },
{ "PRINTDOS_DESCOMPRESS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_DESCOMPRESS )}, &ModuleFakeDyn },
{ "PRINTDOS_BOLD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_BOLD )}, &ModuleFakeDyn },
{ "PRINTDOS_UNBOLD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_UNBOLD )}, &ModuleFakeDyn },
{ "PRINTDOS_COMANDO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_COMANDO )}, &ModuleFakeDyn },
{ "PRINTDOS_SETPRC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_SETPRC )}, &ModuleFakeDyn },
{ "PRINTDOS_PRINTERFILE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_PRINTERFILE )}, &ModuleFakeDyn },
{ "PRINTDOS_TXTTOGRAPHIC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_TXTTOGRAPHIC )}, &ModuleFakeDyn },
{ "PRINTDOS_PREVIEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_PREVIEW )}, &ModuleFakeDyn },
{ "PRINTDOS_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOS_END )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_CCOMPR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPRINTSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CNORMAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CDOUBLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CUNBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CEJECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NPROW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NPCOL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OTOPMAR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OANS2OEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OLEFTMAR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_OPORTA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PRINTPORTNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PRINTPORTNAME )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "PRINTSETUPDOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( PRINTSETUPDOS )}, NULL },
{ "NSTARTPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NENDPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NCOPY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "_GTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "OPORTA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LASTERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "CHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "OANS2OEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_ANSITOOEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ANSITOOEM )}, NULL },
{ "NPCOL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "CEJECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "COMANDO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CCOMPR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CDOUBLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CNORMAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CUNBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SETCOLS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GWRITE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NPROW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EJECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEWLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "_ERROSANT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WPROW", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( WPROW )}, &ModuleFakeDyn },
{ "WPCOL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WPCOL )}, &ModuleFakeDyn },
{ "WSETPRC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WSETPRC )}, &ModuleFakeDyn },
{ "SETPRC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HPRINTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPRINTER )}, NULL },
{ "ADDFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STARTDOC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STARTPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SELECTOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECTOBJECT )}, NULL },
{ "HDC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RDSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDSTR )}, NULL },
{ "SAY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENDPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENDDOC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PREVIEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RELEASE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HFONT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "COLORPREVIEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDIALOG )}, NULL },
{ "GETDESKTOPWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDESKTOPWIDTH )}, NULL },
{ "GETDESKTOPHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDESKTOPHEIGHT )}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "HEDIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEDIT )}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBUTTON )}, NULL },
{ "PRINTDOSANT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOSANT )}, &ModuleFakeDyn },
{ "PRINTDOSNEXT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOSNEXT )}, &ModuleFakeDyn },
{ "PRINTDOSPRINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRINTDOSPRINT )}, &ModuleFakeDyn },
{ "ENDDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDDIALOG )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETMODALHANDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETMODALHANDLE )}, NULL },
{ "SETDLGITEMTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETDLGITEMTEXT )}, NULL },
{ "REGENFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( REGENFILE )}, &ModuleFakeDyn },
{ "AFILLTEXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( AFILLTEXT )}, &ModuleFakeDyn },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PRINTDOS, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PRINTDOS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PRINTDOS )
   #include "hbiniseg.h"
#endif

HB_FUNC( PRINTDOS )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,134,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,83,4,48,2,0,108,3,100,12,
	0,106,9,80,114,105,110,116,68,111,115,0,48,4,
	0,108,5,100,12,0,112,0,4,1,0,112,2,82,
	1,0,133,36,0,48,6,0,103,1,0,106,10,67,
	72,65,82,65,67,84,69,82,0,100,95,2,106,7,
	99,67,111,109,112,114,0,106,8,99,78,111,114,109,
	97,108,0,106,6,111,84,101,120,116,0,106,8,99,
	68,111,117,98,108,101,0,106,6,99,66,111,108,100,
	0,106,8,99,85,110,66,111,108,100,0,4,6,0,
	9,9,112,6,73,134,1,48,6,0,103,1,0,106,
	10,67,72,65,82,65,67,84,69,82,0,100,95,2,
	106,7,111,80,111,114,116,97,0,106,9,111,80,105,
	99,116,117,114,101,0,4,2,0,9,9,112,6,73,
	134,2,48,6,0,103,1,0,106,8,78,85,77,69,
	82,73,67,0,100,95,2,106,5,111,114,111,119,0,
	106,5,111,67,111,108,0,4,2,0,9,9,112,6,
	73,134,3,48,6,0,103,1,0,100,100,95,2,106,
	7,99,69,106,101,99,116,0,106,6,110,80,114,111,
	119,0,106,6,110,80,99,111,108,0,106,6,102,84,
	101,120,116,0,106,6,103,84,101,120,116,0,4,5,
	0,9,9,112,6,73,134,4,48,6,0,103,1,0,
	106,8,78,85,77,69,82,73,67,0,100,95,2,106,
	8,111,84,111,112,77,97,114,0,4,1,0,9,9,
	112,6,73,134,5,48,6,0,103,1,0,106,8,78,
	85,77,69,82,73,67,0,100,95,2,106,9,111,76,
	101,102,116,77,97,114,0,4,1,0,9,9,112,6,
	73,134,6,48,6,0,103,1,0,106,6,76,79,71,
	73,67,0,100,95,2,106,9,111,65,110,115,50,79,
	101,109,0,4,1,0,9,9,112,6,73,134,7,48,
	6,0,103,1,0,100,100,95,2,106,10,76,97,115,
	116,69,114,114,111,114,0,4,1,0,9,9,112,6,
	73,134,8,48,6,0,103,1,0,100,122,95,2,106,
	12,111,80,114,105,110,116,83,116,121,108,101,0,4,
	1,0,9,9,112,6,73,134,9,48,6,0,103,1,
	0,100,100,95,2,106,13,99,111,108,111,114,80,114,
	101,118,105,101,119,0,4,1,0,9,9,112,6,73,
	134,10,48,6,0,103,1,0,100,122,95,2,106,11,
	110,83,116,97,114,116,80,97,103,101,0,4,1,0,
	9,9,112,6,73,134,11,48,6,0,103,1,0,100,
	121,95,2,106,9,110,69,110,100,80,97,103,101,0,
	4,1,0,9,9,112,6,73,134,12,48,6,0,103,
	1,0,100,122,95,2,106,6,110,67,111,112,121,0,
	4,1,0,9,9,112,6,73,134,14,48,7,0,103,
	1,0,106,4,78,101,119,0,108,8,14,95,2,128,
	16,0,9,112,4,73,134,16,48,7,0,103,1,0,
	106,4,83,97,121,0,108,9,14,95,2,9,112,4,
	73,134,18,48,7,0,103,1,0,106,8,83,101,116,
	67,111,108,115,0,108,10,14,95,2,9,112,4,73,
	134,20,48,7,0,103,1,0,106,7,103,87,114,105,
	116,101,0,108,11,14,95,2,9,112,4,73,134,22,
	48,7,0,103,1,0,106,8,78,101,119,76,105,110,
	101,0,108,12,14,95,2,9,112,4,73,134,24,48,
	7,0,103,1,0,106,6,69,106,101,99,116,0,108,
	13,14,95,2,9,112,4,73,134,26,48,7,0,103,
	1,0,106,9,67,111,109,112,114,101,115,115,0,108,
	14,14,95,2,9,112,4,73,134,28,48,7,0,103,
	1,0,106,7,68,111,117,98,108,101,0,108,15,14,
	95,2,9,112,4,73,134,30,48,7,0,103,1,0,
	106,12,68,101,115,67,111,109,112,114,101,115,115,0,
	108,16,14,95,2,9,112,4,73,134,32,48,7,0,
	103,1,0,106,5,66,111,108,100,0,108,17,14,95,
	2,9,112,4,73,134,34,48,7,0,103,1,0,106,
	7,85,110,66,111,108,100,0,108,18,14,95,2,9,
	112,4,73,134,37,48,7,0,103,1,0,106,8,67,
	111,109,97,110,100,111,0,108,19,14,95,2,9,112,
	4,73,134,39,48,7,0,103,1,0,106,7,83,101,
	116,80,114,99,0,108,20,14,95,2,9,112,4,73,
	134,41,48,7,0,103,1,0,106,12,80,114,105,110,
	116,101,114,70,105,108,101,0,108,21,14,95,2,9,
	112,4,73,134,43,48,7,0,103,1,0,106,13,84,
	120,116,116,111,71,114,97,112,104,105,99,0,108,22,
	14,95,2,9,112,4,73,134,45,48,7,0,103,1,
	0,106,8,80,114,101,118,105,101,119,0,108,23,14,
	95,2,9,112,4,73,134,47,48,7,0,103,1,0,
	106,4,69,78,68,0,108,24,14,95,2,9,112,4,
	73,48,28,0,103,1,0,112,0,73,108,29,100,48,
	26,0,103,1,0,112,0,12,1,80,1,108,30,100,
	95,1,106,10,73,110,105,116,67,108,97,115,115,0,
	12,2,28,32,48,31,0,95,1,108,32,100,12,0,
	112,1,73,25,17,108,29,100,48,26,0,103,1,0,
	112,0,12,1,80,1,108,33,100,12,0,121,15,28,
	10,103,1,0,108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_NEW )
{
   static const BYTE pcode[] =
   {
	13,8,1,102,80,2,133,88,0,106,3,49,52,0,
	106,9,50,55,44,51,51,44,51,50,0,106,19,50,
	55,44,52,48,44,49,49,53,44,52,57,44,52,56,
	44,55,50,0,4,3,0,80,3,134,1,106,3,49,
	56,0,106,9,50,55,44,51,51,44,48,48,0,106,
	19,50,55,44,52,48,44,49,49,53,44,52,57,44,
	53,48,44,55,50,0,4,3,0,80,4,134,2,106,
	3,49,53,0,106,9,50,55,44,51,51,44,48,52,
	0,106,19,50,55,44,52,48,44,49,49,53,44,52,
	57,44,53,54,44,55,50,0,4,3,0,80,5,134,
	3,106,6,50,55,44,55,49,0,106,16,50,55,44,
	52,48,44,49,49,53,44,53,53,44,54,54,0,106,
	24,50,55,44,52,48,44,52,57,44,53,52,44,52,
	54,44,53,52,44,53,53,44,55,50,0,4,3,0,
	80,6,134,4,106,6,50,55,44,55,50,0,106,16,
	50,55,44,52,48,44,49,49,53,44,52,56,44,54,
	54,0,106,19,50,55,44,52,48,44,49,49,53,44,
	52,57,44,53,48,44,55,50,0,4,3,0,80,7,
	134,7,48,34,0,95,2,95,5,48,35,0,95,2,
	112,0,1,112,1,73,134,8,48,36,0,95,2,95,
	4,48,35,0,95,2,112,0,1,112,1,73,134,9,
	48,37,0,95,2,95,3,48,35,0,95,2,112,0,
	1,112,1,73,134,10,48,38,0,95,2,95,6,48,
	35,0,95,2,112,0,1,112,1,73,134,11,48,39,
	0,95,2,95,7,48,35,0,95,2,112,0,1,112,
	1,73,134,12,48,40,0,95,2,106,3,49,50,0,
	112,1,73,134,13,48,41,0,95,2,121,112,1,73,
	134,14,48,42,0,95,2,121,112,1,73,134,15,48,
	43,0,95,2,121,112,1,73,134,16,48,44,0,95,
	2,120,112,1,73,134,17,48,45,0,95,2,121,112,
	1,73,134,18,48,46,0,95,2,106,1,0,112,1,
	73,134,20,108,47,100,95,1,12,1,28,22,134,21,
	48,48,0,95,2,106,5,76,80,84,49,0,112,1,
	73,26,120,1,134,23,95,1,106,8,68,69,70,65,
	85,76,84,0,8,28,93,134,24,108,49,100,12,0,
	80,9,134,25,95,9,100,8,28,61,134,26,108,50,
	100,106,25,69,114,114,111,114,44,32,102,105,108,101,
	32,116,111,58,69,82,82,79,82,46,84,88,84,0,
	20,1,134,27,48,48,0,95,2,106,10,69,114,114,
	111,114,46,116,120,116,0,112,1,73,26,27,1,134,
	29,48,48,0,95,2,95,9,112,1,73,26,12,1,
	134,31,95,1,106,7,83,69,76,69,67,84,0,8,
	29,239,0,134,34,108,51,100,48,52,0,95,2,150,
	48,53,0,95,2,150,48,54,0,95,2,150,12,3,
	80,8,134,38,95,8,100,8,28,61,134,39,108,50,
	100,106,25,69,114,114,111,114,44,32,102,105,108,101,
	32,116,111,58,69,82,82,79,82,46,84,88,84,0,
	20,1,134,40,48,48,0,95,2,106,10,69,114,114,
	111,114,46,116,120,116,0,112,1,73,26,157,0,134,
	42,108,49,100,12,0,80,9,134,43,95,9,100,8,
	28,60,134,44,108,50,100,106,25,69,114,114,111,114,
	44,32,102,105,108,101,32,116,111,58,69,82,82,79,
	82,46,84,88,84,0,20,1,134,45,48,48,0,95,
	2,106,10,69,114,114,111,114,46,116,120,116,0,112,
	1,73,25,81,134,47,108,55,100,95,9,12,1,80,
	9,134,48,108,56,100,95,9,122,92,3,12,3,106,
	4,76,80,84,0,8,28,23,134,49,108,57,100,95,
	9,108,58,100,95,9,12,1,128,255,255,12,2,80,
	9,134,51,48,48,0,95,2,95,9,112,1,73,25,
	14,134,55,48,48,0,95,2,95,1,112,1,73,134,
	59,95,1,106,8,71,82,65,80,72,73,67,0,8,
	21,31,16,73,95,1,106,8,80,82,69,86,73,69,
	87,0,8,28,17,134,60,48,59,0,95,2,106,1,
	0,112,1,73,25,65,134,63,48,59,0,95,2,108,
	60,100,48,61,0,95,2,112,0,12,1,112,1,73,
	134,65,48,62,0,95,2,112,0,121,35,28,19,134,
	66,48,63,0,95,2,108,64,100,12,0,112,1,73,
	25,13,134,68,48,63,0,95,2,121,112,1,73,134,
	73,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_COMANDO )
{
   static const BYTE pcode[] =
   {
	13,2,10,102,80,11,133,167,0,95,1,80,12,134,
	2,108,65,100,108,66,100,95,1,12,1,12,1,80,
	12,134,4,95,2,100,69,28,16,108,65,100,108,66,
	100,95,2,12,1,12,1,167,12,134,5,95,3,100,
	69,28,16,108,65,100,108,66,100,95,3,12,1,12,
	1,167,12,134,6,95,4,100,69,28,16,108,65,100,
	108,66,100,95,4,12,1,12,1,167,12,134,7,95,
	5,100,69,28,16,108,65,100,108,66,100,95,5,12,
	1,12,1,167,12,134,8,95,6,100,69,28,16,108,
	65,100,108,66,100,95,6,12,1,12,1,167,12,134,
	9,95,7,100,69,28,16,108,65,100,108,66,100,95,
	7,12,1,12,1,167,12,134,10,95,8,100,69,28,
	16,108,65,100,108,66,100,95,8,12,1,12,1,167,
	12,134,11,95,9,100,69,28,16,108,65,100,108,66,
	100,95,9,12,1,12,1,167,12,134,12,95,10,100,
	69,28,16,108,65,100,108,66,100,95,10,12,1,12,
	1,167,12,134,15,48,67,0,95,11,112,0,28,29,
	134,16,48,46,0,95,11,48,68,0,95,11,112,0,
	108,69,100,95,12,12,1,72,112,1,73,25,22,134,
	18,48,46,0,95,11,48,68,0,95,11,112,0,95,
	12,72,112,1,73,134,21,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_GWRITE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,194,0,48,67,0,95,2,
	112,0,28,59,134,1,48,46,0,95,2,48,68,0,
	95,2,112,0,108,69,100,95,1,12,1,72,112,1,
	73,134,2,48,42,0,95,2,48,70,0,95,2,112,
	0,108,58,100,108,69,100,95,1,12,1,12,1,72,
	112,1,73,25,47,134,4,48,46,0,95,2,48,68,
	0,95,2,112,0,95,1,72,112,1,73,134,5,48,
	42,0,95,2,48,70,0,95,2,112,0,108,58,100,
	95,1,12,1,72,112,1,73,134,9,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_EJECT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,208,0,108,71,100,48,62,
	0,95,1,112,0,48,68,0,95,1,112,0,20,2,
	134,2,48,67,0,95,1,112,0,28,70,134,3,108,
	71,100,48,62,0,95,1,112,0,108,69,100,106,3,
	13,10,0,108,65,100,108,66,100,48,72,0,95,1,
	112,0,12,1,12,1,72,12,1,20,2,134,4,108,
	71,100,48,62,0,95,1,112,0,108,69,100,106,3,
	13,10,0,12,1,20,2,25,58,134,6,108,71,100,
	48,62,0,95,1,112,0,106,3,13,10,0,108,65,
	100,108,66,100,48,72,0,95,1,112,0,12,1,12,
	1,72,20,2,134,7,108,71,100,48,62,0,95,1,
	112,0,106,3,13,10,0,20,2,134,10,48,46,0,
	95,1,106,1,0,112,1,73,134,11,48,41,0,95,
	1,121,112,1,73,134,12,48,42,0,95,1,121,112,
	1,73,134,14,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_COMPRESS )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,226,0,48,73,0,95,1,
	48,74,0,95,1,112,0,112,1,73,134,2,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_DOUBLE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,232,0,48,73,0,95,1,
	48,75,0,95,1,112,0,112,1,73,134,2,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_DESCOMPRESS )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,238,0,48,73,0,95,1,
	48,76,0,95,1,112,0,112,1,73,134,2,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_BOLD )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,246,0,48,73,0,95,1,
	48,77,0,95,1,112,0,112,1,73,134,2,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_UNBOLD )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,252,0,48,73,0,95,1,
	48,78,0,95,1,112,0,112,1,73,134,2,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_NEWLINE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,3,1,48,67,0,95,1,
	112,0,28,32,134,1,48,46,0,95,1,48,68,0,
	95,1,112,0,108,69,100,106,3,13,10,0,12,1,
	72,112,1,73,25,25,134,3,48,46,0,95,1,48,
	68,0,95,1,112,0,106,3,13,10,0,72,112,1,
	73,134,5,48,42,0,95,1,121,112,1,73,134,6,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_SAY )
{
   static const BYTE pcode[] =
   {
	13,1,4,102,80,5,133,13,1,108,79,100,95,3,
	12,1,106,2,78,0,8,28,50,134,2,108,47,100,
	95,4,12,1,68,21,31,7,73,95,4,100,69,28,
	17,134,3,108,80,100,95,3,95,4,12,2,80,3,
	25,77,134,5,108,81,100,95,3,12,1,80,3,25,
	64,134,8,108,79,100,95,3,12,1,106,2,68,0,
	8,28,15,134,9,108,82,100,95,3,12,1,80,3,
	25,35,134,11,108,47,100,95,4,12,1,68,21,31,
	7,73,95,4,100,69,28,15,134,12,108,80,100,95,
	3,95,4,12,2,80,3,134,16,48,83,0,95,5,
	95,1,95,2,112,2,73,134,18,48,84,0,95,5,
	95,3,112,1,73,134,20,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_SETCOLS )
{
   static const BYTE pcode[] =
   {
	13,1,2,102,80,3,133,37,1,48,85,0,95,3,
	112,0,95,1,15,28,12,134,1,48,86,0,95,3,
	112,0,73,134,4,48,85,0,95,3,112,0,95,1,
	35,28,46,134,5,48,85,0,95,3,112,0,95,1,
	35,28,32,134,6,48,87,0,95,3,112,0,73,134,
	7,48,41,0,95,3,48,85,0,95,3,112,0,23,
	112,1,73,25,214,134,11,9,95,1,48,85,0,95,
	3,112,0,8,28,13,73,95,2,48,70,0,95,3,
	112,0,35,28,12,134,12,48,86,0,95,3,112,0,
	73,134,15,95,2,48,70,0,95,3,112,0,15,28,
	27,134,16,48,84,0,95,3,108,88,100,95,2,48,
	70,0,95,3,112,0,49,12,1,112,1,73,134,19,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_SETPRC )
{
   static const BYTE pcode[] =
   {
	13,1,2,102,80,3,133,59,1,48,41,0,95,3,
	95,1,112,1,73,134,1,48,42,0,95,3,95,2,
	112,1,73,134,2,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_END )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,65,1,108,71,100,48,62,
	0,95,1,112,0,48,68,0,95,1,112,0,20,2,
	134,1,108,89,100,48,62,0,95,1,112,0,20,1,
	134,3,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_PRINTERFILE )
{
   static const BYTE pcode[] =
   {
	13,4,1,102,80,2,133,71,1,108,88,100,93,0,
	8,12,1,80,3,134,3,108,90,100,95,1,12,1,
	31,44,134,4,108,91,100,106,17,69,114,114,111,114,
	32,111,112,101,110,32,102,105,108,101,32,0,95,1,
	72,106,6,69,114,114,111,114,0,20,2,134,5,9,
	110,7,134,8,108,92,100,95,1,92,18,12,2,80,
	4,134,10,95,4,92,255,69,28,86,134,14,108,93,
	100,95,4,96,3,0,93,0,8,12,3,80,5,134,
	16,95,5,121,5,28,4,25,93,134,18,108,71,100,
	48,62,0,95,2,112,0,108,57,100,95,3,95,5,
	12,2,12,2,95,5,35,28,203,134,19,48,94,0,
	95,2,108,64,100,12,0,112,1,73,134,20,108,89,
	100,95,4,20,1,134,21,9,110,7,134,28,108,91,
	100,106,16,67,97,110,39,116,32,79,112,101,110,32,
	112,111,114,116,0,20,1,134,29,108,89,100,95,4,
	20,1,134,33,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WPROW )
{
   static const BYTE pcode[] =
   {
	13,0,1,133,107,1,48,85,0,95,1,112,0,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WPCOL )
{
   static const BYTE pcode[] =
   {
	13,0,1,133,110,1,48,70,0,95,1,112,0,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WSETPRC )
{
   static const BYTE pcode[] =
   {
	13,0,3,133,113,1,48,98,0,95,3,95,1,95,
	2,112,2,73,134,1,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_TXTTOGRAPHIC )
{
   static const BYTE pcode[] =
   {
	13,8,3,102,80,4,133,118,1,108,88,100,93,4,
	8,12,1,80,5,126,6,4,8,134,1,108,92,100,
	95,1,92,64,12,2,80,8,134,2,126,9,0,0,
	134,6,48,2,0,108,99,100,12,0,100,120,100,100,
	9,100,112,6,80,10,134,8,95,10,100,8,28,7,
	134,9,9,110,7,134,12,48,100,0,95,10,106,12,
	67,111,117,114,105,101,114,32,78,101,119,0,95,2,
	112,2,80,11,134,14,48,101,0,95,10,95,3,112,
	1,73,134,15,48,102,0,95,10,112,0,73,134,17,
	108,103,100,48,104,0,95,10,112,0,48,105,0,95,
	11,112,0,20,2,134,19,95,8,92,255,69,29,182,
	0,134,21,108,106,100,95,8,96,5,0,96,6,0,
	93,4,8,12,4,80,7,134,22,108,58,100,95,7,
	12,1,121,5,28,5,26,135,0,134,25,95,2,121,
	35,28,44,134,26,48,107,0,95,10,95,7,121,95,
	9,93,96,9,95,9,95,2,66,128,2,0,72,100,
	95,11,112,7,73,134,27,95,2,66,128,2,0,167,
	9,25,40,134,29,48,107,0,95,10,95,7,121,95,
	9,93,96,9,95,9,95,2,128,2,0,72,100,95,
	11,112,7,73,134,30,95,2,128,2,0,167,9,134,
	33,95,7,129,1,0,106,2,12,0,8,29,120,255,
	134,34,48,108,0,95,10,112,0,73,134,35,48,102,
	0,95,10,112,0,73,134,36,126,9,0,0,26,91,
	255,134,40,108,89,100,95,8,20,1,25,31,134,42,
	108,91,100,106,12,67,97,110,39,116,32,111,112,101,
	110,32,0,95,1,72,20,1,134,43,9,110,7,134,
	45,48,108,0,95,10,112,0,73,134,46,48,109,0,
	95,10,112,0,73,134,47,48,110,0,95,10,112,0,
	73,134,48,48,111,0,95,10,112,0,73,134,49,48,
	112,0,95,11,112,0,73,134,51,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOS_PREVIEW )
{
   static const BYTE pcode[] =
   {
	13,15,2,102,80,3,133,173,1,108,88,100,93,4,
	8,12,1,80,5,126,6,4,8,134,1,108,92,100,
	95,1,92,64,12,2,80,8,134,2,126,9,1,0,
	126,10,1,0,134,3,48,113,0,108,114,100,12,0,
	106,12,67,111,117,114,105,101,114,32,78,101,119,0,
	121,92,243,112,3,80,11,134,4,106,1,0,4,1,
	0,80,12,134,7,108,47,100,48,61,0,95,3,112,
	0,12,1,21,31,21,73,48,61,0,95,3,112,0,
	106,8,80,82,69,86,73,69,87,0,8,28,11,106,
	5,76,80,84,49,0,25,9,48,61,0,95,3,112,
	0,80,17,134,9,95,8,92,255,69,29,139,0,134,
	11,108,106,100,95,8,96,5,0,96,6,0,93,4,
	8,12,4,80,7,134,12,108,58,100,95,7,12,1,
	121,5,28,4,25,92,134,15,48,67,0,95,3,112,
	0,28,29,134,16,108,69,100,95,7,12,1,106,2,
	13,0,72,106,2,10,0,72,96,12,0,95,9,169,
	25,22,134,18,95,7,106,2,13,0,72,106,2,10,
	0,72,96,12,0,95,9,169,134,20,95,7,129,1,
	0,106,2,12,0,8,28,151,134,21,108,115,100,95,
	12,106,1,0,20,2,134,22,173,9,25,133,134,25,
	108,89,100,95,8,20,1,25,31,134,27,108,91,100,
	106,12,67,97,110,39,116,32,111,112,101,110,32,0,
	95,1,72,20,1,134,28,9,110,7,134,31,108,56,
	100,95,12,95,10,1,92,2,12,2,80,16,134,33,
	108,47,100,48,116,0,95,3,112,0,12,1,31,31,
	134,34,48,116,0,95,3,112,0,122,1,80,14,134,
	35,48,116,0,95,3,112,0,92,2,1,80,15,25,
	17,134,37,97,128,255,255,0,80,14,134,38,126,15,
	0,0,134,41,95,2,100,8,28,24,127,2,14,0,
	80,114,105,110,116,32,80,114,101,118,105,101,119,0,
	95,2,25,7,95,2,21,80,2,73,134,44,48,2,
	0,108,117,100,12,0,92,11,100,121,121,108,118,100,
	12,0,108,119,100,12,0,95,2,100,89,28,0,1,
	0,1,0,4,0,108,120,100,48,105,0,95,255,112,
	0,93,21,1,92,6,121,12,4,6,100,100,100,100,
	100,100,9,100,100,9,100,100,9,100,100,9,112,25,
	80,13,134,53,48,2,0,108,121,100,12,0,100,93,
	233,3,95,16,100,97,132,0,48,0,92,88,92,19,
	108,118,100,12,0,128,156,255,108,119,100,12,0,128,
	156,255,95,11,100,100,100,100,100,100,95,14,95,15,
	100,9,100,9,100,100,100,112,25,80,4,48,122,0,
	95,4,106,7,111,101,100,105,116,49,0,112,1,73,
	134,61,48,2,0,108,123,100,12,0,100,100,95,10,
	122,5,28,9,97,0,0,0,8,25,3,121,92,6,
	92,30,92,69,92,32,106,3,60,60,0,100,100,100,
	100,89,24,0,1,0,2,0,10,0,12,0,108,124,
	100,95,255,95,254,12,2,21,80,255,6,100,100,100,
	100,112,17,73,48,2,0,108,123,100,12,0,100,100,
	95,10,122,5,28,9,97,0,0,0,8,25,3,121,
	92,6,92,80,92,69,92,32,106,3,62,62,0,100,
	100,100,100,89,28,0,1,0,3,0,9,0,10,0,
	12,0,108,125,100,95,255,95,254,95,253,12,3,21,
	80,254,6,100,100,100,100,112,17,73,48,2,0,108,
	123,100,12,0,100,100,100,92,6,93,130,0,92,69,
	92,32,106,9,73,109,112,114,105,109,105,114,0,100,
	100,100,100,89,21,0,1,0,2,0,12,0,17,0,
	108,126,100,95,255,95,254,12,2,6,100,100,100,100,
	112,17,73,48,2,0,108,123,100,12,0,100,100,100,
	92,6,93,230,0,92,69,92,32,106,7,70,101,99,
	104,97,114,0,100,100,100,100,89,13,0,1,0,0,
	0,108,127,100,12,0,6,100,100,100,100,112,17,73,
	48,128,0,95,13,112,0,73,134,69,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOSPRINT )
{
   static const BYTE pcode[] =
   {
	13,2,2,133,246,1,108,60,100,95,2,12,1,80,
	4,134,1,126,3,1,0,95,3,108,58,100,95,1,
	12,1,34,28,22,134,2,108,71,100,95,4,95,1,
	95,3,1,20,2,134,3,173,3,25,226,134,4,108,
	89,100,95,4,20,1,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOSANT )
{
   static const BYTE pcode[] =
   {
	13,1,2,133,255,1,108,129,100,12,0,80,3,134,
	1,176,1,80,1,134,2,95,1,122,35,28,6,126,
	1,1,0,134,3,95,1,122,5,28,28,134,4,108,
	130,100,95,3,93,233,3,108,56,100,95,2,95,1,
	1,92,2,12,2,20,3,25,19,134,6,108,130,100,
	95,3,93,233,3,95,2,95,1,1,20,3,134,8,
	95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PRINTDOSNEXT )
{
   static const BYTE pcode[] =
   {
	13,1,3,133,10,2,108,129,100,12,0,80,4,134,
	1,175,2,80,2,134,2,95,2,95,1,15,28,6,
	95,1,80,2,134,3,108,130,100,95,4,93,233,3,
	95,3,95,2,1,20,3,134,4,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( REGENFILE )
{
   static const BYTE pcode[] =
   {
	13,6,2,133,17,2,108,132,100,95,1,12,1,80,
	3,134,2,48,2,0,108,1,100,12,0,95,2,112,
	1,80,5,134,3,126,6,0,0,134,7,126,8,1,
	0,95,8,108,58,100,95,3,12,1,34,28,100,134,
	9,95,3,95,8,1,80,4,134,10,108,133,100,106,
	2,12,0,95,4,12,2,80,7,134,12,95,7,121,
	15,28,19,134,13,108,56,100,95,4,122,95,7,128,
	255,255,12,3,80,4,134,15,48,107,0,95,5,95,
	6,121,95,4,112,3,73,134,16,173,6,134,18,95,
	7,121,15,28,18,134,19,48,86,0,95,5,112,0,
	73,134,20,126,6,0,0,134,23,173,8,25,148,134,
	25,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,134,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

#line 557 "\\hwgui\\source\\printdos.prg"
/*
   txtfile.c
   AFILLTEXT( cFile ) -> aArray
   NTXTLINE( cFile )  -> nLines
*/

#include "hbapi.h"
#include "hbapiitm.h"
#include "hbstack.h"
#ifdef __XHARBOUR__
#include "hbfast.h"
#endif

#undef LINE_MAX
// #define LINE_MAX 4096
// #define LINE_MAX 8192
// #define LINE_MAX 16384
#define LINE_MAX    0x20000
//----------------------------------------------------------------------------//
static BOOL file_read ( FILE *stream, char *string )
{
   int ch, cnbr = 0;

   memset (string, ' ', LINE_MAX);

   for (;;)
   {
      ch = fgetc (stream);

      if ( (ch == '\n') ||  (ch == EOF) ||  (ch == 26) )
      {
         string [cnbr] = '\0';
         return (ch == '\n' || cnbr);
      }
      else
      {
         if ( cnbr < LINE_MAX && ch != '\r' )
         {
            string [cnbr++] = (char) ch;
         }
      }

      if (cnbr >= LINE_MAX)
      {
         string [LINE_MAX] = '\0';
         return (TRUE);
      }
   }
}

//----------------------------------------------------------------------------//
HB_FUNC( AFILLTEXT )
{
   FILE *inFile ;
   const char *pSrc = hb_parc(1) ;
   PHB_ITEM pArray = hb_itemNew(NULL);
   PHB_ITEM pTemp = hb_itemNew(NULL);
   char *string ;

   if ( !pSrc )
   {
      hb_reta( 0 );
      return;
   }

   if ( strlen( pSrc ) == 0 )
   {
      hb_reta( 0 );
      return;
   }
   inFile = fopen( pSrc, "r" );

   if ( !inFile )
   {
      hb_reta( 0 );
      return;
   }

   string = (char*) hb_xgrab( LINE_MAX + 1 );
   hb_arrayNew( pArray, 0 );

   while ( file_read ( inFile, string ) )
   {
      hb_arrayAddForward( pArray, hb_itemPutC( pTemp, string ));
   }

   hb_itemRelease( hb_itemReturn( pArray ) );
   hb_itemRelease( pTemp );
   hb_xfree( string );
   fclose( inFile );
}

