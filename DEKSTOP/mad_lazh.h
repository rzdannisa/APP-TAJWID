//---------------------------------------------------------------------------

#ifndef mad_lazhH
#define mad_lazhH
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
class Tmadlazh : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel2;
	TPanel *Panel3;
	TMemo *Memo1;
	TPanel *Panel8;
	TPanel *Panel4;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *ts;
	TPanel *mh;
	TPanel *cl;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TIdHTTP *IdHTTP2;
	TIdHTTP *IdHTTP1;
	TIdHTTP *IdHTTP3;
	void __fastcall clClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall mhMouseLeave(TObject *Sender);
	void __fastcall mhMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tmadlazh(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmadlazh *madlazh;
//---------------------------------------------------------------------------
#endif
