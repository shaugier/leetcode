#include"leethead2.h"


class Solution30 {
	vector<int> primes;
public:
	bool isPrime(int num)
	{
		for (int i = 2; i <= num / 2; i++)
		{
			if (num%i == 0)
				return false;
		}
		return true;
	}
	bool isNotUgly(int number)
	{
		int tail = primes.back();
		while (tail < number)
		{
			tail += 2;
			if (isPrime(tail))
			{
				primes.push_back(tail);
			}
		}
		for (int i = 0; i < primes.size(); i++)
		{
			if (number < primes[i])
				break;
			if (number%primes[i] == 0)
				return true;
		}
		return false;
	}
	int GetUglyNumber_Solution(int index) {
		primes.push_back(7);
		int i = 1;
		while (index)
		{
			if (isNotUgly(i++))
				continue;
			index--;
		}
		return --i;
	}
};