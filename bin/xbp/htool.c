/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\htool.prg>
 * Command: -oxbp\htool.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\htool.prg 
 * Created: 2020.09.03 14:41:42 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\htool.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HTOOLBUTTON );
HB_FUNC_STATIC( HTOOLBUTTON_NEW );
HB_FUNC_STATIC( HTOOLBUTTON_ONCLICK );
HB_FUNC_STATIC( HTOOLBUTTON_ENABLED );
HB_FUNC_STATIC( HTOOLBUTTON_PRESSED );
HB_FUNC_STATIC( HTOOLBUTTON_CHECKED );
HB_FUNC( HTOOLBAR );
HB_FUNC_STATIC( HTOOLBAR_NEW );
HB_FUNC_STATIC( HTOOLBAR_REDEFINE );
HB_FUNC_STATIC( HTOOLBAR_ACTIVATE );
HB_FUNC_STATIC( HTOOLBAR_INIT );
HB_FUNC_STATIC( HTOOLBAR_CREATETOOL );
HB_FUNC_STATIC( HTOOLBAR_NOTIFY );
HB_FUNC_STATIC( HTOOLBAR_REFRESH );
HB_FUNC_STATIC( HTOOLBAR_ADDBUTTON );
HB_FUNC( HTOOLBAREX );
HB_FUNC_STATIC( HTOOLBAREX_INIT );
HB_FUNC_STATIC( HTOOLBAREX_EXECUTETOOL );
HB_FUNC_STATIC( ISALTSHIFT );
HB_FUNC_STATIC( HTOOLBAREX_MYDESTRUCTOR );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HOBJECT );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( MAKELONG );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( __OBJADDDATA );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( HWG_BITAND );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( HWG_INITCOMMONCONTROLSEX );
HB_FUNC_EXTERN( TYPE );
HB_FUNC_EXTERN( ISTHEMEACTIVE );
HB_FUNC_EXTERN( HLINE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CREATETOOLBAR );
HB_FUNC_EXTERN( DESTROYWINDOW );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TOOLBAR_LOADSTANDARTIMAGE );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HWG__CREATEPOPUPMENU );
HB_FUNC_EXTERN( HWG__ADDMENUITEM );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( HBITMAP );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( TOOLBAR_LOADIMAGE );
HB_FUNC_EXTERN( GETBITMAPSIZE );
HB_FUNC_EXTERN( CREATEIMAGELIST );
HB_FUNC_EXTERN( IMAGELIST_ADD );
HB_FUNC_EXTERN( TOOLBARADDBUTTONS );
HB_FUNC_EXTERN( MAKELPARAM );
HB_FUNC_EXTERN( GETNOTIFYCODE );
HB_FUNC_EXTERN( TOOLBAR_GETDISPINFOID );
HB_FUNC_EXTERN( TOOLBAR_SETDISPINFO );
HB_FUNC_EXTERN( TOOLBAR_GETINFOTIPID );
HB_FUNC_EXTERN( TOOLBAR_GETINFOTIP );
HB_FUNC_EXTERN( TOOLBAR_SUBMENUEXGETID );
HB_FUNC_EXTERN( TOOLBAR_SUBMENUEX );
HB_FUNC_EXTERN( TOOLBAR_SUBMENU );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( SETTOOLHANDLE );
HB_FUNC_EXTERN( SETHOOK );
HB_FUNC_EXTERN( MAKEWPARAM );
HB_FUNC_EXTERN( GETKEYBOARDSTATE );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( UNSETHOOK );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTOOL )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HTOOLBUTTON", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTOOLBUTTON_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON_NEW )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENABLEBUTTON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "MAKELONG", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAKELONG )}, NULL },
{ "HTOOLBUTTON_ENABLED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON_ENABLED )}, &ModuleFakeDyn },
{ "HTOOLBUTTON_CHECKED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON_CHECKED )}, &ModuleFakeDyn },
{ "HTOOLBUTTON_PRESSED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON_PRESSED )}, &ModuleFakeDyn },
{ "HTOOLBUTTON_ONCLICK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBUTTON_ONCLICK )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CAPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NBITIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BSTATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TOOLTIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AMENU", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__OBJADDDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJADDDATA )}, NULL },
{ "ADDEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ONCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LENABLED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LENABLED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITOR )}, NULL },
{ "HWG_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITAND )}, NULL },
{ "_LPRESSED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LPRESSED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCHECKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCHECKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTOOLBAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR )}, &ModuleFakeDyn },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTOOLBAR_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_NEW )}, &ModuleFakeDyn },
{ "HTOOLBAR_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_REDEFINE )}, &ModuleFakeDyn },
{ "HTOOLBAR_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_ACTIVATE )}, &ModuleFakeDyn },
{ "HTOOLBAR_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_INIT )}, &ModuleFakeDyn },
{ "HTOOLBAR_CREATETOOL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_CREATETOOL )}, &ModuleFakeDyn },
{ "HTOOLBAR_ADDBUTTON", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_ADDBUTTON )}, &ModuleFakeDyn },
{ "HTOOLBAR_NOTIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_NOTIFY )}, &ModuleFakeDyn },
{ "HTOOLBAR_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAR_REFRESH )}, &ModuleFakeDyn },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_INITCOMMONCONTROLSEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITCOMMONCONTROLSEX )}, NULL },
{ "_LTRANSP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BTNWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LVERTICAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TYPE )}, NULL },
{ "LVERTICAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NIDB", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NINDENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NSIZE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOTHEMES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ISTHEMEACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISTHEMEACTIVE )}, NULL },
{ "WINDOWSMANIFEST", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HLINE )}, NULL },
{ "LNOTHEMES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AOFFSET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LRESOURCE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATETOOLBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATETOOLBAR )}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EXTSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ANCHOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ANCHOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATETOOL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LRESOURCE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DESTROYWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYWINDOW )}, NULL },
{ "OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDBUTTON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NIDB", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOOLBAR_LOADSTANDARTIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_LOADSTANDARTIMAGE )}, NULL },
{ "NSIZE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "HWG__CREATEPOPUPMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG__CREATEPOPUPMENU )}, NULL },
{ "_HMENU", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG__ADDMENUITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG__ADDMENUITEM )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "ADDFILE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBITMAP )}, NULL },
{ "ADDRESOURCE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "TOOLBAR_LOADIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_LOADIMAGE )}, NULL },
{ "GETBITMAPSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBITMAPSIZE )}, NULL },
{ "CREATEIMAGELIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEIMAGELIST )}, NULL },
{ "IMAGELIST_ADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMAGELIST_ADD )}, NULL },
{ "NINDENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOOLBARADDBUTTONS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBARADDBUTTONS )}, NULL },
{ "BTNWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MAKELPARAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAKELPARAM )}, NULL },
{ "LTRANSP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETNOTIFYCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYCODE )}, NULL },
{ "TOOLBAR_GETDISPINFOID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_GETDISPINFOID )}, NULL },
{ "TOOLBAR_SETDISPINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_SETDISPINFO )}, NULL },
{ "TOOLBAR_GETINFOTIPID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_GETINFOTIPID )}, NULL },
{ "TOOLBAR_GETINFOTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_GETINFOTIP )}, NULL },
{ "TOOLBAR_SUBMENUEXGETID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_SUBMENUEXGETID )}, NULL },
{ "TOOLBAR_SUBMENUEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_SUBMENUEX )}, NULL },
{ "TOOLBAR_SUBMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOOLBAR_SUBMENU )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "ABUTTONS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ASEPARATORS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "HTOOLBAREX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAREX )}, &ModuleFakeDyn },
{ "HTOOLBAREX_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAREX_INIT )}, &ModuleFakeDyn },
{ "HTOOLBAREX_EXECUTETOOL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAREX_EXECUTETOOL )}, &ModuleFakeDyn },
{ "SETDESTRUCTOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTOOLBAREX_MYDESTRUCTOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTOOLBAREX_MYDESTRUCTOR )}, &ModuleFakeDyn },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "SETTOOLHANDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETTOOLHANDLE )}, NULL },
{ "SETHOOK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETHOOK )}, NULL },
{ "MAKEWPARAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAKEWPARAM )}, NULL },
{ "ISALTSHIFT", {HB_FS_STATIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( ISALTSHIFT )}, &ModuleFakeDyn },
{ "GETKEYBOARDSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETKEYBOARDSTATE )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "UNSETHOOK", {HB_FS_PUBLIC}, {HB_FUNCNAME( UNSETHOOK )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HTOOL, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HTOOL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HTOOL )
   #include "hbiniseg.h"
#endif

HB_FUNC( HTOOLBUTTON )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,166,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,198,3,48,2,0,108,3,100,12,
	0,106,12,72,84,111,111,108,66,117,116,116,111,110,
	0,48,4,0,108,5,100,12,0,112,0,4,1,0,
	112,2,82,1,0,133,22,0,48,6,0,103,1,0,
	100,100,95,2,106,5,78,97,109,101,0,4,1,0,
	9,9,112,6,73,134,1,48,6,0,103,1,0,100,
	100,95,2,106,3,105,100,0,4,1,0,9,9,112,
	6,73,134,2,48,6,0,103,1,0,100,92,255,95,
	2,106,7,110,66,105,116,73,112,0,4,1,0,9,
	9,112,6,73,134,3,48,6,0,103,1,0,100,92,
	4,95,2,106,7,98,83,116,97,116,101,0,4,1,
	0,9,9,112,6,73,134,4,48,6,0,103,1,0,
	100,121,95,2,106,7,98,83,116,121,108,101,0,4,
	1,0,9,9,112,6,73,134,5,48,6,0,103,1,
	0,100,100,95,2,106,8,116,111,111,108,116,105,112,
	0,4,1,0,9,9,112,6,73,134,6,48,6,0,
	103,1,0,100,4,0,0,95,2,106,6,97,77,101,
	110,117,0,4,1,0,9,9,112,6,73,134,7,48,
	6,0,103,1,0,100,100,95,2,106,6,104,77,101,
	110,117,0,4,1,0,9,9,112,6,73,134,8,48,
	6,0,103,1,0,100,100,95,2,106,8,67,97,112,
	116,105,111,110,0,4,1,0,9,9,112,6,73,134,
	9,48,6,0,103,1,0,100,120,92,8,106,9,108,
	69,110,97,98,108,101,100,0,4,1,0,9,9,112,
	6,73,134,10,48,6,0,103,1,0,100,9,92,8,
	106,9,108,67,104,101,99,107,101,100,0,4,1,0,
	9,9,112,6,73,134,11,48,6,0,103,1,0,100,
	9,92,8,106,9,108,80,114,101,115,115,101,100,0,
	4,1,0,9,9,112,6,73,134,12,48,6,0,103,
	1,0,100,100,95,2,106,7,98,67,108,105,99,107,
	0,4,1,0,9,9,112,6,73,134,13,48,6,0,
	103,1,0,100,100,95,2,106,8,111,80,97,114,101,
	110,116,0,4,1,0,9,9,112,6,73,134,16,48,
	7,0,103,1,0,106,4,78,101,119,0,108,8,14,
	95,2,9,112,4,73,134,17,48,9,0,103,1,0,
	106,7,69,110,97,98,108,101,0,89,31,0,1,0,
	0,0,95,1,73,48,10,0,48,11,0,95,1,112,
	0,48,12,0,95,1,112,0,120,112,2,6,95,2,
	9,112,4,73,134,18,48,9,0,103,1,0,106,8,
	68,105,115,97,98,108,101,0,89,31,0,1,0,0,
	0,95,1,73,48,10,0,48,11,0,95,1,112,0,
	48,12,0,95,1,112,0,9,112,2,6,95,2,9,
	112,4,73,134,19,48,9,0,103,1,0,106,5,83,
	104,111,119,0,89,50,0,1,0,0,0,95,1,73,
	108,13,100,48,14,0,48,11,0,95,1,112,0,112,
	0,93,4,4,108,15,100,48,12,0,95,1,112,0,
	12,1,108,16,100,121,121,12,2,12,4,6,95,2,
	9,112,4,73,134,20,48,9,0,103,1,0,106,5,
	72,105,100,101,0,89,50,0,1,0,0,0,95,1,
	73,108,13,100,48,14,0,48,11,0,95,1,112,0,
	112,0,93,4,4,108,15,100,48,12,0,95,1,112,
	0,12,1,108,16,100,122,121,12,2,12,4,6,95,
	2,9,112,4,73,134,21,48,7,0,103,1,0,106,
	8,69,110,97,98,108,101,100,0,108,17,14,92,33,
	9,112,4,73,48,7,0,103,1,0,106,9,95,69,
	110,97,98,108,101,100,0,108,17,14,112,2,73,134,
	22,48,7,0,103,1,0,106,8,67,104,101,99,107,
	101,100,0,108,18,14,92,33,9,112,4,73,48,7,
	0,103,1,0,106,9,95,67,104,101,99,107,101,100,
	0,108,18,14,112,2,73,134,23,48,7,0,103,1,
	0,106,8,80,114,101,115,115,101,100,0,108,19,14,
	92,33,9,112,4,73,48,7,0,103,1,0,106,9,
	95,80,114,101,115,115,101,100,0,108,19,14,112,2,
	73,134,24,48,7,0,103,1,0,106,8,111,110,67,
	108,105,99,107,0,108,20,14,95,2,9,112,4,73,
	48,24,0,103,1,0,112,0,73,108,25,100,48,22,
	0,103,1,0,112,0,12,1,80,1,108,26,100,95,
	1,106,10,73,110,105,116,67,108,97,115,115,0,12,
	2,28,32,48,27,0,95,1,108,28,100,12,0,112,
	1,73,25,17,108,25,100,48,22,0,103,1,0,112,
	0,12,1,80,1,108,29,100,12,0,121,15,28,10,
	103,1,0,108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBUTTON_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,10,102,80,11,133,52,0,48,30,0,95,11,
	95,2,112,1,73,134,1,48,31,0,95,11,95,4,
	112,1,73,134,2,48,32,0,95,11,95,7,112,1,
	73,134,3,48,33,0,95,11,95,3,112,1,73,134,
	4,48,34,0,95,11,95,5,112,1,73,134,5,48,
	35,0,95,11,95,6,112,1,73,134,6,48,36,0,
	95,11,95,9,112,1,73,134,7,48,37,0,95,11,
	95,8,112,1,73,134,8,48,38,0,95,11,95,10,
	112,1,73,134,9,48,39,0,95,11,95,1,112,1,
	73,134,10,108,40,100,48,11,0,95,11,112,0,95,
	2,20,2,134,11,95,2,46,48,11,0,95,11,112,
	0,95,11,112,1,73,134,13,48,41,0,48,11,0,
	48,11,0,95,11,112,0,112,0,121,95,11,89,17,
	0,1,0,1,0,11,0,48,42,0,95,255,112,0,
	6,112,3,73,134,15,95,11,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBUTTON_ONCLICK )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,70,0,48,43,0,95,1,
	112,0,100,69,28,26,134,1,48,44,0,48,43,0,
	95,1,112,0,95,1,48,12,0,95,1,112,0,112,
	2,73,134,3,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBUTTON_ENABLED )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,76,0,95,1,100,69,28,
	42,134,1,95,1,28,14,134,2,48,45,0,95,2,
	112,0,73,25,12,134,4,48,46,0,95,2,112,0,
	73,134,6,48,47,0,95,2,95,1,112,1,73,134,
	8,48,48,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBUTTON_PRESSED )
{
   static const BYTE pcode[] =
   {
	13,2,1,102,80,2,133,89,0,95,1,100,69,28,
	118,134,1,108,13,100,48,14,0,48,11,0,95,2,
	112,0,112,0,93,18,4,108,15,100,48,12,0,95,
	2,112,0,12,1,121,12,4,80,3,134,3,108,13,
	100,48,14,0,48,11,0,95,2,112,0,112,0,93,
	17,4,108,15,100,48,12,0,95,2,112,0,12,1,
	108,16,100,95,1,28,13,108,49,100,95,3,92,2,
	12,2,25,14,95,3,108,50,100,95,3,92,2,12,
	2,49,121,12,2,20,4,134,4,48,51,0,95,2,
	95,1,112,1,73,134,6,48,52,0,95,2,112,0,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBUTTON_CHECKED )
{
   static const BYTE pcode[] =
   {
	13,2,1,102,80,2,133,100,0,95,1,100,69,28,
	116,134,1,108,13,100,48,14,0,48,11,0,95,2,
	112,0,112,0,93,18,4,108,15,100,48,12,0,95,
	2,112,0,12,1,121,12,4,80,3,134,3,108,13,
	100,48,14,0,48,11,0,95,2,112,0,112,0,93,
	17,4,108,15,100,48,12,0,95,2,112,0,12,1,
	108,16,100,95,1,28,12,108,49,100,95,3,122,12,
	2,25,13,95,3,108,50,100,95,3,122,12,2,49,
	121,12,2,20,4,134,4,48,53,0,95,2,95,1,
	112,1,73,134,6,48,54,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HTOOLBAR )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,166,0,126,2,1,0,95,2,73,103,
	2,0,100,8,29,200,4,48,2,0,108,3,100,12,
	0,106,9,72,84,111,111,108,66,97,114,0,48,4,
	0,108,56,100,12,0,112,0,4,1,0,112,2,82,
	2,0,133,111,0,48,6,0,103,2,0,100,106,16,
	84,111,111,108,98,97,114,87,105,110,100,111,119,51,
	50,0,95,2,106,9,119,105,110,99,108,97,115,115,
	0,4,1,0,9,9,112,6,73,134,1,48,6,0,
	103,2,0,100,100,95,2,106,5,84,69,88,84,0,
	106,3,105,100,0,106,5,110,84,111,112,0,106,6,
	110,76,101,102,116,0,106,7,110,119,105,100,116,104,
	0,106,8,110,104,101,105,103,104,116,0,4,6,0,
	9,9,112,6,73,134,2,48,57,0,103,2,0,100,
	100,95,2,128,64,0,106,10,111,83,101,108,101,99,
	116,101,100,0,4,1,0,9,112,5,73,134,3,48,
	6,0,103,2,0,100,121,95,2,106,6,83,116,97,
	116,101,0,4,1,0,9,9,112,6,73,134,4,48,
	6,0,103,2,0,100,100,95,2,106,8,69,120,83,
	116,121,108,101,0,4,1,0,9,9,112,6,73,134,
	5,48,6,0,103,2,0,100,100,95,2,106,7,98,
	67,108,105,99,107,0,106,9,99,84,111,111,108,116,
	105,112,0,4,2,0,9,9,112,6,73,134,7,48,
	6,0,103,2,0,100,9,95,2,106,7,108,80,114,
	101,115,115,0,4,1,0,9,9,112,6,73,134,8,
	48,6,0,103,2,0,100,100,95,2,106,6,108,70,
	108,97,116,0,4,1,0,9,9,112,6,73,134,9,
	48,6,0,103,2,0,100,9,95,2,106,8,108,84,
	114,97,110,115,112,0,4,1,0,9,9,112,6,73,
	134,10,48,6,0,103,2,0,100,9,95,2,106,10,
	108,86,101,114,116,105,99,97,108,0,4,1,0,9,
	9,112,6,73,134,11,48,6,0,103,2,0,100,9,
	92,8,106,8,108,67,114,101,97,116,101,0,4,1,
	0,9,9,112,6,73,134,12,48,6,0,103,2,0,
	100,9,92,8,106,10,108,82,101,115,111,117,114,99,
	101,0,4,1,0,9,9,112,6,73,134,13,48,6,
	0,103,2,0,100,100,95,2,106,7,110,79,114,100,
	101,114,0,4,1,0,9,9,112,6,73,134,14,48,
	6,0,103,2,0,100,100,95,2,106,9,66,116,110,
	87,105,100,116,104,0,4,1,0,9,9,112,6,73,
	134,15,48,6,0,103,2,0,100,100,95,2,106,5,
	110,73,68,66,0,4,1,0,9,9,112,6,73,134,
	16,48,6,0,103,2,0,100,4,0,0,95,2,106,
	9,97,66,117,116,116,111,110,115,0,4,1,0,9,
	9,112,6,73,134,17,48,6,0,103,2,0,100,4,
	0,0,95,2,106,12,97,83,101,112,97,114,97,116,
	111,114,115,0,4,1,0,9,9,112,6,73,134,18,
	48,6,0,103,2,0,100,4,0,0,95,2,106,6,
	97,73,116,101,109,0,4,1,0,9,9,112,6,73,
	134,19,48,6,0,103,2,0,100,100,95,2,106,5,
	76,105,110,101,0,4,1,0,9,9,112,6,73,134,
	20,48,6,0,103,2,0,100,100,95,2,106,8,110,
	73,110,100,101,110,116,0,4,1,0,9,9,112,6,
	73,134,21,48,6,0,103,2,0,100,100,95,2,106,
	6,110,83,105,122,101,0,4,1,0,9,9,112,6,
	73,134,24,48,7,0,103,2,0,106,4,78,101,119,
	0,108,58,14,95,2,9,112,4,73,134,26,48,7,
	0,103,2,0,106,9,82,101,100,101,102,105,110,101,
	0,108,59,14,95,2,9,112,4,73,134,28,48,7,
	0,103,2,0,106,9,65,99,116,105,118,97,116,101,
	0,108,60,14,95,2,9,112,4,73,134,29,48,7,
	0,103,2,0,106,5,73,78,73,84,0,108,61,14,
	95,2,9,112,4,73,134,30,48,7,0,103,2,0,
	106,11,67,114,101,97,116,101,84,111,111,108,0,108,
	62,14,95,2,9,112,4,73,134,31,48,7,0,103,
	2,0,106,10,65,100,100,66,117,116,116,111,110,0,
	108,63,14,95,2,9,112,4,73,134,32,48,7,0,
	103,2,0,106,7,78,111,116,105,102,121,0,108,64,
	14,95,2,9,112,4,73,134,33,48,9,0,103,2,
	0,106,13,69,110,97,98,108,101,66,117,116,116,111,
	110,0,89,47,0,3,0,0,0,95,1,73,108,13,
	100,48,14,0,95,1,112,0,93,1,4,108,15,100,
	95,2,12,1,108,16,100,95,3,28,5,122,25,3,
	121,121,12,2,12,4,6,95,2,9,112,4,73,134,
	34,48,9,0,103,2,0,106,11,83,104,111,119,66,
	117,116,116,111,110,0,89,40,0,2,0,0,0,95,
	1,73,108,13,100,48,14,0,95,1,112,0,93,4,
	4,108,15,100,95,2,12,1,108,16,100,121,121,12,
	2,12,4,6,95,2,9,112,4,73,134,35,48,9,
	0,103,2,0,106,11,72,105,100,101,66,117,116,116,
	111,110,0,89,40,0,2,0,0,0,95,1,73,108,
	13,100,48,14,0,95,1,112,0,93,4,4,108,15,
	100,95,2,12,1,108,16,100,122,121,12,2,12,4,
	6,95,2,9,112,4,73,134,36,48,7,0,103,2,
	0,106,8,82,69,70,82,69,83,72,0,108,65,14,
	95,2,9,112,4,73,48,24,0,103,2,0,112,0,
	73,108,25,100,48,22,0,103,2,0,112,0,12,1,
	80,1,108,26,100,95,1,106,10,73,110,105,116,67,
	108,97,115,115,0,12,2,28,32,48,27,0,95,1,
	108,28,100,12,0,112,1,73,25,17,108,25,100,48,
	22,0,103,2,0,112,0,12,1,80,1,108,29,100,
	12,0,121,15,28,10,103,2,0,108,0,14,121,178,
	95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,21,102,80,22,133,155,0,95,16,80,16,134,
	2,95,18,100,8,28,7,4,0,0,80,18,134,5,
	108,49,100,95,3,100,8,28,5,121,25,4,95,3,
	121,12,2,80,3,134,6,108,50,100,95,3,97,0,
	0,192,0,12,2,121,15,28,5,122,25,3,121,167,
	7,134,7,95,6,108,50,100,95,3,97,0,0,192,
	0,12,2,121,15,28,6,92,2,25,3,121,49,80,
	6,134,10,48,2,0,48,66,0,95,22,112,0,95,
	1,95,2,95,3,95,4,95,5,95,6,95,7,95,
	9,95,10,95,11,95,12,95,13,95,14,95,15,112,
	14,73,134,12,108,67,100,20,0,134,14,48,68,0,
	95,22,95,16,100,69,28,6,95,16,25,3,9,112,
	1,73,134,15,48,69,0,95,22,95,8,112,1,73,
	134,16,48,70,0,95,22,9,95,17,100,69,28,27,
	73,108,71,100,106,10,108,86,101,114,116,105,99,97,
	108,0,92,11,12,2,106,2,76,0,5,28,6,95,
	17,25,9,48,72,0,95,22,112,0,112,1,73,134,
	17,48,73,0,95,22,95,21,112,1,73,134,18,48,
	74,0,95,22,95,18,112,1,73,134,19,48,75,0,
	95,22,95,20,100,69,28,6,95,20,25,3,122,112,
	1,73,134,20,48,76,0,95,22,9,95,19,100,69,
	28,8,73,95,19,92,11,15,28,6,95,19,25,3,
	100,112,1,73,134,21,48,77,0,95,22,108,78,100,
	12,0,68,21,31,11,73,48,79,0,95,22,112,0,
	68,112,1,73,134,22,108,50,100,48,80,0,95,22,
	112,0,97,0,0,192,0,12,2,121,5,28,121,134,
	23,48,72,0,95,22,112,0,31,68,134,24,48,81,
	0,95,22,48,2,0,108,82,100,12,0,95,1,100,
	100,95,4,95,5,95,7,72,9,48,83,0,95,22,
	112,0,28,15,73,108,50,100,95,3,93,0,8,12,
	2,121,15,28,6,92,2,25,3,122,72,95,6,112,
	6,112,1,73,25,44,134,26,48,81,0,95,22,48,
	2,0,108,82,100,12,0,95,1,100,48,72,0,95,
	22,112,0,95,4,95,6,72,128,1,0,95,5,95,
	7,112,6,112,1,73,134,30,9,108,26,100,48,11,
	0,95,22,112,0,106,8,65,79,70,70,83,69,84,
	0,12,2,28,55,73,9,48,84,0,48,11,0,95,
	22,112,0,112,0,92,2,8,28,36,73,48,85,0,
	48,11,0,95,22,112,0,112,0,92,2,1,48,85,
	0,48,11,0,95,22,112,0,112,0,92,3,1,72,
	121,5,29,152,0,134,31,48,86,0,95,22,112,0,
	48,87,0,95,22,112,0,15,21,31,12,73,48,86,
	0,95,22,112,0,121,8,28,27,134,32,48,87,0,
	95,22,112,0,48,85,0,48,11,0,95,22,112,0,
	150,92,2,2,25,94,134,33,48,87,0,95,22,112,
	0,48,86,0,95,22,112,0,15,21,31,12,73,48,
	87,0,95,22,112,0,121,8,28,62,134,34,48,88,
	0,95,22,112,0,121,8,28,26,134,35,48,86,0,
	95,22,112,0,48,85,0,48,11,0,95,22,112,0,
	150,122,2,25,25,134,37,48,86,0,95,22,112,0,
	48,85,0,48,11,0,95,22,112,0,150,92,3,2,
	134,42,48,89,0,95,22,112,0,73,134,44,95,22,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_REDEFINE )
{
   static const BYTE pcode[] =
   {
	13,1,12,102,80,13,133,205,0,95,3,80,3,134,
	1,95,11,80,11,134,3,95,12,100,8,28,7,4,
	0,0,80,12,134,5,48,2,0,48,66,0,95,13,
	112,0,95,1,95,2,121,121,121,121,121,95,4,95,
	5,95,6,95,7,95,8,95,9,95,10,112,14,73,
	134,6,108,67,100,20,0,134,7,48,74,0,95,13,
	95,12,112,1,73,134,9,48,90,0,95,13,48,91,
	0,95,13,48,92,0,95,13,48,93,0,95,13,48,
	94,0,95,13,121,112,1,112,1,112,1,112,1,112,
	1,73,134,10,48,75,0,95,13,122,112,1,73,134,
	11,48,95,0,95,13,120,112,1,73,134,14,95,13,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,224,0,108,96,100,48,14,
	0,48,11,0,95,1,112,0,112,0,12,1,31,99,
	134,1,48,97,0,95,1,120,112,1,73,134,3,48,
	98,0,95,1,108,99,100,48,14,0,48,11,0,95,
	1,112,0,112,0,48,12,0,95,1,112,0,48,80,
	0,95,1,112,0,48,88,0,95,1,112,0,48,100,
	0,95,1,112,0,48,86,0,95,1,112,0,48,87,
	0,95,1,112,0,48,101,0,95,1,112,0,12,8,
	112,1,73,134,5,48,102,0,95,1,112,0,73,134,
	7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,235,0,48,103,0,95,1,
	112,0,31,62,134,1,48,104,0,95,1,112,0,100,
	69,28,24,134,2,48,105,0,48,104,0,95,1,112,
	0,48,106,0,95,1,112,0,112,1,73,134,4,48,
	102,0,48,66,0,95,1,112,0,112,0,73,134,5,
	48,107,0,95,1,112,0,73,134,8,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_CREATETOOL )
{
   static const BYTE pcode[] =
   {
	13,14,0,102,80,1,133,248,0,4,0,0,80,5,
	134,4,126,14,0,0,134,6,48,108,0,95,1,112,
	0,31,95,134,7,108,96,100,48,14,0,95,1,112,
	0,12,1,28,7,134,8,100,110,7,134,10,48,109,
	0,95,1,112,0,32,225,0,134,11,108,110,100,48,
	14,0,95,1,112,0,20,1,134,12,48,89,0,95,
	1,112,0,73,134,13,108,96,100,48,111,0,95,1,
	112,0,12,1,31,19,134,14,48,112,0,95,1,48,
	111,0,95,1,112,0,112,1,73,26,165,0,134,18,
	126,2,1,0,95,2,108,113,100,48,114,0,95,1,
	112,0,12,1,34,29,141,0,134,19,48,115,0,95,
	1,48,114,0,95,1,112,0,95,2,1,122,1,48,
	114,0,95,1,112,0,95,2,1,92,2,1,48,114,
	0,95,1,112,0,95,2,1,92,3,1,48,114,0,
	95,1,112,0,95,2,1,92,4,1,48,114,0,95,
	1,112,0,95,2,1,92,6,1,48,114,0,95,1,
	112,0,95,2,1,92,7,1,48,114,0,95,1,112,
	0,95,2,1,92,8,1,48,114,0,95,1,112,0,
	95,2,1,92,9,1,112,8,80,7,134,20,95,7,
	48,114,0,95,1,112,0,95,2,168,92,11,2,134,
	21,173,2,26,103,255,134,24,48,72,0,95,1,112,
	0,28,46,134,25,108,13,100,48,14,0,95,1,112,
	0,93,57,4,121,121,12,4,128,128,0,80,6,134,
	26,108,13,100,48,14,0,95,1,112,0,93,56,4,
	121,95,6,20,4,134,28,126,13,0,0,134,29,9,
	48,116,0,95,1,112,0,100,69,28,12,73,48,116,
	0,95,1,112,0,121,16,28,25,134,30,108,117,100,
	48,14,0,95,1,112,0,48,116,0,95,1,112,0,
	12,2,80,13,134,32,9,108,50,100,48,80,0,95,
	1,112,0,93,0,16,12,2,121,15,28,12,73,48,
	118,0,95,1,112,0,100,5,28,29,134,33,48,76,
	0,95,1,108,119,100,92,16,48,87,0,95,1,112,
	0,128,240,255,12,2,112,1,73,134,35,48,118,0,
	95,1,112,0,100,69,28,39,134,36,108,13,100,48,
	14,0,95,1,112,0,93,32,4,121,108,16,100,48,
	118,0,95,1,112,0,48,118,0,95,1,112,0,12,
	2,20,4,134,39,126,2,1,0,95,2,108,113,100,
	48,114,0,95,1,112,0,12,1,34,29,165,2,134,
	40,48,114,0,95,1,112,0,95,2,1,92,4,1,
	122,5,28,5,26,138,2,134,43,108,120,100,48,114,
	0,95,1,112,0,95,2,1,92,7,1,12,1,106,
	2,66,0,8,73,134,49,108,120,100,48,114,0,95,
	1,112,0,95,2,1,92,9,1,12,1,106,2,65,
	0,8,29,203,0,134,52,108,121,100,12,0,48,114,
	0,95,1,112,0,95,2,168,92,10,2,134,53,48,
	122,0,48,114,0,95,1,112,0,95,2,1,92,11,
	1,48,114,0,95,1,112,0,95,2,1,92,10,1,
	112,1,73,134,54,48,114,0,95,1,112,0,95,2,
	1,92,9,1,80,4,134,56,126,3,1,0,95,3,
	108,113,100,95,4,12,1,34,28,113,134,57,95,4,
	95,3,1,122,1,106,2,45,0,5,28,5,100,25,
	9,95,4,95,3,1,122,1,95,4,95,3,168,122,
	2,134,58,108,123,100,48,114,0,95,1,112,0,95,
	2,1,92,10,1,95,4,95,3,1,122,1,92,255,
	9,95,4,95,3,1,92,2,1,100,9,20,7,134,
	59,48,41,0,48,11,0,95,1,112,0,121,95,4,
	95,3,1,92,2,1,95,4,95,3,1,92,3,1,
	112,3,73,134,60,173,3,25,135,134,64,48,114,0,
	95,1,112,0,95,2,1,92,4,1,122,5,28,5,
	26,118,1,134,68,95,14,92,8,5,28,6,95,14,
	25,52,9,108,50,100,48,114,0,95,1,112,0,95,
	2,1,92,4,1,92,8,12,2,121,69,28,20,73,
	48,114,0,95,1,112,0,95,2,1,92,4,1,93,
	128,0,35,28,6,92,8,25,3,122,80,14,134,74,
	108,120,100,48,114,0,95,1,112,0,95,2,1,122,
	1,12,1,106,2,67,0,8,21,31,17,73,48,114,
	0,95,1,112,0,95,2,1,122,1,122,15,29,245,
	0,134,75,9,108,120,100,48,114,0,95,1,112,0,
	95,2,1,122,1,12,1,106,2,67,0,8,28,26,
	73,108,124,100,106,2,46,0,48,114,0,95,1,112,
	0,95,2,1,122,1,12,2,121,69,28,51,134,77,
	48,14,0,48,125,0,108,126,100,12,0,48,114,0,
	95,1,112,0,95,2,1,122,1,100,120,48,118,0,
	95,1,112,0,48,118,0,95,1,112,0,112,5,112,
	0,80,11,25,51,134,80,48,14,0,48,127,0,108,
	126,100,12,0,48,114,0,95,1,112,0,95,2,1,
	122,1,93,32,16,100,48,118,0,95,1,112,0,48,
	118,0,95,1,112,0,112,5,112,0,80,11,134,82,
	108,128,100,95,5,95,11,12,2,21,80,12,121,5,
	28,24,134,83,108,129,100,95,5,95,11,20,2,134,
	84,108,113,100,95,5,12,1,80,12,134,86,95,12,
	95,13,72,48,114,0,95,1,112,0,95,2,168,122,
	2,134,87,48,108,0,95,1,112,0,31,40,134,88,
	108,130,100,48,14,0,95,1,112,0,95,5,95,12,
	1,20,2,25,19,134,91,48,114,0,95,1,112,0,
	95,2,1,122,1,121,15,73,134,97,173,2,26,79,
	253,134,98,9,108,113,100,95,5,12,1,121,15,28,
	10,73,48,108,0,95,1,112,0,28,100,134,100,108,
	131,100,95,5,122,1,12,1,80,8,134,120,108,132,
	100,4,0,0,95,8,122,1,95,8,92,2,1,122,
	93,255,0,12,5,80,9,134,121,126,10,1,0,95,
	10,108,113,100,95,5,12,1,34,28,22,134,132,108,
	133,100,95,9,95,5,95,10,1,20,2,134,133,173,
	10,25,226,134,134,108,13,100,48,14,0,95,1,112,
	0,93,48,4,121,95,9,20,4,25,40,134,135,108,
	113,100,95,5,12,1,121,5,28,27,134,136,108,13,
	100,48,14,0,95,1,112,0,93,32,4,121,108,16,
	100,121,121,12,2,20,4,134,140,108,13,100,48,14,
	0,95,1,112,0,93,47,4,48,134,0,95,1,112,
	0,121,20,4,134,142,108,113,100,48,114,0,95,1,
	112,0,12,1,121,15,28,54,134,143,108,135,100,48,
	14,0,95,1,112,0,48,114,0,95,1,112,0,108,
	113,100,48,114,0,95,1,112,0,12,1,20,3,134,
	144,108,13,100,48,14,0,95,1,112,0,93,84,4,
	121,122,20,4,134,147,48,136,0,95,1,112,0,100,
	69,29,160,0,134,148,108,50,100,48,80,0,95,1,
	112,0,97,0,0,192,0,12,2,121,15,28,6,92,
	5,25,3,121,167,14,134,149,48,72,0,95,1,112,
	0,31,75,134,150,108,13,100,48,14,0,95,1,112,
	0,93,31,4,121,108,137,100,48,136,0,95,1,112,
	0,48,87,0,95,1,112,0,95,14,49,9,48,83,
	0,95,1,112,0,31,15,73,108,50,100,95,6,93,
	0,8,12,2,121,15,28,5,122,25,4,92,2,49,
	12,2,20,4,25,45,134,152,108,13,100,48,14,0,
	95,1,112,0,93,31,4,121,108,137,100,48,86,0,
	95,1,112,0,95,14,49,128,255,255,48,136,0,95,
	1,112,0,12,2,20,4,134,155,48,138,0,95,1,
	112,0,28,49,134,156,108,13,100,48,14,0,95,1,
	112,0,93,57,4,121,121,12,4,97,0,128,0,0,
	72,80,6,134,157,108,13,100,48,14,0,95,1,112,
	0,93,56,4,121,95,6,20,4,134,161,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_NOTIFY )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,158,1,108,139,100,95,1,
	12,1,80,3,134,6,95,3,93,248,253,8,28,72,
	134,8,108,140,100,95,1,12,1,80,5,134,9,108,
	128,100,48,114,0,95,2,112,0,89,18,0,1,0,
	1,0,5,0,95,1,92,2,1,95,255,8,6,12,
	2,80,6,134,10,108,141,100,95,1,48,114,0,95,
	2,112,0,95,6,1,92,8,1,20,2,26,203,0,
	134,12,95,3,93,50,253,8,28,71,134,14,108,142,
	100,95,1,12,1,80,4,134,15,108,128,100,48,114,
	0,95,2,112,0,89,18,0,1,0,1,0,4,0,
	95,1,92,2,1,95,255,8,6,12,2,80,6,134,
	16,108,143,100,95,1,48,114,0,95,2,112,0,95,
	6,1,92,8,1,20,2,25,123,134,18,95,3,93,
	58,253,8,28,113,134,19,108,144,100,95,1,12,1,
	80,4,134,20,95,4,121,15,28,72,134,22,108,128,
	100,48,114,0,95,2,112,0,89,18,0,1,0,1,
	0,4,0,95,1,92,2,1,95,255,8,6,12,2,
	80,6,134,23,108,145,100,95,1,48,114,0,95,2,
	112,0,95,6,1,92,10,1,48,14,0,48,11,0,
	95,2,112,0,112,0,20,3,25,24,134,25,108,146,
	100,95,1,122,48,14,0,48,11,0,95,2,112,0,
	112,0,20,3,134,29,121,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,196,1,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAR_ADDBUTTON )
{
   static const BYTE pcode[] =
   {
	13,3,9,102,80,10,133,199,1,100,80,11,134,2,
	95,1,100,8,28,6,126,1,255,255,134,3,95,3,
	100,8,28,6,126,3,4,0,134,4,95,4,100,8,
	28,6,126,4,0,0,134,5,95,7,100,8,28,7,
	127,7,1,0,0,134,6,95,5,100,8,28,7,127,
	5,1,0,0,134,7,95,2,100,5,21,31,10,73,
	108,96,100,95,2,12,1,28,77,134,9,108,147,100,
	108,148,100,48,12,0,95,10,112,0,92,6,12,2,
	130,1,0,12,1,92,64,65,80,2,134,10,95,2,
	48,12,0,95,10,112,0,72,128,188,2,108,113,100,
	48,149,0,95,10,112,0,12,1,72,108,113,100,48,
	150,0,95,10,112,0,12,1,72,128,1,0,80,2,
	134,13,95,4,122,69,28,80,134,14,95,9,100,8,
	28,44,106,12,111,84,111,111,108,66,117,116,116,111,
	110,0,108,151,100,108,148,100,108,113,100,48,149,0,
	95,10,112,0,12,1,128,1,0,12,1,12,1,72,
	80,9,134,15,108,129,100,48,149,0,95,10,112,0,
	108,152,100,95,9,12,1,95,2,4,2,0,20,2,
	25,121,134,17,9,48,72,0,95,10,112,0,28,17,
	73,108,113,100,48,149,0,95,10,112,0,12,1,121,
	5,31,6,95,3,25,4,92,8,80,3,134,18,95,
	1,100,8,28,6,126,1,0,0,134,19,95,9,100,
	8,28,43,106,11,111,83,101,112,97,114,97,116,111,
	114,0,108,151,100,108,148,100,108,113,100,48,150,0,
	95,10,112,0,12,1,128,1,0,12,1,12,1,72,
	80,9,134,20,108,129,100,48,150,0,95,10,112,0,
	95,9,95,2,4,2,0,20,2,134,24,48,2,0,
	108,1,100,12,0,95,10,95,9,95,1,95,2,95,
	3,95,4,95,5,95,6,95,7,95,8,112,10,80,
	12,134,25,48,108,0,95,10,112,0,31,40,134,26,
	108,129,100,48,114,0,95,10,112,0,95,1,95,2,
	95,3,95,4,121,95,5,95,6,95,7,95,8,95,
	11,95,12,4,11,0,20,2,134,28,95,12,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HTOOLBAREX )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,166,0,126,2,1,0,95,2,73,103,
	3,0,100,8,29,172,0,48,2,0,108,3,100,12,
	0,106,11,72,84,111,111,108,66,97,114,69,88,0,
	48,4,0,108,55,100,12,0,112,0,4,1,0,112,
	2,82,3,0,133,233,1,48,7,0,103,3,0,106,
	5,105,110,105,116,0,108,154,14,95,2,9,112,4,
	73,134,1,48,7,0,103,3,0,106,12,69,120,101,
	99,117,116,101,84,111,111,108,0,108,155,14,95,2,
	9,112,4,73,134,2,48,156,0,103,3,0,108,157,
	14,112,1,73,48,24,0,103,3,0,112,0,73,108,
	25,100,48,22,0,103,3,0,112,0,12,1,80,1,
	108,26,100,95,1,106,10,73,110,105,116,67,108,97,
	115,115,0,12,2,28,32,48,27,0,95,1,108,28,
	100,12,0,112,1,73,25,17,108,25,100,48,22,0,
	103,3,0,112,0,12,1,80,1,108,29,100,12,0,
	121,15,28,10,103,3,0,108,0,14,121,178,95,1,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAREX_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,240,1,48,102,0,48,55,
	0,95,1,112,0,112,0,73,134,1,108,158,100,48,
	14,0,95,1,112,0,95,1,20,2,134,2,108,159,
	100,48,14,0,95,1,112,0,20,1,134,3,108,160,
	100,20,0,134,4,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAREX_EXECUTETOOL )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,4,2,95,1,121,15,28,
	44,134,1,108,13,100,48,14,0,48,11,0,95,2,
	112,0,112,0,93,17,1,108,161,100,95,1,121,12,
	2,48,14,0,95,2,112,0,20,4,134,2,121,110,
	7,134,4,93,56,255,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ISALTSHIFT )
{
   static const BYTE pcode[] =
   {
	13,1,1,133,11,2,108,163,100,12,0,80,2,134,
	2,95,1,100,8,28,5,120,80,1,134,3,9,95,
	1,28,17,73,108,164,100,95,2,92,19,1,12,1,
	93,128,0,16,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTOOLBAREX_MYDESTRUCTOR )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,18,2,108,165,100,20,0,
	134,1,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,166,0,3,0,7
   };

   hb_vmExecute( pcode, symbols );
}
