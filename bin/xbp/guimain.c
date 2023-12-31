/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\guimain.prg>
 * Command: -oxbp\guimain.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\guimain.prg 
 * Created: 2020.09.03 14:41:07 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\guimain.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( INITOBJECTS );
HB_FUNC( INITCONTROLS );
HB_FUNC( FINDPARENT );
HB_FUNC( FINDSELF );
HB_FUNC( WRITESTATUS );
HB_FUNC( READSTATUS );
HB_FUNC( VCOLOR );
HB_FUNC( MSGGET2 );
HB_FUNC( WAITRUN );
HB_FUNC( WCHOICE );
HB_FUNC( SHOWPROGRESS );
HB_FUNC( ENDWINDOW );
HB_FUNC( HDSERIAL );
HB_FUNC( HWG_GETINI );
HB_FUNC( HWG_WRITEINI );
HB_FUNC( SETHELPFILENAME );
HB_FUNC( REFRESHALLGETS );
HB_FUNC( SELECTMULTIPLEFILES );
HB_FUNC( HWG_VERSION );
HB_FUNC( TXTRECT );
HB_FUNC( FILEPATH );
HB_FUNC( CUTPATH );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( PTRTOULONG );
HB_FUNC_EXTERN( GETDLGITEM );
HB_FUNC_EXTERN( GETPARENT );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HDIALOG );
HB_FUNC_EXTERN( HWINDOW );
HB_FUNC_EXTERN( GETANCESTOR );
HB_FUNC_EXTERN( WRITESTATUSWINDOW );
HB_FUNC_EXTERN( REDRAWWINDOW );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRIM );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( HFONT );
HB_FUNC_EXTERN( KEYB_EVENT );
HB_FUNC_EXTERN( HSTATIC );
HB_FUNC_EXTERN( HEDIT );
HB_FUNC_EXTERN( HBUTTON );
HB_FUNC_EXTERN( HB_OPENPROCESS );
HB_FUNC_EXTERN( HB_PROCESSVALUE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( RECCOUNT );
HB_FUNC_EXTERN( FIELDPOS );
HB_FUNC_EXTERN( DBFIELDINFO );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( GETDC );
HB_FUNC_EXTERN( GETACTIVEWINDOW );
HB_FUNC_EXTERN( SELECTOBJECT );
HB_FUNC_EXTERN( GETTEXTMETRIC );
HB_FUNC_EXTERN( GETDEVICEAREA );
HB_FUNC_EXTERN( GETWINDOWRECT );
HB_FUNC_EXTERN( RELEASEDC );
HB_FUNC_EXTERN( RESETWINDOWPOS );
HB_FUNC_EXTERN( HBROWSE );
HB_FUNC_EXTERN( HCOLUMN );
HB_FUNC_EXTERN( FIELDGET );
HB_FUNC_EXTERN( MOVEWINDOW );
HB_FUNC_EXTERN( ENDDIALOG );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( CREATEPROGRESSBAR );
HB_FUNC_EXTERN( UPDATEPROGRESSBAR );
HB_FUNC_EXTERN( SETWINDOWTEXT );
HB_FUNC_EXTERN( SETPROGRESSBAR );
HB_FUNC_EXTERN( DESTROYWINDOW );
HB_FUNC_EXTERN( HDGETSERIAL );
HB_FUNC_EXTERN( NUMTOHEX );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( GETPRIVATEPROFILESTRING );
HB_FUNC_EXTERN( WRITEPRIVATEPROFILESTRING );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( _GETOPENFILENAME );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_OSPATHSEPARATOR );
HB_FUNC_EXTERN( VERSION );
HB_FUNC_EXTERN( GETTEXTSIZE );
HB_FUNC_EXTERN( RAT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GUIMAIN )
{ "INITOBJECTS", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( INITOBJECTS )}, &ModuleFakeDyn },
{ "AOBJECTS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INITCONTROLS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INITCONTROLS )}, &ModuleFakeDyn },
{ "ACONTROLS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "PTRTOULONG", {HB_FS_PUBLIC}, {HB_FUNCNAME( PTRTOULONG )}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETDLGITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDLGITEM )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FINDPARENT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FINDPARENT )}, &ModuleFakeDyn },
{ "GETPARENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPARENT )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AMODALDIALOGS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDIALOG )}, NULL },
{ "FINDDIALOG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FINDWINDOW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWINDOW )}, NULL },
{ "FINDCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FINDSELF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FINDSELF )}, &ModuleFakeDyn },
{ "GETANCESTOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETANCESTOR )}, NULL },
{ "WRITESTATUS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WRITESTATUS )}, &ModuleFakeDyn },
{ "CLASSNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WRITESTATUSWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WRITESTATUSWINDOW )}, NULL },
{ "REDRAWWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( REDRAWWINDOW )}, NULL },
{ "READSTATUS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( READSTATUS )}, &ModuleFakeDyn },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "VCOLOR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VCOLOR )}, &ModuleFakeDyn },
{ "TRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRIM )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "MSGGET2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MSGGET2 )}, &ModuleFakeDyn },
{ "ADD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HFONT )}, NULL },
{ "KEYB_EVENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( KEYB_EVENT )}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSTATIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HSTATIC )}, NULL },
{ "HEDIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEDIT )}, NULL },
{ "HBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBUTTON )}, NULL },
{ "RELEASE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LRESULT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WAITRUN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WAITRUN )}, &ModuleFakeDyn },
{ "HB_OPENPROCESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OPENPROCESS )}, NULL },
{ "HB_PROCESSVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PROCESSVALUE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "WCHOICE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WCHOICE )}, &ModuleFakeDyn },
{ "RECCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECCOUNT )}, NULL },
{ "FIELDPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDPOS )}, NULL },
{ "DBFIELDINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFIELDINFO )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "GETDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDC )}, NULL },
{ "GETACTIVEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETACTIVEWINDOW )}, NULL },
{ "SELECTOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECTOBJECT )}, NULL },
{ "GETTEXTMETRIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETTEXTMETRIC )}, NULL },
{ "GETDEVICEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDEVICEAREA )}, NULL },
{ "GETWINDOWRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWINDOWRECT )}, NULL },
{ "RELEASEDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( RELEASEDC )}, NULL },
{ "RESETWINDOWPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESETWINDOWPOS )}, NULL },
{ "_NINITFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBROWSE )}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AARRAY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDCOLUMN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCOLUMN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCOLUMN )}, NULL },
{ "AARRAY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NCURRENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDGET )}, NULL },
{ "_OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BSIZE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MOVEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOVEWINDOW )}, NULL },
{ "_BENTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENDDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDDIALOG )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LDISPHEAD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TCOLORSEL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCOLORSEL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "SHOWPROGRESS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SHOWPROGRESS )}, &ModuleFakeDyn },
{ "CREATEPROGRESSBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEPROGRESSBAR )}, NULL },
{ "UPDATEPROGRESSBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPDATEPROGRESSBAR )}, NULL },
{ "SETWINDOWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWTEXT )}, NULL },
{ "SETPROGRESSBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPROGRESSBAR )}, NULL },
{ "DESTROYWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYWINDOW )}, NULL },
{ "ENDWINDOW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ENDWINDOW )}, &ModuleFakeDyn },
{ "GETMAIN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AWINDOWS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDSERIAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDSERIAL )}, &ModuleFakeDyn },
{ "HDGETSERIAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDGETSERIAL )}, NULL },
{ "NUMTOHEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( NUMTOHEX )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "HWG_GETINI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWG_GETINI )}, &ModuleFakeDyn },
{ "GETPRIVATEPROFILESTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPRIVATEPROFILESTRING )}, NULL },
{ "HWG_WRITEINI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWG_WRITEINI )}, &ModuleFakeDyn },
{ "WRITEPRIVATEPROFILESTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( WRITEPRIVATEPROFILESTRING )}, NULL },
{ "SETHELPFILENAME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETHELPFILENAME )}, &ModuleFakeDyn },
{ "REFRESHALLGETS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( REFRESHALLGETS )}, &ModuleFakeDyn },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SELECTMULTIPLEFILES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SELECTMULTIPLEFILES )}, &ModuleFakeDyn },
{ "_GETOPENFILENAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( _GETOPENFILENAME )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "HB_OSPATHSEPARATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSPATHSEPARATOR )}, NULL },
{ "HWG_VERSION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWG_VERSION )}, &ModuleFakeDyn },
{ "VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERSION )}, NULL },
{ "TXTRECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TXTRECT )}, &ModuleFakeDyn },
{ "OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETTEXTSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETTEXTSIZE )}, NULL },
{ "FILEPATH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILEPATH )}, &ModuleFakeDyn },
{ "RAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RAT )}, NULL },
{ "CUTPATH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CUTPATH )}, &ModuleFakeDyn },
{ "(_INITSTATICS00005)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_GUIMAIN, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GUIMAIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GUIMAIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( INITOBJECTS )
{
   static const BYTE pcode[] =
   {
	13,2,1,133,21,0,48,1,0,95,1,112,0,80,
	3,134,2,95,3,100,69,28,62,134,3,126,2,1,
	0,95,2,108,2,100,95,3,12,1,34,28,44,134,
	4,108,3,100,95,3,95,2,1,106,5,73,78,73,
	84,0,12,2,28,17,134,5,48,4,0,95,3,95,
	2,1,95,1,112,1,73,134,7,173,2,25,204,134,
	9,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( INITCONTROLS )
{
   static const BYTE pcode[] =
   {
	13,3,2,133,33,0,48,6,0,95,1,112,0,80,
	4,134,2,95,2,100,8,28,5,9,25,4,95,2,
	80,2,134,4,95,4,100,69,29,21,1,134,5,126,
	3,1,0,95,3,108,2,100,95,4,12,1,34,29,
	2,1,134,7,9,108,7,100,48,8,0,95,4,95,
	3,1,112,0,12,1,28,6,73,95,2,68,28,58,
	134,9,48,9,0,95,4,95,3,1,112,0,80,5,
	134,10,48,10,0,95,4,95,3,1,120,112,1,73,
	134,11,48,11,0,95,4,95,3,1,112,0,73,134,
	12,48,10,0,95,4,95,3,1,95,5,112,1,73,
	134,16,108,12,100,48,8,0,95,4,95,3,1,112,
	0,12,1,106,2,80,0,8,28,19,108,13,100,48,
	8,0,95,4,95,3,1,112,0,12,1,25,12,48,
	8,0,95,4,95,3,1,112,0,121,34,28,37,134,
	17,48,14,0,95,4,95,3,1,108,15,100,48,8,
	0,95,1,112,0,48,16,0,95,4,95,3,1,112,
	0,12,2,112,1,73,134,21,108,7,100,48,6,0,
	95,4,95,3,1,112,0,12,1,31,14,134,22,108,
	5,100,95,4,95,3,1,20,1,134,24,48,4,0,
	95,4,95,3,1,112,0,73,134,26,48,9,0,95,
	4,95,3,1,112,0,31,20,134,27,48,4,0,48,
	17,0,95,4,95,3,1,112,0,112,0,73,134,30,
	173,3,26,247,254,134,33,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( FINDPARENT )
{
   static const BYTE pcode[] =
   {
	13,3,2,133,69,0,108,19,100,95,1,12,1,80,
	5,134,1,95,5,121,15,28,117,134,2,108,20,100,
	48,21,0,108,22,100,12,0,112,0,89,20,0,1,
	0,1,0,5,0,48,8,0,95,1,112,0,95,255,
	8,6,12,2,21,80,3,121,69,28,19,134,3,48,
	21,0,108,22,100,12,0,112,0,95,3,1,110,7,
	134,4,48,23,0,108,22,100,12,0,95,5,112,1,
	21,80,4,100,69,28,8,134,5,95,4,110,7,134,
	6,48,24,0,108,25,100,12,0,95,5,112,1,21,
	80,4,100,69,28,8,134,7,95,4,110,7,134,10,
	95,2,100,8,28,6,126,2,0,0,134,11,95,2,
	92,2,35,28,37,134,12,108,18,100,95,5,95,2,
	128,1,0,12,2,21,80,4,100,69,28,16,134,13,
	48,26,0,95,4,100,95,5,112,2,110,7,134,16,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( FINDSELF )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,89,0,108,18,100,95,1,12,1,80,
	2,134,1,95,2,100,8,28,14,134,2,108,28,100,
	95,1,122,12,2,80,2,134,4,95,2,100,69,28,
	16,134,5,48,26,0,95,2,100,95,1,112,2,110,
	7,134,7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WRITESTATUS )
{
   static const BYTE pcode[] =
   {
	13,2,4,133,100,0,48,6,0,95,1,112,0,80,
	5,134,1,108,20,100,95,5,89,26,0,1,0,0,
	0,48,30,0,95,1,112,0,106,8,72,83,84,65,
	84,85,83,0,8,6,12,2,21,80,6,121,15,28,
	59,134,2,108,31,100,48,8,0,95,5,95,6,1,
	112,0,95,2,128,255,255,95,3,20,3,134,3,9,
	95,4,100,69,28,5,73,95,4,28,21,134,4,108,
	32,100,48,8,0,95,5,95,6,1,112,0,92,5,
	20,2,134,7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( READSTATUS )
{
   static const BYTE pcode[] =
   {
	13,4,2,133,110,0,127,6,1,0,0,134,1,48,
	6,0,95,1,112,0,80,3,134,2,108,20,100,95,
	3,89,26,0,1,0,0,0,48,30,0,95,1,112,
	0,106,8,72,83,84,65,84,85,83,0,8,6,12,
	2,21,80,4,121,15,28,73,134,3,108,34,100,48,
	8,0,95,3,95,4,1,112,0,93,3,4,95,2,
	128,255,255,121,12,4,80,5,134,4,108,35,100,106,
	2,0,0,95,5,12,2,80,6,134,5,108,34,100,
	48,8,0,95,3,95,4,1,112,0,93,2,4,95,
	2,128,255,255,96,6,0,20,4,134,7,95,6,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( VCOLOR )
{
   static const BYTE pcode[] =
   {
	13,4,1,133,120,0,126,3,0,0,126,4,1,0,
	134,1,108,37,100,95,1,12,1,80,1,134,2,126,
	2,1,0,95,2,108,2,100,95,1,12,1,34,29,
	136,0,134,3,108,38,100,95,1,108,2,100,95,1,
	12,1,95,2,49,128,1,0,1,12,1,80,5,134,
	4,9,95,5,92,58,35,28,8,73,95,5,92,47,
	15,28,10,134,5,125,5,208,255,25,59,134,6,9,
	95,5,92,65,16,28,8,73,95,5,92,70,34,28,
	10,134,7,125,5,201,255,25,33,134,8,9,95,5,
	92,97,16,28,8,73,95,5,92,102,34,28,10,134,
	9,125,5,169,255,25,7,134,11,121,110,7,134,13,
	95,5,95,4,65,167,3,134,14,95,4,92,16,65,
	80,4,134,15,173,2,26,113,255,134,16,95,3,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( MSGGET2 )
{
   static const BYTE pcode[] =
   {
	13,3,7,133,139,0,48,40,0,108,41,100,12,0,
	106,14,77,83,32,83,97,110,115,32,83,101,114,105,
	102,0,121,92,243,112,3,80,9,134,1,95,7,100,
	69,28,11,108,37,100,95,7,12,1,25,5,106,1,
	0,80,10,134,3,108,7,100,95,10,12,1,31,11,
	134,4,108,42,100,92,35,20,1,134,6,95,3,100,
	8,28,5,121,25,4,95,3,80,3,134,7,95,4,
	100,8,28,7,93,210,0,25,4,95,4,80,4,134,
	8,95,5,100,8,28,6,92,10,25,4,95,5,80,
	5,134,9,95,6,100,8,28,5,121,25,4,95,6,
	80,6,134,12,48,43,0,108,22,100,12,0,92,11,
	159,0,0,204,144,0,0,0,0,95,6,72,95,4,
	95,5,93,44,1,93,140,0,95,1,95,9,100,100,
	100,100,100,100,100,120,100,100,9,100,100,9,100,100,
	9,112,25,80,8,134,14,48,43,0,108,44,100,12,
	0,100,100,100,92,20,92,10,93,4,1,92,22,95,
	2,100,100,100,100,100,100,100,9,100,100,100,112,19,
	73,48,43,0,108,45,100,12,0,100,100,95,10,89,
	25,0,1,0,1,0,10,0,95,1,100,8,28,6,
	95,255,25,7,95,1,21,80,255,6,97,128,0,1,
	0,95,3,72,92,20,92,35,93,4,1,92,26,100,
	100,100,100,100,100,100,100,100,100,9,100,9,100,100,
	100,112,25,73,48,43,0,108,46,100,12,0,100,122,
	100,92,20,92,95,92,100,92,32,106,3,79,107,0,
	100,100,100,100,100,100,100,100,100,112,17,73,48,43,
	0,108,46,100,12,0,100,92,2,100,93,180,0,92,
	95,92,100,92,32,106,7,67,97,110,99,101,108,0,
	100,100,100,100,100,100,100,100,100,112,17,73,48,11,
	0,95,8,9,100,100,112,3,73,134,22,48,47,0,
	95,9,112,0,73,134,23,48,48,0,95,8,112,0,
	28,13,134,24,108,37,100,95,10,12,1,110,7,134,
	26,127,10,1,0,0,134,29,95,10,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WAITRUN )
{
   static const BYTE pcode[] =
   {
	13,4,1,133,174,0,108,50,100,95,1,96,2,0,
	96,3,0,96,3,0,12,4,80,5,134,4,108,51,
	100,95,5,12,1,80,4,134,6,108,52,100,95,5,
	20,1,134,7,108,52,100,95,2,20,1,134,8,108,
	52,100,95,3,20,1,134,10,95,4,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( WCHOICE )
{
   static const BYTE pcode[] =
   {
	13,20,11,133,191,0,126,14,0,0,120,80,15,9,
	80,17,134,1,126,20,0,0,126,21,20,0,126,22,
	20,0,126,23,0,0,134,3,159,0,0,204,144,0,
	0,0,0,80,31,134,5,95,2,100,8,28,7,127,
	2,1,0,0,134,6,9,95,3,100,8,28,7,73,
	95,4,100,8,28,6,125,31,0,8,134,7,95,3,
	100,8,28,6,126,3,0,0,134,8,95,4,100,8,
	28,6,126,4,0,0,134,9,95,5,100,8,28,40,
	134,10,48,40,0,108,41,100,12,0,106,14,77,83,
	32,83,97,110,115,32,83,101,114,105,102,0,121,92,
	243,112,3,80,5,134,11,120,80,17,134,13,95,10,
	100,69,28,28,134,14,125,23,120,0,134,15,95,11,
	100,69,28,8,134,16,125,23,100,0,134,18,125,22,
	30,0,134,21,108,12,100,95,1,12,1,106,2,67,
	0,8,28,52,134,22,9,80,15,134,23,108,54,100,
	12,0,80,19,134,24,108,55,100,95,1,12,1,21,
	80,16,121,8,28,7,134,25,121,110,7,134,27,108,
	56,100,92,3,95,16,12,2,80,20,25,113,134,29,
	108,2,100,95,1,12,1,80,19,134,30,108,12,100,
	95,1,122,1,12,1,106,2,65,0,8,28,44,134,
	31,126,18,1,0,95,18,95,19,34,28,71,134,32,
	108,57,100,95,20,108,2,100,95,1,95,18,1,122,
	1,12,1,12,2,80,20,134,33,173,18,25,222,134,
	35,126,18,1,0,95,18,95,19,34,28,29,134,36,
	108,57,100,95,20,108,2,100,95,1,95,18,1,12,
	1,12,2,80,20,134,37,173,18,25,224,134,41,108,
	58,100,108,59,100,12,0,12,1,80,25,134,42,108,
	60,100,95,25,48,8,0,95,5,112,0,20,2,134,
	43,108,61,100,95,25,12,1,80,26,134,44,108,62,
	100,95,25,12,1,80,29,134,45,108,63,100,108,59,
	100,12,0,12,1,80,30,134,46,108,64,100,108,59,
	100,12,0,95,25,20,2,134,47,95,26,122,1,128,
	1,0,95,19,65,128,4,0,95,22,72,128,8,0,
	80,28,134,48,95,28,95,29,92,2,1,95,30,92,
	2,1,49,95,4,49,128,196,255,15,28,23,134,49,
	95,29,92,2,1,95,30,92,2,1,49,95,4,49,
	128,196,255,80,28,134,51,108,57,100,95,26,92,2,
	1,92,2,65,95,20,65,95,21,72,95,23,12,2,
	80,27,134,58,48,43,0,108,22,100,12,0,92,11,
	95,31,95,3,95,4,95,27,95,28,95,2,95,5,
	89,31,0,1,0,1,0,13,0,108,65,100,48,8,
	0,95,1,112,0,20,1,48,66,0,95,1,95,255,
	112,1,6,100,100,100,100,100,100,9,100,100,9,100,
	100,9,100,100,9,112,25,80,12,134,60,95,15,29,
	210,0,134,61,48,43,0,108,67,100,12,0,122,100,
	100,100,121,121,100,100,100,100,100,100,100,100,100,9,
	9,9,9,100,100,100,9,9,100,100,100,100,100,100,
	100,100,100,112,33,80,13,48,68,0,95,13,106,5,
	111,66,114,119,0,112,1,73,134,62,48,69,0,95,
	13,95,1,112,1,73,134,63,108,12,100,95,1,122,
	1,12,1,106,2,65,0,8,28,61,134,64,48,70,
	0,95,13,48,43,0,108,71,100,12,0,100,89,29,
	0,2,0,0,0,95,1,80,1,48,72,0,95,2,
	112,0,48,73,0,95,2,112,0,1,122,1,6,106,
	2,67,0,95,20,112,4,112,1,73,26,180,0,134,
	66,48,70,0,95,13,48,43,0,108,71,100,12,0,
	100,89,27,0,2,0,0,0,95,1,80,1,48,72,
	0,95,2,112,0,48,73,0,95,2,112,0,1,6,
	106,2,67,0,95,20,112,4,112,1,73,25,123,134,
	69,48,43,0,108,67,100,12,0,92,2,100,100,100,
	121,121,100,100,100,100,100,100,100,100,100,9,9,9,
	9,100,100,100,9,9,100,100,100,100,100,100,100,100,
	100,112,33,80,13,48,68,0,95,13,106,5,111,66,
	114,119,0,112,1,73,134,70,48,70,0,95,13,48,
	43,0,108,71,100,12,0,100,89,31,0,2,0,1,
	0,16,0,95,1,80,1,85,48,74,0,95,2,112,
	0,74,108,75,100,95,255,12,1,119,6,106,2,67,
	0,95,20,112,4,112,1,73,134,73,48,76,0,95,
	13,95,5,112,1,73,134,74,48,77,0,95,13,89,
	41,0,3,0,2,0,21,0,22,0,108,78,100,48,
	8,0,95,1,112,0,95,255,92,2,18,92,10,95,
	2,95,255,49,95,3,95,254,49,12,5,6,112,1,
	73,134,75,48,79,0,95,13,89,36,0,1,0,1,
	0,14,0,48,73,0,95,1,112,0,80,255,108,80,
	100,48,8,0,48,81,0,95,1,112,0,112,0,12,
	1,6,112,1,73,134,76,48,82,0,95,13,89,37,
	0,2,0,1,0,12,0,95,1,80,1,95,2,92,
	27,8,28,17,108,80,100,48,8,0,95,255,112,0,
	20,1,9,25,3,120,6,112,1,73,134,78,48,83,
	0,95,13,9,112,1,73,134,79,95,6,100,69,28,
	14,134,80,48,84,0,95,13,95,6,112,1,73,134,
	82,95,7,100,69,28,14,134,83,48,85,0,95,13,
	95,7,112,1,73,134,85,95,8,100,69,28,14,134,
	86,48,86,0,95,13,95,8,112,1,73,134,88,95,
	9,100,69,28,14,134,89,48,87,0,95,13,95,9,
	112,1,73,134,92,95,10,100,69,29,176,0,134,93,
	108,88,100,95,27,92,2,18,12,1,95,11,100,69,
	28,6,92,90,25,4,92,40,49,80,24,134,94,48,
	43,0,108,46,100,12,0,100,100,100,95,24,95,28,
	128,220,255,92,80,92,30,95,10,100,100,100,100,89,
	35,0,1,0,3,0,13,0,14,0,12,0,48,73,
	0,95,255,112,0,80,254,108,80,100,48,8,0,95,
	253,112,0,12,1,6,100,100,100,100,112,17,73,95,
	11,100,69,28,70,134,96,48,43,0,108,46,100,12,
	0,100,100,100,95,24,128,100,0,95,28,128,220,255,
	92,80,92,30,95,11,100,100,100,100,89,28,0,1,
	0,2,0,14,0,12,0,126,255,0,0,108,80,100,
	48,8,0,95,254,112,0,12,1,6,100,100,100,100,
	112,17,73,134,100,48,11,0,95,12,112,0,73,134,
	101,95,17,28,12,134,102,48,47,0,95,5,112,0,
	73,134,105,95,14,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SHOWPROGRESS )
{
   static const BYTE pcode[] =
   {
	13,1,9,116,125,0,133,43,1,159,0,0,204,144,
	0,0,0,0,80,10,134,3,95,1,121,8,29,5,
	1,134,4,95,3,100,69,28,14,108,88,100,95,3,
	95,2,18,12,1,25,3,122,82,4,0,134,5,121,
	82,3,0,134,6,95,6,100,8,28,5,121,25,4,
	95,6,80,6,134,7,95,6,100,8,28,5,121,25,
	4,95,7,80,7,134,8,95,8,100,8,28,7,93,
	220,0,25,4,95,8,80,8,134,9,95,9,100,8,
	28,6,92,55,25,4,95,9,80,9,134,10,95,6,
	121,8,28,8,134,11,125,10,0,8,134,13,95,5,
	100,69,28,41,134,14,100,82,1,0,134,15,108,90,
	100,48,8,0,95,5,112,0,95,2,92,20,92,25,
	95,8,128,216,255,92,20,12,6,82,2,0,26,0,
	1,134,20,48,43,0,108,22,100,12,0,92,11,95,
	10,95,6,95,7,95,8,95,9,95,4,100,89,41,
	0,1,0,2,0,2,0,8,0,108,90,100,48,8,
	0,95,1,112,0,95,255,92,20,92,25,95,254,128,
	216,255,92,20,12,6,21,82,2,0,6,100,100,100,
	100,100,100,9,100,100,9,100,100,9,100,100,9,112,
	25,82,1,0,134,21,48,11,0,103,1,0,120,100,
	100,112,3,73,26,152,0,134,23,95,1,122,8,28,
	40,134,24,103,3,0,23,82,3,0,134,25,103,3,
	0,103,4,0,8,28,123,134,26,121,82,3,0,134,
	27,108,91,100,103,2,0,20,1,25,105,134,29,95,
	1,92,2,8,28,14,134,30,108,91,100,103,2,0,
	20,1,25,84,134,31,95,1,92,3,8,28,41,134,
	32,108,92,100,48,8,0,103,1,0,112,0,95,4,
	20,2,134,33,95,2,100,69,28,50,134,34,108,93,
	100,103,2,0,95,2,20,2,25,36,134,37,108,94,
	100,103,2,0,20,1,134,38,103,1,0,100,69,28,
	17,134,39,108,80,100,48,8,0,103,1,0,112,0,
	20,1,134,43,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( ENDWINDOW )
{
   static const BYTE pcode[] =
   {
	133,89,1,48,96,0,108,25,100,12,0,112,0,100,
	69,28,35,134,1,108,34,100,48,8,0,48,97,0,
	108,25,100,12,0,112,0,122,1,112,0,93,18,1,
	97,96,240,0,0,121,20,4,134,3,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HDSERIAL )
{
   static const BYTE pcode[] =
   {
	13,3,1,133,96,1,108,99,100,95,1,12,1,80,
	2,134,1,108,100,100,95,2,12,1,80,3,134,3,
	108,101,100,95,3,122,92,4,12,3,106,2,45,0,
	72,108,101,100,95,3,92,5,92,4,12,3,72,80,
	4,134,5,95,4,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HWG_GETINI )
{
   static const BYTE pcode[] =
   {
	13,0,4,133,104,1,108,103,100,95,1,95,2,95,
	3,95,4,12,4,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HWG_WRITEINI )
{
   static const BYTE pcode[] =
   {
	13,0,4,133,107,1,108,105,100,95,1,95,2,95,
	3,95,4,12,4,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETHELPFILENAME )
{
   static const BYTE pcode[] =
   {
	13,1,1,116,125,0,133,111,1,103,5,0,80,2,
	134,1,95,1,100,69,28,9,134,2,95,1,82,5,
	0,134,4,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( REFRESHALLGETS )
{
   static const BYTE pcode[] =
   {
	13,0,1,133,119,1,108,108,100,48,109,0,95,1,
	112,0,89,15,0,1,0,0,0,48,110,0,95,1,
	112,0,6,20,2,134,1,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SELECTMULTIPLEFILES )
{
   static const BYTE pcode[] =
   {
	13,8,4,133,134,1,126,10,0,0,134,1,100,80,
	11,134,2,126,12,1,0,134,4,95,1,106,2,0,
	0,72,95,2,72,106,2,0,0,72,80,8,134,9,
	108,35,100,106,2,0,0,93,0,125,12,2,80,7,
	134,10,4,0,0,80,5,134,12,108,112,100,95,10,
	96,7,0,95,4,95,8,95,11,95,3,100,96,12,
	0,12,8,80,6,134,14,108,113,100,106,3,0,0,
	0,95,7,12,2,80,9,134,15,95,9,121,69,29,
	172,0,134,16,108,114,100,95,7,95,9,128,255,255,
	12,2,80,7,134,17,108,113,100,106,2,0,0,95,
	7,12,2,80,9,134,18,95,9,121,69,28,121,134,
	20,108,101,100,95,7,95,9,128,1,0,12,2,80,
	7,134,22,95,7,106,1,0,8,31,106,134,23,108,
	113,100,106,2,0,0,95,7,12,2,80,9,134,24,
	95,9,121,69,28,50,134,26,108,115,100,95,5,95,
	6,108,116,100,12,0,72,108,114,100,95,7,95,9,
	128,255,255,12,2,72,20,2,134,27,108,101,100,95,
	7,95,9,128,1,0,12,2,80,7,25,177,134,29,
	108,115,100,95,5,95,6,108,116,100,12,0,72,95,
	7,72,20,2,25,13,134,35,108,115,100,95,5,95,
	6,20,2,134,38,95,5,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HWG_VERSION )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,176,1,95,1,122,8,28,28,134,1,
	106,12,72,119,71,85,73,32,50,46,49,55,32,0,
	108,118,100,12,0,72,80,2,25,19,134,3,127,2,
	11,0,72,119,71,85,73,32,50,46,49,55,0,134,
	5,95,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( TXTRECT )
{
   static const BYTE pcode[] =
   {
	13,3,3,133,189,1,95,3,100,69,28,6,95,3,
	25,9,48,120,0,95,2,112,0,80,3,134,2,108,
	58,100,48,8,0,95,2,112,0,12,1,80,4,134,
	3,9,95,3,100,8,28,12,73,48,81,0,95,2,
	112,0,100,69,28,18,134,4,48,120,0,48,81,0,
	95,2,112,0,112,0,80,3,134,6,95,3,100,69,
	28,20,134,7,108,60,100,95,4,48,8,0,95,3,
	112,0,12,2,80,6,134,9,108,121,100,95,4,95,
	1,12,2,80,5,134,10,95,3,100,69,28,13,134,
	11,108,60,100,95,4,95,6,20,2,134,13,108,64,
	100,48,8,0,95,2,112,0,95,4,20,2,134,14,
	95,5,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILEPATH )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,211,1,108,123,100,106,2,92,0,95,
	1,12,2,21,80,2,121,5,28,36,108,123,100,106,
	2,47,0,95,1,12,2,21,80,2,121,5,28,7,
	106,1,0,25,22,108,114,100,95,1,95,2,12,2,
	25,11,108,114,100,95,1,95,2,12,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( CUTPATH )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,218,1,108,123,100,106,2,92,0,95,
	1,12,2,21,80,2,121,5,28,38,108,123,100,106,
	2,47,0,95,1,12,2,21,80,2,121,5,28,6,
	95,1,25,28,108,101,100,95,1,95,2,128,1,0,
	12,2,25,14,108,101,100,95,1,95,2,128,1,0,
	12,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,125,0,5,0,116,125,0,106,1,0,82,5,0,
	7
   };

   hb_vmExecute( pcode, symbols );
}

