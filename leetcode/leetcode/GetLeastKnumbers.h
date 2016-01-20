#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	�����������
	ʱ�临�Ӷ� nlgn
	����ǰ k��Ԫ�ؽ��ѣ��ӵ�k+1��Ԫ�ؿ�ʼ�����������ڶѶ��򲻲�����
	��С�ڶѶ����򽫶Ѷ��滻Ϊ��ǰԪ�أ���������

*/

class Solution21 {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		if (input.size() < k || k == 0)
			return vector<int>();
		vector<int> myHeap(input.begin(), input.begin() + k);
		make_heap(myHeap.begin(), myHeap.end());
		for (int i = k; i < input.size(); i++)
		{
			if (myHeap[0] > input[i])
			{
				myHeap[0] = input[i];
				make_heap(myHeap.begin(), myHeap.end());
				//myHeap.pop_back();
				//myHeap.push_back(input[i]);
			}
		}
		return myHeap;
	}
};