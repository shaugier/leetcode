#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<utility>
#include<list>
#include<set>
#include<iterator>
#include<unordered_set>
#include<limits>
//#include<xstddef>
#include<functional>
using namespace std;

/*class BitVec{
	enum{BITSPRERWORD = 32, SHIFT = 5, MASK = 0x1F};
	int number, upper_limit, *data;
public:
	BitVec(int max = 0) :upper_limit(max)
	{
		data = new int[1 + upper_limit >> SHIFT];
		memset(data, 0, sizeof(int)*(1 + upper_limit >> SHIFT));
		number = 0;
	}
	~BitVec()
	{
		delete[] data;
		number = upper_limit = 0;
	}
	void set(int i){ data[i >> SHIFT] |= (1 << (i&MASK)); }
	void clr(int i){ data[i >> SHIFT] &= ~(1 << (i&MASK)); }
	bool test(int i){ return data[i >> SHIFT] & (1 << (i&MASK)); }
	void insert(int i)
	{
		set(i);
		++number;
	}
	void report(int *v)
	{
		int j = 0;
		for (int i = 0; i <= upper_limit; ++i)
		{
			if (test(i))
				v[j++] = i;
		}
	}
};*/

class myBitVec{
	enum{EACHINCLUDE = 32, SHIFT = 5, MASK = 0x1F };
	int *data, int_len;
public:
	myBitVec(int max = 0) :int_len(max)
	{
		data = new int[1 + (int_len >> SHIFT)];
		memset(data, 0, sizeof(int)*(1 + (int_len >> SHIFT)));
	}
	~myBitVec()
	{
		delete[] data;
	}
	void set(int i){ data[i >> SHIFT] |= (1 << (i&MASK)); }
	void clr(int i){ data[i >> SHIFT] &= ~(1 << (i&MASK)); }
	bool test(int i){ if(data[i >> SHIFT] & (1 << (i&MASK)))
		return true;
	else return false;
	}
};

