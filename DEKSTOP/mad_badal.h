//---------------------------------------------------------------------------

#ifndef mad_badalH
#define mad_badalH
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
#include <Vcl.Dialogs.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class Tmd_badal : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel2;
	TPanel *Panel8;
	TPanel *Panel3;
	TPanel *Panel1;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *cl;
	TMemo *Memo1;
	TImage *Image2;
	TImage *Image3;
	TPanel *ab;
	TIdHTTP *IdHTTP1;
	TIdHTTP *IdHTTP2;
	TIdHTTP *IdHTTP3;
	TMediaPlayer *MediaPlayer1;
	TMediaPlayer *MediaPlayer2;
	TOpenDialog *OpenDialog1;
	TOpenDialog *OpenDialog2;
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall clClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall abMouseLeave(TObject *Sender);
	void __fastcall abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall abClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tmd_badal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmd_badal *md_badal;
//---------------------------------------------------------------------------
#endif