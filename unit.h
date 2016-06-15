#ifndef UNIT_H
#define UNIT_H

#include <string.h>

#include "clas_s.h"
#include "lvlup.h"

using namespace std;

class CUnit
{
	public:
		CClass Class;
		CLvlup lvup;
		string class_name;
		string status;
		int lvl;
		int EXP;
		int ATK;
		int DEF;
		int KRIT;
		int EVA;
		CUnit(string cl_nm, string st)
		{
			class_name = cl_nm;
			status = st;
			Class.class_name=cl_nm;
			Class.Class();
			lvl = Class.lvl;
			stats();
		};
		void stats()
		{
			ATK = (Class.STR+1)*lvl+((Class.AGL+1)*2);
			DEF = (Class.STR+1)*lvl*((Class.INT/2)+1);
			KRIT = (Class.LCK+1)*lvl/5;
			EVA = (Class.AGL+1)*lvl/5;
		};
		void add_exp(int add)
		{
			EXP+=add;
			if (lvup.up(lvl, EXP)) stats();
			
		};
		void buystr()
		{
			Class.buystr();
			stats();
		};
		void buyagl()
		{
			Class.buyagl();
			stats();
		};
		void buyint()
		{
			Class.buyint();
			stats();
		};
		void buylck()
		{
			Class.buylck();
			stats();
		};
	private:
};

#endif

