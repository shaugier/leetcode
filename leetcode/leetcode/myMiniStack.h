#include"leethead2.h"


class Solution57 {
	vector<int> vStack;
public:
	void push(int value) {
		vStack.push_back(value);
	}
	void pop() {
		vStack.pop_back();
	}
	int top() {
		return vStack.back();
	}
	int min() {
		int mini = vStack.front();
		for (int i = 1; i < vStack.size(); i++)
			mini = mini>vStack[i] ? vStack[i] : mini;
		return mini;
	}
};