object FormMain: TFormMain
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Progressbar Sample'
  ClientHeight = 99
  ClientWidth = 313
  Color = clBtnFace
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 313
    Height = 99
    Align = alClient
    BevelOuter = bvNone
    Color = 2236962
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = -40
    ExplicitTop = -16
    ExplicitWidth = 479
    ExplicitHeight = 249
    object btn_START: TButton
      Left = 32
      Top = 40
      Width = 75
      Height = 25
      Caption = 'START'
      TabOrder = 0
      OnClick = btn_STARTClick
    end
    object ProgressBar: TProgressBar
      Left = 128
      Top = 40
      Width = 150
      Height = 25
      TabOrder = 1
    end
  end
  object Timer: TTimer
    Interval = 50
    OnTimer = TimerTimer
    Left = 1
    Top = 1
  end
end
