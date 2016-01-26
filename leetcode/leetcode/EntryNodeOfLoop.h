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
class Solution52 {
public:
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		if (!pHead)
			return NULL;
		ListNode* previous = pHead;
		ListNode* front = pHead ->next;
		while (front)
		{
			previous->next = NULL;
			previous = front;
			front = front->next;
		}
		return previous;
	}
};