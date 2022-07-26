//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include "Thread.h"
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class PerformThread;
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *btn_START;
	TProgressBar *ProgressBar;
	TTimer *Timer;
	void __fastcall btn_STARTClick(TObject *Sender);
	void __fastcall TimerTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // START
	int m_Count;
    PerformThread* m_Thread;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
