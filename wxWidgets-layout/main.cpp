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
//		virtual bool OnInit();
//};
////wxIMPLEMENT_APP(MyApp);
//
////------------------------------
//// MainFrame
////------------------------------
//class MyFrame : public wxFrame {
//	private:
//
//	public:
//		MyFrame(const wxString &title, const wxPoint &point, const wxSize &size);
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
//: wxFrame(nullptr, wxID_ANY, title, point, size)
//{
//	wxPanel *panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200,100));
//	wxPanel *panelBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200,100));
//	wxPanel *panelBotRight = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200,100));
//	panelTop->SetBackgroundColour(wxColor(10, 10, 30));
//	panelBottom->SetBackgroundColour(wxColor(50, 20, 10));
//	panelBotRight->SetBackgroundColour(wxColor(150, 120, 110));
//
//	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
//
//	/*
//	//sizer->Add(panel, 0);					// proportion=0 => 기본 크기를 변경할 수 없다.
//	//this->SetSizerAndFit(sizer);			// Connect the sizer and window. Setting the window minimum size.
//											// 다시 말해, 부모의 크기와 관계없이 패널은 동일한 크기를 먹는다.
//	*/
//
//	/*
//	//sizer->Add(panel, 0, wxEXPAND);			// wxEXPAND 로 인해 패널이 부모 가로크기를 따라간다.
//											// proportion=1 => 부모의 모든 크기를 따라간다.
//	//this->SetSizerAndFit(sizer);
//	*/
//
//	/*
//	sizer->Add(panelTop, 1, wxEXPAND | wxLEFT |		// Add border=5; 
//			   wxRIGHT | wxTOP, 10);				// panelBottom과 만나는 지점의 border가 겹친다. 따라서 wxBottom 제외.
//													// Set border 10 instead wxALLwxALL. wxLEFT wxRIGHT ..
//	sizer->Add(panelBottom, 2, wxEXPAND | wxALL, 10);	// panelTop과 차지하는 비율을 정하고 싶다면 각자 proportion에 등록
//	this->SetSizerAndFit(sizer);
//	*/
//
//	wxBoxSizer *sizerBottom = new wxBoxSizer(wxHORIZONTAL);
//	sizer->Add(panelTop, 1, wxEXPAND | wxALL, 10);
//	sizerBottom->Add(panelBottom, 1, wxEXPAND | wxRIGHT | wxBOTTOM | wxLEFT, 10);
//	sizerBottom->Add(panelBotRight, 2, wxEXPAND | wxBOTTOM | wxRIGHT, 10);
//	sizer->Add(sizerBottom, 2, wxEXPAND , 10);
//	this->SetSizerAndFit(sizer);
//
//}
//
