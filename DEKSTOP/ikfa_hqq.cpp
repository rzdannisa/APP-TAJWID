//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ikfa_hqq.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "mh.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tikf_hqq *ikf_hqq;
//---------------------------------------------------------------------------
__fastcall Tikf_hqq::Tikf_hqq(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p1MouseLeave(TObject *Sender)
{
		p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p1->Color=0x005E4934;
	p1->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p2MouseLeave(TObject *Sender)
{
		p2->Color=0x003F3122;
   p2->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	p2->Color=0x005E4934;
	p2->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p3MouseLeave(TObject *Sender)
{
		 	p3->Color=0x003F3122;
   p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
		p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------





void __fastcall Tikf_hqq::p1Click(TObject *Sender)
{
		if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p2Click(TObject *Sender)
{
		if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::p3Click(TObject *Sender)
{
		if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::mhClick(TObject *Sender)
{
		if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------


void __fastcall Tikf_hqq::Image1Click(TObject *Sender)
{
Hide();
  ikf_hqq->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::clMouseLeave(TObject *Sender)
{
cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::clClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::FormShow(TObject *Sender)
{
DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where id='1'");
DM1->tajwid->Open();

TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh1")->AsString,ms);
ms->Seek(0,soFromBeginning);
jp->LoadFromStream(ms);
Image3->Picture->Assign(jp);

TMemoryStream*ms2 = new TMemoryStream;
TJPEGImage*jp2 = new TJPEGImage;
IdHTTP2->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh2")->AsString,ms2);
ms2->Seek(0,soFromBeginning);
jp2->LoadFromStream(ms2);
Image4->Picture->Assign(jp2);

OpenDialog1->FileName=("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("suara1")->AsString);
MediaPlayer1->FileName=OpenDialog1->FileName;
MediaPlayer1->Open();

OpenDialog2->FileName=("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("suara2")->AsString);
MediaPlayer2->FileName=OpenDialog2->FileName;
MediaPlayer2->Open();
}
//---------------------------------------------------------------------------





void __fastcall Tikf_hqq::abMouseLeave(TObject *Sender)
{
ab->Color=clWhite;
  ab->Font->Color=0x0085A016;

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
ab->Color=0x0085A016;
ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tikf_hqq::abClick(TObject *Sender)
{
  if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------
