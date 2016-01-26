#include"leethead2.h"


class Solution44 {
public:
	string ReverseSentence(string str) {
		string s;
		int tail = str.size();
		while (true)
		{
			int found = str.find_last_of(' ');
			if (found < 0)
				break;
			s += str.substr(found + 1, tail - found - 1) + ' ';
			str[found] = '*';
			tail = found;
		}
		s += str.substr(0, tail);
		return s;

	}
};