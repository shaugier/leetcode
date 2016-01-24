#include<set>
#include"leethead2.h"

//溢出，溢出啊！！！ 老子差点调代码调哭了 呜呜~~~
class Solution30 {
public:
	bool Insert(vector<unsigned>& vc, int front, int finishIndex)
	{
		
		vector<int> factors = { 2, 3, 5 };
		for (int i = 0; i < 3; i++)
		{
			
			unsigned temp = vc[front] * factors[i];
			if (vc.back() == temp)
				continue;
			if (vc.back() < temp)
			{
				vc.push_back(temp);
				continue;
			}	
			int first = front + 1, last = vc.size() - 1;
			int mid = (first + last) / 2;
			while (first < last)
			{
				mid = (first + last) / 2;
				if (vc[mid] < temp)
					first = mid + 1;
				else if (vc[mid] > temp)
					last = mid;
				else {
					break;
				}
			}
			if (i == 0 && last > finishIndex)
				return true;
			if (first == last && vc[first] != temp)
				vc.insert(vc.begin() + last, temp);
		}
		return false;
	}
	int GetUglyNumber_Solution(int index) {
		vector<unsigned> uglys;
		uglys.push_back(1);
		int front = 0;
		while (!Insert(uglys, front, index))
		{
			front++;
		}
		return uglys[index - 1];
	}
};