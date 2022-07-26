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

	//for(int i = 0 ; i < 100 ; i++) {
    //    *m_Count += 10;
    //    Sleep(1000);
    //}



    bool t_Rst = true;
    int t_Count = 0;

    while(t_Rst) {
    	t_Count++;
        if(t_Count % 10000000 == 0) {
            *m_Count += 1;
        }
    }
}
