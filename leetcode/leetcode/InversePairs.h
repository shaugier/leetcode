#include"leethead2.h"

class Solution33 {
public:
	int InversePairs(vector<int> data) {
		if (data.size() < 2)
			return 0;
		int pairs = 0;
		for (int i = data.size()-2; i >=0 ; i--)
		{
			for (int j = i + 1; j < data.size(); j++)
			{
				if (data[i] >data[j])
					pairs++;
			}
		}
		return pairs;
	}
};