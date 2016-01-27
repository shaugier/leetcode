#include"PrintListReversely.h"

class Solution58 {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (!pHead1)
			return pHead2;
		if (!pHead2)
			return pHead1;
		ListNode* newHead = new ListNode(0);
		ListNode* p = newHead;
		while (pHead1 && pHead2)
		{
			if (pHead1->val < pHead2->val)
			{
				p->next = pHead1;
				pHead1 = pHead1->next;
				p = p->next;
			}
			else{
				p->next = pHead2;
				pHead2 = pHead2->next;
				p = p->next;
			}
		}
		if (pHead1)
			p->next = pHead1;	
		if (pHead2)
			p->next = pHead2;
		return newHead->next;	
	}
};