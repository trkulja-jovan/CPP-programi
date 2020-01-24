//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x,y;
 float z,a,b,g,d;
 bool jeziks=true,jezike;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//ISPISIVANJE DATUMA U LABEL1
void __fastcall TForm1::FormActivate(TObject *Sender)
{
Label1->Caption=Date();
Label15->Caption=Date();
TabSheet1->TabVisible=false;
TabSheet2->TabVisible=false;
}
//---------------------------------------------------------------------------
//ISPIS IZRACUNATOG NOVCANOG IZNOSA
void __fastcall TForm1::Button1Click(TObject *Sender)
{

a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
z=a/b;
Label6->Caption=FormatFloat("0.00", z);
}
//---------------------------------------------------------------------------
//IZBOROM VALUTE
//PREUZIMA SE KURS IZ MEMO I UPISUJE U EDIT
void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
x=ComboBox2->ItemIndex;
switch(x)
{
	case 0: Edit2->Text=Memo2->Lines->Strings[0] ;break;
	case 1: Edit2->Text=Memo2->Lines->Strings[1] ;break;
	case 2: Edit2->Text=Memo2->Lines->Strings[2] ;break;
	case 3: Edit2->Text=Memo2->Lines->Strings[3] ;break;
	case 4: Edit2->Text=Memo2->Lines->Strings[4] ;break;
	case 5: Edit2->Text=Memo2->Lines->Strings[5] ;break;
	case 6: Edit2->Text=Memo2->Lines->Strings[6] ;break;
	case 7: Edit2->Text=Memo2->Lines->Strings[7] ;break;
	case 8: Edit2->Text=Memo2->Lines->Strings[8] ;break;
}
}
//---------------------------------------------------------------------------
//UPISOM KOLICINE NOVCA KOJI SE MENJA
//POJAVLJUJE SE DUGME RACUNAJ
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
Button1->Enabled=true;
}
//---------------------------------------------------------------------------
//PRIKAZIVANJE SISTEMSKOG VREMENA
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Label7->Caption=Time();
Label16->Caption=Time();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ComboBox3Change(TObject *Sender)
{
y=ComboBox3->ItemIndex;

switch(y)
{
	case 0: Edit4->Text=Memo3->Lines->Strings[0] ;break;
	case 1: Edit4->Text=Memo3->Lines->Strings[1] ;break;
	case 2: Edit4->Text=Memo3->Lines->Strings[2] ;break;
	case 3: Edit4->Text=Memo3->Lines->Strings[3] ;break;
	case 4: Edit4->Text=Memo3->Lines->Strings[4] ;break;
	case 5: Edit4->Text=Memo3->Lines->Strings[5] ;break;
	case 6: Edit4->Text=Memo3->Lines->Strings[6] ;break;
	case 7: Edit4->Text=Memo3->Lines->Strings[7] ;break;
	case 8: Edit4->Text=Memo3->Lines->Strings[8] ;break;
}

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button5Click(TObject *Sender)
{
g=StrToFloat(Edit3->Text);
d=StrToFloat(Edit4->Text);
z=d*g;
Label18->Caption=FormatFloat("0", z);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
if(jezike==true)
ShowMessage("If you want to add your own currency, under the 'currency' tab enter the code mark of the currency (eur,gbp...) and next to it enter the daily buying rate for the entered currency.");
if(jeziks==true)
ShowMessage("Ukoliko zelite da dodate svoju valutu, pod stavkom 'valuta' upisite kodnu oznaku valute(eur, gbp...) a pored upisite dnevni kupovni kurs za upisanu valutu. ");
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
if(jezike==true)
ShowMessage("If you want to add your own currency, under the 'currency' tab enter the code mark of the currency (eur,gbp...) and next to it enter the daily buying rate for the entered currency.");
if(jeziks==true)
ShowMessage("Ukoliko zelite da dodate svoju valutu, pod stavkom 'valuta' upisite kodnu oznaku valute(eur, gbp...) a pored upisite dnevni prodajni kurs za upisanu valutu. ");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button8Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
TabSheet1->TabVisible=true;
TabSheet1->Show();
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button9Click(TObject *Sender)
{

Form2->Show();
Form2->Label2->Caption=Form1->ComboBox2->Items->Strings[ComboBox2->ItemIndex];
Form2->Label3->Caption=FormatFloat("0.00", z);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button10Click(TObject *Sender)
{
Form3->Show();
Form3->Label3->Caption=Form1->ComboBox3->Items->Strings[ComboBox3->ItemIndex];
Form3->Label5->Caption=FormatFloat("0.00", z);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button12Click(TObject *Sender)
{
TabSheet3->Show();
TabSheet1->TabVisible=true;
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
TabSheet3->Show();
TabSheet1->TabVisible=true;
TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Edit3Change(TObject *Sender)
{
Button5->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Exit1Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::EngleskiClick(TObject *Sender)
{
jeziks=false;
jezike=true;
Label11->Caption="INSERT THE AMOUNT OF MONEY";
Label3->Caption="INSERT THE AMOUNT OF MONEY";
Label12->Caption="EXCHANGE RATE";
Label4->Caption="EXCHANGE RATE";
TabSheet3->Caption="START";
Button6->Caption="ENTRANCE TO THE EXCHANGE OFFICE";
Button8->Caption="EXIT";
TabSheet1->Caption="BUYING";
TabSheet2->Caption="SALES";
ComboBox2->Text="CURRENCY";
ComboBox3->Text="CURRENCY";
Button1->Caption="CALCULATE";
Button5->Caption="CALCULATE";
Label13->Caption="CURRENCY";
Label8->Caption="CURRENCY";
Label9->Caption="BUYING";
Label14->Caption="SALES";
Button11->Caption="RETURN TO START";
Button12->Caption="RETURN TO START";
Button9->Caption="PRINT ACCOUNT";
Button10->Caption="PRINT ACCOUNT";
Button7->Caption="HELP";
Button4->Caption="HELP";
Label6->Caption="AMOUNT";
Label18->Caption="AMOUNT";
Button3->Caption="EXIT";
Button2->Caption="EXIT";
Label19->Caption="EXCHANGE OFFICE ''IMA SE, MOZE SE''";
Form2->Label1->Caption="RSD";
Form2->Label2->Caption="CURRENCY";
Form2->Label3->Caption="AMOUNT";
Form2->Label4->Caption="EXCHANGE OFFICE ''IMA SE, MOZE SE''";
Form2->Label5->Caption="THANK YOU FOR USING SERVICES. YOUR EXCHANGE OFFICE";
Form2->Button1->Caption="PRINT";
Form2->Width=550;
Form3->Label1->Caption="RSD";
Form3->Label3->Caption="CURRENCY";
Form3->Label5->Caption="AMOUNT";
Form3->Label6->Caption="EXCHANGE OFFICE ''IMA SE, MOZE SE''";
Form3->Label2->Caption="THANK YOU FOR USING SERVICES. YOUR EXCHANGE OFFICE";
Form3->Button1->Caption="PRINT";
Form4->Caption="About";
Form3->Width=550;
Label17->Caption="SALES";
Label20->Caption="BUYING";
Form4->Label1->Caption="The programme is made by Jovan Trkulja. Class E32.";
Form4->Label2->Caption="Technical School ''MIHAJLO PUPIN''";
Form4->Label3->Caption="Indjija";

}
//---------------------------------------------------------------------------







void __fastcall TForm1::Srpski1Click(TObject *Sender)
{
jeziks=true;
jezike=false;
Label11->Caption="UNESI KOLICINU NOVCA";
Label3->Caption="UNESI KOLICINU NOVCA";
Label12->Caption="KURS";
Label4->Caption="KURS";
TabSheet3->Caption="POCETAK";
Button6->Caption="ULAZ U MENJACNICU";
Button8->Caption="IZLAZ";
TabSheet1->Caption="KUPOVNI";
TabSheet2->Caption="PRODAJNI";
ComboBox2->Text="VALUTA";
ComboBox3->Text="VALUTA";
Button1->Caption="IZRACUNAJ";
Button5->Caption="IZRACUNAJ";
Label13->Caption="VALUTA";
Label8->Caption="VALUTA";
Label9->Caption="KUPOVNI";
Label14->Caption="PRODAJNI";
Button11->Caption="Vrati se na pocetak";
Button12->Caption="Vrati se na pocetak";
Button9->Caption="Odstampaj racun";
Button10->Caption="Odstampaj racun";
Button7->Caption="INFO";
Button4->Caption="INFO";
Label6->Caption="IZNOS";
Label18->Caption="IZNOS";
Button3->Caption="KRAJ RADA";
Button2->Caption="KRAJ RADA";
Label19->Caption="MENJACNICA ''IMA SE, MOZE SE''";
Form2->Label4->Caption="MENJACNICA ''IMA SE, MOZE SE''";
Form3->Label6->Caption="MENJACNICA ''IMA SE, MOZE SE''";
Form4->Caption="O programu";
Label17->Caption="PRODAJNI";
Label20->Caption="KUPOVNI";
Form4->Label1->Caption="Program kreirao Jovan Trkulja. Odeljenje E32.";
Form4->Label2->Caption="Tehnicka skola ''MIHAJLO PUPIN''";
Form4->Label3->Caption="Indjija";
}
//---------------------------------------------------------------------------




void __fastcall TForm1::About1Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------





