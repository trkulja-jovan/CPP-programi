//---------------------------------------------------------------------
#include <vcl.h>
#include<windows.h>
#pragma hdrstop

#include "PassWord.h"
#include "Unit2.h"
#include "Unit6.h"
#include "Unit9.h"
#include "Unit3.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TPasswordDlg *PasswordDlg;
extern int x;
//---------------------------------------------------------------------
__fastcall TPasswordDlg::TPasswordDlg(TComponent* AOwner)
	: TForm(AOwner)
{
PasswordDlg->Color=clMedGray;
BitBtn1->Enabled=false;
}
//---------------------------------------------------------------------
void __fastcall TPasswordDlg::CancelBtnClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TPasswordDlg::FormCreate(TObject *Sender)
{
PasswordDlg->Color=clMedGray;
BitBtn1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::BitBtn1Click(TObject *Sender)
{
x=StrToInt(Password->Text);
ADOTable1->First();
while(!ADOTable1->Eof)
{
	if(StrToInt(ADOTable1->FieldValues["Pin kod"])==x)
	{
		Form6->Label2->Caption=ADOTable1->FieldValues["Ime"];
        Form6->Label10->Caption=ADOTable1->FieldValues["Prezime"];
		Form6->Label4->Caption=ADOTable1->FieldValues["Datum rodjenja"];
		Form6->Label6->Caption=ADOTable1->FieldValues["JMBG"];
		Form6->Label8->Caption=ADOTable1->FieldValues["Mesto stanovanja"];
		Form6->Label11->Caption=ADOTable1->FieldValues["Postanski broj"];
		Form9->Label3->Caption=ADOTable1->FieldValues["Stanje racuna"];
		Form9->Edit1->Text=ADOTable1->FieldValues["Stanje racuna"];
		Form3->Edit1->Text=ADOTable1->FieldValues["Stanje racuna"];
		Form6->Show();
		PasswordDlg->Close();
		break;
	}
	else if(ADOTable1->Eof)
	{
        ShowMessage("Niste korisnik na�e banke");
		Form6->Label2->Caption=" ";
		Form6->Label4->Caption=" ";
		Form6->Label6->Caption=" ";
		Form6->Label8->Caption=" ";
		Form6->Label10->Caption=" ";
		Form6->Label11->Caption=" ";
		ShowMessage("Niste korisnik na�e banke");
		PasswordDlg->Close();
		Form6->Close();
	}
	ADOTable1->Next();
}
}
//---------------------------------------------------------------------------
void __fastcall TPasswordDlg::BitBtn2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TPasswordDlg::PasswordChange(TObject *Sender)
{
BitBtn1->Enabled=true;
}
//---------------------------------------------------------------------------

