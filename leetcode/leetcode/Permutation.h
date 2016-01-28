#include"leethead2.h"

class Solution25 {
public:
	vector<string> permutation2(string str)
	{
		if (str.empty())
			return{};
		if (str.size() == 1)
			return{str};
		vector<string> vs;
		string temp;
		for (int i = 0; i < str.size(); i++)
		{
			if (i + 1 < str.size() && str[i] == str[i + 1])
				continue;
			temp = str;
			temp.erase(i,1);
			vector<string> answer = permutation2(temp);
			for (int j = 0; j < answer.size(); j++)
			{
				vs.push_back(str[i] + answer[j]);
			}
		}
		return vs;
	}
	vector<string> permutation(string str) {
		vector<string> vs;
		if (str.empty())
			return vs;
		vs.push_back(str);
		while (next_permutation(str))
		{
			vs.push_back(str);
		}
		return vs;
	}

	bool next_permutation(string& str)
	{
		int i = str.size() - 2;
		if (i < 0)
			return false;
		int ii = i + 1, j = ii;
		while (i >= 0 && str[i] > str[ii])
		{
			i--;
			ii--;
		}
		if (ii == 0)
			return false;
		while (j >= 0 && str[j] <= str[i])
			j--;
		swap(str[i], str[j]);
		reverse(str.begin() + ii, str.end());
		return true;
	}

};