object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'BANKA'
  ClientHeight = 378
  ClientWidth = 375
  Color = clMaroon
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
    Left = 24
    Top = 24
    Width = 351
    Height = 38
    Caption = 'UPLATA NA SOPSTVENI '
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 24
    Top = 68
    Width = 181
    Height = 38
    Caption = #381'IRO RA'#268'UN'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 153
    Width = 206
    Height = 26
    Caption = 'TRENUTNO STANJE: '
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWhite
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 231
    Width = 174
    Height = 26
    Caption = 'KOLI'#268'INA NOVCA:'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWhite
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 232
    Top = 159
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 232
    Top = 237
    Width = 121
    Height = 21
    TabOrder = 1
    OnChange = Edit2Change
  end
  object BitBtn1: TBitBtn
    Left = 120
    Top = 298
    Width = 161
    Height = 41
    Caption = 'PROSLEDI'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    Kind = bkOK
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object ADOTable1: TADOTable
    Active = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Joca\Docum' +
      'ents\RAD Studio\Projects\moje\Maturski\Banka.mdb;Persist Securit' +
      'y Info=False'
    CursorType = ctStatic
    TableName = 'Table1'
    Left = 80
    Top = 304
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 24
    Top = 304
  end
end
