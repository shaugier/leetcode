#include"leethead2.h"


class Solution37 {
	vector<int> Inorder;
public:
	int GetBalanceFactor(TreeNode* p, int bf)
	{
		if (!p)
			return ++bf;
		return GetBalanceFactor(p->left, --bf) - GetBalanceFactor(p->right,--bf);
	}

	bool InorderTraverseSequen(TreeNode* p)
	{
		if (!p)
			return true;
		InorderTraverseSequen(p->left);
		if (Inorder.back() >= p->val)
			return false;
		Inorder.push_back(p->val);
		InorderTraverseSequen(p->right);
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (!pRoot)
			return true;
		TreeNode* temp = pRoot;
		bool flag = InorderTraverseSequen(temp);
		int BF = 0;
		
		
	}
};