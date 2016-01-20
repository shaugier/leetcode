//#include"leethead2.h"
//
//class Solution25 {
//public:
//	vector<string> Permutation(string str) {
//		vector<string> vs;
//		if (str.empty())
//			return vs;
//		vs.push_back(str);
//		while (next_Permutation(str))
//		{
//			vs.push_back(str);
//		}
//		return vs;
//	}
//
//	bool next_Permutation(string& str)
//	{
//		int i = str.size() - 2;
//		if (i < 0)
//			return false;
//		int ii = i + 1, j = ii;
//		while (i >= 0 && str[i] > str[ii])
//		{
//			i--;
//			ii--;
//		}
//		if (ii == 0)
//			return false;
//		while (j >= 0 && str[j] <= str[i])
//			j--;
//		swap(str[i], str[j]);
//		reverse(str.begin() + ii, str.end());
//		return true;
//	}
//
//};