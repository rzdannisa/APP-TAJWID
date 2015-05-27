//---------------------------------------------------------------------------

#ifndef kelas3H
#define kelas3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class Tk3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel11;
	TPanel *Panel1;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *Panel5;
	TPanel *Panel3;
	TPanel *syfw;
	TPanel *Panel2;
	TPanel *Panel4;
	TPanel *Panel6;
	TPanel *cl;
	TPanel *ab;
	TImage *Image2;
	TImage *Image3;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
	void __fastcall syfwClick(TObject *Sender);
	void __fastcall Panel2Click(TObject *Sender);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall clClick(TObject *Sender);
	void __fastcall abMouseLeave(TObject *Sender);
	void __fastcall abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall abClick(TObject *Sender);
	void __fastcall syfwMouseLeave(TObject *Sender);
	void __fastcall syfwMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel2MouseLeave(TObject *Sender);
	void __fastcall Panel2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4MouseLeave(TObject *Sender);
	void __fastcall Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);




private:	// User declarations
public:		// User declarations
	__fastcall Tk3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tk3 *k3;
//---------------------------------------------------------------------------
#endif
