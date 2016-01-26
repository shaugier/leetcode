#include"leethead2.h"

//unsolved!!
class Solution51 {
public:
	bool match(char* str, char* pattern)
	{
		char* ps = str;
		char* ppat = pattern; 
		stack<char> storage;
		//while (*ps != '\0' || *ppat != '\0')
		//{
		//	switch (*ppat)
		//	{
		//	case'.':storage.push(*ps); break;
		//	case'*':if ()
		//	default:
		//	}
		//}
		while (*ps != '\0' && *ppat != '\0')
		{
			if (*ps == *ppat || *ppat == '.')
			{
				ps++;
				ppat++;
				continue;
			}
			else if (*ppat == '*' )
			{
				if (*(ppat - 1) == '.')
					return true;
				if (*(ppat - 1) == *ps)
					ps++;
				else ppat++;
				continue;
			}
			else if (*(ppat + 1) == '*')
			{
				ppat++;
				ppat++;
				continue;
			}
			else break;		
		}
		if (*ps == '\0' && *ppat == '.')
		{
			if (*(ppat+1) == '*')
				return true;
		}
		if (*ps == '\0' && *ppat == '\0')
			return true;
		return false;
	}
};