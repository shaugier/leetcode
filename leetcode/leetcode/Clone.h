#include<iostream>
#include<vector>
#include<algorithm>

struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
		label(x), next(NULL), random(NULL) {
	}
};

class Solution22 {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (!pHead)
			return NULL;
		RandomListNode *newHead = new RandomListNode(pHead->label);
		newHead->random = pHead->random;
		RandomListNode *ptr = newHead;
		while (pHead->next)
		{
			pHead = pHead->next;
			ptr->next = new RandomListNode(pHead->label);
			ptr = ptr->next;
			ptr->random = pHead->random;
		}
		return newHead;
	}
};