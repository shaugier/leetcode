#include"leethead2.h"

class Solution54 {
public:
	int  NumberOf1(int n) {
		int cnt = 0;
		bool flag = false;
		if (n < 0)
		{
			flag = true;
			n = ~n;
		}
		while (n)
		{
			cnt += n % 2;
			n = n >> 1;
		}
		if (flag)
			cnt = 32 - cnt;
		return cnt;
	}
};