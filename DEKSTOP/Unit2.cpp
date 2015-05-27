//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "stdio.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Panel30Click(TObject *Sender)
{
FILE * pFile = fopen ("ver.txt" , "r");
char mystring [100];

if (pFile == NULL)
{
	ShowMessage("Error opening file");
	return;
}
else
{
	fgets (mystring , 100 , pFile);
	puts (mystring);
	fclose (pFile);
}
	ShowMessage("Current version : "+WideString(mystring));
	TStringList*Send = new TStringList(this);
	TStringStream * Receive = new TStringStream();

	IdHTTP1->Request->UserAgent = "*";
	IdHTTP1->Request->ContentType="application/x-www-form-urlencoded";

	IdHTTP1->Post("http://ariefsetya.com/p3m/atajwid/updater/cek.php",Send,Receive);

	ShowMessage("Latest version : "+Receive->DataString);

	NEWVERSION = Receive->DataString;

	if(mystring!=Receive->DataString){
		Panel2->Show();

		ShowMessage("Your apps isn't up to date, click download to update it");
}
else{
		ShowMessage("Your apps is up to date");
}


}
//---------------------------------------------------------------------------
void __fastcall TForm2::Panel2Click(TObject *Sender)
{
system("taskkill /IM BelajarTajwidApps.exe");
TStringList*Send = new TStringList(this);
TStringStream * Receive = new TStringStream();
IdHTTP1->Request->UserAgent = "*";
IdHTTP1->Request->ContentType="text/html";

IdHTTP1->Post("http://ariefsetya.com/p3m/atajwid/updater/cek.php?cat=link&ver="+
NEWVERSION, Send, Receive);
String URL = Receive->DataString;

Receive->Clear();

IdHTTP1->Post("http://ariefsetya.com/p3m/atajwid/updater/cek.php?cat=filename&ver="+
NEWVERSION, Send, Receive);
String fn = Receive->DataString;

Receive->Clear();

IdHTTP1->Post("http://ariefsetya.com/p3m/atajwid/updater/cek.php?cat=sqlupdate&ver="+
NEWVERSION, Send, Receive);
String dbupdate = Receive->DataString;

Receive->Clear();

IdHTTP1->Post("http://ariefsetya.com/p3m/atajwid/updater/cek.php?cat=logdata&ver="+
NEWVERSION,Send,Receive);
String logdata = Receive->DataString;

Receive->Clear();

ShowMessage("Change Log : \r\n\r\n"+logdata);
TFileStream *fStream = new TFileStream(fn, fmCreate);
try
{
	try
	{
		IdHTTP1->Request->UserAgent = "*";
		IdHTTP1->Get("http://"+URL, fStream);
	}
	__finally
	{
		delete fStream;
		ShowMessage("Download Succeeded");
	}
}
catch(Exception &e)
{
	DeleteFile(fn);
	ShowMessage("Download error");
}

TMemo*m = new TMemo(this);
m->Text = NEWVERSION;
m->Lines->SaveToFile(GetCurrentDir()+"/ver.txt");
ShowMessage("Your apps is up to date");
system("start BelajarTajwidApps.exe");
system("taskkill /IM UpdaterApps.exe");

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Image2Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
