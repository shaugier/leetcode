#include"leethead2.h"

using namespace std;


class Solution19 {
public:
	vector<int> PrintFromTopToBottom(TreeNode *root) {
		vector<int> printSeque;
		if (!root)
			return printSeque;
		vector<TreeNode*> store;
		store.push_back(root);
		int front = 0;
		int rear = 1;
		while (front < rear)
		{
			printSeque.push_back(store[front]->val);
			if (store[front]->left)
			{
				store.push_back(store[front]->left);
				rear++;
			}
			if (store[front]->right)
			{
				store.push_back(store[front]->right);
				rear++;
			}
			front++;
		}
		return printSeque;
	}
};