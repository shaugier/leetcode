#include"leethead2.h"

// the OJ don't need the Inorder justify.... silly....
class Solution37 {
	vector<int> Inorder;
public:
	int DepthBalance(TreeNode* p, int depth)
	{
		if (!p)
			return depth - 1;
		return max(DepthBalance(p->left, depth + 1),DepthBalance(p->right, depth + 1));
	}
	void InorderTraverseSequen(TreeNode* p)
	{
		if (!p)
			return;
		InorderTraverseSequen(p->left);
		Inorder.push_back(p->val);
		InorderTraverseSequen(p->right);
		
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (!pRoot)
			return true;
		TreeNode* temp = pRoot;
		InorderTraverseSequen(temp);
		for (int i = 1; i < Inorder.size(); i++)
		{
			if (Inorder[i] <= Inorder[i - 1])
				return false;
		}
		temp = pRoot;
		if(abs(DepthBalance(temp->left, 1) - DepthBalance(pRoot->right, 1)) > 1)
			return false;
		return true;
	}
};