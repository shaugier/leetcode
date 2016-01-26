#include"leethead2.h"

class Solution55 {
public:
	double Power(double base, int exponent) {
		if (exponent == 0)
			return 1;
		bool flag = false;
		if (exponent < 0)
		{
			exponent = -exponent;
			flag = true;
		}
		double temp = pow(Power(base, exponent / 2), 2);
		if (exponent % 2 == 1)
			temp *= base;
		if (flag)
			temp = 1.0 / temp;
		return temp;
	}
};