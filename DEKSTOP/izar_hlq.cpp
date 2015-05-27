//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "izar_hlq.h"
#include "Unit1.h"
#include "Unit3.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "mh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tiz_hlq *iz_hlq;
//---------------------------------------------------------------------------
__fastcall Tiz_hlq::Tiz_hlq(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tiz_hlq::p1MouseLeave(TObject *Sender)
{
	p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
 p1->Color=0x005E4934;
	p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p2MouseLeave(TObject *Sender)
{
	p2->Color=0x003F3122;
   p2->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
 p2->Color=0x005E4934;
	p2->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p3MouseLeave(TObject *Sender)
{
p3->Color=0x003F3122;
   p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
 p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------



void __fastcall Tiz_hlq::p1Click(TObject *Sender)
{
	if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p2Click(TObject *Sender)
{
if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::p3Click(TObject *Sender)
{
if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::mhClick(TObject *Sender)
{
if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::Image1Click(TObject *Sender)
{
	   Hide();
  iz_hlq->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::clMouseLeave(TObject *Sender)
{
cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::clClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::FormShow(TObject *Sender)
{


DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where id='21'");
DM1->tajwid->Open();

TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh2")->AsString,ms);
ms->Seek(0,soFromBeginning);
jp->LoadFromStream(ms);
Image3->Picture->Assign(jp);

OpenDialog2->FileName=("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("suara2")->AsString);
MediaPlayer2->FileName=OpenDialog2->FileName;
MediaPlayer2->Open();

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::abMouseLeave(TObject *Sender)
{
	ab->Color=0x003F3122;
   ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
ab->Color=0x005E4934;
	ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tiz_hlq::abClick(TObject *Sender)
{
  if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------

