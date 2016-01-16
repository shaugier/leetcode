#include<iostream>
#include<vector>

using namespace std;


class Solution10 {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0)
			return 0;
		int first = 0, last = rotateArray.size() - 1;
		int mid = (first + last) / 2;
		while (first < last)
		{
			if (rotateArray[last] < rotateArray[mid])
				first = mid + 1;
			else if (rotateArray[last] > rotateArray[mid])
				last = mid;
			else {
				if (rotateArray[first] == rotateArray[last])
					first++;
				else last--;
			}
			mid = (first + last) / 2;
		}
		return rotateArray[last];
	}
};