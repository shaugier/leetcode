#include"leethead2.h"

class Solution24 {
public:
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		if (!pRootOfTree)
			return NULL;
		vector<TreeNode*> vlist;
		InorderTraverse(pRootOfTree, vlist);
		for (int i = 0; i < vlist.size() - 1; i++)
		{
			vlist[i]->right = vlist[i + 1];
			vlist[i + 1]->left = vlist[i];
		}
		return vlist.front();
	}
	void InorderTraverse(TreeNode* pRoot, vector<TreeNode*>& List)
	{
		if (!pRoot)
			return;
		InorderTraverse(pRoot->left, List);
		List.push_back(pRoot);
		InorderTraverse(pRoot->right, List);
	}
};