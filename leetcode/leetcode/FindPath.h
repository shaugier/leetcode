#include"leethead2.h"

class Solution23 {
public:
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int> > Paths;
		if (!root)
			return Paths;
		vector<int> temp;
		stack<TreeNode*> record;
		TreeNode* p = root;
		int sum = 0;
		temp = Find2End(p, record, sum);
		if (sum == expectNumber)
			Paths.push_back(temp);
		while (true)
		{
			//tsum = sum;
			TreeNode* leaf = record.top();
			record.pop();
			if (record.empty())
				break;
			temp.pop_back();
			sum -= leaf->val;
			if (record.top()->left == leaf && record.top()->right)
			{
				vector<int> tt = Find2End(record.top()->right, record, sum);
				temp.insert(temp.end(), tt.begin(), tt.end()); 
				if (sum == expectNumber)
					Paths.push_back(temp);
			}
		}
		return Paths;
	}
	vector<int> Find2End(TreeNode* cur,stack<TreeNode*>& s, int& summary)
	{
		vector<int> vc;
		while (cur)
		{
			vc.push_back(cur->val);
			s.push(cur);
			summary += cur->val;
			if (cur->left)
				cur = cur->left;
			else if (cur->right)
				cur = cur->right;
			else break;
		}
		return vc;
	}
};