//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "mh.h"
#include "Unit3.h"
#include "mad_lazh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmadlazh *madlazh;
//---------------------------------------------------------------------------
__fastcall Tmadlazh::Tmadlazh(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmadlazh::clClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tmadlazh::Image1Click(TObject *Sender)
{
Hide();
  madlazh->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::clMouseLeave(TObject *Sender)
{
cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::FormShow(TObject *Sender)
{
DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where id='13'");
DM1->tajwid->Open();

TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh1")->AsString,ms);
ms->Seek(0,soFromBeginning);
jp->LoadFromStream(ms);
Image4->Picture->Assign(jp);

TMemoryStream*ms2 = new TMemoryStream;
TJPEGImage*jp2 = new TJPEGImage;
IdHTTP2->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh2")->AsString,ms2);
ms2->Seek(0,soFromBeginning);
jp2->LoadFromStream(ms2);
Image3->Picture->Assign(jp2);

TMemoryStream*ms3 = new TMemoryStream;
TJPEGImage*jp3 = new TJPEGImage;
IdHTTP3->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("tambahan1")->AsString,ms3);
ms3->Seek(0,soFromBeginning);
jp3->LoadFromStream(ms3);
Image2->Picture->Assign(jp3);
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p1MouseLeave(TObject *Sender)
{
	p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p1->Color=0x005E4934;
	p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------


void __fastcall Tmadlazh::p2MouseLeave(TObject *Sender)
{
	p2->Color=0x003F3122;
   p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p2->Color=0x005E4934;
	p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p3MouseLeave(TObject *Sender)
{
	   	p3->Color=0x003F3122;
   p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::mhMouseLeave(TObject *Sender)
{
	mh->Color=0x003F3122;
   mh->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::mhMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
mh->Color=0x005E4934;
	mh->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p2Click(TObject *Sender)
{
if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p1Click(TObject *Sender)
{
   if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::p3Click(TObject *Sender)
{
if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tmadlazh::mhClick(TObject *Sender)
{
  if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();
}
//---------------------------------------------------------------------------
