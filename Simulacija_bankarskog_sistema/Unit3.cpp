//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "PassWord.h"
#include "Unit6.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int x;
float y;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
Form3->Color=clMaroon;
BitBtn1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
int a,b,c;

ADOTable1->First();
while(!ADOTable1->Eof)
{
	y=ADOTable1->FieldValues["Pin kod"];
	if(y==x)
	{
		ADOTable1->Edit();
		a=StrToInt(Edit1->Text);
		b=StrToInt(Edit2->Text);
		c=a+b;
		ADOTable1->FieldValues["Stanje racuna"]=c;
		Form6->Button7->Enabled=false;
		ADOTable1->Post();
		ADOTable1->Refresh();
		Form9->Edit1->Text=ADOTable1->FieldValues["Stanje racuna"];
		Form9->Label3->Caption=ADOTable1->FieldValues["Stanje racuna"];
		ShowMessage("Uspešno ste uplatili novac na svoj raèun");
		Form3->Close();
		break;
	}
	ADOTable1->Next();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Edit2Change(TObject *Sender)
{
BitBtn1->Enabled=true;
}
//---------------------------------------------------------------------------

