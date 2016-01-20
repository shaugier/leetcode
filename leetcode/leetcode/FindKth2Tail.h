#include"PrintListReversely.h"

using namespace std;


class Solution14 {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		vector<ListNode*> rec;
		while (pListHead)
		{
			rec.push_back(pListHead);
			pListHead = pListHead->next;
		}
		if (k > rec.size())
			return NULL;
		return rec[rec.size() - k];
	}
};