//---------------------------------------------------------------------------

#ifndef kelas1H
#define kelas1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class Tk1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel2;
	TPanel *Panel1;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *Panel11;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel9;
	TPanel *cl;
	TPanel *ab;
	TImage *Image2;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall mhMouseLeave(TObject *Sender);
	void __fastcall mhMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel7Click(TObject *Sender);
	void __fastcall Panel8Click(TObject *Sender);
	void __fastcall Panel9Click(TObject *Sender);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall clClick(TObject *Sender);
	void __fastcall abClick(TObject *Sender);
	void __fastcall abMouseLeave(TObject *Sender);
	void __fastcall abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4MouseLeave(TObject *Sender);
	void __fastcall Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseLeave(TObject *Sender);
	void __fastcall Panel5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel6MouseLeave(TObject *Sender);
	void __fastcall Panel6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel7MouseLeave(TObject *Sender);
	void __fastcall Panel7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel8MouseLeave(TObject *Sender);
	void __fastcall Panel8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel9MouseLeave(TObject *Sender);
	void __fastcall Panel9MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);






private:	// User declarations
public:		// User declarations
	__fastcall Tk1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tk1 *k1;
//---------------------------------------------------------------------------
#endif