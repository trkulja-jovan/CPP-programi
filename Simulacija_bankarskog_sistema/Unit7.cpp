//---------------------------------------------------------------------------

#include <vcl.h>
#include<windows.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit6.h"
#include "PassWord.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
int x1,i=0,j;
int x;
int g;
String s;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ComboBox2Change(TObject *Sender)
{
x1=ComboBox2->ItemIndex;
switch(x1)
{
	case 0: Label16->Caption=ComboBox2->Items->Strings[0]; break;
	case 1: Label16->Caption=ComboBox2->Items->Strings[1]; break;
	case 2: Label16->Caption=ComboBox2->Items->Strings[2]; break;
	case 3: Label16->Caption=ComboBox2->Items->Strings[3]; break;
	case 4: Label16->Caption=ComboBox2->Items->Strings[4]; break;
	case 5: Label16->Caption=ComboBox2->Items->Strings[5]; break;
	case 6: Label16->Caption=ComboBox2->Items->Strings[6]; break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::BitBtn1Click(TObject *Sender)
{
int a,b,c,i=0;
 ADOTable1->Edit();
ADOTable1->First();
while(!ADOTable1->Eof)
{
	g=ADOTable1->FieldValues["Pin kod"];
	if(g==x)
	{
		ADOTable1->FieldValues["Ziro racun primaoca"]=DBEdit1->Text;
		ADOTable1->FieldValues["Svrha placanja"]=DBEdit1->Text;
		i=i+1;
		ADOTable1->Post();
			ADOTable1->Refresh();
		ADOTable1->FieldValues["Broj placanja"]=i;
		a=ADOTable1->FieldValues["Stanje racuna"];
		b=StrToInt(Edit4->Text);
		c=a-b;
		ADOTable1->Edit();
		ADOTable1->Post();
		ADOTable1->FieldValues["Stanje racuna"]=c;
		Sleep(1000);
		ShowMessage("Uplata uspe�no prosle�ena");
		Form7->Close();
		break;
	}
	ADOTable1->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormActivate(TObject *Sender)
{
ComboBox3->Clear();
ComboBox3->Text="Izaberite korisnika";
ADOTable1->First();
while(!ADOTable1->Eof)
{
ComboBox3->Items->Add(ADOTable1->FieldValues["Ime"]+ \
ADOTable1->FieldValues["Prezime"]);
i++;
ADOTable1->Next();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::ComboBox3Change(TObject *Sender)
{
j=ComboBox3->ItemIndex ;
ADOTable1->First();
while(!ADOTable1->Eof)
{ s= ADOTable1->FieldValues["Ime"]+ADOTable1->FieldValues["Prezime"];
for(i=0; i<j; i++)
if(ComboBox3->Items->Strings[i] ==s)

x= ADOTable1->FieldValues["Pin kod"];
ADOTable1->Next();
}
}
//---------------------------------------------------------------------------


