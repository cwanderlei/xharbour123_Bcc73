/*
   XWT_GTK - xHarbour Windowing Toolkit/ GTK interface

   (C) 2004 Lorenzo Fiorini

   $Id: xwt_gtk_notebook.c,v 1.1 2004/08/21 17:27:14 lf_sfnet Exp $

   notebook - a col/row layout adapter
*/

#include "hbapi.h"
#include <xwt_api.h>
#include <xwt_gtk.h>

BOOL xwt_gtk_createNoteBook( PXWT_WIDGET xwtData )
{
   GtkWidget *notebook;

   notebook = gtk_notebook_new ();
   gtk_notebook_set_tab_pos (GTK_NOTEBOOK (notebook), GTK_POS_TOP);
   
   xwtData->widget_data = notebook;
   xwtData->destructor = NULL;
   xwtData->get_main_widget = xwtData->get_top_widget = xwt_gtk_get_topwidget_neuter;

   gtk_widget_show( notebook );

   return TRUE;
}

