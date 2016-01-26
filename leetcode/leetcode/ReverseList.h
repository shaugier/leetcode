#include"PrintListReversely.h"


class Solution56 {
public:
	ListNode* ReverseList(ListNode* pHead) {
		vector<int> ListVal;
		ListNode* p = pHead;
		while (p)
		{
			ListVal.push_back(p->val);
			p = p->next;
		}
		p = pHead;
		for (int i = ListVal.size() - 1; i >= 0; i--)
		{
			p->val = ListVal[i];
			p = p->next;
		}
		return pHead;
	}
};