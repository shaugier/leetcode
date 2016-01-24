#include"leethead2.h"


//�ݹ鰡������������������������ ������һ�Ǹ����ĸ߶Ȱ���
class Solution36 {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (!pRoot)
			return 0;
		return max(1 + TreeDepth(pRoot->left), 1 + TreeDepth(pRoot->right));
	}
};


class Solution35 {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (!pRoot)
			return 0;
		vector<TreeNode*> rightChildren;
		rightChildren.push_back(pRoot);
		vector<int> depths;
		depths.push_back(1);
		int front = 0;
		int maxi = depths[front];
		while (front < rightChildren.size())
		{
			if (rightChildren[front]->left)
			{
				rightChildren.push_back(rightChildren[front]->left);
				depths.push_back(depths[front] + 1);
				maxi = max(maxi, depths.back());
			}
			if (rightChildren[front]->right)
			{
				rightChildren.push_back(rightChildren[front]->right);
				depths.push_back(depths[front] + 1);
				maxi = max(maxi, depths.back());
			}
			front++;
		}
		return maxi;
	}
};