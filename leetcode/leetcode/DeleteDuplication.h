#include"PrintListReversely.h"
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
*/
class Solution53 {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (!pHead)
			return NULL;
		if (!pHead->next)
			return pHead;
		ListNode* newHead = pHead;
		ListNode* linkage = newHead;
		ListNode* s = newHead;
		ListNode* p = newHead->next;
		while (p)
		{
			while ( p && s->val != p->val)
			{
				if (s != linkage)
					linkage = linkage->next;
				s = s->next;
				p = p->next;
			}
			bool flag = false;
			while (p && s->val == p->val)
			{
				flag = true;
				s->next = p->next;
				p = p->next;
			}
			if (flag && linkage == s)
			{
				newHead = s->next;
				s = s->next;
				linkage = s;
				if (!s)
					break;
				p = s->next;
			}
			else if (flag)
			{
				linkage->next = p;
				s = s->next;
				if (!p)
					break;
				p = p->next;
			}

		}
		return newHead;
	}
};