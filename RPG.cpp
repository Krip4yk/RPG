#include <iostream>
#include <windows.h>

#include "unit.h"

using namespace std;

int main()
{
	CUnit unit("test", "mob");
	cout << "Name: " << unit.class_name << endl;
	cout << "LVL " << unit.lvl << endl;
	cout << "Stats: \n";
	cout << "	ATK " << unit.ATK << " (STR+1)*LVL+((AGL+1)*2)\n";
	cout << "	DEF " << unit.DEF << " (STR+1)*LVL*((INT/2)+1)\n";
	cout << "	KRIT " << unit.KRIT << " (LCK+1)*LVL/5\n";
	cout << "	EVA " << unit.EVA << " (AGL+1)*LVL/5\n";
	cout << "Spec: \n";
	cout << "	STR " << unit.Class.STR << endl;
	cout << "	AGL " << unit.Class.AGL << endl;
	cout << "	INT " << unit.Class.INT << endl;
	cout << "	LCK " << unit.Class.LCK << endl;
	return 0;
}
	/*
	WIN32_FIND_DATA FindFileData;
    HANDLE hf;
    hf=FindFirstFile("Classes\\*.txt", &FindFileData);
    if (hf!=INVALID_HANDLE_VALUE){
        do
		{
            cout << FindFileData.cFileName << "\n";
        }
        while (FindNextFile(hf,&FindFileData)!=0);
        FindClose(hf);
    }
    */
    
