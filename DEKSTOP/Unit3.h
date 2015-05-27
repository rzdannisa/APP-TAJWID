//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *config;
	TADOQuery *tajwid;
private:	// User declarations
public:		// User declarations
	__fastcall TDM1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM1 *DM1;
//---------------------------------------------------------------------------
#endif
