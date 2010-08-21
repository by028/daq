/////////////////////////////////////////////////////////////////////////////
// Name:        infodialog.h
// Purpose:     
// Author:      NDA
// Modified by: 
// Created:     11/10/2006 12:54:22
// RCS-ID:      
// Copyright:   CAEN S.p.A All rights reserved.
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 11/10/2006 12:54:22

#ifndef _INFODIALOG_H_
#define _INFODIALOG_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "infodialog.h"
#endif

/*!
 * Includes
 */

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class wxBoxSizer;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_INFODIALOG 10040
#define SYMBOL_INFODIALOG_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_INFODIALOG_TITLE _("CAEN Scope about")
#define SYMBOL_INFODIALOG_IDNAME ID_INFODIALOG
#define SYMBOL_INFODIALOG_SIZE wxDefaultSize
#define SYMBOL_INFODIALOG_POSITION wxDefaultPosition
#define ID_PANEL2 10043
#define ID_PANEL1 10041
#define ID_OK_BUTTON 10042
////@end control identifiers
#define ID_HYPERLINK	11000

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * InfoDialog class declaration
 */

class InfoDialog: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( InfoDialog )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    InfoDialog( );
    InfoDialog( wxWindow* parent, wxWindowID id = SYMBOL_INFODIALOG_IDNAME, const wxString& caption = SYMBOL_INFODIALOG_TITLE, const wxPoint& pos = SYMBOL_INFODIALOG_POSITION, const wxSize& size = SYMBOL_INFODIALOG_SIZE, long style = SYMBOL_INFODIALOG_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_INFODIALOG_IDNAME, const wxString& caption = SYMBOL_INFODIALOG_TITLE, const wxPoint& pos = SYMBOL_INFODIALOG_POSITION, const wxSize& size = SYMBOL_INFODIALOG_SIZE, long style = SYMBOL_INFODIALOG_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin InfoDialog event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_OK_BUTTON
    void OnOkButtonClick( wxCommandEvent& event );

////@end InfoDialog event handler declarations
	void OnHyperlink(wxCommandEvent &event);

////@begin InfoDialog member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end InfoDialog member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin InfoDialog member variables
    wxPanel* m_left_panel;
    wxBoxSizer* m_left_sizer;
    wxStaticText* m_caenvmetool_rev;
////@end InfoDialog member variables
};

#endif
    // _INFODIALOG_H_
