#include"leethead2.h"

/*
	�ǵݹ飬��˼��Ϊ�ǵݹ�
	����recordMax�ĵ�i��λ�ô洢����sequence�е�0����i-1��Ԫ��������ֵ������һ��forѭ����
	����sequence���飬ÿ�������½���ʱ����ǰֵС��ǰһԪ��ֵ���������ҵ���һ��С�ڸ��½�����±꣬
	�����±��Ӧ������recordMax�е�ֵ�����½�����Ǻ������С�
	�㷨���Ӷ���sequence˳������ʱΪo(n), ����Ϊo(n^2)���������Ϊ�м�ֵ��
*/
class Solution20 {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		if (sequence.size() < 3)
			return true;
		vector<int> recordMax;
		int vmax = sequence[0];
		for (int i = 0; i < sequence.size(); i++)
		{
			vmax = max(vmax, sequence[i]);
			recordMax.push_back(vmax);
		}
		for (int j = 1; j < recordMax.size(); j++)
		{
			int temp = j - 1;
			while (temp >= 0 && sequence[temp] > sequence[j])
			{
				temp--;
			}
			if (temp >= 0 && recordMax[temp] > sequence[j])
				return false;
		}
		return true;
	}

};