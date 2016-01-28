#include<regex>
#include"leethead2.h"


class Solution64 {
public:
	bool match3(char* str, char* pattern)
	{
		if (*str == '\0' && *pattern == '\0')
			return true;
		if (*pattern == '\0')
			return false;
		if (*str == '\0')
		{
			while (*pattern != '\0')
			{
				if (*(pattern + 1) != '*')
					return false;
				pattern++;
				if (*pattern == '\0')
					break;
				pattern++;
			}
		}
		if ((*pattern == *str || *pattern == '.') && *(pattern + 1) != '*')
			return match3(str + 1, pattern + 1);
		else if ((*pattern == *str || *pattern == '.') && *(pattern + 1) == '*')
			return match3(str, pattern + 2) || match3(str + 1, pattern);
		//老子鄙视这道题！！！
		/*else if (*pattern == '.'&& *(pattern + 1) == '*')
			return match3(str, pattern + 2) || match3(str + 1, pattern);*/
		else if (*pattern != *str && *(pattern + 1) == '*')
			return match3(str, pattern + 2);
		else return false;

	}
	//wrong answer ! cannt match aaa and a*a
	bool match2(char* str, char* pattern)
	{
		if (*str == '\0'&& *pattern == '\0')
			return true;
		if (*pattern == '\0')
			return false;
		string changePat;
		while (*pattern != '\0')
		{
			if (*pattern == '*')
			{
				char t = changePat.back();
				changePat.back() ='*';
				changePat.push_back(t);
			}
			else changePat.push_back(*pattern);
			pattern++;
		} 
		int index = 0;
		while (*str != '\0' || index <changePat.size())
		{
			if (*str == '\0' && changePat[index] != '*')
				return false;
			if (*str == changePat[index] || changePat[index] == '.')
			{
				str++;
				index++;
			}
			else if (changePat[index] == '*')
			{
				index++;
				if (changePat[index] == '.')
				{
					while (*str != '\0')
					{
						str++;
						if (*(str - 1) == *str)
							continue;
					}
					index++;
				}
				else if (changePat[index] != *str)
				{
					index++;
					continue;
				}
				while (*str != '\0' && changePat[index] == *str)
				{
					str++;
				}
				index++;
			}
			else return false;
		}
		return true;
	}

	//right but NiuKe do not support c++11
	bool match(char* str, char* pattern)
	{
		string pat; 
		while (*pattern != '\0')
		{
			if (*pattern == '.')
				pat += "[^]";
			else pat.push_back(*pattern);
			pattern++;
		}
		return regex_match(str, regex(pat)); // he OJ cannt recognize the regex!
	}
};