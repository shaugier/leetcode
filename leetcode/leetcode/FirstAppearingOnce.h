#include"leethead2.h"


class Solution62
{
	vector<int> Character;
	int index;
	int minIndex;
public:
	Solution62() :Character(vector<int>(256, 0)), index(1), minIndex(0){};
	//Insert one char from stringstream
	void Insert(char ch)
	{
		if (Character[ch] > 0)
			Character[ch] = -1;
		else if (Character[ch] == 0)
			Character[ch] = index++;
		return;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		if (Character[minIndex] > 0)
			return (char)minIndex;
		for (int i = 1; i < Character.size(); i++)
		{
			if (Character[i] > 0)
			{
				if (Character[minIndex] <= 0 || Character[minIndex] > Character[i])
					minIndex = i;
			}
		}
		if (Character[minIndex] <= 0) //注意后面 可能为-1
			return '#';
		return (char)minIndex;
	}

};