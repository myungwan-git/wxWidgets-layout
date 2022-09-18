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
//	//sizer->Add(panel, 0);					// proportion=0 => �⺻ ũ�⸦ ������ �� ����.
//	//this->SetSizerAndFit(sizer);			// Connect the sizer and window. Setting the window minimum size.
//											// �ٽ� ����, �θ��� ũ��� ������� �г��� ������ ũ�⸦ �Դ´�.
//	*/
//
//	/*
//	//sizer->Add(panel, 0, wxEXPAND);			// wxEXPAND �� ���� �г��� �θ� ����ũ�⸦ ���󰣴�.
//											// proportion=1 => �θ��� ��� ũ�⸦ ���󰣴�.
//	//this->SetSizerAndFit(sizer);
//	*/
//
//	/*
//	sizer->Add(panelTop, 1, wxEXPAND | wxLEFT |		// Add border=5; 
//			   wxRIGHT | wxTOP, 10);				// panelBottom�� ������ ������ border�� ��ģ��. ���� wxBottom ����.
//													// Set border 10 instead wxALLwxALL. wxLEFT wxRIGHT ..
//	sizer->Add(panelBottom, 2, wxEXPAND | wxALL, 10);	// panelTop�� �����ϴ� ������ ���ϰ� �ʹٸ� ���� proportion�� ���
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
