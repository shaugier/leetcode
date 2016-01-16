#include<iostream>
#include<vector>

using namespace std;

class Solution11 {
public:
	int rectCover(int number) {
		if (number == 1)
			return 1;
		if (number == 2)
			return 2;
		return rectCover(number - 1) + rectCover(number - 2);
	}
};

class Solution12 {
public:
	int rectCover(int number) {
		int before = 1, current = 1;
		while (number--) //why --numberÊ±¼ä³¬³ö£¿£¿
		{
			current += before;
			before = current - before;
		}
		return before;
	}
};