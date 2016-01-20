#include"leethead2.h"

using namespace std;


class Solution15 {
	vector<int> inorderNodes;
public:
	void InorderTraverse(TreeNode* root)
	{
		if (!root)
			return;
		inorderNodes.push_back(root->val);
		InorderTraverse(root->left);
		InorderTraverse(root->right);
	}
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		InorderTraverse(pRoot1);
		vector<int> nodesTree1 = inorderNodes;
		inorderNodes.clear();
		InorderTraverse(pRoot2);
		if (inorderNodes.empty())
			return false; // the OJ ask for false
		vector<int>::iterator departure = nodesTree1.begin();
		while (departure != nodesTree1.end())
		{
			int i = 0;
			ptrdiff_t head = find(departure, nodesTree1.end(), inorderNodes[i]) - nodesTree1.begin();
			if (head == nodesTree1.size())
				break;
			departure = nodesTree1.begin() + head + 1;
			while (i < inorderNodes.size())
			{
				if (nodesTree1[head] != inorderNodes[i])
					break;
				head++;
				i++;
			}
			if (i == inorderNodes.size())
				return true;
			
		}
		return false;

	}
};