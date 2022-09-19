/*
* Layout seperate
* Layout setting
* Layout change
*/

#include <wx/wx.h>
#include <wx/listctrl.h>

//------------------------------
// MyApp
//------------------------------
class MyApp : public wxApp {
	private:

	public:
	virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);

//------------------------------
// MainFrame
//------------------------------
class MyFrame : public wxFrame {
	private:
		wxPanel *panelMiddleRight;
		wxPanel *panelMiddleRight2;

	public:
		MyFrame(const wxString &title, const wxPoint &point, const wxSize &size);
		void OnEruoButton(const wxCommandEvent &evt);
};

//------------------------------
// Function implementation
//------------------------------
bool MyApp::OnInit() {
	MyFrame *frame = new MyFrame("Station V Win", wxDefaultPosition, wxDefaultSize);
	frame->SetSize(1000,600);
	frame->Center();
	frame->Show();

	return true;
}

void MyFrame::OnEruoButton(const wxCommandEvent &evt) {
	wxLogStatus(" >> Euro Truck << ");
	//panelMiddleRight->Hide();
	panelMiddleRight2->Show();
}

MyFrame::MyFrame(const wxString &title, const wxPoint &point, const wxSize &size)
	: wxFrame(nullptr, wxID_ANY, title, point, size) {
	CreateStatusBar();

	wxBoxSizer *sizerMain = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer *sizerMiddle = new wxBoxSizer(wxHORIZONTAL);

	wxPanel *panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300,30));
	
	wxPanel *panelMiddleLeft = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(30,300));
	wxButton *menuBtn1 = new wxButton(panelMiddleLeft, wxID_ANY, "Assetto Corsa", wxPoint(10, 10), wxSize(100, 30));
	wxButton *menuBtn2 = new wxButton(panelMiddleLeft, wxID_ANY, "Euro Truck", wxPoint(10, 40), wxSize(100, 30));
	menuBtn2->Bind(wxEVT_BUTTON, &MyFrame::OnEruoButton, this);

	panelMiddleRight = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200,200));
	wxButton *btn1 = new wxButton(panelMiddleRight, wxID_ANY, "Setting the Assetto Corsa", wxPoint(10, 10), wxSize(200, 30));
	
	panelMiddleRight2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 200));
	wxButton *btn2 = new wxButton(panelMiddleRight2, wxID_ANY, "Setting the Euro Truck", wxPoint(150, 150), wxSize(200, 30));
	panelMiddleRight2->Hide();

	wxPanel *panelBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300,30));

	panelTop->SetBackgroundColour(*wxGREEN);
	panelMiddleLeft->SetBackgroundColour(*wxBLACK);
	panelMiddleRight->SetBackgroundColour(*wxCYAN);
	panelBottom->SetBackgroundColour(*wxYELLOW);

	sizerMiddle->Add(panelMiddleLeft, 1, wxEXPAND | wxALL);
	sizerMiddle->Add(panelMiddleRight, 4, wxEXPAND | wxALL);
	sizerMiddle->Add(panelMiddleRight2, 4, wxEXPAND | wxALL);

	sizerMain->Add(panelTop, 1, wxEXPAND | wxALL);
	sizerMain->Add(sizerMiddle, 5, wxEXPAND | wxALL);
	sizerMain->Add(panelBottom, 1, wxEXPAND | wxALL);
	
	this->SetSizerAndFit(sizerMain);

/*
	wxBoxSizer *sizerTop = new wxBoxSizer(wxVERTICAL);
	wxPanel *panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300,50));
	wxPanel *panelBot = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300,300));

	panelTop->SetBackgroundColour(*wxGREEN);
	panelBot->SetBackgroundColour(*wxBLACK);

	sizerTop->Add(panelTop, 1, wxEXPAND | wxALL, 5);
	sizerTop->Add(panelBot, 2, wxEXPAND | wxALL, 5);
	
	this->SetSizerAndFit(sizerTop);
*/
}