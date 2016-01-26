#include"leethead2.h"

class Solution48 {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int sign = 0;
		if (str.front() == '-')
			sign = 1;
		else if (str.front() == '+')
			sign = 2;
		int solution = 0;
		for (int i = min(sign, 1); i < str.size(); i++)
		{
			if (str[i]>'9' || str[i] < '0')
				return 0;
			solution += (str[i] - '0')*pow(10, str.size() - i - 1);
		}
		if (sign == 1)
			solution = -solution;
		return solution;
	}
};