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
//	MyFrame *frame = new MyFrame("Station V Win", wxDefaultPosition, wxSize(1000,600));
//	frame->Center();
//	frame->Show();
//
//	return true;
//}
//
//MyFrame::MyFrame(const wxString &title, const wxPoint &point, const wxSize &size)
//	: wxFrame(nullptr, wxID_ANY, title, point, size) {
//	
//
//	wxSplitterWindow *splitterMain = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//														  wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitterTopPlusMid = new wxSplitterWindow(splitterMain, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//																wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitterTop = new wxSplitterWindow(splitterTopPlusMid, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//														  wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitterMid = new wxSplitterWindow(splitterTopPlusMid, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//														 wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitterBot = new wxSplitterWindow(splitterMain, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//														 wxSP_LIVE_UPDATE);
//
//	wxPanel *panelTop = new wxPanel(splitterTop, wxID_ANY, wxDefaultPosition, wxSize(200,50));
//	wxPanel *panelMidLeft = new wxPanel(splitterMid, wxID_ANY, wxDefaultPosition, wxSize(100,100));
//	wxPanel *panelMidRight = new wxPanel(splitterMid, wxID_ANY, wxDefaultPosition, wxSize(100, 100));
//	wxPanel *panelBot = new wxPanel(splitterBot, wxID_ANY, wxDefaultPosition, wxSize(200, 50));
//
//	panelTop->SetBackgroundColour(*wxYELLOW);
//	panelMidLeft->SetBackgroundColour(*wxBLACK);
//	panelMidRight->SetBackgroundColour(*wxGREEN);
//	panelBot->SetBackgroundColour(*wxYELLOW);
//
//	//splitterMain->SetMinimumPaneSize(50);
//	splitterTop->SetMinimumPaneSize(50);
//	splitterMid->SetMinimumPaneSize(100);
//	splitterBot->SetMinimumPaneSize(50);
//
//	splitterMid->SplitVertically(panelMidLeft, panelMidRight);
//	splitterTopPlusMid->SplitHorizontally(splitterTop, splitterMid);
//	splitterMain->SplitHorizontally(splitterTopPlusMid, splitterBot);
//
//
//	/*
//	wxSplitterWindow *splitter1 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//														wxSP_BORDER | wxSP_LIVE_UPDATE);
//	wxSplitterWindow *splitter2 = new wxSplitterWindow(splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize,
//													   wxSP_BORDER | wxSP_LIVE_UPDATE);
//
//	wxPanel *panel1 = new wxPanel(splitter1, wxID_ANY);
//	wxPanel *panel2 = new wxPanel(splitter2, wxID_ANY);
//	wxPanel *panel3 = new wxPanel(splitter2, wxID_ANY);
//
//	panel1->SetBackgroundColour(*wxYELLOW);
//	panel2->SetBackgroundColour(*wxBLACK);
//	panel3->SetBackgroundColour(*wxGREEN);
//
//	splitter2->SetMinimumPaneSize(100);
//	//splitter2->SplitHorizontally(panel2, panel3);
//	splitter2->SplitVertically(panel2, panel3);
//
//	splitter1->SetMinimumPaneSize(200);
//	splitter1->SplitVertically(panel1, splitter2);
//	*/
//
//
//}
//
