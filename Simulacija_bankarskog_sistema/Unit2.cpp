//---------------------------------------------------------------------------
#include <vcl.h>
#include<windows.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit4.h"
#include "Unit1.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
//Form2->Color=clActiveCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::CheckBox1Click(TObject *Sender)
{
randomize();
DBEdit9->Text=rand() % 10000000+99999999;
DBEdit10->Text=rand() % 1000+9000;
BitBtn1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
BitBtn1->Enabled=false;
Form2->Color=clMedGray;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
if(DBEdit1->Text=="")
ShowMessage("Niste uneli koli�inu novca do 200 din");
else if(DBEdit1->Text!="")
{
ADOTable1->First();
while(!ADOTable1->Eof)
ADOTable1->Next();
ADOTable1->Insert();
ADOTable1->FieldValues["Ime"]=DBEdit1->Text;
ADOTable1->FieldValues["Prezime"]=DBEdit2->Text;
ADOTable1->FieldValues["Datum rodjenja"]=DBEdit3->Text;
ADOTable1->FieldValues["JMBG"]=DBEdit4->Text;
ADOTable1->FieldValues["Mesto stanovanja"]=DBEdit5->Text;
ADOTable1->FieldValues["Postanski broj"]=DBEdit6->Text;
ADOTable1->FieldValues["Licna karta"]=DBEdit7->Text;
ADOTable1->FieldValues["Mobilni telefon"]=DBEdit8->Text;
ADOTable1->FieldValues["Ziro racun"]=DBEdit9->Text;
ADOTable1->FieldValues["Pin kod"]=DBEdit10->Text;
ADOTable1->FieldValues["Stanje racuna"]=DBEdit11->Text;
ShowMessage("Uspe�no ste se prijavili u sistem 'ECO' Banke");
Form2->Close();
Form1->Show();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------

