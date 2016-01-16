#include<iostream>
#include<vector>

using namespace std;

class Solution13 {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> evens;
		int pivot = 0;
		while (pivot < array.size() && array[pivot] % 2 == 1)
			pivot++;
		int i = pivot;
		while (i < array.size())
		{
			while (i < array.size() && array[i] % 2 == 0)
			{
				evens.push_back(array[i]);
				i++;
			}
			while (array[i] % 2 == 1 && pivot < i)
			{
				array[pivot++] = array[i++];
				if (i == array.size())
					break;
			}
		}
		int j = 0;
		while (pivot < array.size())
		{
			array[pivot++] = evens[j++];
		}
	}
};