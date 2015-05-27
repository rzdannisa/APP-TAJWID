//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "kelas1.h"
#include "kelas2.h"
#include "kelas3.h"
#include "bigunah.h"
#include "bilagunah.h"
#include "depan.h"
#include "tasdid.h"
#include "mh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tawal *awal;
//---------------------------------------------------------------------------
__fastcall Tawal::Tawal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tawal::Image3Click(TObject *Sender)
{
if (!dpn)
	dpn = new Tdpn(this);
  dpn->Show();
  dpn->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tawal::Image4Click(TObject *Sender)
{
system("start UpdaterApps.exe");
}
//---------------------------------------------------------------------------

void __fastcall Tawal::Image6Click(TObject *Sender)
{
   if (!mhuruf)
	mhuruf = new Tmhuruf(this);
  mhuruf->Show();
  mhuruf->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tawal::clMouseLeave(TObject *Sender)
{
cl->Color=0x003F3122;
}
//---------------------------------------------------------------------------

void __fastcall Tawal::clMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
  cl->Color=0x001326F2;
}
//---------------------------------------------------------------------------

void __fastcall Tawal::clClick(TObject *Sender)
{
     Application->Terminate();
}
//---------------------------------------------------------------------------

