#include"leethead2.h"

class Solution39 {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		vector<vector<int> > solution;
		if (sum < 3)
			return solution;
		int divider = sum/2 + 1;
		for (; divider > 1; divider--)
		{
			int answer = sum / divider;
			int remainder = sum%divider;
			if ( divider % 2 == 0 && divider/2 == remainder)
			{
				int first = answer - divider / 2 + 1;
				if (first < 1)
					continue;
				vector<int> tempE(1,first);
				while (tempE.size() < divider)
					tempE.push_back(tempE.back() + 1);
				solution.push_back(tempE);
			}
			else if (divider % 2 == 1 && remainder == 0)
			{
				int firstO = answer - divider / 2;
				if (firstO < 1)
					continue;
				vector<int> tempO(1, firstO);
				while (tempO.size() < divider)
					tempO.push_back(tempO.back() + 1);
				solution.push_back(tempO);
			}
		}
		return solution;
	}
};