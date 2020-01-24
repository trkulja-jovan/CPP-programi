object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'RA'#268'UN'
  ClientHeight = 565
  ClientWidth = 460
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 112
    Width = 57
    Height = 33
    Caption = 'RSD'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 5
    Top = 216
    Width = 106
    Height = 33
    Caption = 'VALUTA'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 320
    Width = 89
    Height = 33
    Caption = 'IZNOS'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 5
    Top = 25
    Width = 450
    Height = 33
    Caption = 'MENJACNICA "IMA SE, MOZE SE"'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 456
    Width = 437
    Height = 18
    Caption = 'HVALA STO KORISTITE NASE USLUGE. VASA MENJACNICA'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 152
    Top = 504
    Width = 152
    Height = 41
    Caption = 'STAMPAJ'
    TabOrder = 0
    OnClick = Button1Click
  end
  object PrintDialog1: TPrintDialog
    Left = 24
    Top = 512
  end
end
