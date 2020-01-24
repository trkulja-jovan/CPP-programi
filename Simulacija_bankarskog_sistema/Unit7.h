//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TMemo *Memo1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TComboBox *ComboBox2;
	TEdit *Edit1;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TMemo *Memo2;
	TComboBox *ComboBox3;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TEdit *Edit4;
	TLabel *Label14;
	TLabel *Label16;
	TMemo *Memo3;
	TLabel *Label17;
	TEdit *Edit6;
	TADOTable *ADOTable1;
	TDataSource *DataSource1;
	TBitBtn *BitBtn1;
	TDBEdit *DBEdit1;
	TDBEdit *DBEdit2;
	void __fastcall ComboBox2Change(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ComboBox3Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
