//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "ikfa_syfw.h"
#include "izar_syfw.h"
#include "mimi.h"
#include "mh.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tk3 *k3;
//---------------------------------------------------------------------------
__fastcall Tk3::Tk3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tk3::Image1Click(TObject *Sender)
{
 Hide();
  k3->BringToFront();

}
//---------------------------------------------------------------------------



void __fastcall Tk3::p1MouseLeave(TObject *Sender)
{
	p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p1->Color=0x005E4934;
	p1->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tk3::p2MouseLeave(TObject *Sender)
{
	p2->Color=0x003F3122;
   p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
   p2->Color=0x005E4934;
	p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p3MouseLeave(TObject *Sender)
{
		p3->Color=0x003F3122;
   p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------



void __fastcall Tk3::Panel4Click(TObject *Sender)
{
  if (!iz_syfw)
	iz_syfw = new Tiz_syfw(this);
  iz_syfw->Show();
  iz_syfw->BringToFront();
DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where namahukum='"+Panel4->Caption+"'");
DM1->tajwid->Open();
iz_syfw->Memo1->Lines->Text=DM1->tajwid->FieldByName("penjelasan")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall Tk3::p1Click(TObject *Sender)
{
	if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p2Click(TObject *Sender)
{
  if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tk3::p3Click(TObject *Sender)
{
if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tk3::mhClick(TObject *Sender)
{
if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tk3::syfwClick(TObject *Sender)
{
if (!ikf_syfw)
	ikf_syfw = new Tikf_syfw(this);
  ikf_syfw->Show();
  ikf_syfw->BringToFront();
DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where namahukum='"+syfw->Caption+"'");
DM1->tajwid->Open();
ikf_syfw->Memo1->Lines->Text=DM1->tajwid->FieldByName("penjelasan")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall Tk3::Panel2Click(TObject *Sender)
{
if (!mi_mi)
   mi_mi = new Tmi_mi(this);
  mi_mi->Show();
  mi_mi->BringToFront();

  DM1->tajwid->Close();
DM1->tajwid->SQL->Clear();
DM1->tajwid->SQL->Add("select *from hukumtajwid where namahukum='"+Panel2->Caption+"'");
DM1->tajwid->Open();
mi_mi->Memo1->Lines->Text=DM1->tajwid->FieldByName("penjelasan")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall Tk3::clMouseLeave(TObject *Sender)
{
cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tk3::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tk3::clClick(TObject *Sender)
{
 Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall Tk3::abMouseLeave(TObject *Sender)
{
	ab->Color=0x003F3122;
   ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
ab->Color=0x005E4934;
	ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::abClick(TObject *Sender)
{
  if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tk3::syfwMouseLeave(TObject *Sender)
{
syfw->Color=0x006D8413;
   syfw->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::syfwMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
syfw->Color=0x0085A016;
syfw->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::Panel2MouseLeave(TObject *Sender)
{
Panel2->Color=0x006D8413;
   Panel2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::Panel2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
Panel2->Color=0x0085A016;
Panel2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::Panel4MouseLeave(TObject *Sender)
{
Panel4->Color=0x006D8413;
   Panel4->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tk3::Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
Panel4->Color=0x0085A016;
Panel4->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

