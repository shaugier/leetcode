#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
#include<stack>

using namespace std;

#ifndef _TREENODE_
#define _TREENODE_
struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};



//牛客网 序列化和反序列化二叉树，AC，但是代码长啊！！！
class Solution3 {
	string preorderString;
	string inorderString;
	vector<int> pre, in;
public:
	void InorderTraverse(TreeNode* pRoot)
	{
		if (!pRoot)
			return;
		InorderTraverse(pRoot->left);
		in.push_back(pRoot->val);
		stringstream ss;
		ss << pRoot->val;
		string temp;
		ss >> temp;
		inorderString.append(temp);
		inorderString.push_back('*');
		InorderTraverse(pRoot->right);
	}
	void PreorderTraverse(TreeNode* pRoot)
	{
		if (!pRoot)
			return;
		pre.push_back(pRoot->val);
		stringstream ss;
		ss << pRoot->val;
		string temp;
		ss >> temp;
		preorderString.append(temp);
		preorderString.push_back('*');
		PreorderTraverse(pRoot->left);
		PreorderTraverse(pRoot->right);
	}
	char* Serialize(TreeNode *root) {
		if (!root)
			return NULL;
		InorderTraverse(root);
		PreorderTraverse(root);
		return const_cast<char*>(preorderString.c_str());
		/*stack<TreeNode*> storage;
		TreeNode* p = root;
		while (p || !storage.empty())
		{
			while (p)
			{
				storage.push(p);
				p = p->left;
			}
			if (!storage.empty())
			{
				stringstream ss;
				ss << storage.top()->val;
				string temp;
				ss >> temp;
				preorderString.append(temp);
				preorderString.push_back('*');
				storage.pop();
				p = p->right;
			}
		}
		p = root;*/
		
	}

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
	{
		if (pre.size() == 0 || in.size() == 0)
			return NULL;
		TreeNode *Tree = new TreeNode(*pre.begin());
		ptrdiff_t cur = find(in.begin(), in.end(), *pre.begin()) - in.begin();
		Tree->left = reConstructBinaryTree(vector<int>(pre.begin() + 1, pre.begin() + 1 + cur), vector<int>(in.begin(), in.begin() + cur));
		Tree->right = reConstructBinaryTree(vector<int>(pre.begin() + 1 + cur, pre.end()), vector<int>(in.begin() + 1 + cur, in.end()));
		return Tree;
	}
	TreeNode* Deserialize(char *str) {
		if (!str)
			return NULL;
		return reConstructBinaryTree(pre, in);
	}
};

class Solution2
{
	string S;
public:
	char* Serialize(TreeNode *root) {
		if (!root)
			return NULL;
		vector<TreeNode*> rec;

		rec.push_back(root);
		TreeNode* p = root;
		int front = 0;
		while (front < rec.size())
		{
			if (rec[front])
			{
				stringstream ss;
				ss << rec[front]->val;
				S.append(ss.str());
				rec.push_back(rec[front]->left);
				rec.push_back(rec[front]->right);
			}
			else S.push_back('-');
			front++;
			S.push_back('*');
		}
		char* temp = const_cast<char*>(S.c_str());
		return temp;
	}

	char* printChar()
	{
		string a = "eeereq";
		char *p = const_cast<char*>(a.c_str());
		return p; //here will be wrong, before return ,a.c_str() has already been destroyed
	}


	TreeNode* Deserialize(char *str) {
		if (!str)
			return NULL;
		string serial(str);
		vector<TreeNode*> tree;
		int head = 0;
		int i = 0;
		while (i < serial.size())
		{
			if (serial[i] == '*')
			{
				int value;
				stringstream ss;
				ss << serial.substr(head, i);
				ss >> value;
				TreeNode *node = new TreeNode(value);
				tree.push_back(node);
				i++;
				head = i;
			}
			else if (serial[i] == '-')
			{
				tree.push_back((TreeNode*)NULL);
				i += 2;
				head = i;
			}
			else i++;
		}
		head = 0;
		i = 1;
		while (i < tree.size() && head < tree.size())
		{
			if (!tree[head])
			{
				head++;
				continue;
			}
			if (i % 2 == 1)
			{
				tree[head]->left = tree[i];
				i++;
			}
			else{
				tree[head]->right = tree[i];
				i++;
				head++;
			}

		}
		return tree[0];
	}
};

#endif