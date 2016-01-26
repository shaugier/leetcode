#include"leethead2.h"

class Solution47 {
public:
	int Add(int num1, int num2)
	{
		int C = num1 & num2;
		int Ans = num1^num2;
		int temp;
		while (C != 0)
		{
			C = C << 1;
			temp = Ans^C;
			C = Ans&C;
			Ans = temp;
		}
		return Ans;
	}
};