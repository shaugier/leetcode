#include<iostream>
#include<vector>

using namespace std;

//recursively
class Solution7 {
public:
	int jumpFloor(int number) {
		if (number == 1)
			return 1;
		else if (number == 2)
			return 2;
		return jumpFloor(number - 1) + jumpFloor(number - 2);
	}
};

//iteratively
class Solution8 {
public:
	int jumpFloor(int number) {
		int front = 1, curr = 1;
		while (number--) {
			curr += front;
			front = curr - front;
		}
		return front;
	}
};

//jumpFloorII
class Solution9 {
public:
	int jumpFloorII(int number) {
		return pow(2, number - 1);
		//return 1<<--number;
	}
};