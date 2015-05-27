//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "depan.h"
#include "Unit1.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "bigunah.h"
#include "bilagunah.h"
#include "mh.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tdpn *dpn;
//---------------------------------------------------------------------------
__fastcall Tdpn::Tdpn(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdpn::Panel3Click(TObject *Sender)
{
if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall Tdpn::Panel4Click(TObject *Sender)
{
if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();

}
//---------------------------------------------------------------------------
void __fastcall Tdpn::Panel5Click(TObject *Sender)
{
if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();
}
//---------------------------------------------------------------------------





void __fastcall Tdpn::Label2Click(TObject *Sender)
{
Timer1 -> Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall Tdpn::FormShow(TObject *Sender)
{
Timer1 -> Enabled = True;
Image5 -> Picture = Image4 -> Picture;
Image4 -> Picture = Image3 -> Picture;
Image3 -> Picture = Image2 -> Picture;
Image2 -> Picture = Image5 -> Picture;
Timer1->OnTimer = Button1Click;
}
//---------------------------------------------------------------------------


void __fastcall Tdpn::Button1Click(TObject *Sender)
{

Timer1 -> Enabled = True;
Image5 -> Picture = Image4 -> Picture;
Image4 -> Picture = Image3 -> Picture;
Image3 -> Picture = Image2 -> Picture;
Image2 -> Picture = Image5 -> Picture;
Timer1->OnTimer = Button1Click;

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::Label1Click(TObject *Sender)
{
Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p1MouseLeave(TObject *Sender)
{
	p1->Color=0x003F3122;
   p1->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	p1->Color=0x005E4934;
	p1->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p2MouseLeave(TObject *Sender)
{
	p2->Color=0x003F3122;
   p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
  p2->Color=0x005E4934;
	p2->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p3MouseLeave(TObject *Sender)
{
   	p3->Color=0x003F3122;
   p3->Font->Color=clWhite;


}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
p3->Color=0x005E4934;
	p3->Font->Color=clWhite;

}
//---------------------------------------------------------------------------





void __fastcall Tdpn::p1Click(TObject *Sender)
{
if (!k1)
	k1 = new Tk1(this);
  k1->Show();
  k1->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p2Click(TObject *Sender)
{
	if (!k2)
	k2 = new Tk2(this);
  k2->Show();
  k2->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::p3Click(TObject *Sender)
{
	if (!k3)
	k3 = new Tk3(this);
  k3->Show();
  k3->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::mhClick(TObject *Sender)
{
	if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::Image1Click(TObject *Sender)
{
Hide();
  dpn->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::clMouseLeave(TObject *Sender)
{
  cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tdpn::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
  cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tdpn::clClick(TObject *Sender)
{
   Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall Tdpn::abMouseLeave(TObject *Sender)
{
 ab->Color=0x003F3122;
   ab->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall Tdpn::abMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
 ab->Color=0x005E4934;
	ab->Font->Color=clWhite;

}
//---------------------------------------------------------------------------

void __fastcall Tdpn::abClick(TObject *Sender)
{
  if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------


void __fastcall Tdpn::Timer1Timer(TObject *Sender)
{
Timer1 -> Interval = 3000;
Image5 -> Picture = Image4 -> Picture;
Image4 -> Picture = Image3 -> Picture;
Image3 -> Picture = Image2 -> Picture;
Image2 -> Picture = Image5 -> Picture;

}
//---------------------------------------------------------------------------
