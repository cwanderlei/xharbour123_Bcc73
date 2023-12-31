
// Icon functions



#define _WIN32_WINNT   0x0400

//#include <shlobj.h>
#include <windows.h>
//#include <commctrl.h>
#include "item.api"
//#include "hbapiitm.h"
#include "hbapi.h"
//#include "hbvm.h"
//#include "hbstack.h"

#if defined(__DMC__)
// SHSTDAPI_(HICON) DuplicateIcon(HINSTANCE hInst, HICON hIcon);
WINSHELLAPI HICON DuplicateIcon(HINSTANCE hInst, HICON hIcon);
#endif

//-----------------------------------------------------------------------------

// WINUSERAPI HICON WINAPI LoadIconA( IN HINSTANCE hInstance, IN LPCSTR lpIconName);

HB_FUNC( LOADICON )
{
   hb_retnl( (LONG) LoadIcon(  ( ISNIL(1) ? NULL : (HINSTANCE) hb_parnl( 1 ) ) ,
             (hb_parinfo(2)==HB_IT_STRING ? hb_parcx(2) : MAKEINTRESOURCE( (WORD) hb_parni(2))) ) ) ;
}


//-----------------------------------------------------------------------------

// WINUSERAPI HICON WINAPI CreateIcon( IN HINSTANCE hInstance, IN int nWidth, IN int nHeight, IN BYTE cPlanes, IN BYTE cBitsPixel, IN CONST BYTE *lpbANDbits, IN CONST BYTE *lpbXORbits);


HB_FUNC( CREATEICON )
{

   hb_retnl( (LONG) CreateIcon(  ISNIL( 1 ) ? GetModuleHandle(NULL) : (HINSTANCE) hb_parnl( 1 ),
                                hb_parni( 2 )            ,
                                hb_parni( 3 )            ,
                                (BYTE) hb_parni( 4 )     ,
                                (BYTE) hb_parni( 5 )     ,
                                (BYTE *) hb_parcx( 5 )    ,
                                (BYTE *) hb_parcx( 6 )
                              ) ) ;
}


//-----------------------------------------------------------------------------

// WINUSERAPI BOOL WINAPI DestroyIcon( IN HICON hIcon);

HB_FUNC( DESTROYICON )
{
   hb_retl( DestroyIcon( (HICON) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------

// WINUSERAPI int WINAPI LookupIconIdFromDirectory( IN PBYTE presbits, IN BOOL fIcon);

HB_FUNC( LOOKUPICONIDFROMDIRECTORY )
{

   hb_retni( LookupIconIdFromDirectory( (PBYTE) hb_parcx( 1 ), hb_parl( 2 ) ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI int WINAPI LookupIconIdFromDirectoryEx( IN PBYTE presbits, IN BOOL fIcon, IN int cxDesired, IN int cyDesired, IN UINT Flags);


HB_FUNC( LOOKUPICONIDFROMDIRECTORYEX )
{

   hb_retni( LookupIconIdFromDirectoryEx( (PBYTE) hb_parcx( 1 ) ,
                                          hb_parl( 2 )         ,
                                          hb_parni( 3 )        ,
                                          hb_parni( 4 )        ,
                                          (UINT) hb_parni( 5 )
                                        ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI HICON WINAPI CreateIconFromResource( IN PBYTE presbits, IN DWORD dwResSize, IN BOOL fIcon, IN DWORD dwVer);

HB_FUNC( CREATEICONFROMRESOURCE )
{

   hb_retnl( (LONG) CreateIconFromResource( (PBYTE) hb_parcx( 1 ) ,
                                            (DWORD) hb_parnl( 2 ),
                                            hb_parl( 3 )         ,
                                            (DWORD) hb_parnl( 4 )
                                          ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI HICON WINAPI CreateIconFromResourceEx( IN PBYTE presbits, IN DWORD dwResSize, IN BOOL fIcon, IN DWORD dwVer, IN int cxDesired, IN int cyDesired, IN UINT Flags);

HB_FUNC( CREATEICONFROMRESOURCEEX )
{

   hb_retnl( (LONG) CreateIconFromResourceEx( (PBYTE) hb_parcx( 1 )  ,
                                              (DWORD) hb_parnl( 2 ) ,
                                              hb_parl( 3 )          ,
                                              (DWORD) hb_parnl( 4 ) ,
                                              hb_parni( 5 )         ,
                                              hb_parni( 6 )         ,
                                              (UINT) hb_parni( 7 )
                                            ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI HANDLE WINAPI LoadImageA( IN HINSTANCE, IN LPCSTR, IN UINT, IN int, IN int, IN UINT);


HB_FUNC( LOADIMAGE )
{
   hb_retnl( (LONG) LoadImage( ISNIL( 1 ) ? GetModuleHandle(NULL) : (HINSTANCE) hb_parnl( 1 ),
                               (LPCSTR) hb_parcx( 2 )    ,
                               (UINT) hb_parni( 3 )     ,
                               hb_parni( 4 )            ,
                               hb_parni( 5 )            ,
                               (UINT) hb_parni( 6 )
                             ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI HANDLE WINAPI CopyImage( IN HANDLE, IN UINT, IN int, IN int, IN UINT);


HB_FUNC( COPYIMAGE )
{
   hb_retnl( (LONG) CopyImage( (HANDLE) hb_parnl( 1 ),
                               (UINT) hb_parni( 2 )  ,
                               hb_parni( 3 )         ,
                               hb_parni( 4 )         ,
                               (UINT) hb_parni( 5 )
                             ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI DrawIcon( IN HDC hDC, IN int X, IN int Y, IN HICON hIcon);

HB_FUNC( DRAWICON )
{
   hb_retl( DrawIcon( (HDC) hb_parnl( 1 )  ,
                      hb_parni( 2 )        ,
                      hb_parni( 3 )        ,
                      (HICON) hb_parnl( 4 )
                    ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI DrawIconEx( IN HDC hdc, IN int xLeft, IN int yTop, IN HICON hIcon, IN int cxWidth, IN int cyWidth, IN UINT istepIfAniCur, IN HBRUSH hbrFlickerFreeDraw, IN UINT diFlags);


HB_FUNC( DRAWICONEX )
{
   hb_retl( DrawIconEx( (HDC) hb_parnl( 1 )   ,
                        hb_parni( 2 )         ,
                        hb_parni( 3 )         ,
                        (HICON) hb_parnl( 4 ) ,
                        hb_parni( 5 )         ,
                        hb_parni( 6 )         ,
                        (UINT) hb_parni( 7 )  ,
                        (HBRUSH) hb_parnl( 8 ),
                        (UINT) hb_parni( 9 )
                      ) ) ;
}

//-----------------------------------------------------------------------------

// WINUSERAPI HICON WINAPI CreateIconIndirect( IN PICONINFO piconinfo);

HB_FUNC( CREATEICONINDIRECT )
{
   ICONINFO *ii =  (ICONINFO * ) hb_param( 1, HB_IT_STRING )->item.asString.value;

   hb_retnl( (LONG) CreateIconIndirect( ii ) ) ;
}


//-----------------------------------------------------------------------------

// WINUSERAPI HICON WINAPI CopyIcon( IN HICON hIcon);


HB_FUNC( COPYICON )
{
   hb_retnl( (LONG) CopyIcon( (HICON) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI GetIconInfo( IN HICON hIcon, OUT PICONINFO piconinfo);

HB_FUNC( GETICONINFO )
{
   ICONINFO ii;

   hb_retl( GetIconInfo( (HICON) hb_parnl( 1 ), &ii ) ) ;

   // verify !!
   // assign into structure

   hb_storclen( (char *) &ii, sizeof( ICONINFO ), 2 );

}


//-----------------------------------------------------------------------------
// SHSTDAPI_(HICON) DuplicateIcon(HINSTANCE hInst, HICON hIcon);

#ifndef __WATCOMC__
HB_FUNC( DUPLICATEICON )
{
   hb_retnl( (LONG) DuplicateIcon(  ISNIL( 1 ) ? GetModuleHandle(NULL) : (HINSTANCE) hb_parnl( 1 ),
                                   (HICON) hb_parnl( 2 )
                                 ) ) ;
}
#endif
//-----------------------------------------------------------------------------
// SHSTDAPI_(HICON) ExtractAssociatedIconA(HINSTANCE hInst, LPSTR lpIconPath, LPWORD lpiIcon);

HB_FUNC( EXTRACTASSOCIATEDICON )
{
   WORD lpiIcon  ;
   HICON  hiRet ;

   lpiIcon = (WORD) hb_parni( 2 );

   hiRet = ExtractAssociatedIcon( ( ISNIL( 1 ) ? GetModuleHandle(NULL) : (HINSTANCE) hb_parnl( 1 ) ) ,
                                             (LPSTR) hb_parcx( 2 )     ,
                                             &lpiIcon
                                ) ;

   if ( hiRet )
      hb_storni( lpiIcon, 2 );

   hb_retnl( (LONG) hiRet );

}


//-----------------------------------------------------------------------------
// SHSTDAPI_(HICON) ExtractIconA(HINSTANCE hInst, LPCSTR lpszExeFileName, UINT nIconIndex);


HB_FUNC( EXTRACTICON )
{
   hb_retnl( (LONG) ExtractIcon( ISNIL( 1 ) ? GetModuleHandle(NULL) : (HINSTANCE) hb_parnl( 1 ),
                                 (LPCSTR) hb_parcx( 2 )    ,
                                 (UINT) hb_parni( 3 )
                               ) ) ;
}



