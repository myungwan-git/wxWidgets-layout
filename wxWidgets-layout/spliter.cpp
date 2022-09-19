///*
//* Layout seperate
//* Layout setting
//* Layout change
//*/
//
//#include <wx/wx.h>
//#include <wx/splitter.h>
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
//: wxFrame(nullptr, wxID_ANY, title, point, size) {
//
//	wxSplitterWindow *splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//													  wxSP_BORDER | wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitterRight = new wxSplitterWindow(splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//													  wxSP_BORDER | wxSP_LIVE_UPDATE);
//
//	wxPanel *left = new wxPanel(splitter);
//	wxPanel *right = new wxPanel(splitterRight);
//	wxPanel *bottom = new wxPanel(splitterRight);
//
//	left->SetBackgroundColour(wxColor(200, 100, 100));
//	right->SetBackgroundColour(wxColor(100, 200, 100));
//	bottom->SetBackgroundColour(wxColor(10, 20, 10));
//
//	splitterRight->SetMinimumPaneSize(100);
//	splitterRight->SplitHorizontally(right, bottom);
//
//	splitter->SetMinimumPaneSize(200);			// Setting Splitter Size.
//	//splitter->SplitVertically(left, right);
//
//}
//
