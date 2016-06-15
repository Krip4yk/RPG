#ifndef CLAS_S_H
#define CLAS_S_H

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class CClass
{
	public:
		string doc_class_name;
		string desc;
		string class_name;
		int STR;
		int AGL;
		int INT;
		int LCK;
		int lvl;
		int STR_price;
		int AGL_price;
		int INT_price;
		int LCK_price;
		void Class()
		{
			STR_price = 0;
		 	AGL_price = 0;
			INT_price = 0;
			LCK_price = 0;
			doc_class_name="Classes\\"+class_name+".txt";
			ifstream fout(doc_class_name.c_str(), ios_base::out);
			fout >> lvl;
			fout >> STR;
			fout >> AGL;
			fout >> INT;
			//fout >> LCK; cout << STR << " : " << AGL << " : " << INT << " : " << LCK << "\n";
			fout.close();
			for (int i=1; i<=STR; i++)
			{
				STR_price = ((i)*3/2)+(STR_price/2);
			}
			for (int i=1; i<=AGL; i++)
			{
				AGL_price = ((i)*3/2)+(AGL_price/2);
			}
			for (int i=1; i<=INT; i++)
			{
				INT_price = ((i)*3/2)+(INT_price/2);
			}
			for (int i=1; i<=LCK; i++)
			{
				LCK_price = ((i)*3/2)+(LCK_price/2);
			}
		};
		void buystr()
		{
				STR_price = ((STR)*3/2)+(STR_price/2);
		};
		void buyagl()
		{
				AGL_price = ((AGL)*3/2)+(AGL_price/2);
		};
		void buyint()
		{
				INT_price = ((INT)*3/2)+(INT_price/2);
		};
		void buylck()
		{
				LCK_price = ((LCK)*3/2)+(LCK_price/2);
		};
	private:
};

#endif

