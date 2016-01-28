#include"leethead2.h"

class Solution63 {
public:
	bool isNumeric(char* string)
	{
		char *p = string;
		if (*p == '\0')
			return false;
		bool isFraction = false;
		if (*p == '+' || *p == '-')
			p++;
		else if (*p < '0'|| *p > '9')
			return false;
		while (*p != '\0' && *p >='0' && *p <='9')
		{
			p++;
		}
		switch (*p)
		{
		case '\0':return true;
		case 'E':case 'e':p++; break;
		case '.':p++; isFraction = true; break;
		default:
			return false;
		}
		if (isFraction)
		{
			while (*p != '\0' && *p >= '0' && *p <= '9')
			{
				p++;
			}
			if (*p == '\0')
				return true;
			else if (*p == 'e' || *p == 'E')
				p++;
		}
		if (*p == '+' || *p == '-')
			p++;
		else if (*p < '0' || *p > '9')
			return false;
		if (*p == '\0')
			return false;
		while (*p != '\0' && *p >= '0' && *p <= '9')
		{
			p++;
		}
		if (*p == '\0')
			return true;
		return false;
	}
};