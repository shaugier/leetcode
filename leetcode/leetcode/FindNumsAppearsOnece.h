#include"leethead2.h"

class Solution38 {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		if (data.size() < 2)
		{
			*num1 = 0;
			*num2 = 0;
			return;
		}
		sort(data.begin(), data.end());
		*num1 = data[0];
		int j = 0;
		for (int i = 1; i < data.size(); i++)
		{
			if (data[i] != data[i - 1])
			{
				if (j == 0)
				{
					*num1 = data[i - 1];
					j++;
				}
				else{
					*num2 = data[i - 1];
					j++;
				}
			}
			else i++;
		}
		if (j == 1)
			*num2 = data.back();
	}
};