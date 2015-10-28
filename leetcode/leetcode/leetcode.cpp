#include"leethead.h"

void main()
{
	vector<string> strs = { "ch", "changefor", "concentrate", "concern" };
	string temp;
	int shortest = (*strs.begin()).size();
	for (vector<string>::iterator it = strs.begin(); it != strs.end();it++)
	{
		shortest = min((int)(*it).size(), shortest);
	}
	int i = 0;
	bool flag = false;
	while (true)
	{
		for (int k = 0; k < strs.size()-1; k++)
		{
			if (strs[k][i] != strs[k + 1][i])
			{
				flag = true;
				break;
			}
		}
		
		if (flag)
		{
			temp = strs[0].substr(0, i);
			break;
		}
		i++;

	}
	cout << temp << endl;


	/*vector<string> strs = { "something new", "something blue", "changefor", "concentrate", "concern" };
	string temp;
	for (int i = 0; i < strs.size(); i++)
	{
		for (int j = i + 1; j < strs.size(); j++)
		{
			int pi = 0, pj = 0;
			while (pi < strs[i].size() && pj < strs[j].size())
			{
				if (strs[i][pi] != strs[j][pj])
					break;
				pi++;
				pj++;
			}
			if (pi > temp.size())
				temp = strs[i].substr(0, pi );
		}
		
	}
	cout << temp << endl;*/
}