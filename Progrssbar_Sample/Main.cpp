//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
	m_Count = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_STARTClick(TObject *Sender)
{
    m_Count += 10;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TimerTimer(TObject *Sender)
{
    ProgressBar->Position = m_Count;
}
//---------------------------------------------------------------------------
