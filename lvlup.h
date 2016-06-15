#ifndef LVLUP_H
#define LVLUP_H

class CLvlup
{
	public:
		unsigned long long int *table;
		int n;
		CLvlup()
		{
			n = 1;
			table = new unsigned long long int[n];
			table[0] = 250;
		};
		bool up(int& lvl, int exp)
		{
			if (exp>=table[n-1])
			{
				lvl++;
				newlvl(lvl);
				return true;
			}
			else return false;
		};
		void newlvl(int lvl)
		{
			n++;
			table[n-1] += table[n-1]*(lvl/4+1);
		};
	private:
};

#endif

