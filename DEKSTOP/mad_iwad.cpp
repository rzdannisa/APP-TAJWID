//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mad_iwad.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "mh.h"
#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmd_iwad *md_iwad;
//---------------------------------------------------------------------------
__fastcall Tmd_iwad::Tmd_iwad(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::Image1Click(TObject *Sender)
{
 Hide();
  md_iwad->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p1Click(TObject *Sender)
{
 if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p2Click(TObject *Sender)
{
 if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p3Click(TObject *Sender)
{
if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::mhClick(TObject *Sender)
{
if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::clClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p1MouseLeave(TObject *Sender)
{
	p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p1->Color=0x005E4934;
	p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p2MouseLeave(TObject *Sender)
{
	p2->Color=0x003F3122;
   p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p2->Color=0x005E4934;
	p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p3MouseLeave(TObject *Sender)
{
	p3->Color=0x003F3122;
   p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

 }
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::mhMouseLeave(TObject *Sender)
{
	mh->Color=0x003F3122;
   mh->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::mhMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
mh->Color=0x005E4934;
	mh->Font->Color=clWhite;

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::FormShow(TObject *Sender)
{
DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where id='11'");
DM1->tajwid->Open();

OpenDialog1->FileName=("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("suara1")->AsString);
MediaPlayer1->FileName=OpenDialog1->FileName;
MediaPlayer1->Open();

OpenDialog2->FileName=("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("suara2")->AsString);
MediaPlayer2->FileName=OpenDialog2->FileName;
MediaPlayer2->Open();

TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh1")->AsString,ms);
ms->Seek(0,soFromBeginning);
jp->LoadFromStream(ms);
Image2->Picture->Assign(jp);

TMemoryStream*ms2 = new TMemoryStream;
TJPEGImage*jp2 = new TJPEGImage;
IdHTTP2->Get("http://ariefsetya.com/p3m/atajwid/"+DM1->tajwid->FieldByName("contoh2")->AsString,ms2);
ms2->Seek(0,soFromBeginning);
jp2->LoadFromStream(ms2);
Image3->Picture->Assign(jp2);

}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::clMouseLeave(TObject *Sender)
{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------
void __fastcall Tmd_iwad::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------