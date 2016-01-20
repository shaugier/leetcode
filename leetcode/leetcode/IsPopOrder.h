#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

class Solution18 {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.size() == 0)
			return false;
		stack<int> stacking;
		int i = 0, j = 0;
		stacking.push(pushV[i]);
		i++;
		while (i< pushV.size() && j < popV.size())
		{
			if (stacking.top() == popV[j])
			{
				stacking.pop();
				j++;
				continue;
			}
			while (pushV[i] != popV[j])
				stacking.push(pushV[i++]);
			i++;
			j++;
		}
		while (j < popV.size() && !stacking.empty())
		{
			if (popV[j] != stacking.top())
				return false;
			j++;
			stacking.pop();
		}
		if (stacking.empty())
			return true;
		return false;
		/*nt pushCur, pushRec, pushNext;
		pushCur = find(pushV.begin(), pushV.end(), popV[0]) - pushV.begin();
		pushRec = 0;
		pushNext = pushCur + 1;
		for (int j = 0; j < popV.size(); j++)
		{
			pushCur = find(pushV.begin() + pushNext, pushV.end(), popV[j]) - pushV.begin();
			pushNext = pushCur + 1;
			int popCur = j;
			while (++popCur < popV.size() && --pushCur >= pushRec)
			{
				int popNext = find(popV.begin() + popCur, popV.end(), pushV[pushCur]) - popV.end();
				if (popNext == popV.size())
					return false;
				popCur = popNext;
			}
			if (pushCur != pushRec)
				return false;
			pushRec = pushNext;
		}
		return true;*/
	}
};