//---------------------------------------------------------------------------

#ifndef ThreadH
#define ThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>

class PerformThread : public TThread {
private:
	int* m_Count;

public:
	__fastcall PerformThread();
    __fastcall PerformThread(int* _pCount);
    __fastcall ~PerformThread();

    void __fastcall Execute();

};

//---------------------------------------------------------------------------
#endif
