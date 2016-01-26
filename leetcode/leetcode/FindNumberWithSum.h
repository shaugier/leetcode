#include"leethead2.h"


class Solution40 {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> ans;
		if (array.size() < 2)
			return ans;
		int maxi = 0;
		for (int i = 0; i < array.size() - 1; i++)
		{
			if (sum - array[i] < array[i])
				break;
			if (binary_search(array.begin() + i + 1, array.end(), sum - array[i]))
				if (abs(sum - array[i] - array[i]) > maxi)
				{
					maxi = abs(sum - 2 * array[i]);
					if (ans.empty())
						ans = { array[i], sum - array[i] };
					else {
						ans[0] = array[i];
						ans[1] = sum - array[i];
					}
				}
		}
		return ans;
	}
};