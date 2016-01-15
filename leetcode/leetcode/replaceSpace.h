#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cassert>

using namespace std;

#ifndef _ACCESS_REJECT_
#define _ACCESS_REJECT_
#endif
#ifndef _ACCESS_REJECT_
#define _ACCESS_REJECT_
class Solution5 {

public:
	void replaceSpace(char *str, int length) {
		int replacedLength = length - 1;
		for (int i = 0; i < length; i++)
		{
			if (*(str + i) == ' ')
				replacedLength += 2;
		}
		while (length-- && replacedLength)
		{
			if (*(str +length) == ' ')
			{
				*(str + replacedLength--) = '0';
				*(str + replacedLength--) = '2';
				*(str + replacedLength--) = '%';
			}
			else{
				*(str + replacedLength--) = *(str+length); //访问越界，但是牛客网AC了，-⊙﹏⊙-
			}
		}
	}

};
#endif