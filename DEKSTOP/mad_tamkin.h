//---------------------------------------------------------------------------

#ifndef mad_tamkinH
#define mad_tamkinH
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
class Tmd_tamkin : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel3;
	TImage *Image1;
	TPanel *p1;
	TPanel *p2;
	TPanel *p3;
	TPanel *ts;
	TPanel *mh;
	TPanel *cl;
	TPanel *Panel2;
	TImage *Image2;
	TImage *Image3;
	TMemo *Memo1;
	TPanel *Panel8;
	TOpenDialog *OpenDialog1;
	TOpenDialog *OpenDialog2;
	TMediaPlayer *MediaPlayer1;
	TMediaPlayer *MediaPlayer2;
	TIdHTTP *IdHTTP1;
	TIdHTTP *IdHTTP2;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall p1Click(TObject *Sender);
	void __fastcall p2Click(TObject *Sender);
	void __fastcall p3Click(TObject *Sender);
	void __fastcall mhClick(TObject *Sender);
	void __fastcall clClick(TObject *Sender);
	void __fastcall p1MouseLeave(TObject *Sender);
	void __fastcall p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p2MouseLeave(TObject *Sender);
	void __fastcall p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall p3MouseLeave(TObject *Sender);
	void __fastcall p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall mhMouseLeave(TObject *Sender);
	void __fastcall mhMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall clMouseLeave(TObject *Sender);
	void __fastcall clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tmd_tamkin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmd_tamkin *md_tamkin;
//---------------------------------------------------------------------------
#endif