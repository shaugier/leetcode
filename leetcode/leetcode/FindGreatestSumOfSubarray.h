#include"leethead2.h"

class Solution27 {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		if (array.empty())
			return 0;
		vector<int> reversePositiveSum;
		int maxi = array.back();
		reversePositiveSum.push_back(maxi);
		for (int i = array.size() - 2; i >= 0; i--)
		{
			if (array[i] > reversePositiveSum.back() && reversePositiveSum.back() < 0)
			{
				reversePositiveSum.push_back(array[i]);
				continue;
			}
			int temp = reversePositiveSum.back() + array[i];
			if (temp < reversePositiveSum.back())
			{
				maxi = max(maxi, reversePositiveSum.back());
			}
			reversePositiveSum.push_back(temp);
		}
		maxi = max(maxi, reversePositiveSum.back());
		return maxi;
	}
};