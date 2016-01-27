#include<queue>
#include"leethead2.h"

class Solution59 {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		if (size < 1 || num.empty())
			return{};
		queue<int> currentMaxs;
		
		currentMaxs.push(0);
		int tail = 1;
		while ( tail < num.size() && tail < size)
		{
			if (num[currentMaxs.back()] == num[tail])
				currentMaxs.push(tail);
			else if (num[currentMaxs.back()] < num[tail])
			{
				queue<int> empty;
				swap(currentMaxs, empty);
				currentMaxs.push(tail);
			}
			tail++;
		}
		vector<int> windowMax;
		windowMax.push_back(num[currentMaxs.front()]);
		if (tail == num.size())
			return windowMax;
		tail = 0;
		int head = size;
		for (; head < num.size(); head++, tail++)
		{
			if (num[head] > num[currentMaxs.front()])
			{
				queue<int> empty;
				swap(currentMaxs, empty);
				currentMaxs.push(head);
				windowMax.push_back(num[head]);
			}
			else if (num[head] == num[currentMaxs.front()])
			{
				if (currentMaxs.front() == tail)
					currentMaxs.pop();
				currentMaxs.push(head);
				windowMax.push_back(num[head]);
			}
			else{
				if (currentMaxs.size() < 2 && num[tail] == num[currentMaxs.front()])
				{
					//find max between tail+1 and head
					queue<int> empty1;
					swap(currentMaxs, empty1);
					currentMaxs.push(tail + 1);
					int newTail = tail + 2;
					while (newTail < num.size() && newTail < head + 1)
					{
						if (num[currentMaxs.front()] == num[newTail])
							currentMaxs.push(newTail);
						else if (num[currentMaxs.front()] < num[newTail])
						{
							queue<int> empty2;
							swap(currentMaxs, empty2);
							currentMaxs.push(newTail);
						}
						newTail++;
					}
				}
				else if (currentMaxs.size() > 1 && tail == currentMaxs.front())
						currentMaxs.pop();
				 windowMax.push_back(num[currentMaxs.front()]);
			}
		}
		return windowMax;
	}
};