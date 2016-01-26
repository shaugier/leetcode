#include"leethead2.h"


class Solution46 {
public:
	int res(int n)
	{
		(n == 1) || (n += res(n - 1));
		return n;
	}
	int Sum_Solution(int n) {
		int sum = 0;
		n > 0 && (sum = n + Sum_Solution(n - 1));
		return  sum;
	}
};