//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("mad_tamkin.cpp", md_tamkin);
USEFORM("mad_tobi.cpp", md_tobi);
USEFORM("mad_wajib.cpp", md_wajib);
USEFORM("mad_lin.cpp", md_lin);
USEFORM("mad_jaiz.cpp", mad_jz);
USEFORM("mad_kalmi.cpp", md_kalmi);
USEFORM("mad_lazh.cpp", madlazh);
USEFORM("mh.cpp", mhuruf);
USEFORM("Unit1.cpp", awal);
USEFORM("Unit3.cpp", DM1); /* TDataModule: File Type */
USEFORM("tasdid.cpp", tas);
USEFORM("mimi.cpp", mi_mi);
USEFORM("ikfa_syfw.cpp", ikf_syfw);
USEFORM("iqlab.cpp", iqlb);
USEFORM("izar_hlq.cpp", iz_hlq);
USEFORM("ikfa_hqq.cpp", ikf_hqq);
USEFORM("bigunah.cpp", bgn);
USEFORM("bilagunah.cpp", bln);
USEFORM("depan.cpp", dpn);
USEFORM("izar_syfw.cpp", iz_syfw);
USEFORM("mad_arid.cpp", md_arid);
USEFORM("mad_badal.cpp", md_badal);
USEFORM("mad_iwad.cpp", md_iwad);
USEFORM("kelas3.cpp", k3);
USEFORM("izar_wajib.cpp", iz_wajib);
USEFORM("kelas1.cpp", k1);
USEFORM("kelas2.cpp", k2);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(Tawal), &awal);
		Application->CreateForm(__classid(Tk1), &k1);
		Application->CreateForm(__classid(Tk2), &k2);
		Application->CreateForm(__classid(Tk3), &k3);
		Application->CreateForm(__classid(Tbgn), &bgn);
		Application->CreateForm(__classid(Tbln), &bln);
		Application->CreateForm(__classid(Tiqlb), &iqlb);
		Application->CreateForm(__classid(Tiz_hlq), &iz_hlq);
		Application->CreateForm(__classid(Tiz_wajib), &iz_wajib);
		Application->CreateForm(__classid(Tikf_hqq), &ikf_hqq);
		Application->CreateForm(__classid(Tmd_tobi), &md_tobi);
		Application->CreateForm(__classid(Tmad_jz), &mad_jz);
		Application->CreateForm(__classid(Tmd_wajib), &md_wajib);
		Application->CreateForm(__classid(Tmd_arid), &md_arid);
		Application->CreateForm(__classid(Tdpn), &dpn);
		Application->CreateForm(__classid(Tmd_lin), &md_lin);
		Application->CreateForm(__classid(Tmd_kalmi), &md_kalmi);
		Application->CreateForm(__classid(Tmd_badal), &md_badal);
		Application->CreateForm(__classid(Tikf_syfw), &ikf_syfw);
		Application->CreateForm(__classid(Tmi_mi), &mi_mi);
		Application->CreateForm(__classid(Tiz_syfw), &iz_syfw);
		Application->CreateForm(__classid(Ttas), &tas);
		Application->CreateForm(__classid(Tmhuruf), &mhuruf);
		Application->CreateForm(__classid(TDM1), &DM1);
		Application->CreateForm(__classid(Tmadlazh), &madlazh);
		Application->CreateForm(__classid(Tmd_iwad), &md_iwad);
		Application->CreateForm(__classid(Tmd_tamkin), &md_tamkin);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
