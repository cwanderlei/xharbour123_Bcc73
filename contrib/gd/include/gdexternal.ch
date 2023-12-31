/*
 * $Id: gdexternal.ch,v 1.1 2006/01/21 00:46:35 fsgiudice Exp $
 */

/*
 * Harbour Project source code:
 * GD graphic library exported functions header file.
 *
 * Copyright 2004-2006 Francesco Saverio Giudice <info@fsgiudice.com>
 * www - http://www.xharbour.org http://www.harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */

/*
 *
 * See doc/license files for licensing terms.
 *
 */

#ifndef GDEXTERNAL_CH
#define GDEXTERNAL_CH

// C wrapper functions

EXTERNAL GDVERSION
EXTERNAL GDIMAGECREATE
EXTERNAL GDIMAGECREATEPALETTE
EXTERNAL GDIMAGECREATETRUECOLOR
EXTERNAL GDIMAGECREATEFROMJPEG
EXTERNAL GDIMAGECREATEFROMGIF
EXTERNAL GDIMAGECREATEFROMPNG
EXTERNAL GDIMAGECREATEFROMWBMP
EXTERNAL GDIMAGECREATEFROMGD
EXTERNAL GDIMAGEJPEG
EXTERNAL GDIMAGEGIF
EXTERNAL GDIMAGEPNG
EXTERNAL GDIMAGEWBMP
EXTERNAL GDIMAGEGD
EXTERNAL GDIMAGEDESTROY
EXTERNAL GDIMAGESETPIXEL
EXTERNAL GDIMAGELINE
EXTERNAL GDIMAGEDASHEDLINE
EXTERNAL GDIMAGEPOLYGON
EXTERNAL GDIMAGEOPENPOLYGON
EXTERNAL GDIMAGERECTANGLE
EXTERNAL GDIMAGEFILLEDPOLYGON
EXTERNAL GDIMAGEFILLEDRECTANGLE
EXTERNAL GDIMAGEARC
EXTERNAL GDIMAGEFILLEDARC
EXTERNAL GDIMAGEFILLEDELLIPSE
EXTERNAL GDIMAGEFILLTOBORDER
EXTERNAL GDIMAGEFILL
EXTERNAL GDIMAGESETANTIALIASED
EXTERNAL GDIMAGESETANTIALIASEDDONTBLEND
EXTERNAL GDIMAGESETBRUSH
EXTERNAL GDIMAGESETTILE
EXTERNAL GDIMAGESETSTYLE
EXTERNAL GDIMAGESETTHICKNESS
EXTERNAL GDIMAGEALPHABLENDING
EXTERNAL GDIMAGESAVEALPHA
EXTERNAL GDIMAGESETCLIP
EXTERNAL GDIMAGEGETCLIP
EXTERNAL GDIMAGECOLORSTOTAL
EXTERNAL GDIMAGEALPHA
EXTERNAL GDIMAGERED
EXTERNAL GDIMAGEGREEN
EXTERNAL GDIMAGEBLUE
EXTERNAL GDIMAGESX
EXTERNAL GDIMAGESY
EXTERNAL GDIMAGEGETPIXEL
EXTERNAL GDIMAGEBOUNDSSAFE
EXTERNAL GDIMAGEGETINTERLACED
EXTERNAL GDIMAGEGETTRANSPARENT
EXTERNAL GDIMAGETRUECOLOR
EXTERNAL GDIMAGETRUECOLORTOPALETTE
EXTERNAL GDIMAGECREATEPALETTEFROMTRUECOLOR
EXTERNAL GDIMAGEPALETTEPIXEL
EXTERNAL GDIMAGETRUECOLORPIXEL
EXTERNAL GDIMAGEGETTHICKNESS
EXTERNAL GDFONTGETSMALL
EXTERNAL GDFONTGETLARGE
EXTERNAL GDFONTGETMEDIUMBOLD
EXTERNAL GDFONTGETGIANT
EXTERNAL GDFONTGETTINY
EXTERNAL GDIMAGESTRING
EXTERNAL GDIMAGESTRINGUP
EXTERNAL GDIMAGESTRINGFTEX
EXTERNAL GDIMAGESTRINGFTCIRCLE
EXTERNAL GDFONTCACHESETUP
EXTERNAL GDFONTCACHESHUTDOWN
EXTERNAL GDFONTGETWIDTH
EXTERNAL GDFONTGETHEIGHT
EXTERNAL GDIMAGECOLORALLOCATE
EXTERNAL GDIMAGECOLORDEALLOCATE
EXTERNAL GDIMAGECOLORALLOCATEALPHA
EXTERNAL GDIMAGECOLORCLOSEST
EXTERNAL GDIMAGECOLORCLOSESTALPHA
EXTERNAL GDIMAGECOLORCLOSESTHWB
EXTERNAL GDIMAGECOLOREXACT
EXTERNAL GDIMAGECOLORRESOLVE
EXTERNAL GDIMAGECOLORRESOLVEALPHA
EXTERNAL GDIMAGECOLORTRANSPARENT
EXTERNAL GDTRUECOLOR
EXTERNAL GDTRUECOLORALPHA
EXTERNAL GDIMAGECOPY
EXTERNAL GDIMAGECOPYRESIZED
EXTERNAL GDIMAGECOPYRESAMPLED
EXTERNAL GDIMAGECOPYROTATED
EXTERNAL GDIMAGECOPYMERGE
EXTERNAL GDIMAGECOPYMERGEGRAY
EXTERNAL GDIMAGEPALETTECOPY
EXTERNAL GDIMAGESQUARETOCIRCLE
EXTERNAL GDIMAGESHARPEN
EXTERNAL GDIMAGECOMPARE
EXTERNAL GDIMAGEINTERLACE
EXTERNAL GDIMAGEGIFANIMBEGIN
EXTERNAL GDIMAGEGIFANIMADD
EXTERNAL GDIMAGEGIFANIMEND

// PRG level functions

EXTERNAL GDIMAGECHAR
EXTERNAL GDIMAGECHARUP
EXTERNAL GDIMAGECIRCLE
EXTERNAL GDIMAGEFILLEDCIRCLE
EXTERNAL GDIMAGEELLIPSE
EXTERNAL GDIMAGEFTWIDTH
EXTERNAL GDIMAGEFTHEIGHT
EXTERNAL GDIMAGEFTSIZE
EXTERNAL GDIMAGESTRINGFT
EXTERNAL GDIMAGEFROMFILE
EXTERNAL GDIMAGETOSTRING
EXTERNAL GDIMAGETOFILE

// CLASS functions
EXTERNAL GDIMAGE
EXTERNAL GDCHART
EXTERNAL TBARCODE
EXTERNAL TCODE


#endif // GDEXTERAL_CH
