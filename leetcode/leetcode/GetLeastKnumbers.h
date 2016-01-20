#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	利用最大堆求解
	时间复杂度 nlgn
	先用前 k个元素建堆，从第k+1个元素开始遍历，若大于堆顶则不操作，
	若小于堆顶，则将堆顶替换为当前元素，并调整堆

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