//---------------------------------------------------------------------------

#ifndef tasdidH
#define tasdidH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class Ttas : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *ts;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *muta;
	TPanel *mtjn;
	TEdit *Edit1;
	TPanel *Panel5;
	TIdHTTP *IdHTTP1;
	TPanel *cl;
	TPanel *Panel9;
	TPanel *Panel10;
	TPanel *Panel11;
	TPanel *Panel12;
	TPanel *Panel13;
	TPanel *Panel14;
	TPanel *Panel15;
	TPanel *Panel16;
	TPanel *Panel17;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel6;
	void __fastcall Panel3MouseLeave(TObject *Sender);
	void __fastcall Panel3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PIdghamClick(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall tsMouseLeave(TObject *Sender);
	void __fastcall tsMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel7Click(TObject *Sender);
	void __fastcall Panel18Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall Ttas(TComponent* Owner);
	String NEWVERSION;
};
//---------------------------------------------------------------------------
extern PACKAGE Ttas *tas;
//---------------------------------------------------------------------------
#endif
