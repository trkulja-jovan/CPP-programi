object Form6: TForm6
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'BANKA'
  ClientHeight = 476
  ClientWidth = 794
  Color = clMedGray
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 63
    Width = 191
    Height = 26
    Caption = 'Ime i prezime klijenta'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 48
    Top = 95
    Width = 60
    Height = 27
    Caption = 'Label2'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 48
    Top = 167
    Width = 131
    Height = 26
    Caption = 'Datum ro'#273'enja'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 56
    Top = 199
    Width = 60
    Height = 27
    Caption = 'Label4'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 80
    Top = 281
    Width = 55
    Height = 26
    Caption = 'JMBG'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 32
    Top = 313
    Width = 60
    Height = 27
    Caption = 'Label6'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 8
    Top = 382
    Width = 294
    Height = 26
    Caption = 'Mesto stanovanja i po'#353'tanski broj'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 48
    Top = 414
    Width = 60
    Height = 27
    Caption = 'Label8'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 273
    Top = 27
    Width = 493
    Height = 95
    Caption = #39#39'ECO'#39#39' BANKA'
    Font.Charset = ANSI_CHARSET
    Font.Color = clNavy
    Font.Height = -67
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label10: TLabel
    Left = 130
    Top = 95
    Width = 72
    Height = 27
    Caption = 'Label10'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label11: TLabel
    Left = 130
    Top = 414
    Width = 72
    Height = 27
    Caption = 'Label11'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 589
    Top = 142
    Width = 177
    Height = 33
    Caption = 'Stanje ra'#269'una'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 589
    Top = 415
    Width = 177
    Height = 33
    Caption = 'KRAJ RADA'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 589
    Top = 346
    Width = 177
    Height = 33
    Caption = 'Kalendar'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button5Click
  end
  object MonthCalendar1: TMonthCalendar
    Left = 299
    Top = 150
    Width = 249
    Height = 190
    Date = 42636.494441354170000000
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -7
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    Visible = False
  end
  object Button7: TButton
    Left = 589
    Top = 209
    Width = 177
    Height = 31
    Caption = 'Uplata na ra'#269'un'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button7Click
  end
  object BitBtn1: TBitBtn
    Left = 383
    Top = 346
    Width = 75
    Height = 25
    Caption = 'Zatvori'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    Kind = bkCancel
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 5
    Visible = False
    OnClick = BitBtn1Click
  end
end
