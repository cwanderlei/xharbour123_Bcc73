

// Mouse functions


// NOTE: SetCursor() renamed to WinSetCursor()



#define HB_OS_WIN_32_USED
#define _WIN32_WINNT   0x0400

//#include <shlobj.h>
#include <windows.h>
#include "item.api"
//#include "hbapiitm.h"
#include "hbapi.h"
//#include "hbvm.h"
//#include "hbstack.h"

extern PHB_ITEM Rect2Array( RECT *rc  );
extern BOOL Array2Rect(PHB_ITEM aRect, RECT *rc );
extern PHB_ITEM Point2Array( POINT *pt  );
extern BOOL Array2Point(PHB_ITEM aPoint, POINT *pt );
extern BOOL Array2Size(PHB_ITEM aSize, SIZE *siz );
extern PHB_ITEM Size2Array( SIZE *siz  );
extern void Point2ArrayEx( POINT *pt  , PHB_ITEM aPoint);
extern void Rect2ArrayEx( RECT *pt  , PHB_ITEM aRect);
extern void Size2ArrayEx( SIZE *siz  ,  PHB_ITEM aSize);


//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI LoadCursorA( IN HINSTANCE hInstance, IN LPCSTR lpCursorName);

HB_FUNC( LOADCURSOR )
{
   hb_retnl( (LONG) LoadCursor( ISNIL(1) ? NULL : (HINSTANCE) hb_parnl(1) ,
                    hb_parinfo(2)== HB_IT_STRING ? hb_parcx(2): MAKEINTRESOURCE( hb_parnl( 2 ) ) ) );
}

//-----------------------------------------------------------------------------
// WINUSERAPI HWND WINAPI GetCapture( VOID);


HB_FUNC( GETCAPTURE )
{
   hb_retnl( (LONG) GetCapture(  ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI HWND WINAPI SetCapture( IN HWND hWnd);


HB_FUNC( SETCAPTURE )
{
   hb_retnl( (LONG) SetCapture( (HWND) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI ReleaseCapture( VOID);


HB_FUNC( RELEASECAPTURE )
{
   hb_retl( ReleaseCapture(  ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI UINT WINAPI GetDoubleClickTime( VOID);


HB_FUNC( GETDOUBLECLICKTIME )
{
   hb_retni( GetDoubleClickTime(  ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI SetDoubleClickTime( IN UINT);


HB_FUNC( SETDOUBLECLICKTIME )
{
   hb_retl( SetDoubleClickTime( (UINT) hb_parni( 1 ) ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI int WINAPI ShowCursor( IN BOOL bShow);


HB_FUNC( SHOWCURSOR )
{
   hb_retni( ShowCursor( hb_parl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI SetCursorPos( IN int X, IN int Y);


HB_FUNC( SETCURSORPOS )
{
   hb_retl( SetCursorPos( hb_parni( 1 ), hb_parni( 2 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI SetCursor( IN HCURSOR hCursor);


// P A N I C !!!

// Function renamed !!!


HB_FUNC( WINSETCURSOR )
{
   hb_retnl( (LONG) SetCursor( (HCURSOR) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------

HB_FUNC( TRACKMOUSEEVENT )
{

 TRACKMOUSEEVENT *tme =  (TRACKMOUSEEVENT * ) hb_param( 1, HB_IT_STRING )->item.asString.value;

  hb_retl( TrackMouseEvent( tme ) );

}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI GetCursorPos( OUT LPPOINT lpPoint);

HB_FUNC( GETCURSORPOS )
{
   POINT Point ;
   PHB_ITEM gcPos ;

   if ( GetCursorPos( &Point ) )
   {
      gcPos = Point2Array( &Point);
      _itemReturn( gcPos );
      _itemRelease( gcPos );
   }

}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI ClipCursor( IN CONST RECT *lpRect);

HB_FUNC( CLIPCURSOR )
{
   RECT rc ;
   BOOL bRectOk ;

   bRectOk = ( ISARRAY( 2 )  &&   Array2Rect( hb_param(1,HB_IT_ARRAY), &rc ) );

   hb_retl(  ClipCursor( bRectOk ? &rc : NULL ) );

}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI GetClipCursor( OUT LPRECT lpRect);

HB_FUNC( GETCLIPCURSOR )
{
   RECT rc ;
   PHB_ITEM aRect = NULL;

   if ( GetClipCursor( &rc ) )

     aRect = Rect2Array(&rc) ;
     _itemReturn(aRect);
     _itemRelease(aRect);

}



//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI GetCursor( VOID);


HB_FUNC( GETCURSOR )
{
   hb_retnl( (LONG) GetCursor(  ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI SwapMouseButton( IN BOOL fSwap);


HB_FUNC( SWAPMOUSEBUTTON )
{
   hb_retl( SwapMouseButton( hb_parl( 1 ) ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI LoadCursorFromFileA( IN LPCSTR lpFileName);


HB_FUNC( LOADCURSORFROMFILE )
{
   hb_retnl( (LONG) LoadCursorFromFile( (LPCSTR) hb_parcx( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI CreateCursor( IN HINSTANCE hInst, IN int xHotSpot, IN int yHotSpot, IN int nWidth, IN int nHeight, IN CONST VOID *pvANDPlane, IN CONST VOID *pvXORPlane);


HB_FUNC( CREATECURSOR )
{
   hb_retnl( (LONG) CreateCursor( (HINSTANCE) hb_parnl( 1 ),
                                  hb_parni( 2 )            ,
                                  hb_parni( 3 )            ,
                                  hb_parni( 4 )            ,
                                  hb_parni( 5 )            ,
                                  hb_parcx( 6 )             ,
                                  hb_parcx( 7 )
                                 ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI DestroyCursor( IN HCURSOR hCursor);


HB_FUNC( DESTROYCURSOR )
{
   hb_retl( DestroyCursor( (HCURSOR) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI HCURSOR WINAPI CopyCursor( IN HCURSOR hCursor);


HB_FUNC( COPYCURSOR )
{
   hb_retnl( (LONG) CopyCursor( (HCURSOR) hb_parnl( 1 ) ) ) ;
}

//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI SetSystemCursor( IN HCURSOR hcur, IN DWORD id);


HB_FUNC( SETSYSTEMCURSOR )
{
   hb_retl( SetSystemCursor( (HCURSOR) hb_parnl( 1 ), (DWORD) hb_parnl( 2 ) ) ) ;
}


//-----------------------------------------------------------------------------
// WINUSERAPI BOOL WINAPI GetCursorInfo( OUT PCURSORINFO pci );
#if (WINVER >= 0x0500)
HB_FUNC( GETCURSORINFO )
{
   CURSORINFO pci ;

   if ( GetCursorInfo( &pci ) )

      hb_retclen( (char *) &pci, sizeof( CURSORINFO ) ) ;

}


#endif
