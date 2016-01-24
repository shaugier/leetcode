#include"leethead2.h"

class Solution35 {
public:
	int GetNumberOfK(vector<int> data, int k) {
		stringstream ss;
		string numbers;
		for (int i = 0; i < data.size(); i++)
		{
			ss << data[i];
			numbers = numbers + ss.str();
			ss.str("");

		}
		int result = 0;
		ss.clear();
		ss << k;
		char pivot = (ss.str()).front();
		cout << pivot;
		for (int j = 0; j < numbers.size(); j++)
		{
			if (numbers[j] == pivot)
				result++;
		}
		return result;
	}
};