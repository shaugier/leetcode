#include"leethead2.h"

class Solution43 { //k + n
public:
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size() != 5)
			return false;
		vector<int> count(14, 0);
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] > 0 && count[numbers[i]] != 0)
				return false;
			count[numbers[i]]++;
		}
		int front = 1, rear = 13;
		while (count[front] != 1)
			front++;
		while (count[rear] != 1)
			rear--;
		return rear - front < numbers.size();
	}
};


class Solution42 { //k*lgk + n
public:
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size() != 5)
			return false;
		sort(numbers.begin(), numbers.end());
		int gap = 0;
		int zeros = 0;
		int i = 0;
		while (numbers[i] == 0)
		{
			zeros++;
			i++;
		}
		for (; i < numbers.size() - 1; i++)
		{
			int temp = numbers[i + 1] - numbers[i] - 1;
			if (temp < 0)
				return false;
			gap += temp;
			if (gap > zeros)
				return false;
		}
		return true;
	}
};