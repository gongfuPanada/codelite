///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __simpletablebase__
#define __simpletablebase__

#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/panel.h>
#include "treelistctrl.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class SimpleTableBase
///////////////////////////////////////////////////////////////////////////////
class SimpleTableBase : public wxPanel
{
	private:

	protected:
		wxTreeListCtrl* m_listTable;
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;

		// Virtual event handlers, overide them in your derived class
		virtual void OnListEditLabelBegin( wxTreeEvent& event ){ event.Skip(); }
		virtual void OnListEditLabelEnd( wxTreeEvent& event ){ event.Skip(); }
		virtual void OnItemRightClick( wxTreeEvent& event ){ event.Skip(); }
		virtual void OnListKeyDown( wxTreeEvent& event ){ event.Skip(); }
		virtual void OnItemExpanding( wxTreeEvent& event ){ event.Skip(); }

		virtual void OnNewWatch( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnNewWatchUI( wxUpdateUIEvent& event ){ event.Skip(); }
		virtual void OnDeleteWatch( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnDeleteWatchUI( wxUpdateUIEvent& event ){ event.Skip(); }
		virtual void OnDeleteAll( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnDeleteAllUI( wxUpdateUIEvent& event ){ event.Skip(); }


	public:
		SimpleTableBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~SimpleTableBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LocalsTableBase
///////////////////////////////////////////////////////////////////////////////
class LocalsTableBase : public wxPanel
{
	private:

	protected:
		wxTreeListCtrl* m_listTable;

		// Virtual event handlers, overide them in your derived class
		virtual void OnItemExpanding( wxTreeEvent& event ){ event.Skip(); }

	public:
		LocalsTableBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~LocalsTableBase();

};

#endif //__simpletablebase__
