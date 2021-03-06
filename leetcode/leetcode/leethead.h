#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<utility>
#include<list>
#include<set>
#include<iterator>
#include<unordered_set>
#include<limits>
#include<time.h>
#include<fstream>
//#include<xstddef> this head file is already included by other head
#include<functional>
#include<iomanip>
#include<Windows.h>
#include<WinBase.h>
//head file stl_config.h has been aborted in 2001
//#include<stl_config.h>
#include<stack>
#include<heapapi.h>
#include<queue>
#include<sstream>

#define WORDMAX 100
#define LEN 12
#define YEAR 365
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

#endif


//push heap is independent
//pop heap& make heap --->  ajust heap
/*that's why the order is push, ajust, pop, make heap*/
void myPush_heap(vector<int>& v, int val)
{
	v.push_back(val);
	int holeIndex = v.size() - 1;
	int parent = (holeIndex - 1) / 2;
	while (true)
	{
		if (v[parent] < v[holeIndex])
			swap(v[parent], v[holeIndex]);
		else break;
		holeIndex = parent;
		parent = (holeIndex - 1) / 2;
	}
}
void ajust_heap(vector<int>& v, int hole)//push down hole
{
	int rChild = (hole + 1) * 2;
	while (rChild < v.size())
	{
		if (v[rChild] < v[rChild - 1])
			rChild--;
		if (v[hole] > v[rChild])
			break;
		swap(v[hole], v[rChild]);
		hole = rChild;
		rChild = (hole + 1) * 2;
	}
	if (rChild == v.size() && v[rChild - 1] > v[hole])
		swap(v[rChild - 1], v[hole]);
}

void myPop_heap(vector<int>& v)
{
	if (v.size() < 1)
		return;
	swap(v[0], v[v.size() - 1]);
	v.pop_back();
	ajust_heap(v, 0);
}

void myMake_heap(vector<int>& vc)
{
	if (vc.size() < 2)
		return;
	int parent = (vc.size() - 2) / 2;
	while (parent >= 0)
	{
		//ajust must execute for each parent
		ajust_heap(vc, parent);
		parent--;
	}
}



class Solution0 {
	priority_queue<int, vector<int>, less<int>> pLess; //max_heap
	priority_queue<int, vector<int>, greater<int>> pGreater; //min_heap
public:
	void Insert(int num)
	{
		if (pLess.empty() || num <= pLess.top())
			pLess.push(num);
		else pGreater.push(num);
		if (pLess.size() == pGreater.size() + 2)
		{
			pGreater.push(pLess.top());
			pLess.pop();
		}
		if (pLess.size() + 1 == pGreater.size())
		{
			pLess.push(pGreater.top());
			pGreater.pop();
		}
	}

	double GetMedian()
	{
		return pLess.size() == pGreater.size() ? (pLess.top() + pGreater.top()) / 2.0 : pLess.top();
	}

};
vector<TreeNode*> InOrderTraverse(TreeNode* pNode)
{
	vector<TreeNode*> temp;
	if (!pNode)
		return temp;
	vector<TreeNode*> t2 = InOrderTraverse(pNode->left);
	temp.insert(temp.end(), t2.begin(), t2.end());
	temp.push_back(pNode);
	t2 = InOrderTraverse(pNode->right);
	temp.insert(temp.end(), t2.begin(), t2.end());
	return temp;
}
void InorderTraverseIterate(TreeNode* root)
{
	stack<TreeNode*> s;
	TreeNode* p = root;
	while (p || !s.empty())
	{
		while (p)
		{
			s.push(p);
			p = p->left;
		}
		if (!s.empty())
		{
			p = s.top();
			cout << p->val << " ";
			s.pop();
			p = p->right;
		}
	}
}

TreeNode* KthNode(TreeNode* pRoot, unsigned int k)
{
	stack<TreeNode*> s;
	TreeNode* p = pRoot;
	int cnt = 0;
	//重点是用stack存储节点，有左孩子就一直进栈，
	//没有的时候打印当前节点，出栈，访问右子树
	while (p || !s.empty())
	{
		while (p)
		{
			s.push(p);
			p = p->left;
		}
		if (!s.empty())
		{
			p = s.top();
			cnt++;
			if (cnt == k)
				return p;
			s.pop();
			p = p->right;
		}
	}
	return NULL;
}

//TreeNode* KthNode(TreeNode* pRoot, unsigned int k)
//{
//	vector<TreeNode*> inOrderVec = InOrderTraverse(pRoot);
//	if (k > inOrderVec.size())
//		return NULL;
//	return inOrderVec[k-1];
//}

vector<vector<int> > Print(TreeNode* pRoot) {
	vector<vector<int> > solution;
	vector<TreeNode*> p;
	p.push_back(pRoot);
	int front = 0;
	int cnt = 1;
	while (front < p.size())
	{
		vector<int> rec;
		while (cnt-- && front < p.size())
		{
			if (p[front])
			{
				rec.push_back(p[front]->val);
				p.push_back(p[front]->left);
				p.push_back(p[front]->right);
			}
			front++;
		}
		if (rec.empty())
			break;
		cnt = 2 * rec.size();
		solution.push_back(rec);
	}
	return solution;
}

vector<vector<int> > levelOrderTraverse(TreeNode* pRoot)
{
	vector<vector<int> > print;
	vector<TreeNode*> q;
	q.push_back(pRoot);
	int front = 0;
	int cnt = 1;
	for (int i = 0; front < q.size(); i++)
	{
		vector<int> recNodes;
		while (cnt-- && front < q.size())
		{
			if (q[front])
			{
				recNodes.push_back(q[front]->val);
				q.push_back(q[front]->left);
				q.push_back(q[front]->right);
				front++;
			}
			else front++;
		}
		if (recNodes.empty())
			break;
		if (i % 2 == 1)
		{
			for (int j = 0; j < recNodes.size() / 2; j++)
			{
				int temp = recNodes[j];
				recNodes[j] = recNodes[recNodes.size() - 1 - j];
				recNodes[recNodes.size() - 1 - j] = temp;
			}
		}
		print.push_back(recNodes);
		cnt = 2 * print.back().size();
	}
	return print;


	//origin level order , this is important!!
	/*TreeNode* q[100];
	q[0] = T;
	int front = 0, rear = 1;
	while (front < rear)
	{
	if (q[front])
	{
	cout << q[front]->val << " ";
	q[rear++] = q[front]->left;
	q[rear++] = q[front]->right;
	front++;
	}
	else front++;
	}*/
}

bool isSymmetri(TreeNode* qright, TreeNode* pleft)
{
	if (qright && pleft)
	{
		if (qright->val != pleft->val)
			return false;
		return isSymmetri(qright->left, pleft->right) && isSymmetri(qright->right, pleft->left);
	}
	if (!qright && !pleft)
		return true;
	return false;
}

bool isSymmetrical(TreeNode* pRoot)
{
	if (!pRoot) //段错误 很多时候都是特殊情况未处理 ！！
		return true;
	return isSymmetri(pRoot->left, pRoot->right);
}


TreeLinkNode* GetNext(TreeLinkNode* pNode)
{
	if (pNode->right)
	{
		pNode = pNode->right;
		while (pNode->left)
			pNode = pNode->left;
		return pNode;
	}
	return pNode->right;
	TreeLinkNode *father = pNode->next;
	while (father)
	{
		if (father->left == pNode)
			return father;
		else{
			pNode = father;
			father = father->next;
		}
	}
	return father;
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


int Fibonacci(int n)
{
	int fibo = 0;
	int index = 1;
	for (int i = 1; i < n; i += 2)
	{
		fibo += index;
		index += fibo;
	}
	return n % 2 == 0 ? fibo : index;
}


bool find_half(vector<int> v, int tar)
{
	int begin = 0, end = v.size();
	int mid = end / 2;
	while (begin < end)
	{
		if (v[mid] < tar)
			begin = mid + 1;
		else if (v[mid] > tar)
			end = mid;
		else return true;
		mid = (begin + end) / 2;
	}
	return false;
}

bool Find(vector<vector<int> > array, int target) {
	//search from the leftbottom!
	int row = array.size() - 1;
	int col = 0;
	while (col < array[0].size() && row > -1)
	{
		if (array[row][col] > target)
			row--;
		else if (array[row][col] < target)
			col++;
		else return true;
	}
	return false;
	/*if (array.size() == 0)
		return false;
		vector<vector<int> >::iterator it = array.begin();
		int mid = ((*it).end() - (*it).begin() )/ 2;
		for (int i = 0; i < array.size(); i++)
		{
		if (array[i].front() > target || array[i].back() < target)
		continue;
		if (array[i][mid] <= target)
		//return find_half(vector<int> (array[i].begin() + mid, array[i].end()), target);
		return binary_search(array[i].begin() + mid, array[i].end(), target);
		//else return find_half(vector<int> (array[i].begin(), array[i].begin() + mid), target);
		else return binary_search(array[i].begin(), array[i].begin() + mid, target);
		}
		return false;*/

	/*if (array.size() == 0)
		return false;
		if (array[0][0] > target || array[array.size() - 1][array[0].size() - 1] < target)
		return false;
		int begin = 1, end = array.size()*array[0].size();
		int mid = (begin + end) / 2;
		while (begin < end)
		{
		int row = mid / array[0].size();
		int col;
		if (mid % array[0].size() == 0)
		col = array[0].size() - 1;
		else col = mid % array[0].size() - 1;
		if (array[row][col] < target)
		begin = mid + 1;
		else if (array[row][col] > target)
		end = mid - 1;
		else return true;
		mid = (begin + end) / 2;
		}
		return false;*/
}

/*
bool Find(vector<vector<int> > array, int target) {
if (array.size() == 0)
return false;
if (array[0][0] > target || array[array.size() - 1][array[0].size() - 1] < target)
return false;
int begin = 0, end = array.size() - 1;
int mid = (begin + end) / 2;
while (begin < end)
{
if (array[mid][0] > target)
end = mid - 1;
else if (array[mid][0] < target)
begin = mid;
else return true;
mid = (end + begin) / 2;
}
begin = 0;
end = array[0].size() - 1;
int mid2 = (begin + end) / 2;
while (begin < end)
{
if (array[mid][mid2] > target)
end = mid2 - 1;
else if (array[mid][mid2] < target)
begin = mid2 + 1;
else return true;
mid2 = (begin + end) / 2;
}
return false;

}
*/

bool checkValid(vector<char> temple)
{
	vector<bool> hNumber(9, 0);
	for (int i = 0; i < temple.size(); i++)
	{
		if (temple[i] == '.')
			continue;
		if (hNumber[temple[i] - '1'])
			return false;
		hNumber[temple[i] - '1'] = true;
	}
	return true;
}

bool checkRow(vector<vector<char>> tboard)
{
	for (int i = 0; i < 9; i += 3)
	{
		for (int k = 0; k < 3; k++)
		{
			vector<char> temp;
			for (int j = 0; j < 3; j++)
				temp.insert(temp.end(), tboard[i + j].begin() + 3 * k, tboard[i + j].begin() + 3 + 3 * k);
			if (!checkValid(temp))
				return false;
		}
	}
	return true;
}

struct Point{
	int x;
	int y;
	Point() :x(0), y(0){}
	Point(int a, int b) :x(a), y(b){}
};

bool collinear(Point a, Point b, Point c)
{
	if ((c.x - a.x)*(c.y - b.y) == (c.y - a.y)*(c.x - b.x))
		return true;
	return false;
}

int findFirst(vector<bool> vb, int index)
{
	for (int i = index; i < vb.size(); i++)
		if (vb[i])
			return i;
	return vb.size();
}

bool operator==(const Point& a, const Point& b)
{
	if (a.x == b.x && a.y == b.y)
		return true;
	return false;
}
#ifndef _MONTHDAYS_
#define _MONTHDAYS_
extern int Mon[LEN] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
#endif
enum Trend { INCREASE, DECREASE, FLAT };

bool myLess(vector<int> elem1, vector<int> elem2)
{
	return elem1[2] < elem2[2];
}

//template<typename T> 
//class testClass{
//public:
//	static int _data;
//};


/*class alloc{};

template < class T, class Alloc = alloc, size_t bufSize = 0 >
class deque{
public:
deque()
{
cout << "deque()" << endl;
}
};

template<class T, class Sequence>
class stack{
Sequence c;
public:
stack(){
cout << "stack()" << endl;
}

};

template<class T, class Alloc = alloc>
class myVector{
public:
typedef T value_type;
typedef value_type* iterator;
template<class T>
void insert(iterator pos, T first, T last){
cout << "insert()" << endl;
}
void swap(myVector<T, Alloc>&){
cout << "swap()" << endl;
}
};

template<class T,class Alloc>
inline void swap(myVector<T, Alloc>& x, myVector<T, Alloc>& y){
x.swap(y);
}*/


//vector<vector<int>> append(vector<int> subset, vector<int> nums, int i)
//{
//	vector<vector<int>> temp;
//	for (int k = i; k < nums.size(); k++)
//	{
//		vector<int> changeSubset(subset);
//		changeSubset.push_back(nums[k]);
//		temp.push_back(changeSubset);
//	}
//	return temp;
//}

vector<vector<int>> append(vector<vector<int>> recordOri, vector<int> nums)
{
	vector<vector<int>> solutions;
	for (vector<vector<int>>::iterator iter = recordOri.begin(); iter != recordOri.end(); iter++)
	{
		vector<vector<int>> record;
		for (int j = (*iter).back() + 1; j < nums.size(); j++)
		{
			vector<int> temp = *iter;
			temp.push_back(j);
			record.push_back(temp);
		}
		solutions.insert(solutions.end(), record.begin(), record.end());
	}
	return solutions;
}

void mergingSolutions(vector<vector<int>>& solutions, vector<vector<int>> tails, vector<int> nums)
{

	for (vector<vector<int>>::iterator iterOut = tails.begin(); iterOut != tails.end(); iterOut++)
	{
		vector<int> temp;
		for (int i = 0; i < (*iterOut).size(); i++)
			temp.push_back(nums[(*iterOut)[i]]);
		solutions.push_back(temp);
	}
}


int myBinarySearch(vector<vector<int>> nums, int departure, int destinate, int value)
{

	int mid = (departure + destinate) / 2;
	if (departure == destinate)
		return -1;
	if (nums[mid][0] < value)
		return myBinarySearch(nums, mid + 1, destinate, value);
	else if (nums[mid][0] > value)
		return myBinarySearch(nums, departure, mid, value);
	else return mid;
}


//details wrong , some test cannot pass
/*int findHIndex(vector<int> cite, int low, int high)
{
int mid = (low + high) / 2;
if (mid == low)
return cite[mid];
if (cite[mid] > high - mid)
return findHIndex(cite, low, mid);
else if (cite[mid] < high - mid)
return findHIndex(cite, mid + 1, high);
else return cite[mid];
}


struct TreeNode{
int val;
TreeNode *left, *right;
TreeNode(int x) :val(x), left(NULL), right(NULL){};
};



void inorderTraversal(TreeNode * root, vector<int>& inorderTraveSeque)
{
if ((*root).left)
inorderTraversal((*root).left , inorderTraveSeque);
inorderTraveSeque.push_back((*root).val);
if ((*root).right)
inorderTraversal((*root).right, inorderTraveSeque);
}




template<typename T>
void quick_sort_recursive(T arr[], int first, int last)
{
if (first >= last)
return;
T pivot = arr[last];
int left = first, right = last;
while (true)
{
while (pivot > arr[left])
++left;
while (pivot < arr[right])
--right;
if (left >= right)
break;
swap(arr[left], arr[right]);
++left;
--right;
}
quick_sort_recursive(arr, first, left - 1);;
quick_sort_recursive(arr, left, last);

}



vector<vector<int>> findTarget2(vector<int> candi, size_t beginIndex, int target)
{
vector<vector<int>> appendix;
for (size_t i = beginIndex; i < candi.size() && candi[i] <= target; i++)
{
int remain = target%candi[i];
if (remain == 0)
{
appendix.push_back(vector<int>(target / candi[i], candi[i]));
remain = candi[i];
}
for (int j = 1; j*candi[i] + remain < target; j++)
{
vector<vector<int>> appappendix = findTarget2(candi, i + 1, j*candi[i] + remain);
if (!appappendix.empty())
{

for (int k = 0; k < appappendix.size(); k++)
{
vector<int> temp = vector<int>((target - remain) / candi[i] - j, candi[i]);
temp.insert(temp.end(), appappendix[k].begin(), appappendix[k].end());
appendix.push_back(temp);
}
}
}

}
return appendix;
}

vector<int> findTarget(vector<vector<int>>& solus, vector<int> candi, size_t beginIndex, int target)
{
vector<int> appendix;
for (size_t i = beginIndex; i < candi.size() && candi[i] <= target; i++)
{
int remain = target%candi[i];
if (remain == 0)
{
appendix = vector<int>(target / candi[i], candi[i]);
remain = candi[i];
if (target == 20)
solus.push_back(appendix);
}

for (int j = 1; j*candi[i] + remain < target; j++)
{
vector<int> appappendix = findTarget(solus, candi, i + 1, j*candi[i] + remain);
if (!appappendix.empty())
{
appendix = vector<int>((target - remain) / candi[i] - j, candi[i]);
appendix.insert(appendix.end(), appappendix.begin(), appappendix.end());
if (target == 20)
solus.push_back(appendix);
}
}
}

return appendix;
}

int maxProfit(vector<int> price, int p, int r)
{
int mini = p, maxi = p;
for (int i = p; i < r; i++)
{
if (price[i] < price[mini])
mini = i;
if (price[i] >= price[maxi])
maxi = i;
}
if (mini <= maxi)
return price[maxi] - price[mini];
else{
//findMax
int tmaxi = mini;
for (int i = mini + 1; i < r; i++)
{
if (price[i] > price[tmaxi])
tmaxi = i;
}
int pro1 = price[tmaxi] - price[mini];
//findMin
int tmini = maxi;
for (int i = p; i < maxi; i++)
{
if (price[i] < price[tmini])
tmini = i;
}
int pro2 = price[maxi] - price[tmini];
// find between maxi and mini
int pro3 = maxProfit(price, maxi + 1, mini);
return max( max(pro1, pro2), pro3);
}
}

void findExtreme(vector<int> arr, int& low, int& high)
{
for (int i = 1; i < arr.size(); i++)
{
if (arr[i] < arr[low])
low = i;
if (arr[i] >= arr[high])
high = i;
}
}


Trend stock(vector<int> p, int i)
{
if (i + 1 == p.size())
return FLAT;
if (p[i] > p[i + 1])
return DECREASE;
if (p[i] < p[i + 1])
return INCREASE;
return FLAT;
}



struct myDate{
int tm_year;
int tm_mon;
int tm_mday;
};


bool isLeapYear(int year)
{
if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
return true;
return false;
}

int CalcuYear(myDate former, myDate later)
{
int cntLeap = 0;
for (int i = former.tm_year + 1; i < later.tm_year; i += 4)
{
if (isLeapYear(i))
cntLeap++;
}
return cntLeap;
}


int SumMon(int i)
{
int sum = 0;
for (int j = 0; j < i-1; j++)
sum += Mon[j];
return sum;
}

int CalcuDays(myDate former, myDate later)
{
int forDays = YEAR - SumMon(former.tm_mon) - former.tm_mday;
int latDays = SumMon(later.tm_mon) + later.tm_mday;
if (isLeapYear(later.tm_year) && later.tm_mon > 2)
latDays++;
if (isLeapYear(former.tm_year) && former.tm_mon < 3)
forDays++;
return  forDays + latDays;
}

void ifPrintX(int k)
{
while(k-->0)
cout << "X";
}

void printBlank(int k)
{
while(k-->0)
cout << " ";
}

void formatprint(int a, int b, int c,int d, int e)
{
printBlank(a);
ifPrintX(b);
printBlank(c);
ifPrintX(d);
printBlank(e);
cout << endl;
}


void printletter(char ch)
{
switch (ch)
{
case 'I':for (int i = 0; i < 3; i++)
formatprint(0, 9, 0, 0, 0);
for (int i = 0; i < 6; i++)
formatprint(3, 3, 3, 0, 0);
for (int i = 0; i < 3; i++)
formatprint(0, 9, 0, 0, 0);break;
case 'L':for (int i = 0; i < 9; i++)
formatprint(0, 3, 6, 0, 0);
for (int i = 0; i < 3; i++)
formatprint(0, 9, 0, 0, 0); break;
default:break;
}
cout << endl;
cout << endl;
}


void Exchange(string& s, size_t p, size_t r, size_t pos)
{
if (pos < 1)
return;
size_t cnt;
size_t end, begin, newPos;
if (r - p - pos >= pos)
{
cnt = pos;
begin = p;
end = r- pos;
newPos = pos;
}
else if (r - p - pos < pos)
{
cnt = r - p - pos;
begin = p + cnt;
end = r;
newPos = r - p - 2 * cnt;
}
else return;
if (cnt < 1)
return;
for (size_t i = p; i < cnt + p; i++)
{
char temp = s[i];
s[i] = s[r - cnt + i - p];
s[r - cnt + i - p] = temp;
}
Exchange(s, begin, end, newPos);
}



void flushEnd(string& a, string b)
{
int j = 0;
for (size_t i = a.size() - b.size(); i < a.size(); i++)
a[i] = b[j++];
}
void CircularL(string& rotation, size_t position)
{
char temp;
for (size_t i = 0; i < position; i++)
{
temp = rotation[i];
size_t j = 1;
for (j; i + j*position < rotation.size(); j++)
rotation[i + (j - 1)*position] = rotation[i + j*position];
rotation[i + (j - 1)*position] = temp;
}
}

string setSequence(string s)
{
vector<int> v(26, 0);
string tempStr;
for each (char var in s)
{
v[var-'a']++;
}
for (int i = 0; i < 26; i++)
{
if (v[i] > 0)
{
tempStr.push_back((char)(i + 'a'));
if (v[i] > 1)
tempStr.push_back('v[i]');
}
}
return tempStr;
}


void reverse(string & s, size_t begins, size_t ends)
{
while ( ends - begins > 2)
{
size_t temp = s[begins];
s[begins] = s[ends];
s[ends] = temp;
ends--;
begins++;
}
}


//LinkList
//template<class T> class Node{
//public:
//	T val;
//	Node<T> *next;
//	/*Node<T>();
//	Node<T>(T num):val(num){
//	}*/
//};
//template<class T> class LinkList{
//	Node<T> *head;
//	size_t len;
//public:
//	LinkList(){
//		len = 0;
//	}
//	void ClearList(){
//		Node<T> *temp = head;
//		while (head){
//			head = head->next;
//			delete temp;
//			temp = head;
//		}
//		len = 0;
//	}
//	bool ListEmpty(){
//		if (head)
//			return false;
//		else return true;
//	}
//	size_t ListLength(){
//		return len;
//	}
//	T GetElem(size_t i){
//		size_t cnt = 1;
//		Node<T> *temp = head;
//		while (temp && cnt < i){
//			temp = temp->next;
//			cnt++;
//		}
//		if (!temp)
//			exit(-1);
//		return temp->val;
//	}
//
//	size_t LocateElem(T e){
//		size_t cnt = 1;
//		Node<T> *temp = head;
//		while (temp){
//			if (compare(e, temp->val))
//				return cnt;
//			cnt++;
//			temp = temp->next;
//		}
//		return 0;
//	}
//
//	Node<T>* PriorElem(T cur_e){
//		Node<T>* temp = head;
//		if (temp->val == cur_e || !temp->next)
//			return NULL;
//		while (temp->next)
//		{
//			if (temp->next->val == cur_e)
//				return temp;
//			temp = temp->next;
//		}
//		return NULL;
//	}
//	Node<T>* NextElem(T cur_e){
//		Node<T>* temp = head;
//		while (temp->next){
//			if (temp->val == cur_e)
//				return temp->next;
//			temp = temp->next;
//		}
//		return NULL;
//	}
//
//	void ListInsert( T e){
//		Node<T>* p = new Node<T>();
//		p->val = e;
//		p->next = head;
//		head = p;
//		len++;
//	}
//
//};
//
//template<class T> bool compare(T e, T i){
//	if (e > i)
//		return true;
//	else return false;
//}



/*class BitVec{
	enum{BITSPRERWORD = 32, SHIFT = 5, MASK = 0x1F};
	int number, upper_limit, *data;
	public:
	BitVec(int max = 0) :upper_limit(max)
	{
	data = new int[1 + upper_limit >> SHIFT];
	memset(data, 0, sizeof(int)*(1 + upper_limit >> SHIFT));
	number = 0;
	}
	~BitVec()
	{
	delete[] data;
	number = upper_limit = 0;
	}
	void set(int i){ data[i >> SHIFT] |= (1 << (i&MASK)); }
	void clr(int i){ data[i >> SHIFT] &= ~(1 << (i&MASK)); }
	bool test(int i){ return data[i >> SHIFT] & (1 << (i&MASK)); }
	void insert(int i)
	{
	set(i);
	++number;
	}
	void report(int *v)
	{
	int j = 0;
	for (int i = 0; i <= upper_limit; ++i)
	{
	if (test(i))
	v[j++] = i;
	}
	}
	};*/

//class myBitVec{
//	enum{EACHINCLUDE = 32, SHIFT = 5, MASK = 0x1F };
//	int *data, int_len;
//public:
//	myBitVec(int max = 0) :int_len(max)
//	{
//		data = new int[1 + (int_len >> SHIFT)];
//		//*if the number can occur at most 10 times ,then SHIFT-2, right shift 8bits; MASK change to 0x07; 
//		//*each four bits represent one number, and 32bits contain 8 number
//		//data = new int[1 + (int_len >> (SHIFT - 2))];
//		
//	
//		memset(data, 0, sizeof(int)*(1 + (int_len >> SHIFT)));
//		//SHIFT-2
//	}
//	~myBitVec()
//	{
//		delete[] data;
//	}
//	//i>>SHIFT equals i%32
//	void set(int i){ data[i >> SHIFT] |= (1 << (i&MASK)); }//here 1 left shift 32bit is larger than max<usigned int>
//	//void set(int i){ data[i >> (SHIFT - 2)] |= (1 << (4 * (i & 0x07))); }
//	void clr(int i){ data[i >> SHIFT] &= ~(1 << (i&MASK));}
//	//void clr(int i){ data[i >> (SHIFT-2)] &= ~(0xA << 4 * (i & 0x07));}
//	bool test(int i){ if(data[i >> SHIFT] & (1 << (i&MASK)))
//		return true;
//	else return false;
//	}
//};

