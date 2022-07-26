//---------------------------------------------------------------------------

#pragma hdrstop

#include "Thread.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

__fastcall PerformThread::PerformThread() {

}

__fastcall PerformThread::PerformThread(int* _pCount) {
	m_Count = _pCount;
}

__fastcall PerformThread::~PerformThread() {

}

void __fastcall PerformThread::Execute() {

	for(int i = 0 ; i < 100 ; i++) {
        *m_Count += 10;
        Sleep(1000);
    }
}
