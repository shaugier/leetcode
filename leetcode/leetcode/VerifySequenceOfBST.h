#include"leethead2.h"

/*
	非递归，且思想为非递归
	数组recordMax的第i个位置存储数组sequence中第0到第i-1个元素里的最大值，见第一个for循环。
	遍历sequence数组，每当出现下降项时（当前值小于前一元素值），回溯找到第一个小于该下降项的下标，
	若此下标对应在数组recordMax中的值大于下降项，则不是后序序列。
	算法复杂度在sequence顺序排列时为o(n), 逆序为o(n^2)，其余情况为中间值。
*/
class Solution20 {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		if (sequence.size() < 3)
			return true;
		vector<int> recordMax;
		int vmax = sequence[0];
		for (int i = 0; i < sequence.size(); i++)
		{
			vmax = max(vmax, sequence[i]);
			recordMax.push_back(vmax);
		}
		for (int j = 1; j < recordMax.size(); j++)
		{
			int temp = j - 1;
			while (temp >= 0 && sequence[temp] > sequence[j])
			{
				temp--;
			}
			if (temp >= 0 && recordMax[temp] > sequence[j])
				return false;
		}
		return true;
	}

};