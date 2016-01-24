#include"PrintListReversely.h"

class Solution32{
public:
	ListNode* FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
		if (!pHead1 || !pHead2)
			return NULL;
		int len1 = 0, len2 = 0;
		ListNode* p1 = pHead1, *p2 = pHead2;
		while (p1 && p2)
		{
			len1++;
			len2++;
			p1 = p1->next;
			p2 = p2->next;
		}
		while (p1)
		{
			len1++;
			p1 = p1->next;
		}
		while (p2)
		{
			len2++;
			p2 = p2->next;
		}
		int distance = len1 - len2;
		while (distance > 0)
		{
			pHead1 = pHead1->next;
			distance--;
		}
		while (distance < 0)
		{
			pHead2 = pHead2->next;
			distance++;
		}
		while (pHead1 && pHead2)
		{
			if (pHead1 == pHead2)
				break;
			pHead1 = pHead1->next;
			pHead2 = pHead2->next;
		}
		if (!pHead1 && !pHead2)
			return NULL;
		return pHead1;
	}
};


class Solution31{
public:
	ListNode* FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
		if (!pHead1 || !pHead2)
			return NULL;
		vector<ListNode*> v1, v2;
		while (pHead1 && pHead2)
		{
			v1.push_back(pHead1);
			v2.push_back(pHead2);
			pHead1 = pHead1->next;
			pHead2 = pHead2->next;
		}
		while (pHead1)
		{
			v1.push_back(pHead1);
			pHead1 = pHead1->next;
		}
		while (pHead2)
		{
			v2.push_back(pHead2);
			pHead2 = pHead2->next;
		}
		int i = v1.size() - 1;
		int j = v2.size() - 1;
		if (v1[i] != v2[j])
			return NULL;
		while (i > 0 && j > 0)
		{
			if (v1[--i] != v2[--j])
				return v1[i+1];
		}
		if (i == 0 || j == 0)
			return v1[i];	
		return NULL;
	}
};