#include"leethead2.h"


class Solution28 {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		if (n == 0)
			return 0;
		int cntBit = 0;
		int dec = n;
		while (dec > 0)
		{
			dec /= 10;
			cntBit++;
		}

		int solu = 0;
		while (n > 9)
		{
			int highBit = n / pow(10, cntBit - 1);
			if ( highBit == 1)
			{
				solu += pow(10, cntBit - 2)*(cntBit - 1) + n - highBit*pow(10, cntBit - 1) + 1;
			}
			else if(highBit > 1){
				solu += highBit*pow(10, cntBit - 2)*(cntBit - 1) + pow(10, cntBit - 1);
			}
			n -= highBit*pow(10, cntBit - 1);
			cntBit--;
		}
		return n ? solu + 1 : solu;
	}
};