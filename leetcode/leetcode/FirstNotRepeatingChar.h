#include"leethead2.h"


class Solution34 {
public:
	int FirstNotRepeatingChar(string str) {
		if (str.empty())
			return -1;
		vector<int> vhash(58, -2);
		for (int i = 0; i < str.size();i++)
		{
			if (vhash[str[i] - 'A'] == -2)
				vhash[str[i] - 'A'] = i;
			else vhash[str[i] - 'A'] = -1;
		}
		int index = str.size();
		for (int j = 0; j < vhash.size(); j++)
		{
			if (vhash[j] >= 0)
				index = min(vhash[j], index);
		}
		if (index == str.size())
			return -1;
		return index;
	}
};