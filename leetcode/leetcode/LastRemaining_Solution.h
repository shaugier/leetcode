#include"leethead2.h"

class Solution45 {
public:
	int LastRemaining_Solution_2(unsigned int n, unsigned int m)
	{
		if (n == 0 || m == 0)
			return -1;
		vector<int> f(n, 0);
		for (int i = 1; i < n; i++)
		{
			f[i] = (f[i - 1] + m) % (i+1); //i+1 is ith size
		}
		return f[n - 1];
	}
	int LastRemaining_Solution(unsigned int n, unsigned int m)
	{
		if (n == 0 || m == 0)
			return -1;
		vector<int> children;
		for (int i = 0; i < n; i++)
			children.push_back(i);
		int begin = 0;
		while (children.size() > 1)
		{
			int temp = (begin + m - 1) % children.size();
			children.erase(children.begin() + temp);
			begin = temp;
		}
		return children.back();
	}
};