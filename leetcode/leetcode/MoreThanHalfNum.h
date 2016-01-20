#include"leethead2.h"


class Solution26 {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty())
			return 0;
		sort(numbers.begin(), numbers.end());
		int cnt = 1;
		int maxi = cnt;
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			if (numbers[i] != numbers[i + 1])
			{
				maxi = max(maxi, cnt);
				cnt = 0;
			}
			cnt++;
		}
		return maxi > numbers.size() / 2 ? numbers[numbers.size() / 2] : 0;
	}
};