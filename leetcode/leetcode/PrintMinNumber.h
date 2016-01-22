#include"leethead2.h"

bool operator< (const string& sa, const string& sb)
{
	int i = 0, j = 0;
	while (i < sa.size() || j < sb.size())
	{
		if (i == sa.size())
			i--;
		else if (j == sb.size())
			j--;
		if (sa[i] < sb[j])
			return true;
		else if (sa[i] > sb[j])
			return false;
		else{
			i++;
			j++;
		}
	}
	return false;
}
//���԰� sa+sb�� sb+sa�Ƚϣ������Ͳ��������������
class Solution29 {
public:
	//��Ա������һ��������Ĭ����thisָ�룬����myLessʵ��������������
	//��static��Աû��thisָ��
	static bool myLess(string sa, string sb)
	{
		return sa < sb;
	}
	string PrintMinNumber(vector<int> numbers) {
		if (numbers.empty())
			return "";
		vector<string> vs;
		stringstream ss;
		for (int i = 0; i < numbers.size(); i++)
		{
			ss << numbers[i];
			vs.push_back(ss.str());
			ss.str("");
		}
		sort(vs.begin(), vs.end(), myLess);
		string solution;
		for (int i = 0; i < vs.size(); i++)
			solution += vs[i];
		return solution;
	}
};