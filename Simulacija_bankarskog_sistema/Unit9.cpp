//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit6.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
Form9->Close();
Form6->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormCreate(TObject *Sender)
{
Form9->Color=clMaroon;
Edit1->Text=Label3->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::ComboBox1Change(TObject *Sender)
{
int x=ComboBox1->ItemIndex;
float y=StrToFloat(Label3->Caption),y1;
switch(x)
{
	case 0:
	{
		Edit1->Text=Label3->Caption;
		break;
    }
	case 1:
	{
		y1=y/123.81;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
	}
	case 2:
	{
		y1=y/116.32;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
	}
	case 3:
	{
        y1=y/115.73;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
	}
	case 4:
	{
        y1=y/145.04;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
	}
	case 5:
	{
        y1=y/86.76;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
	}
	case 6:
	{
        y1=y/39.84;
		FloatToStr(y1);
		Edit1->Text=FormatFloat("0.00", y1);
		break;
    }
}
}
//---------------------------------------------------------------------------

