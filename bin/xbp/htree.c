/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <\\hwgui\\source\\htree.prg>
 * Command: -oxbp\htree.c -m -n -pOxbp\ -q -gc0 -ID:\xharbour123_Bcc73\include -ID:\hwgui\include -ID:\xharbour123_Bcc73\include \hwgui\source\htree.prg 
 * Created: 2020.09.03 14:41:46 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "\\hwgui\\source\\htree.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HTREENODE );
HB_FUNC_STATIC( HTREENODE_NEW );
HB_FUNC_STATIC( HTREENODE_ADDNODE );
HB_FUNC_STATIC( HTREENODE_DELETE );
HB_FUNC_STATIC( HTREENODE_FINDCHILD );
HB_FUNC_STATIC( HTREENODE_CHECKED );
HB_FUNC( HTREE );
HB_FUNC_STATIC( HTREE_NEW );
HB_FUNC_STATIC( HTREE_INIT );
HB_FUNC_STATIC( HTREE_ACTIVATE );
HB_FUNC_STATIC( HTREE_ONEVENT );
HB_FUNC_STATIC( HTREE_ADDNODE );
HB_FUNC_STATIC( HTREE_FINDCHILD );
HB_FUNC_STATIC( HTREE_FINDCHILDPOS );
HB_FUNC_STATIC( HTREE_CLEAN );
HB_FUNC_STATIC( HTREE_ITEMHEIGHT );
HB_FUNC_STATIC( HTREE_NOTIFY );
HB_FUNC_STATIC( RELEASETREE );
HB_FUNC_STATIC( MARKCHECKTREE );
HB_FUNC_STATIC( DRAGDROPTREE );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HOBJECT );
HB_FUNC_EXTERN( TREEGETNODETEXT );
HB_FUNC_EXTERN( TREESETITEM );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LOADBITMAP );
HB_FUNC_EXTERN( OPENBITMAP );
HB_FUNC_EXTERN( IMAGELIST_ADD );
HB_FUNC_EXTERN( TREEADDNODE );
HB_FUNC_EXTERN( AINS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TREE_RELEASENODE );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( ADEL );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( TREEGETSELECTED );
HB_FUNC_EXTERN( CHECKBIT );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( GETBITMAPSIZE );
HB_FUNC_EXTERN( CREATEIMAGELIST );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITTREEVIEW );
HB_FUNC_EXTERN( CREATETREE );
HB_FUNC_EXTERN( PROCKEYLIST );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( ISCTRLSHIFT );
HB_FUNC_EXTERN( GETNOTIFYCODE );
HB_FUNC_EXTERN( TREE_HITTEST );
HB_FUNC_EXTERN( TREE_GETNOTIFY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTREE )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HTREENODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTREENODE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE_NEW )}, &ModuleFakeDyn },
{ "HTREENODE_ADDNODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE_ADDNODE )}, &ModuleFakeDyn },
{ "HTREENODE_DELETE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE_DELETE )}, &ModuleFakeDyn },
{ "HTREENODE_FINDCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE_FINDCHILD )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREEGETNODETEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREEGETNODETEXT )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OTREE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREESETITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREESETITEM )}, NULL },
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTREENODE_CHECKED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREENODE_CHECKED )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_OTREE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BACTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCHECKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "IMAGE1", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "IMAGE2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AIMAGES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOADBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOADBITMAP )}, NULL },
{ "OPENBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( OPENBITMAP )}, NULL },
{ "IMAGELIST_ADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMAGELIST_ADD )}, NULL },
{ "HIML", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AITEMS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREEADDNODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREEADDNODE )}, NULL },
{ "AINS", {HB_FS_PUBLIC}, {HB_FUNCNAME( AINS )}, NULL },
{ "_IMAGE1", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_IMAGE2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DELETE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREE_RELEASENODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREE_RELEASENODE )}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADEL )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "FINDCHILD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "LCHECKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTREE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE )}, &ModuleFakeDyn },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTREE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_NEW )}, &ModuleFakeDyn },
{ "HTREE_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_INIT )}, &ModuleFakeDyn },
{ "HTREE_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_ACTIVATE )}, &ModuleFakeDyn },
{ "HTREE_ADDNODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_ADDNODE )}, &ModuleFakeDyn },
{ "HTREE_FINDCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_FINDCHILD )}, &ModuleFakeDyn },
{ "HTREE_FINDCHILDPOS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_FINDCHILDPOS )}, &ModuleFakeDyn },
{ "TREEGETSELECTED", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREEGETSELECTED )}, NULL },
{ "HTREE_CLEAN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_CLEAN )}, &ModuleFakeDyn },
{ "HTREE_NOTIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_NOTIFY )}, &ModuleFakeDyn },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RELEASETREE", {HB_FS_STATIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( RELEASETREE )}, &ModuleFakeDyn },
{ "CHECKBIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHECKBIT )}, NULL },
{ "HTREE_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_ONEVENT )}, &ModuleFakeDyn },
{ "HTREE_ITEMHEIGHT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTREE_ITEMHEIGHT )}, &ModuleFakeDyn },
{ "HWG_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITOR )}, NULL },
{ "_STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LEDITLABELS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCHECKBOX", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LDRAGDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TYPE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BRCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BDBLCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCHECK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AIMAGES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETBITMAPSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBITMAPSIZE )}, NULL },
{ "_HIML", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEIMAGELIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEIMAGELIST )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITTREEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITTREEVIEW )}, NULL },
{ "CREATETREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATETREE )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PROCKEYLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCKEYLIST )}, NULL },
{ "LDRAGGING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HITEMDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LDRAGGING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HITEMDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "ISCTRLSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCTRLSHIFT )}, NULL },
{ "FINDCHILDPOS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDNODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BACTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DRAGDROPTREE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DRAGDROPTREE )}, &ModuleFakeDyn },
{ "TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CARGO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CARGO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LEMPTY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AITEMS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETNOTIFYCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYCODE )}, NULL },
{ "_HITEMDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREE_HITTEST", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREE_HITTEST )}, NULL },
{ "_OITEMOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TREE_GETNOTIFY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TREE_GETNOTIFY )}, NULL },
{ "_OSELECTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEMPTY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BITEMCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BEXPAND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LDRAGDROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HITEMDRAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEDITLABELS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BDBLCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCHECK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CHECKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MARKCHECKTREE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MARKCHECKTREE )}, &ModuleFakeDyn },
{ "_OITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HTREE, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HTREE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HTREE )
   #include "hbiniseg.h"
#endif

HB_FUNC( HTREENODE )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,152,0,126,2,1,0,95,2,73,103,
	1,0,100,8,29,137,2,48,2,0,108,3,100,12,
	0,106,10,72,84,114,101,101,78,111,100,101,0,48,
	4,0,108,5,100,12,0,112,0,4,1,0,112,2,
	82,1,0,133,109,0,48,6,0,103,1,0,100,100,
	95,2,106,7,104,97,110,100,108,101,0,4,1,0,
	9,9,112,6,73,134,1,48,6,0,103,1,0,100,
	100,95,2,106,6,111,84,114,101,101,0,106,8,111,
	80,97,114,101,110,116,0,4,2,0,9,9,112,6,
	73,134,2,48,6,0,103,1,0,100,4,0,0,95,
	2,106,7,97,73,116,101,109,115,0,4,1,0,9,
	9,112,6,73,134,3,48,6,0,103,1,0,100,100,
	95,2,106,8,98,65,99,116,105,111,110,0,106,7,
	98,67,108,105,99,107,0,4,2,0,9,9,112,6,
	73,134,4,48,6,0,103,1,0,100,100,95,2,106,
	6,99,97,114,103,111,0,4,1,0,9,9,112,6,
	73,134,5,48,6,0,103,1,0,100,100,95,2,106,
	6,116,105,116,108,101,0,4,1,0,9,9,112,6,
	73,134,6,48,6,0,103,1,0,100,100,95,2,106,
	7,105,109,97,103,101,49,0,106,7,105,109,97,103,
	101,50,0,4,2,0,9,9,112,6,73,134,7,48,
	6,0,103,1,0,100,9,95,2,106,9,108,99,104,
	101,99,107,101,100,0,4,1,0,9,9,112,6,73,
	134,9,48,7,0,103,1,0,106,4,78,101,119,0,
	108,8,14,95,2,9,112,4,73,134,10,48,7,0,
	103,1,0,106,8,65,100,100,78,111,100,101,0,108,
	9,14,95,2,9,112,4,73,134,11,48,7,0,103,
	1,0,106,7,68,101,108,101,116,101,0,108,10,14,
	95,2,9,112,4,73,134,12,48,7,0,103,1,0,
	106,10,70,105,110,100,67,104,105,108,100,0,108,11,
	14,95,2,9,112,4,73,134,13,48,12,0,103,1,
	0,106,8,71,101,116,84,101,120,116,0,89,35,0,
	1,0,0,0,95,1,73,108,13,100,48,14,0,48,
	15,0,95,1,112,0,112,0,48,14,0,95,1,112,
	0,12,2,6,95,2,9,112,4,73,134,14,48,12,
	0,103,1,0,106,8,83,101,116,84,101,120,116,0,
	89,47,0,2,0,0,0,95,1,73,108,16,100,48,
	14,0,48,15,0,95,1,112,0,112,0,48,14,0,
	95,1,112,0,122,95,2,20,4,48,17,0,95,1,
	95,2,112,1,6,95,2,9,112,4,73,134,15,48,
	7,0,103,1,0,106,8,67,104,101,99,107,101,100,
	0,108,18,14,92,33,9,112,4,73,48,7,0,103,
	1,0,106,9,95,67,104,101,99,107,101,100,0,108,
	18,14,112,2,73,48,22,0,103,1,0,112,0,73,
	108,23,100,48,20,0,103,1,0,112,0,12,1,80,
	1,108,24,100,95,1,106,10,73,110,105,116,67,108,
	97,115,115,0,12,2,28,32,48,25,0,95,1,108,
	26,100,12,0,112,1,73,25,17,108,23,100,48,20,
	0,103,1,0,112,0,12,1,80,1,108,27,100,12,
	0,121,15,28,10,103,1,0,108,0,14,121,178,95,
	1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREENODE_NEW )
{
   static const BYTE pcode[] =
   {
	13,9,9,102,80,10,133,131,0,48,28,0,95,10,
	95,1,112,1,73,134,1,48,29,0,95,10,95,2,
	112,1,73,134,2,48,17,0,95,10,95,5,112,1,
	73,134,3,48,30,0,95,10,95,6,112,1,73,134,
	4,48,31,0,95,10,95,9,112,1,73,134,5,48,
	32,0,95,10,95,8,100,5,28,5,9,25,4,95,
	8,112,1,73,134,7,95,7,100,8,28,54,134,8,
	48,33,0,95,1,112,0,100,69,29,220,0,134,9,
	48,33,0,95,1,112,0,80,14,134,10,48,34,0,
	95,1,112,0,100,69,28,13,134,11,48,34,0,95,
	1,112,0,80,15,26,182,0,134,15,126,12,1,0,
	95,12,108,35,100,95,7,12,1,34,29,163,0,134,
	16,108,36,100,95,7,95,12,1,12,1,80,16,134,
	17,108,37,100,48,38,0,95,1,112,0,95,16,12,
	2,21,80,13,121,8,28,92,134,18,108,39,100,48,
	38,0,95,1,112,0,95,16,20,2,134,19,48,40,
	0,95,1,112,0,28,14,108,41,100,95,7,95,12,
	1,12,1,25,12,108,42,100,95,7,95,12,1,12,
	1,96,7,0,95,12,2,134,20,108,43,100,48,44,
	0,95,1,112,0,95,7,95,12,1,20,2,134,21,
	108,35,100,48,38,0,95,1,112,0,12,1,80,13,
	134,23,174,13,134,24,95,12,122,8,28,10,134,25,
	95,13,80,14,25,8,134,27,95,13,80,15,134,29,
	173,12,26,86,255,134,31,95,15,100,8,28,8,134,
	32,95,14,80,15,134,35,95,3,100,8,28,6,92,
	2,25,3,121,80,18,134,36,9,95,3,100,8,28,
	7,73,95,4,100,69,29,131,0,134,37,48,45,0,
	95,4,112,0,100,8,28,11,48,15,0,95,4,112,
	0,25,9,48,45,0,95,4,112,0,80,17,134,38,
	126,12,1,0,95,12,108,35,100,48,46,0,95,17,
	112,0,12,1,34,28,37,134,39,48,14,0,48,46,
	0,95,17,112,0,95,12,1,112,0,48,14,0,95,
	4,112,0,8,28,4,25,8,134,42,173,12,25,206,
	134,43,95,12,122,15,28,27,134,44,48,46,0,95,
	17,112,0,95,12,128,255,255,1,80,3,134,45,126,
	18,0,0,25,8,134,47,126,18,1,0,134,52,48,
	47,0,95,10,108,48,100,95,10,48,14,0,95,1,
	112,0,95,2,100,8,28,5,100,25,9,48,14,0,
	95,2,112,0,95,3,100,8,28,5,100,25,9,48,
	14,0,95,3,112,0,95,18,95,5,95,14,95,15,
	12,8,112,1,73,134,54,95,2,100,8,28,11,48,
	46,0,95,1,112,0,25,9,48,46,0,95,2,112,
	0,80,11,134,55,95,18,92,2,8,28,16,134,56,
	108,39,100,95,11,95,10,20,2,26,138,0,134,57,
	95,18,122,8,28,33,134,58,108,39,100,95,11,100,
	20,2,134,59,108,49,100,95,11,122,20,2,134,60,
	95,10,96,11,0,122,2,25,98,134,62,108,39,100,
	95,11,100,20,2,134,63,48,14,0,95,3,112,0,
	80,13,134,64,108,37,100,95,11,89,20,0,1,0,
	1,0,13,0,48,14,0,95,1,112,0,95,255,8,
	6,12,2,21,80,12,121,8,28,14,134,65,95,10,
	96,11,0,92,255,2,25,29,134,67,108,49,100,95,
	11,95,12,128,1,0,20,2,134,68,95,10,96,11,
	0,95,12,128,1,0,2,134,71,48,50,0,95,10,
	95,14,112,1,73,134,72,48,51,0,95,10,95,15,
	112,1,73,134,74,95,10,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREENODE_ADDNODE )
{
   static const BYTE pcode[] =
   {
	13,3,5,102,80,6,133,208,0,95,6,80,7,134,
	1,48,2,0,108,1,100,12,0,48,15,0,95,6,
	112,0,95,7,95,2,95,3,95,1,95,4,95,5,
	112,7,80,8,134,3,95,8,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREENODE_DELETE )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,214,0,48,14,0,95,2,
	112,0,80,3,134,2,108,52,100,48,46,0,95,2,
	112,0,12,1,31,68,134,3,108,35,100,48,46,0,
	95,2,112,0,12,1,80,5,134,4,126,4,1,0,
	95,4,95,5,34,28,39,134,5,48,53,0,48,46,
	0,95,2,112,0,95,4,1,120,112,1,73,134,6,
	100,48,46,0,95,2,150,95,4,2,134,7,173,4,
	25,214,134,9,108,54,100,48,14,0,48,15,0,95,
	2,112,0,112,0,48,14,0,95,2,112,0,20,2,
	134,10,108,55,100,48,14,0,48,15,0,95,2,112,
	0,112,0,93,1,17,121,48,14,0,95,2,112,0,
	20,4,134,11,95,1,100,8,28,104,134,12,48,45,
	0,95,2,112,0,100,8,28,16,48,46,0,48,15,
	0,95,2,112,0,112,0,25,14,48,46,0,48,45,
	0,95,2,112,0,112,0,80,6,134,13,108,37,100,
	95,6,89,20,0,1,0,1,0,3,0,48,14,0,
	95,1,112,0,95,255,8,6,12,2,80,4,134,14,
	108,56,100,95,6,95,4,20,2,134,15,108,57,100,
	95,6,108,35,100,95,6,12,1,128,255,255,20,2,
	134,19,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREENODE_FINDCHILD )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,236,0,48,46,0,95,2,
	112,0,80,3,108,35,100,95,3,12,1,80,5,134,
	1,126,4,1,0,95,4,95,5,34,28,80,134,2,
	48,14,0,95,3,95,4,1,112,0,95,1,8,28,
	11,134,3,95,3,95,4,1,110,7,134,4,108,52,
	100,48,46,0,95,3,95,4,1,112,0,12,1,31,
	29,134,5,48,58,0,95,3,95,4,1,95,1,112,
	1,21,80,6,100,69,28,8,134,6,95,6,110,7,
	134,9,173,4,25,173,134,10,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREENODE_CHECKED )
{
   static const BYTE pcode[] =
   {
	13,2,1,102,80,2,133,251,0,95,1,100,69,28,
	53,134,1,108,16,100,48,14,0,48,15,0,95,2,
	112,0,112,0,48,14,0,95,2,112,0,92,2,95,
	1,28,6,92,2,25,3,122,20,4,134,2,48,32,
	0,95,2,95,1,112,1,73,25,66,134,4,108,55,
	100,48,14,0,48,15,0,95,2,112,0,112,0,93,
	39,17,48,14,0,95,2,112,0,100,97,0,240,0,
	0,12,5,128,255,255,80,3,134,5,48,32,0,95,
	2,108,59,100,95,3,93,252,15,18,12,1,92,2,
	5,112,1,73,134,7,48,60,0,95,2,112,0,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HTREE )
{
   static const BYTE pcode[] =
   {
	13,2,255,116,152,0,126,2,1,0,95,2,73,103,
	2,0,100,8,29,217,4,48,2,0,108,3,100,12,
	0,106,6,72,84,114,101,101,0,48,4,0,108,62,
	100,12,0,112,0,4,1,0,112,2,82,2,0,133,
	6,1,48,63,0,103,2,0,100,106,14,83,121,115,
	84,114,101,101,86,105,101,119,51,50,0,95,2,106,
	9,119,105,110,99,108,97,115,115,0,4,1,0,9,
	112,5,73,134,2,48,6,0,103,2,0,100,4,0,
	0,95,2,106,7,97,73,116,101,109,115,0,4,1,
	0,9,9,112,6,73,134,3,48,6,0,103,2,0,
	100,100,95,2,106,10,111,83,101,108,101,99,116,101,
	100,0,4,1,0,9,9,112,6,73,134,4,48,6,
	0,103,2,0,100,100,95,2,106,6,111,73,116,101,
	109,0,106,9,111,73,116,101,109,79,108,100,0,4,
	2,0,9,9,112,6,73,134,5,48,6,0,103,2,
	0,100,100,95,2,106,5,104,73,109,108,0,106,8,
	97,73,109,97,103,101,115,0,106,7,73,109,97,103,
	101,49,0,106,7,73,109,97,103,101,50,0,4,4,
	0,9,9,112,6,73,134,6,48,6,0,103,2,0,
	100,100,95,2,106,12,98,73,116,101,109,67,104,97,
	110,103,101,0,106,8,98,69,120,112,97,110,100,0,
	106,8,98,82,67,108,105,99,107,0,106,10,98,68,
	98,108,67,108,105,99,107,0,106,8,98,65,99,116,
	105,111,110,0,106,7,98,67,104,101,99,107,0,4,
	6,0,9,9,112,6,73,134,7,48,6,0,103,2,
	0,100,100,95,2,106,6,98,100,114,97,103,0,106,
	6,98,100,114,111,112,0,4,2,0,9,9,112,6,
	73,134,8,48,6,0,103,2,0,100,120,95,2,106,
	7,108,69,109,112,116,121,0,4,1,0,9,9,112,
	6,73,134,9,48,6,0,103,2,0,100,9,92,8,
	106,12,108,69,100,105,116,76,97,98,101,108,115,0,
	4,1,0,9,9,112,6,73,134,10,48,6,0,103,
	2,0,100,9,92,8,106,10,108,67,104,101,99,107,
	98,111,120,0,4,1,0,9,9,112,6,73,134,11,
	48,6,0,103,2,0,100,9,92,8,106,10,108,68,
	114,97,103,68,114,111,112,0,4,1,0,9,9,112,
	6,73,134,13,48,6,0,103,2,0,100,9,92,8,
	106,10,108,68,114,97,103,103,105,110,103,0,4,1,
	0,9,9,112,6,73,134,14,48,6,0,103,2,0,
	100,100,92,8,106,10,104,105,116,101,109,68,114,97,
	103,0,106,10,104,105,116,101,109,68,114,111,112,0,
	4,2,0,9,9,112,6,73,134,17,48,7,0,103,
	2,0,106,4,78,101,119,0,108,64,14,95,2,9,
	112,4,73,134,18,48,7,0,103,2,0,106,5,73,
	110,105,116,0,108,65,14,95,2,9,112,4,73,134,
	19,48,7,0,103,2,0,106,9,65,99,116,105,118,
	97,116,101,0,108,66,14,95,2,9,112,4,73,134,
	20,48,7,0,103,2,0,106,8,65,100,100,78,111,
	100,101,0,108,67,14,95,2,9,112,4,73,134,21,
	48,7,0,103,2,0,106,10,70,105,110,100,67,104,
	105,108,100,0,108,68,14,95,2,9,112,4,73,134,
	22,48,7,0,103,2,0,106,13,70,105,110,100,67,
	104,105,108,100,80,111,115,0,108,69,14,95,2,9,
	112,4,73,134,23,48,12,0,103,2,0,106,12,71,
	101,116,83,101,108,101,99,116,101,100,0,89,23,0,
	1,0,0,0,95,1,73,108,70,100,48,14,0,95,
	1,112,0,12,1,6,95,2,9,112,4,73,134,24,
	48,12,0,103,2,0,106,10,69,100,105,116,76,97,
	98,101,108,0,89,31,0,2,0,0,0,108,55,100,
	48,14,0,95,1,112,0,93,14,17,121,48,14,0,
	95,2,112,0,12,4,6,95,2,9,112,4,73,134,
	25,48,12,0,103,2,0,106,7,69,120,112,97,110,
	100,0,89,32,0,2,0,0,0,108,55,100,48,14,
	0,95,1,112,0,93,2,17,92,2,48,14,0,95,
	2,112,0,12,4,6,95,2,9,112,4,73,134,26,
	48,12,0,103,2,0,106,7,83,101,108,101,99,116,
	0,89,32,0,2,0,0,0,108,55,100,48,14,0,
	95,1,112,0,93,11,17,92,9,48,14,0,95,2,
	112,0,12,4,6,95,2,9,112,4,73,134,27,48,
	7,0,103,2,0,106,6,67,108,101,97,110,0,108,
	71,14,95,2,9,112,4,73,134,28,48,7,0,103,
	2,0,106,7,78,111,116,105,102,121,0,108,72,14,
	95,2,9,112,4,73,134,29,48,12,0,103,2,0,
	106,4,69,78,68,0,89,36,0,1,0,0,0,95,
	1,73,48,73,0,48,74,0,95,1,112,0,112,0,
	73,108,75,100,48,46,0,95,1,112,0,12,1,6,
	95,2,9,112,4,73,134,30,48,12,0,103,2,0,
	106,9,105,115,69,120,112,97,110,100,0,89,21,0,
	2,0,0,0,95,1,73,108,76,100,95,2,92,2,
	12,2,68,6,95,2,9,112,4,73,134,31,48,7,
	0,103,2,0,106,8,111,110,69,118,101,110,116,0,
	108,77,14,95,2,9,112,4,73,134,32,48,7,0,
	103,2,0,106,11,73,116,101,109,72,101,105,103,104,
	116,0,108,78,14,92,33,9,112,4,73,48,7,0,
	103,2,0,106,12,95,73,116,101,109,72,101,105,103,
	104,116,0,108,78,14,112,2,73,48,22,0,103,2,
	0,112,0,73,108,23,100,48,20,0,103,2,0,112,
	0,12,1,80,1,108,24,100,95,1,106,10,73,110,
	105,116,67,108,97,115,115,0,12,2,28,32,48,25,
	0,95,1,108,26,100,12,0,112,1,73,25,17,108,
	23,100,48,20,0,103,2,0,112,0,12,1,80,1,
	108,27,100,12,0,121,15,28,10,103,2,0,108,0,
	14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_NEW )
{
   static const BYTE pcode[] =
   {
	13,3,25,102,80,26,133,47,1,95,15,100,8,28,
	5,9,25,4,95,15,80,15,134,1,95,20,100,8,
	28,5,9,25,4,95,20,80,20,134,2,95,22,100,
	8,28,5,9,25,4,95,22,80,22,134,8,108,79,
	100,95,3,100,8,28,5,121,25,4,95,3,97,7,
	0,129,0,95,15,100,8,21,31,6,73,95,15,68,
	28,5,121,25,4,92,8,72,95,20,100,8,21,31,
	6,73,95,20,68,28,5,121,25,5,93,0,1,72,
	95,22,31,6,92,16,25,3,121,72,12,2,80,3,
	134,10,48,80,0,95,26,95,3,112,1,73,134,12,
	48,2,0,48,74,0,95,26,112,0,95,1,95,2,
	95,3,95,4,95,5,95,6,95,7,95,8,95,9,
	95,10,100,100,95,11,95,12,112,14,73,134,14,48,
	81,0,95,26,95,15,112,1,73,134,15,48,82,0,
	95,26,95,20,112,1,73,134,16,48,83,0,95,26,
	95,22,112,1,73,134,18,48,17,0,95,26,106,1,
	0,112,1,73,134,19,48,84,0,95,26,95,14,100,
	8,28,5,9,25,4,95,14,112,1,73,134,20,48,
	30,0,95,26,95,16,112,1,73,134,21,48,85,0,
	95,26,95,18,112,1,73,134,22,48,86,0,95,26,
	95,19,112,1,73,134,23,48,87,0,95,26,95,21,
	112,1,73,134,24,48,88,0,95,26,95,23,112,1,
	73,134,25,48,89,0,95,26,95,24,112,1,73,134,
	26,48,90,0,95,26,95,25,112,1,73,134,28,9,
	95,13,100,69,28,11,73,108,52,100,95,13,12,1,
	68,29,184,0,134,29,48,91,0,95,26,4,0,0,
	112,1,73,134,30,126,27,1,0,95,27,108,35,100,
	95,13,12,1,34,28,74,134,31,108,39,100,48,38,
	0,95,26,112,0,108,36,100,95,13,95,27,1,12,
	1,20,2,134,32,9,95,14,100,69,28,5,73,95,
	14,28,14,108,41,100,95,13,95,27,1,12,1,25,
	12,108,42,100,95,13,95,27,1,12,1,96,13,0,
	95,27,2,134,33,173,27,25,174,134,34,108,92,100,
	95,13,122,1,12,1,80,28,134,35,48,93,0,95,
	26,108,94,100,95,13,95,28,122,1,95,28,92,2,
	1,92,12,95,17,12,5,112,1,73,134,36,48,50,
	0,95,26,121,112,1,73,134,37,108,35,100,95,13,
	12,1,122,15,28,13,134,38,48,51,0,95,26,122,
	112,1,73,134,42,48,95,0,95,26,112,0,73,134,
	44,95,26,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,95,1,48,96,0,95,1,
	112,0,31,96,134,1,48,97,0,48,74,0,95,1,
	112,0,112,0,73,134,2,48,98,0,95,1,122,112,
	1,73,134,3,108,99,100,48,14,0,95,1,112,0,
	95,1,20,2,134,4,108,100,100,48,14,0,95,1,
	112,0,20,1,134,5,48,44,0,95,1,112,0,100,
	69,28,27,134,6,108,55,100,48,14,0,95,1,112,
	0,93,9,17,121,48,44,0,95,1,112,0,20,4,
	134,11,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,110,1,108,52,100,48,14,
	0,48,45,0,95,1,112,0,112,0,12,1,31,95,
	134,2,48,47,0,95,1,108,101,100,48,14,0,48,
	45,0,95,1,112,0,112,0,48,102,0,95,1,112,
	0,48,103,0,95,1,112,0,48,104,0,95,1,112,
	0,48,105,0,95,1,112,0,48,106,0,95,1,112,
	0,48,107,0,95,1,112,0,48,108,0,95,1,112,
	0,48,109,0,95,1,112,0,12,9,112,1,73,134,
	3,48,97,0,95,1,112,0,73,134,6,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,6,3,102,80,4,133,122,1,48,110,0,95,4,
	112,0,100,69,28,45,134,1,9,48,111,0,48,110,
	0,95,4,112,0,95,4,95,1,95,2,95,3,112,
	4,21,80,5,100,69,28,8,73,95,5,92,255,69,
	28,7,134,2,121,110,7,134,6,95,1,92,20,5,
	28,7,134,7,121,110,7,134,8,95,1,93,0,1,
	5,28,21,134,9,108,112,100,95,4,95,2,12,2,
	29,129,3,134,10,121,110,7,134,13,95,1,93,1,
	2,8,28,5,26,111,3,134,15,9,95,1,93,2,
	2,8,28,23,73,9,48,113,0,95,4,112,0,28,
	12,73,48,114,0,95,4,112,0,100,69,29,67,3,
	134,16,48,115,0,95,4,9,112,1,73,134,17,108,
	55,100,48,14,0,95,4,112,0,93,11,17,92,8,
	100,20,4,134,19,48,116,0,95,4,112,0,100,69,
	28,68,134,20,48,111,0,48,116,0,95,4,112,0,
	95,4,48,117,0,95,4,112,0,48,114,0,95,4,
	112,0,112,3,80,5,134,21,108,118,100,95,5,12,
	1,106,2,76,0,5,28,6,95,5,25,3,120,80,
	5,134,22,95,5,31,7,134,23,121,110,7,134,26,
	48,114,0,95,4,112,0,100,69,29,22,1,134,27,
	48,14,0,48,117,0,95,4,112,0,112,0,48,14,
	0,48,114,0,95,4,112,0,112,0,8,28,7,134,
	28,121,110,7,134,30,48,114,0,95,4,112,0,80,
	7,134,31,48,45,0,95,7,112,0,100,69,28,42,
	134,32,48,45,0,95,7,112,0,80,7,134,33,48,
	14,0,95,7,112,0,48,14,0,48,117,0,95,4,
	112,0,112,0,5,28,210,134,34,121,110,7,134,37,
	108,119,100,120,12,1,32,169,0,134,39,48,45,0,
	48,117,0,95,4,112,0,112,0,100,5,21,31,17,
	73,48,45,0,48,114,0,95,4,112,0,112,0,100,
	5,21,31,38,73,48,14,0,48,45,0,48,117,0,
	95,4,112,0,112,0,112,0,48,14,0,48,45,0,
	48,114,0,95,4,112,0,112,0,112,0,8,28,93,
	134,40,48,120,0,95,4,48,45,0,48,114,0,95,
	4,112,0,112,0,48,14,0,48,117,0,95,4,112,
	0,112,0,112,2,48,120,0,95,4,48,45,0,48,
	114,0,95,4,112,0,112,0,48,14,0,48,114,0,
	95,4,112,0,112,0,112,2,15,28,15,134,41,48,
	114,0,95,4,112,0,80,9,25,13,134,43,48,114,
	0,95,4,112,0,80,8,134,50,108,119,100,120,12,
	1,32,186,0,134,51,48,45,0,48,114,0,95,4,
	112,0,112,0,100,69,28,78,134,52,48,121,0,48,
	45,0,48,114,0,95,4,112,0,112,0,48,122,0,
	48,117,0,95,4,112,0,112,0,95,8,95,9,48,
	123,0,48,117,0,95,4,112,0,112,0,100,48,60,
	0,48,117,0,95,4,112,0,112,0,48,124,0,48,
	117,0,95,4,112,0,112,0,112,7,80,6,25,66,
	134,54,48,121,0,95,4,48,122,0,48,117,0,95,
	4,112,0,112,0,95,8,95,9,48,123,0,48,117,
	0,95,4,112,0,112,0,100,48,60,0,48,117,0,
	95,4,112,0,112,0,48,124,0,48,117,0,95,4,
	112,0,112,0,112,7,80,6,134,56,108,125,100,48,
	117,0,95,4,112,0,95,6,48,114,0,95,4,112,
	0,20,3,25,107,134,57,48,114,0,95,4,112,0,
	100,69,28,94,134,58,48,121,0,48,114,0,95,4,
	112,0,48,126,0,48,117,0,95,4,112,0,112,0,
	95,8,95,9,48,123,0,48,117,0,95,4,112,0,
	112,0,100,48,60,0,48,117,0,95,4,112,0,112,
	0,48,124,0,48,117,0,95,4,112,0,112,0,112,
	7,80,6,134,59,108,125,100,48,117,0,95,4,112,
	0,95,6,48,114,0,95,4,112,0,20,3,134,61,
	48,127,0,95,6,48,128,0,48,117,0,95,4,112,
	0,112,0,112,1,73,134,62,48,50,0,95,6,48,
	33,0,48,117,0,95,4,112,0,112,0,112,1,73,
	134,63,48,51,0,95,6,48,34,0,48,117,0,95,
	4,112,0,112,0,112,1,73,134,64,48,53,0,48,
	117,0,95,4,112,0,112,0,73,134,65,48,129,0,
	95,4,95,6,112,1,73,134,67,48,130,0,95,4,
	112,0,100,69,28,39,134,68,48,111,0,48,130,0,
	95,4,112,0,95,4,95,6,48,114,0,95,4,112,
	0,112,3,73,25,11,134,71,95,1,93,3,2,5,
	73,134,74,92,255,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_ADDNODE )
{
   static const BYTE pcode[] =
   {
	13,2,5,102,80,6,133,200,1,48,2,0,108,1,
	100,12,0,95,6,100,95,2,95,3,95,1,95,4,
	95,5,112,7,80,7,134,1,48,131,0,95,6,9,
	112,1,73,134,2,95,7,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_FINDCHILD )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,205,1,48,46,0,95,2,
	112,0,80,3,108,35,100,95,3,12,1,80,5,134,
	1,126,4,1,0,95,4,95,5,34,28,80,134,2,
	48,14,0,95,3,95,4,1,112,0,95,1,8,28,
	11,134,3,95,3,95,4,1,110,7,134,4,108,52,
	100,48,46,0,95,3,95,4,1,112,0,12,1,31,
	29,134,5,48,58,0,95,3,95,4,1,95,1,112,
	1,21,80,6,100,69,28,8,134,6,95,6,110,7,
	134,9,173,4,25,173,134,10,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_FINDCHILDPOS )
{
   static const BYTE pcode[] =
   {
	13,4,2,102,80,3,133,218,1,95,1,100,5,28,
	11,48,46,0,95,3,112,0,25,9,48,46,0,95,
	1,112,0,80,4,134,1,108,35,100,95,4,12,1,
	80,6,134,3,126,5,1,0,95,5,95,6,34,28,
	31,134,4,48,14,0,95,4,95,5,1,112,0,95,
	2,8,28,8,134,5,95,5,110,7,134,9,173,5,
	25,222,134,10,121,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_CLEAN )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,232,1,48,131,0,95,1,
	120,112,1,73,134,1,108,75,100,48,46,0,95,1,
	112,0,20,1,134,2,108,55,100,48,14,0,95,1,
	112,0,93,1,17,121,97,0,0,255,255,20,4,134,
	3,48,132,0,95,1,4,0,0,112,1,73,134,5,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_ITEMHEIGHT )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,241,1,95,1,100,69,28,
	24,134,1,108,55,100,48,14,0,95,2,112,0,93,
	27,17,95,1,121,20,4,25,23,134,3,108,55,100,
	48,14,0,95,2,112,0,93,28,17,121,121,12,4,
	80,1,134,5,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTREE_NOTIFY )
{
   static const BYTE pcode[] =
   {
	13,7,1,102,80,2,133,249,1,108,133,100,95,1,
	12,1,80,3,134,2,9,95,3,92,239,5,28,10,
	73,48,113,0,95,2,112,0,28,73,134,3,48,134,
	0,95,2,108,135,100,48,14,0,95,2,112,0,100,
	100,96,6,0,12,4,112,1,73,134,4,48,114,0,
	95,2,112,0,100,69,28,33,134,5,108,55,100,48,
	14,0,95,2,112,0,93,11,17,92,8,48,14,0,
	48,114,0,95,2,112,0,112,0,20,4,134,9,95,
	3,93,111,254,8,28,5,26,20,4,134,11,95,3,
	93,110,254,8,29,189,0,134,12,48,136,0,95,2,
	108,137,100,95,1,92,6,12,2,112,1,73,134,13,
	108,137,100,95,1,92,2,12,2,80,4,134,14,108,
	118,100,95,4,12,1,106,2,79,0,8,29,216,3,
	134,15,48,138,0,48,15,0,95,4,112,0,95,4,
	112,1,73,134,16,48,139,0,48,15,0,95,4,112,
	0,112,0,31,103,134,17,48,123,0,95,4,112,0,
	100,69,28,23,134,18,48,111,0,48,123,0,95,4,
	112,0,95,4,95,2,112,2,73,25,44,134,19,48,
	123,0,48,15,0,95,4,112,0,112,0,100,69,28,
	26,134,20,48,111,0,48,123,0,48,15,0,95,4,
	112,0,112,0,95,4,95,2,112,2,73,134,22,108,
	55,100,48,14,0,95,2,112,0,93,74,17,100,48,
	14,0,95,4,112,0,20,4,26,79,3,134,26,95,
	3,93,102,254,8,21,31,9,73,95,3,93,53,254,
	8,28,5,26,56,3,134,29,95,3,93,101,254,8,
	21,31,9,73,95,3,93,52,254,8,29,146,0,134,
	30,108,52,100,108,137,100,95,1,92,3,12,2,21,
	80,5,12,1,32,13,3,134,31,108,137,100,95,1,
	92,4,12,2,80,4,134,32,108,118,100,95,4,12,
	1,106,2,79,0,8,28,91,134,34,9,95,5,48,
	122,0,95,4,112,0,8,31,42,73,48,140,0,48,
	15,0,95,4,112,0,112,0,100,8,21,31,24,73,
	48,111,0,48,140,0,48,15,0,95,4,112,0,112,
	0,95,4,95,5,112,2,28,31,134,35,108,16,100,
	48,14,0,48,15,0,95,4,112,0,112,0,48,14,
	0,95,4,112,0,122,95,5,20,4,26,151,2,26,
	148,2,134,39,95,3,93,107,254,8,21,31,9,73,
	95,3,93,58,254,8,28,93,134,40,108,137,100,95,
	1,92,2,12,2,80,4,134,41,108,118,100,95,4,
	12,1,106,2,79,0,8,29,98,2,134,42,48,141,
	0,95,2,112,0,100,69,28,47,134,45,48,111,0,
	48,141,0,48,15,0,95,4,112,0,112,0,95,4,
	108,76,100,108,137,100,95,1,92,5,12,2,92,2,
	12,2,112,2,28,5,121,25,3,122,110,7,26,37,
	2,134,49,9,95,3,93,105,254,5,28,10,73,48,
	142,0,95,2,112,0,28,35,134,50,48,143,0,95,
	2,108,137,100,95,1,92,2,12,2,112,1,73,134,
	51,48,115,0,95,2,120,112,1,73,26,239,1,134,
	53,95,3,93,100,254,5,28,5,26,226,1,134,55,
	9,95,3,92,254,5,28,24,73,9,48,144,0,95,
	2,112,0,100,69,28,11,73,48,145,0,95,2,112,
	0,68,29,178,0,134,56,108,137,100,95,1,122,12,
	2,80,7,134,57,9,108,52,100,95,7,12,1,31,
	18,73,95,7,48,14,0,48,144,0,95,2,112,0,
	112,0,69,28,38,134,58,108,135,100,48,14,0,95,
	2,112,0,100,100,96,6,0,12,4,80,4,134,60,
	48,129,0,95,2,95,4,112,1,73,26,113,1,134,
	61,9,48,145,0,95,2,112,0,31,10,73,108,52,
	100,95,7,12,1,29,90,1,134,62,48,139,0,48,
	15,0,48,144,0,95,2,112,0,112,0,112,0,31,
	52,134,63,48,124,0,48,144,0,95,2,112,0,112,
	0,100,69,28,31,134,64,48,111,0,48,124,0,48,
	144,0,95,2,112,0,112,0,48,144,0,95,2,112,
	0,95,2,112,2,73,26,19,1,26,16,1,134,69,
	95,3,92,253,8,28,61,134,70,48,146,0,95,2,
	112,0,100,69,29,249,0,134,71,108,135,100,48,14,
	0,95,2,112,0,100,100,96,6,0,12,4,80,4,
	134,72,48,111,0,48,146,0,95,2,112,0,95,4,
	95,2,95,6,112,3,73,26,204,0,134,74,95,3,
	92,251,8,28,61,134,75,48,147,0,95,2,112,0,
	100,69,29,181,0,134,76,108,135,100,48,14,0,95,
	2,112,0,100,100,96,6,0,12,4,80,4,134,77,
	48,111,0,48,147,0,95,2,112,0,95,4,95,2,
	95,6,112,3,73,26,136,0,134,79,9,95,3,92,
	232,8,28,12,73,48,144,0,95,2,112,0,100,69,
	28,113,134,80,48,148,0,95,2,112,0,100,69,28,
	40,134,81,48,111,0,48,148,0,95,2,112,0,48,
	149,0,48,144,0,95,2,112,0,112,0,68,48,144,
	0,95,2,112,0,95,2,112,3,80,8,134,83,95,
	8,100,8,21,31,11,73,108,52,100,95,8,12,1,
	68,28,37,134,84,108,150,100,48,144,0,95,2,112,
	0,48,149,0,48,144,0,95,2,112,0,112,0,28,
	5,122,25,4,92,2,20,2,25,7,134,86,122,110,
	7,134,90,95,4,100,69,28,14,134,91,48,151,0,
	95,2,95,4,112,1,73,134,93,121,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELEASETREE )
{
   static const BYTE pcode[] =
   {
	13,2,1,133,89,2,108,35,100,95,1,12,1,80,
	3,134,2,126,2,1,0,95,2,95,3,34,28,57,
	134,3,108,54,100,48,14,0,48,15,0,95,1,95,
	2,1,112,0,112,0,48,14,0,95,1,95,2,1,
	112,0,20,2,134,4,108,75,100,48,46,0,95,1,
	95,2,1,112,0,20,1,134,6,173,2,25,196,134,
	8,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MARKCHECKTREE )
{
   static const BYTE pcode[] =
   {
	13,2,2,133,100,2,108,35,100,48,46,0,95,1,
	112,0,12,1,80,4,134,2,126,3,1,0,95,3,
	95,4,34,28,65,134,3,108,16,100,48,14,0,48,
	15,0,95,1,112,0,112,0,48,14,0,48,46,0,
	95,1,112,0,95,3,1,112,0,92,2,95,2,20,
	4,134,4,108,150,100,48,46,0,95,1,112,0,95,
	3,1,95,2,20,2,134,5,173,3,25,188,134,6,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DRAGDROPTREE )
{
   static const BYTE pcode[] =
   {
	13,3,3,133,109,2,108,35,100,48,46,0,95,1,
	112,0,12,1,80,5,134,2,126,4,1,0,95,4,
	95,5,34,29,231,0,134,3,48,121,0,95,2,48,
	122,0,48,46,0,95,1,112,0,95,4,1,112,0,
	100,100,48,123,0,48,46,0,95,1,112,0,95,4,
	1,112,0,100,48,60,0,48,46,0,95,1,112,0,
	95,4,1,112,0,48,124,0,48,46,0,95,1,112,
	0,95,4,1,112,0,112,7,80,6,134,4,48,28,
	0,95,6,48,15,0,48,46,0,95,1,112,0,95,
	4,1,112,0,112,1,73,134,5,48,127,0,95,6,
	48,128,0,48,46,0,95,1,112,0,95,4,1,112,
	0,112,1,73,134,6,48,50,0,95,6,48,33,0,
	48,46,0,95,1,112,0,95,4,1,112,0,112,1,
	73,134,7,48,51,0,95,6,48,34,0,48,46,0,
	95,1,112,0,95,4,1,112,0,112,1,73,134,8,
	108,35,100,48,46,0,48,46,0,95,1,112,0,95,
	4,1,112,0,12,1,121,15,28,23,134,9,108,125,
	100,48,46,0,95,1,112,0,95,4,1,95,6,95,
	3,20,3,134,12,173,4,26,23,255,134,13,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,152,0,2,0,7
   };

   hb_vmExecute( pcode, symbols );
}

