/*
 * $Id: _winmmcap.c,v 1.3 2008/05/01 22:28:51 andijahja Exp $
 */

/*
 * WHAT32 source code:
 * Functions for video capture
 *
 * Copyright 2004 Marcos Antonio Gambeta <marcosgambeta@uol.com.br>
 */

#define HB_OS_WIN_32_USED
#define _WIN32_WINNT   0x0400

#include <hbapi.h>
#include <windows.h>
#include <vfw.h>

#if (defined( __GNUC__ ) || defined( __WATCOMC__ ))
#define WM_CAP_START                    WM_USER
#define WM_CAP_ABORT                    (WM_CAP_START+  69)
#define WM_CAP_SEQUENCE                 (WM_CAP_START+  62)
#define WM_CAP_SEQUENCE_NOFILE          (WM_CAP_START+  63)
#define WM_CAP_STOP                     (WM_CAP_START+  68)
#define WM_CAP_SINGLE_FRAME_OPEN        (WM_CAP_START+  70)
#define WM_CAP_SINGLE_FRAME_CLOSE       (WM_CAP_START+  71)
#define WM_CAP_SINGLE_FRAME             (WM_CAP_START+  72)
#define WM_CAP_DLG_VIDEOFORMAT          (WM_CAP_START+  41)
#define WM_CAP_DLG_VIDEOSOURCE          (WM_CAP_START+  42)
#define WM_CAP_DLG_VIDEODISPLAY         (WM_CAP_START+  43)
#define WM_CAP_GET_VIDEOFORMAT          (WM_CAP_START+  44)
#define WM_CAP_SET_VIDEOFORMAT          (WM_CAP_START+  45)
#define WM_CAP_DLG_VIDEOCOMPRESSION     (WM_CAP_START+  46)
#define WM_CAP_DRIVER_CONNECT           (WM_CAP_START+  10)
#define WM_CAP_DRIVER_DISCONNECT        (WM_CAP_START+  11)
#define WM_CAP_FILE_SET_CAPTURE_FILEA  (WM_CAP_START+  20)
#define WM_CAP_FILE_GET_CAPTURE_FILEA  (WM_CAP_START+  21)
#define WM_CAP_FILE_SAVEASA            (WM_CAP_START+  23)
#define WM_CAP_FILE_SAVEDIBA           (WM_CAP_START+  25)
#define WM_CAP_FILE_SET_CAPTURE_FILE    WM_CAP_FILE_SET_CAPTURE_FILEA
#define WM_CAP_FILE_GET_CAPTURE_FILE    WM_CAP_FILE_GET_CAPTURE_FILEA
#define WM_CAP_FILE_SAVEAS              WM_CAP_FILE_SAVEASA
#define WM_CAP_FILE_SAVEDIB             WM_CAP_FILE_SAVEDIBA
#define WM_CAP_FILE_ALLOCATE            (WM_CAP_START+  22)
#define WM_CAP_PAL_OPENA               (WM_CAP_START+  80)
#define WM_CAP_PAL_SAVEA               (WM_CAP_START+  81)
#define WM_CAP_PAL_OPENW               (WM_CAP_UNICODE_START+  80)
#define WM_CAP_PAL_SAVEW               (WM_CAP_UNICODE_START+  81)
#define WM_CAP_PAL_OPEN                 WM_CAP_PAL_OPENA
#define WM_CAP_PAL_SAVE                 WM_CAP_PAL_SAVEA
#define WM_CAP_PAL_PASTE                (WM_CAP_START+  82)
#define WM_CAP_PAL_AUTOCREATE           (WM_CAP_START+  83)
#define WM_CAP_PAL_MANUALCREATE         (WM_CAP_START+  84)
#define WM_CAP_GET_USER_DATA		(WM_CAP_START+  8)
#define WM_CAP_SET_USER_DATA		(WM_CAP_START+  9)
#define WM_CAP_EDIT_COPY                (WM_CAP_START+  30)
#define WM_CAP_SET_AUDIOFORMAT          (WM_CAP_START+  35)
#define WM_CAP_GET_AUDIOFORMAT          (WM_CAP_START+  36)
#define WM_CAP_GET_VIDEOFORMAT          (WM_CAP_START+  44)
#define WM_CAP_SET_VIDEOFORMAT          (WM_CAP_START+  45)
#define WM_CAP_SET_PREVIEW              (WM_CAP_START+  50)
#define WM_CAP_SET_OVERLAY              (WM_CAP_START+  51)
#define WM_CAP_SET_PREVIEWRATE          (WM_CAP_START+  52)
#define WM_CAP_SET_SCALE                (WM_CAP_START+  53)
#define WM_CAP_GRAB_FRAME               (WM_CAP_START+  60)
#define WM_CAP_GRAB_FRAME_NOSTOP        (WM_CAP_START+  61)
#define WM_CAP_SET_MCI_DEVICE           (WM_CAP_START+  66)
#define WM_CAP_SET_USER_DATA		(WM_CAP_START+  9)
#define AVICapSM(hwnd,m,w,l) ( (IsWindow(hwnd)) ?   SendMessage(hwnd,m,w,l) : 0)
#define capCaptureAbort(hwnd)                      ((BOOL)AVICapSM(hwnd, WM_CAP_ABORT, (WPARAM)0, (LPARAM)0L))
#define capCaptureSequence(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_SEQUENCE, (WPARAM)0, (LPARAM)0L))
#define capCaptureSequenceNoFile(hwnd)             ((BOOL)AVICapSM(hwnd, WM_CAP_SEQUENCE_NOFILE, (WPARAM)0, (LPARAM)0L))
#define capCaptureStop(hwnd)                       ((BOOL)AVICapSM(hwnd, WM_CAP_STOP, (WPARAM)0, (LPARAM)0L))
#define capCaptureAbort(hwnd)                      ((BOOL)AVICapSM(hwnd, WM_CAP_ABORT, (WPARAM)0, (LPARAM)0L))
#define capCaptureSingleFrameOpen(hwnd)            ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME_OPEN, (WPARAM)0, (LPARAM)0L))
#define capCaptureSingleFrameClose(hwnd)           ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME_CLOSE, (WPARAM)0, (LPARAM)0L))
#define capCaptureSingleFrame(hwnd)                ((BOOL)AVICapSM(hwnd, WM_CAP_SINGLE_FRAME, (WPARAM)0, (LPARAM)0L))
#define capDlgVideoFormat(hwnd)                    ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOFORMAT, 0, 0L))
#define capDlgVideoSource(hwnd)                    ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOSOURCE, 0, 0L))
#define capDlgVideoDisplay(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEODISPLAY, 0, 0L))
#define capDlgVideoCompression(hwnd)               ((BOOL)AVICapSM(hwnd, WM_CAP_DLG_VIDEOCOMPRESSION, 0, 0L))
#define capDriverConnect(hwnd, i)                  ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_CONNECT, (WPARAM)(i), 0L))
#define capDriverDisconnect(hwnd)                  ((BOOL)AVICapSM(hwnd, WM_CAP_DRIVER_DISCONNECT, (WPARAM)0, 0L))
#define capFileSetCaptureFile(hwnd, szName)        ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SET_CAPTURE_FILE, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capFileGetCaptureFile(hwnd, szName, wSize) ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_GET_CAPTURE_FILE, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capFileAlloc(hwnd, dwSize)                 ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_ALLOCATE, 0, (LPARAM)(DWORD)(dwSize)))
#define capFileSaveAs(hwnd, szName)                ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SAVEAS, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capFileSetInfoChunk(hwnd, lpInfoChunk)     ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SET_INFOCHUNK, (WPARAM)0, (LPARAM)(LPCAPINFOCHUNK)(lpInfoChunk)))
#define capFileSaveDIB(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_FILE_SAVEDIB, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capPaletteOpen(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_OPEN, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capPaletteSave(hwnd, szName)               ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_SAVE, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capPalettePaste(hwnd)                      ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_PASTE, (WPARAM) 0, (LPARAM)0L))
#define capPaletteAuto(hwnd, iFrames, iColors)     ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_AUTOCREATE, (WPARAM)(iFrames), (LPARAM)(DWORD)(iColors)))
#define capPaletteManual(hwnd, fGrab, iColors)     ((BOOL)AVICapSM(hwnd, WM_CAP_PAL_MANUALCREATE, (WPARAM)(fGrab), (LPARAM)(DWORD)(iColors)))
#define capGetUserData(hwnd)               (AVICapSM(hwnd, WM_CAP_GET_USER_DATA, 0, 0))
#define capEditCopy(hwnd)                          ((BOOL)AVICapSM(hwnd, WM_CAP_EDIT_COPY, 0, 0L))
#define capSetAudioFormat(hwnd, s, wSize)          ((BOOL)AVICapSM(hwnd, WM_CAP_SET_AUDIOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPWAVEFORMATEX)(s)))
#define capGetAudioFormat(hwnd, s, wSize)          ((DWORD)AVICapSM(hwnd, WM_CAP_GET_AUDIOFORMAT, (WPARAM)(wSize), (LPARAM)(LPVOID)(LPWAVEFORMATEX)(s)))
#define capGetAudioFormatSize(hwnd)                ((DWORD)AVICapSM(hwnd, WM_CAP_GET_AUDIOFORMAT, (WPARAM)0, (LPARAM)0L))
#define capGetVideoFormatSize(hwnd)            ((DWORD)AVICapSM(hwnd, WM_CAP_GET_VIDEOFORMAT, 0, 0L))
#define capPreview(hwnd, f)                        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_PREVIEW, (WPARAM)(BOOL)(f), 0L))
#define capPreviewRate(hwnd, wMS)                  ((BOOL)AVICapSM(hwnd, WM_CAP_SET_PREVIEWRATE, (WPARAM)(wMS), 0))
#define capOverlay(hwnd, f)                        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_OVERLAY, (WPARAM)(BOOL)(f), 0L))
#define capPreviewScale(hwnd, f)                   ((BOOL)AVICapSM(hwnd, WM_CAP_SET_SCALE, (WPARAM)(BOOL)f, 0L))
#define capGrabFrame(hwnd)                         ((BOOL)AVICapSM(hwnd, WM_CAP_GRAB_FRAME, (WPARAM)0, (LPARAM)0L))
#define capGrabFrameNoStop(hwnd)                   ((BOOL)AVICapSM(hwnd, WM_CAP_GRAB_FRAME_NOSTOP, (WPARAM)0, (LPARAM)0L))
#define capSetMCIDeviceName(hwnd, szName)          ((BOOL)AVICapSM(hwnd, WM_CAP_SET_MCI_DEVICE, 0, (LPARAM)(LPVOID)(LPTSTR)(szName)))
#define capSetUserData(hwnd, lUser)        ((BOOL)AVICapSM(hwnd, WM_CAP_SET_USER_DATA, 0, (LPARAM)lUser))
#endif

/* ======================================================================== */
/* Video Capture Functions                                                  */
/* ======================================================================== */

/* LRESULT CALLBACK capControlCallback( HWND hWnd, int nState ); */
/* To Do */

/* ------------------------------------------------------------------------ */

/* HWND VFWAPI capCreateCaptureWindow( LPCSTR lpszWindowName,
                                       DWORD dwStyle,
                                       int x, int y,
                                       int nWidth, int nHeight,
                                       HWND hWnd,
                                       int nID ); */
HB_FUNC( CAPCREATECAPTUREWINDOW )
{
 hb_retnl( (LONG) capCreateCaptureWindow( (LPCSTR) hb_parc(1),
                                          (DWORD) hb_parnl(2),
                                          hb_parni(3), hb_parni(4),
                                          hb_parni(5), hb_parni(6),
                                          (HWND) hb_parnl(7),
                                          hb_parni(8) ) );
}

/* ------------------------------------------------------------------------ */

/* LRESULT CALLBACK capErrorCallback( HWND hWnd, int nID, LPCSTR lpsz ); */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL VFWAPI capGetDriverDescription( WORD wDriverIndex, LPSTR lpszName, INT cbName, LPSTR lpszVer, INT cbVer ); */
/*
HB_FUNC( CAPGETDRIVERDESCRIPTION )
{
 TCHAR lpszName[255];
 int cbName = 255;
 TCHAR lpszVer[255];
 int cbVer = 255;
 BOOL bRet;
 bRet = capGetDriverDescription( (WORD) hb_parnl(1), lpszName, cbName, lpszVer, cbVer );
 hb_storc( lpszName, 2 );
 hb_storni( cbName, 3 );
 hb_storc( lpszVer, 4 );
 hb_storni( cbVer, 5 );
 hb_retl(bRet);
}
*/

/* ------------------------------------------------------------------------ */

/* LRESULT CALLBACK capStatusCallback( HWND hWnd, int nID, LPCSTR lpsz ); */
/* To Do */

/* ------------------------------------------------------------------------ */

/* LRESULT CALLBACK capVideoStreamCallback( HWND hWnd, LPVIDEOHDR lpVHdr ); */
/* To Do */

/* ------------------------------------------------------------------------ */

/* LRESULT CALLBACK capWaveStreamCallback( HWND hWnd, LPWAVEHDR lpWHdr ); */
/* To Do */

/* ------------------------------------------------------------------------ */

/* LRESULT CALLBACK capYieldCallback( HWND hWnd ); */
/* To Do */

/* ======================================================================== */
/* Video Capture Macros                                                     */
/* ======================================================================== */

/* BOOL capCaptureAbort( hwnd ); */
/* WM_CAP_ABORT */
/* SendMessage( hwnd, WM_CAP_ABORT, 0, 0 ) */
HB_FUNC( CAPCAPTUREABORT )
{
 hb_retl( capCaptureAbort( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureGetSetup( hwnd, s, wSize ); */
/* WM_CAP_GET_SEQUENCE_SETUP */
/* SendMessage( hwnd, WM_CAP_GET_SEQUENCE_SETUP, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSequence( hwnd ); */
/* WM_CAP_SEQUENCE */
/* SendMessage( hwnd, WM_CAP_SEQUENCE, 0, 0 ) */
HB_FUNC( CAPCAPTURESEQUENCE )
{
 hb_retl( capCaptureSequence( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSequenceNoFile( hwnd ); */
/* WM_CAP_SEQUENCE_NOFILE */
/* SendMessage( hwnd, WM_CAP_SEQUENCE_NOFILE, 0, 0 ) */
HB_FUNC( CAPCAPTURESEQUENCENOFILE )
{
 hb_retl( capCaptureSequenceNoFile( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSetSetup( hwnd, psCapParms, wSize ); */
/* WM_CAP_SET_SEQUENCE_SETUP */
/* SendMessage( hwnd, WM_CAP_SET_SEQUENCE_SETUP, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSingleFrame( hwnd ); */
/* WM_CAP_SINGLE_FRAME */
/* SendMessage( hwnd, WM_CAP_SINGLE_FRAME, 0, 0 ) */
HB_FUNC( CAPCAPTURESINGLEFRAME )
{
 hb_retl( capCaptureSingleFrame( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSingleFrameClose( hwnd ); */
/* WM_CAP_SINGLE_FRAME_CLOSE */
/* SendMessage( hwnd, WM_CAP_SINGLE_FRAME_CLOSE, 0, 0 ) */
HB_FUNC( CAPCAPTURESINGLEFRAMECLOSE )
{
 hb_retl( capCaptureSingleFrameClose( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureSingleFrameOpen( hwnd ); */
/* WM_CAP_SINGLE_FRAME_OPEN */
/* SendMessage( hwnd, WM_CAP_SINGLE_FRAME_OPEN, 0, 0 ) */
HB_FUNC( CAPCAPTURESINGLEFRAMEOPEN )
{
 hb_retl( capCaptureSingleFrameOpen( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capCaptureStop( hwnd ); */
/* WM_CAP_STOP */
/* SendMessage( hwnd, WM_CAP_STOP, 0, 0 ) */
HB_FUNC( CAPCAPTURESTOP )
{
 hb_retl( capCaptureStop( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDlgVideoCompression( hwnd ); */
/* WM_CAP_DLG_VIDEOCOMPRESSION */
/* SendMessage( hwnd, WM_CAP_DLG_VIDEOCOMPRESSION, 0, 0 ) */
HB_FUNC( CAPDLGVIDEOCOMPRESSION )
{
 hb_retl( capDlgVideoCompression( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDlgVideoDisplay( hwnd ); */
/* WM_CAP_DLG_VIDEODISPLAY */
/* SendMessage( hwnd, WM_CAP_DLG_VIDEODISPLAY, 0, 0 ) */
HB_FUNC( CAPDLGVIDEODISPLAY )
{
 hb_retl( capDlgVideoDisplay( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDlgVideoFormat( hwnd ); */
/* WM_CAP_DLG_VIDEOFORMAT */
/* SendMessage( hwnd, WM_CAP_DLG_VIDEOFORMAT, 0, 0 ) */
HB_FUNC( CAPDLGVIDEOFORMAT )
{
 hb_retl( capDlgVideoFormat( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDlgVideoSource( hwnd ); */
/* WM_CAP_DLG_VIDEOSOURCE */
/* SendMessage( hwnd, WM_CAP_DLG_VIDEOSOURCE, 0, 0 ) */
HB_FUNC( CAPDLGVIDEOSOURCE )
{
 hb_retl( capDlgVideoSource( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDriverConnect( hwnd, iIndex ); */
/* WM_CAP_DRIVER_CONNECT */
/* SendMessage( hwnd, WM_CAP_DRIVER_CONNECT, 0, 0 ) */
HB_FUNC( CAPDRIVERCONNECT )
{
 hb_retl( capDriverConnect( (HWND) hb_parnl(1), hb_parni(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capDriverDisconnect( hwnd ); */
/* WM_CAP_DRIVER_DISCONNECT */
/* SendMessage( hwnd, WM_CAP_DRIVER_DISCONNECT, 0, 0 ) */
HB_FUNC( CAPDRIVERDISCONNECT )
{
 hb_retl( capDriverDisconnect( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* capDriverGetCaps( hwnd, psCaps, wSize ); */
/* WM_CAP_DRIVER_GET_CAPS */
/* SendMessage( hwnd, WM_CAP_DRIVER_GET_CAPS, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capDriverGetName( hwnd, szName, wSize ); */
/* WM_CAP_DRIVER_GET_NAME */
/* SendMessage( hwnd, WM_CAP_DRIVER_GET_NAME, 0, 0 ) */
/*
HB_FUNC( CAPDRIVERGETNAME )
{
 TCHAR szName[255];
 WORD wSize = 255;
 BOOL bRet;
 bRet = capDriverGetName( (HWND) hb_parnl(1), szName, &wSize );
 hb_storc( szName, 2 );
 hb_storni( wSize, 3 );
 hb_retl(bRet);
}
*/

/* ------------------------------------------------------------------------ */

/* BOOL capDriverGetVersion( hwnd, szVer, wSize ); */
/* WM_CAP_DRIVER_GET_VERSION */
/* SendMessage( hwnd, WM_CAP_DRIVER_GET_VERSION, 0, 0 ) */
/*
HB_FUNC( CAPDRIVERGETVERSION )
{
 TCHAR szVer[40];
 WORD wSize = 40;
 BOOL bRet;
 bRet = capDriverGetVersion( (HWND) hb_parnl(1), szVer, &wSize );
 hb_storc( szVer, 2 );
 hb_storni( wSize, 3 );
 hb_retl(bRet);
}
*/

/* ------------------------------------------------------------------------ */

/* BOOL capEditCopy( hwnd ); */
/* WM_CAP_EDIT_COPY */
/* SendMessage( hwnd, WM_CAP_EDIT_COPY, 0, 0 ) */
HB_FUNC( CAPEDITCOPY )
{
 hb_retl( capEditCopy( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capFileAlloc( hwnd, dwSize ); */
/* WM_CAP_FILE_ALLOCATE */
/* SendMessage( hwnd, WM_CAP_FILE_ALLOCATE, 0, 0 ) */
HB_FUNC( CAPFILEALLOC )
{
 hb_retl( capFileAlloc( (HWND) hb_parnl(1), (DWORD) hb_parnl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capFileGetCaptureFile( hwnd, szName, wSize ); */
/* WM_CAP_FILE_GET_CAPTURE_FILE */
/* SendMessage( hwnd, WM_CAP_FILE_GET_CAPTURE_FILE, 0, 0 ) */
/*
HB_FUNC( CAPFILEGETCAPTUREFILE )
{
 TCHAR szName[255];
 WORD wSize = 255;
 BOOL bRet;
 bRet = capFileGetCaptureFile( (HWND) hb_parnl(1), szName, &wSize );
 hb_storc( szName, 2 );
 hb_storni( wSize, 3 );
 hb_retl(bRet);
}
*/

/* ------------------------------------------------------------------------ */

/* BOOL capFileSaveAs( hwnd, szName ); */
/* WM_CAP_FILE_SAVEAS */
/* SendMessage( hwnd, WM_CAP_FILE_SAVEAS, 0, 0 ) */
HB_FUNC( CAPFILESAVEAS )
{
 hb_retl( capFileSaveAs( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capFileSaveDIB( hwnd, szName ); */
/* WM_CAP_FILE_SAVEDIB */
/* SendMessage( hwnd, WM_CAP_FILE_SAVEDIB, 0, 0 ) */
HB_FUNC( CAPFILESAVEDIB )
{
 hb_retl( capFileSaveDIB( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capFileSetCaptureFile( hwnd, szName ); */
/* WM_CAP_FILE_SET_CAPTURE_FILE */
/* SendMessage( hwnd, WM_CAP_FILE_SET_CAPTURE_FILE, 0, 0 ) */
HB_FUNC( CAPFILESETCAPTUREFILE )
{
 hb_retl( capFileSetCaptureFile( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capFileSetInfoChunk( hwnd, lpInfoChunk ); */
/* WM_CAP_FILE_SET_INFOCHUNK */
/* SendMessage( hwnd, WM_CAP_FILE_SET_INFOCHUNK, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* DWORD capGetAudioFormat( hwnd, psAudioFormat, wSize ); */
/* WM_CAP_GET_AUDIOFORMAT */
/* SendMessage( hwnd, WM_CAP_GET_AUDIOFORMAT, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* DWORD capGetAudioFormatSize( hwnd ); */
/* WM_CAP_GET_AUDIOFORMAT */
/* SendMessage( hwnd, WM_CAP_GET_AUDIOFORMAT, 0, 0 ) */
HB_FUNC( CAPGETAUDIOFORMATSIZE )
{
 hb_retnl( capGetAudioFormatSize( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capGetMCIDeviceName( hwnd, szName, wSize ); */
/* WM_CAP_GET_MCI_DEVICE */
/* SendMessage( hwnd, WM_CAP_GET_MCI_DEVICE, 0, 0 ) */
/*
HB_FUNC( CAPGETMCIDEVICENAME )
{
 TCHAR szName[255];
 WORD wSize = 255;
 BOOL bRet;
 bRet = capGetMCIDeviceName( (HWND) hb_parnl(1), szName, &wSize );
 hb_storc( szName, 2 );
 hb_storni( wSize, 3 );
 hb_retl(bRet);
}
*/

/* ------------------------------------------------------------------------ */

/* BOOL capGetStatus( hwnd, s, wSize ); */
/* WM_CAP_GET_STATUS */
/* SendMessage( hwnd, WM_CAP_GET_STATUS, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capGetUserData( hwnd ); */
/* WM_CAP_GET_USER_DATA */
/* SendMessage( hwnd, WM_CAP_GET_USER_DATA, 0, 0 ) */
/* To check: the return must be a LONG */
HB_FUNC( CAPGETUSERDATA )
{
 hb_retl( capGetUserData( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* DWORD capGetVideoFormat( hwnd, psVideoFormat, wSize ); */
/* WM_CAP_GET_VIDEOFORMAT */
/* SendMessage( hwnd, WM_CAP_GET_VIDEOFORMAT, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* DWORD capGetVideoFormatSize( hwnd ); */
/* WM_CAP_GET_VIDEOFORMAT */
/* SendMessage( hwnd, WM_CAP_GET_VIDEOFORMAT, 0, 0 ) */
HB_FUNC( CAPGETVIDEOFORMATSIZE )
{
 hb_retnl( capGetVideoFormatSize( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capGrabFrame( hwnd ); */
/* WM_CAP_GRAB_FRAME */
/* SendMessage( hwnd, WM_CAP_GRAB_FRAME, 0, 0 ) */
HB_FUNC( CAPGRABFRAME )
{
 hb_retl( capGrabFrame( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capGrabFrameNoStop( hwnd ); */
/* WM_CAP_GRAB_FRAME_NOSTOP */
/* SendMessage( hwnd, WM_CAP_GRAB_FRAME_NOSTOP, 0, 0 ) */
HB_FUNC( CAPGRABFRAMENOSTOP )
{
 hb_retl( capGrabFrameNoStop( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capOverlay( hwnd, f ); */
/* WM_CAP_SET_OVERLAY */
/* SendMessage( hwnd, WM_CAP_SET_OVERLAY, 0, 0 ) */
HB_FUNC( CAPOVERLAY )
{
 hb_retl( capOverlay( (HWND) hb_parnl(1), hb_parl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPaletteAuto( hwnd, iFrames, iColors ); */
/* WM_CAP_PAL_AUTOCREATE */
/* SendMessage( hwnd, WM_CAP_PAL_AUTOCREATE, 0, 0 ) */
HB_FUNC( CAPPALETTEAUTO )
{
 hb_retl( capPaletteAuto( (HWND) hb_parnl(1), hb_parni(2), hb_parni(3) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPaletteManual( hwnd, fGrab, iColors ); */
/* WM_CAP_PAL_MANUALCREATE */
/* SendMessage( hwnd, WM_CAP_PAL_MANUALCREATE, 0, 0 ) */
HB_FUNC( CAPPALETTEMANUAL )
{
 hb_retl( capPaletteManual( (HWND) hb_parnl(1), hb_parl(2), hb_parni(3) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPaletteOpen( hwnd, szName ); */
/* WM_CAP_PAL_OPEN */
/* SendMessage( hwnd, WM_CAP_PAL_OPEN, 0, 0 ) */
HB_FUNC( CAPPALETTEOPEN )
{
 hb_retl( capPaletteOpen( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPalettePaste( hwnd ); */
/* WM_CAP_PAL_PASTE */
/* SendMessage( hwnd, WM_CAP_PAL_PASTE, 0, 0 ) */
HB_FUNC( CAPPALETTEPASTE )
{
 hb_retl( capPalettePaste( (HWND) hb_parnl(1) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPaletteSave( hwnd, szName ); */
/* WM_CAP_PAL_SAVE */
/* SendMessage( hwnd, WM_CAP_PAL_SAVE, 0, 0 ) */
HB_FUNC( CAPPALETTESAVE )
{
 hb_retl( capPaletteSave( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPreview( hwnd, f ); */
/* WM_CAP_SET_PREVIEW */
/* SendMessage( hwnd, WM_CAP_SET_PREVIEW, 0, 0 ) */
HB_FUNC( CAPPREVIEW )
{
 hb_retl( capPreview( (HWND) hb_parnl(1), hb_parl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPreviewRate( hwnd, wMS ); */
/* WM_CAP_SET_PREVIEWRATE */
/* SendMessage( hwnd, WM_CAP_SET_PREVIEWRATE, 0, 0 ) */
HB_FUNC( CAPPREVIEWRATE )
{
 hb_retl( capPreviewRate( (HWND) hb_parnl(1), (WORD) hb_parnl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capPreviewScale( hwnd, f ); */
/* WM_CAP_SET_SCALE */
/* SendMessage( hwnd, WM_CAP_SET_SCALE, 0, 0 ) */
HB_FUNC( CAPPREVIEWSCALE )
{
 hb_retl( capPreviewScale( (HWND) hb_parnl(1), hb_parl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capSetAudioFormat( hwnd, psAudioFormat, wSize ); */
/* WM_CAP_SET_AUDIOFORMAT */
/* SendMessage( hwnd, WM_CAP_SET_AUDIOFORMAT, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnCapControl( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_CAPCONTROL */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_CAPCONTROL, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnError( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_ERROR */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_ERROR, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnFrame( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_FRAME */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_FRAME, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnStatus( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_STATUS */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_STATUS, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnVideoStream( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_VIDEOSTREAM */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_VIDEOSTREAM, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnWaveStream( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_WAVESTREAM */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_WAVESTREAM, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetCallbackOnYield( hwnd, fpProc ); */
/* WM_CAP_SET_CALLBACK_YIELD */
/* SendMessage( hwnd, WM_CAP_SET_CALLBACK_YIELD, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetMCIDeviceName( hwnd, szName ); */
/* WM_CAP_SET_MCI_DEVICE */
/* SendMessage( hwnd, WM_CAP_SET_MCI_DEVICE, 0, 0 ) */
HB_FUNC( CAPSETMCIDEVICENAME )
{
 hb_retl( capSetMCIDeviceName( (HWND) hb_parnl(1), hb_parc(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capSetScrollPos( hwnd, lpP ); */
/* WM_CAP_SET_SCROLL */
/* SendMessage( hwnd, WM_CAP_SET_SCROLL, 0, 0 ) */
/* To Do */

/* ------------------------------------------------------------------------ */

/* BOOL capSetUserData( hwnd, lUser ); */
/* WM_CAP_SET_USER_DATA */
/* SendMessage( hwnd, WM_CAP_SET_USER_DATA, 0, 0 ) */
HB_FUNC( CAPSETUSERDATA )
{
 hb_retl( capSetUserData( (HWND) hb_parnl(1), hb_parnl(2) ) );
}

/* ------------------------------------------------------------------------ */

/* BOOL capSetVideoFormat( hwnd, psVideoFormat, wSize ); */
/* WM_CAP_SET_VIDEOFORMAT */
/* SendMessage( hwnd, WM_CAP_SET_VIDEOFORMAT, 0, 0 ) */
/* To Do */

/* ======================================================================== */

