#include"leethead2.h"


class Solution49 {
public:
	//        duplication: (Output) the duplicated number in the array number
	//*p 作为参数传入，指针指向不可变！！！指向的内容可变
	bool duplicate(int numbers[], int length, int* duplication) {
		if (length < 2)
			return false;
		vector<int> cntNums(length, 0);
		for (int i = 0; i < length; i++)
		{
			if (cntNums[numbers[i]] != 0)
			{
				*duplication = numbers[i];
				return true;
			}
			cntNums[numbers[i]]++;
		}
		return false;
	}
};