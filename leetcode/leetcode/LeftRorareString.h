#include"leethead2.h"

class Solution41 {
public:
	string LeftRotateString(string str, int n) {
		string s = str;
		for (int i = 0; i < n / 2; i++)
			swap(s[i], s[n - i - 1]);
		for (int j = n; j < (str.size() + n)/ 2; j++)
			swap(s[j], s[str.size() - j - 1 + n]);
		for (int k = 0; k < str.size() / 2; k++)
			swap(s[k], s[str.size() - k - 1]);
		return s;
	}
};