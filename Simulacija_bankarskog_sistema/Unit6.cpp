//---------------------------------------------------------------------------

#include <vcl.h>
#include<ccalendr.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ccalendr"
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button5Click(TObject *Sender)
{
MonthCalendar1->Show();
MonthCalendar1->Date=Now();
BitBtn1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
Form9->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormCreate(TObject *Sender)
{
Form6->Color=clMedGray;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button7Click(TObject *Sender)
{
Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
MonthCalendar1->Visible=false;
BitBtn1->Visible=false;
}
//---------------------------------------------------------------------------

