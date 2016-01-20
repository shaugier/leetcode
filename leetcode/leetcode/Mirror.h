#include"leethead2.h"

using namespace std;


class Solution16 {
public:
	void Mirror(TreeNode *pRoot) {
		if (!pRoot)
			return;
		TreeNode* temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};