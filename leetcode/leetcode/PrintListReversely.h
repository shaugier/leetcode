#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cassert>
#include<stack>

using namespace std;


 struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
 };

class Solution6 {
public:
	vector<int> printListFromTailToHead(struct ListNode* head) {
		stack<int> nodes;
		vector<int> nodesValue;
		while (head)
		{
			//nodesValue.push_back(head->val);
			nodes.push(head->val);
			head = head->next;
		}
		while (!nodes.empty())
		{
			nodesValue.push_back(nodes.top());
			nodes.pop();
		}	
		return nodesValue;
	}
};