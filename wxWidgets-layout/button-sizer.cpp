///*
//* Layout seperate
//* Layout setting
//* Layout change
//*/
//
//#include <wx/wx.h>
//#include <wx/listctrl.h>
//
////------------------------------
//// MyApp
////------------------------------
//class MyApp : public wxApp {
//	private:
//
//	public:
//	virtual bool OnInit();
//};
//wxIMPLEMENT_APP(MyApp);
//
////------------------------------
//// MainFrame
////------------------------------
//class MyFrame : public wxFrame {
//	private:
//
//	public:
//	MyFrame(const wxString &title, const wxPoint &point, const wxSize &size);
//};
//
////------------------------------
//// Function implementation
////------------------------------
//bool MyApp::OnInit() {
//	MyFrame *frame = new MyFrame("Station V Win", wxDefaultPosition, wxDefaultSize);
//	frame->Center();
//	frame->Show();
//
//	return true;
//}
//
//MyFrame::MyFrame(const wxString &title, const wxPoint &point, const wxSize &size)
//	: wxFrame(nullptr, wxID_ANY, title, point, size) {
//	
//	//-------------------------------
//	// Button BoxSizer
//	//-------------------------------
//	wxListView *list = new wxListView(this, wxID_ANY, wxDefaultPosition, wxSize(300, 200));
//	list->InsertColumn(0, "Name");
//	list->InsertItem(0, "Item");
//
//	wxButton *okBtn = new wxButton(this, wxID_ANY, "OK");
//	wxButton *cancelBtn = new wxButton(this, wxID_ANY, "Cancel");
//
//	wxBoxSizer *s1 = new wxBoxSizer(wxVERTICAL);
//	s1->Add(list, 1, wxEXPAND | wxALL, 10);
//
//	wxBoxSizer *s2 = new wxBoxSizer(wxHORIZONTAL);
//	s2->Add(okBtn, 0, wxEXPAND | wxRIGHT, 10);
//	s2->Add(cancelBtn, 0);
//
//	s1->Add(s2, 0, wxALIGN_RIGHT | wxALL, 10);		// wxALIGN_RIGHT로 우측 정렬
//	this->SetSizerAndFit(s1);
//
//}
//
