//---------------------------------------------------------------------------

#ifndef bilagunahH
#define bilagunahH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.MPlayer.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class Tbln : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel2;
	TPanel *Panel8;
	TPanel *Panel4;
	TImage *Image2;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *Panel1;
	TPanel *cl;
	TMemo *Memo1;
	TImage *Image4;
	TMediaPlayer *MediaPlayer1;
	TOpenDialog *OpenDialog1;
	TPanel *ab;
	TIdHTTP *IdHTTP1;
	void __fastcall FormMouseLeave(TObject *Sender);
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall clClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall abClick(TObject *Sender);
	void __fastcall abMouseLeave(TObject *Sender);
	void __fastcall abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);

private:	// User declarations
public:		// User declarations
	__fastcall Tbln(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tbln *bln;
//---------------------------------------------------------------------------
#endif