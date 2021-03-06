//#include"leethead.h"
//#include "stack2queue.h"
//#include"replaceSpace.h"
//#include"jumpFloor.h"
//#include"reverseArray.h"
//#include"recCover.h"
//#include"reOrderArray.h"
//#include"FindKth2Tail.h"
//#include"HasSubtree.h"
//#include"Mirror.h"
//#include"PrintMatClockwise.h"
//#include"IsPopOrder.h"
//#include"PrintBTreeFromTop2Bottom.h"
//#include"VerifySequenceOfBST.h"
//#include"GetLeastKnumbers.h"
//#include"Clone.h"
//#include"FindPath.h"
//#include"Convert.h"
#include"Permutation.h"
//#include"MoreThanHalfNum.h"
//#include"FindGreatestSumOfSubarray.h"
//#include"Count_1.h"
//#include"PrintMinNumber.h"
//#include"UglyNumber.h"
//#include"FirstCommonNode.h"
//#include"InversePairs.h"
//#include"FirstNotRepeatingChar.h"
//#include"GetNumberOfK.h"
//#include"TreeDepth.h"
//#include"IsBalanced_Solution.h"
//#include"FindNumsAppearsOnece.h"
//#include"FindContinuousSequence.h"
//#include"FindNumberWithSum.h"
//#include"LeftRorareString.h"
//#include"IsContinuous.h"
//#include"reverseSentence.h"
//#include"LastRemaining_Solution.h"
//#include"Sum_Solution.h"
//#include"Add.h"
//#include"Str2Int.h"
//#include"duplicate.h"
//#include"muliply.h"
//#include"match.h"
//#include"EntryNodeOfLoop.h"
//#include"DeleteDuplication.h"
//#include"NumberOf1.h"
//#include"Power.h"
//#include"ReverseList.h"
//#include"myMiniStack.h"
//#include"Merge.h"
//#include"MaxInWindows.h"
//#include"HasFath.h"
//#include"MovingCount.h"
//#include"FirstAppearingOnce.h"
//#include"isNumeric.h"
#include"RegularMatch.h"

#define n 10000000
#define realN 1000000
//extern int Mon[];
//int testClass<int>::_data = 1;
//int testClass<char>::_data = 2;

void main()
{

	//graph
	//牛客网 正则表达式匹配  
	//老子鄙视这道题！！！！
	Solution64 solu;
	cout << solu.match3("ba", ".*") << endl;

	/*string str = "b";
	regex reg("a*b");
	cout << regex_match(str, reg) << endl;*/

	//string str = "abc";
	//regex reg("[^]abc"); // [^]匹配任意一个字符
	//cout << regex_match(str,reg);

	//牛客网 表示数值的字符串
	/*char* chs = "3.14159";
	Solution63 solu;
	cout << solu.isNumeric(chs) << endl;*/

	//牛客网 字符流中第一个不重复的字符
	/*Solution62 solu;
	string str = "goog";
	int k = 0;
	while (k < str.size())
		solu.Insert(str[k++]);
	cout << solu.FirstAppearingOnce() << endl;*/

	//牛客网 机器人运动范围
	/*Solution61 solu;
	cout << solu.movingCount(6, 4, 5);*/

	//牛客网 矩阵中的路径
	/*char* mat = "ABCESFCSADEE";
	int r = 3, c = 4;
	char* snake = "ABCB";
	Solution60 solu;
	cout << solu.hasPath(mat, 3, 4, snake);*/

	//牛客网 滑动窗口的最大值
	/*vector<int> sequence = { 4, 3, 1, 2, 6, 2, 5, 1 };
	Solution59 solu;
	solu.maxInWindows(sequence, 3);*/

	//牛客网 合并两个排序的链表
	/*ListNode* front = new ListNode(1);
	ListNode* p = front;
	for (int i = 3; i < 10; i++)
	{
		p->next = new ListNode(i / 2);
		p = p->next;
	}
	for (int i = 6; i < 8; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	ListNode* back = new ListNode(0);
	p = back;
	for (int i = 3; i < 7; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	for (int i = 9; i < 12; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	Solution58 solu;
	solu.Merge(front, back);*/

	//牛客网 包含min函数的栈
	/*Solution57 solu;
	for (int i = 0; i < 10; i++)
		solu.push(rand() % 100);
	solu.min();*/

	//牛客网 反转链表
	/*ListNode* front = new ListNode(1);
	ListNode* p = front;
	for (int i = 3; i < 10; i++)
	{
		p->next = new ListNode(i / 2);
		p = p->next;
	}
	for (int i = 6; i < 8; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	Solution56 solu;
	solu.ReverseList(front);*/


	//牛客网 数值的整数次方
	/*Solution55 solu;
	cout << solu.Power(2, -3);*/

	//牛客网 二进制中1的个数
	/*Solution54 solu;
	cout << solu.NumberOf1(8) <<"   "<< solu.NumberOf1(-8) << endl;*/

	//！！逻辑较混乱！！
	//牛客网 删除链表中重复的结点 
	/*ListNode* front = new ListNode(1);
	ListNode* p = front;
	for (int i = 3; i < 10; i++)
	{
		p->next = new ListNode(i/2);
		p = p->next;
	}
	for (int i = 6; i < 8; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	Solution53 solu;
	solu.deleteDuplication(front);*/


	//牛客网 正则表达式匹配    !! equal to Solution64  !!
	/*Solution51 solu;
	solu.match("", ".*");*/

	//牛客网 构建乘积数组
	/*vector<int> A = { 3, 6, 1, 2, 2, 4, 3, 5, 1 };
	Solution50 solu;
	solu.multiply(A);*/

	//牛客网 数组中重复的数字
	/*int num[5] = { 2, 1, 3, 1, 4 };
	int length = 5;
	int *dupli = num;
	Solution49 solu;
	cout << solu.duplicate(num, length, dupli) << endl;
	cout << *dupli << endl;*/

	//牛客网 把字符串转换成整数
	/*Solution48 solu;
	cout << solu.StrToInt("+123") - 23 << endl;*/
	
	//牛客网 不用加减乘除做加法
	/*Solution47 solu;
	cout << solu.Add(8, 9);*/

	//牛客网 求1+2+3+ ...+n
	/*Solution46 solu;
	cout<<solu.Sum_Solution(4);
	cout << solu.res(4);*/

	//牛客网 孩子们的游戏（圆圈中最后剩下的数）
	/*Solution45 solu;
	cout << solu.LastRemaining_Solution(18, 5) << endl;
	cout << solu.LastRemaining_Solution_2(18, 5) << endl;*/

	//牛客网 翻转单词顺序列
	/*string s = "i am a student";
	Solution44 solu;
	cout << solu.ReverseSentence(s) << endl;*/


	//牛客网 扑克牌顺子
	/*Solution42 solu;
	cout << solu.IsContinuous({ 0, 4, 6, 3, 1 });*/

	//牛客网 左旋转字符串
	/*Solution41 solu;
	string ts = "iamgtheworlds";
	cout << solu.LeftRotateString(ts, 3);*/


	//牛客网 和为S的两个数字
	/*vector<int> sortedArray = { 1, 2, 4, 7, 11, 15 };
	Solution40 solu;
	solu.FindNumbersWithSum(sortedArray, 15);*/

	//牛客网 和为S的连续正数序列
	/*Solution39 solu;
	solu.FindContinuousSequence(3);*/

	//牛客网 数组中只出现一次的数字
	/*vector<int> data = { 3, 5, 7, 2, 6, 12, 4, 7, 2, 4, 5, 12 };
	Solution38 solu;
	int num1, num2;
	solu.FindNumsAppearOnce(data, &num1, &num2);
	cout << num1 << "  " << num2 << endl;*/

	//牛客网 平衡二叉树
	/*vector<int> a = { 4, 2, 1, 3, 6, 5, 7 };
	vector<int> b = { 1, 2, 3, 4, 5, 6, 7 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution37 solu;
	solu.IsBalanced_Solution(root);*/


	//牛客网 二叉树的深度
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution36 solu;
	cout << solu.TreeDepth(root);*/


	//牛客网 数字在排序数组中出现的次数
	/*vector<int> sortedArray = { 3, 55, 56, 67, 86, 122, 143, 146, 156, 176, 176, 184 };
	Solution35 solu;
	solu.GetNumberOfK(sortedArray, 6);*/


	//牛客网 第一个只出现一次的字符位置
	/*string s = "abcdefg";
	Solution34 solu;
	solu.FirstNotRepeatingChar(s);*/

	//牛客网 数组中的逆序对
	/*vector<int> serial = { 5, 6, 4, 3, 9, 2, 1 };
	Solution33 solu;
	solu.InversePairs(serial);*/

	//牛客网 两个链表的第一个公共节点
	/*ListNode* ls1 = new ListNode(3);
	ListNode* p = ls1;
	for (int i = 2; i < 5; i++)
	{
		p->next = new ListNode(i + 3);
		p = p->next;
	}
	ListNode* ls2 = new ListNode(9);
	p = ls2;
	for (int i = 1; i < 7; i++)
	{
		p->next = new ListNode(i);
		p = p->next;
	}
	Solution32 solu;
	solu.FindFirstCommonNode(ls1, ls2);*/

	//牛客网 丑数
	/*Solution30 solu;
	cout << solu.GetUglyNumber_Solution(1500) << "     ";*/

	//牛客网 把数组排成最小的数
	/*vector<int> nums = { 2,22,21, 3, 321, 32, 341 };
	Solution29 solu;
	solu.PrintMinNumber(nums);*/


	//牛客网 整数1出现的次数
	/*int number = 120;
	Solution28 solu;
	cout << solu.NumberOf1Between1AndN_Solution(number) << endl;*/

	//牛客网 连续子数组最大和
	/*vector<int> arr = { -2, -8, -1, -5, -9 };
	Solution27 solu;
	cout << solu.FindGreatestSumOfSubArray(arr) << endl;*/

	//牛客网 数组中出现超过一半的数字
	/*vector<int> nums = { 1, 2, 3, 2, 4, 2, 5, 2, 3 };
	Solution26 solu;
	solu.MoreThanHalfNum_Solution(nums);*/


	//牛客网 字符串的排列 unsolved !!!
	/*string s = "abcd";
	Solution25 solu;
	solu.permutation2(s);*/


	//牛客网 二叉搜索树转换成双向链表
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution24 solu;
	solu.Convert(root);*/

	//牛客网 二叉树中和为某一值的路径
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution23 solu;
	solu.FindPath(root, 27);*/

	//牛客网 复制复杂链表
	/*RandomListNode *rl = new RandomListNode(10);
	rl->next = new RandomListNode(3);
	rl->random = rl;
	Solution22 solu;
	solu.Clone(rl);*/

	//牛客网 最小的k个数
	/*vector<int> vc = { 2, 4, 6, 1, 8, 11, 14, 16, 3, 5, 7, 9 };
	Solution21 solu;
	vector<int> vctemp = solu.GetLeastNumbers_Solution(vc, 4);*/

	//牛客网 是否为二叉搜索树的后序遍历
	/*vector<int> vc = { 7, 4, 6, 5 };
	Solution20 solu;
	cout << solu.VerifySquenceOfBST(vc) << endl;*/

	//牛客网 从上到下打印二叉树
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution19 solu;
	solu.PrintFromTopToBottom(root);*/


	//牛客网 栈的压入、弹出序列
	/*vector<int> a = { 1,2,3,4,5 };
	vector<int> b = { 4,5,3,2,1};
	Solution18 solu;
	cout << solu.IsPopOrder(a, b);*/

	//牛客网 顺时针打印矩阵
	/*vector<vector<int>> mat = { { 1, 2, 3, 4, 5, 6 }, { 7, 8, 9, 10, 11, 12 }, { 13, 14, 15, 16, 17, 18 },
	{ 19, 20, 21, 22, 23, 24 }, { 25, 26, 27, 28, 29, 30 } };
	Solution17 solu;
	vector<int> test = solu.printMatrix(mat);*/


	//牛客网 求二叉树的镜像
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution16 solu;
	solu.Mirror(root);*/


	//牛客网 判断B是否为A的子树
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	vector<int> c = { 3, 2, 7, 5, 4, 6, 8 };
	vector<int> d = { 2, 3, 4, 5, 6, 7, 8 };
	TreeNode * root2 = reConstructBinaryTree(c, d);
	Solution15 solu;
	solu.HasSubtree(root, root2);*/

	//牛客网 链表中倒数第k个节点
	/*ListNode* front = new ListNode(3);
	ListNode* p = front;
	for (int i = 2; i < 5; i++)
	{
		p->next = new ListNode(i + 3);
		p = p->next;
	}
	Solution14 solu;
	solu.FindKthToTail(front, 3);*/



	//牛客网 调整数组顺序使奇数位于偶数前面
	/*Solution13 solu;
	solu.reOrderArray(vector < int > {1,2,4,5,7,8,9});*/

	//牛客网 矩形覆盖
	/*Solution11 solu;
	cout << solu.rectCover(7);*/

	//牛客网 旋转数组的最小数字
	/*Solution10 solu;
	cout << solu.minNumberInRotateArray(vector < int > {3, 3, 3, 3, 5, 6, 7, 8, 9, 12, 14, 14, 15, 1, 2, 3, 3, 3, 3, });
	cout << endl;*/

	//牛客网 跳台阶 jumpFloor.h

	//牛客网 反向打印链表
	/*ListNode* front = new ListNode(3);
	ListNode* p = front;
	for (int i = 2; i < 5; i++)
	{
		p->next = new ListNode(i + 3);
		p = p->next;
	}
	Solution6 solu;
	solu.printListFromTailToHead(front);*/



	//牛客网 替换空格 
	//Solution5 在头文件replaceSpace中被#ifndef隔离
	/*Solution5 solu;
	char* chs = "hi wo";
	solu.replaceSpace(chs, 5);*/

	//牛客网 用两个栈实现队列
	/*Solution4 solu;
	for (int i = 0; i < 10; i++)
		solu.push(i);
	solu.pop();
	solu.push(4);
	for (int i = 0; i < 10; i++)
		cout << solu.pop() << " ";*/


	//牛客网 序列化和反序列化二叉树
	//层序存储，总是提示发生段错误！数组越界，堆栈溢出
	//方法很好很对，要舍得给冗余空间，存成完全二叉树，而不是普通二叉树
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	Solution2  solu2;
	char *chs = solu2.Serialize(root);
	solu2.Deserialize(chs);*/




	//自己实现heap，c++库内的heap不对外开放，也是为了造轮子
	/*vector<int> v = { 5, 2, 3, 4, 1, 6, 7, 0, 8 };
	myMake_heap(v);
	myPop_heap(v);
	myPush_heap(v, 9);*/

	//与库函数操作结果对比，发现结果一样
	//v.push_back(9);
	//push_heap(v.begin(), v.end());
	//make_heap(v.begin(), v.end());


	//牛客网 流数据的中位数
	/*Solution s;
	vector<int> v = { 5, 2, 3, 4, 1, 6, 7, 0, 8 };
	for (int i = 0; i < v.size(); i++)
	{
		s.Insert(v[i]);
		cout << s.GetMedian() << " ";
	}*/

	//牛客网 二叉搜索树的第k个节点
	/*vector<int> a = { 9, 3, 2, 7, 5, 4, 6, 8, 13, 11, 14, 17 };
	vector<int> b = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 14, 17 };
	TreeNode * root = reConstructBinaryTree(a, b);
	TreeNode * node = KthNode(root, 4);
	cout << endl;*/

	//牛客网 打印二叉树（层序遍历）
	/*vector<int> a = { 5, 4, 3, 2 };
	vector<int> b = { 2, 3, 4, 5 };
	TreeNode * root = reConstructBinaryTree(a, b);
	vector<vector<int> > vtemp = Print(root);
	cout << endl;*/

	//牛客网 之字形遍历二叉树（层序遍历）
	/*vector<int> a = { 5,4,3,2 };
	vector<int> b = { 2,3,4,5 };
	TreeNode * root = reConstructBinaryTree(a, b);
	vector<vector<int> > vtemp = levelOrderTraverse(root);
	cout << endl;*/

	//牛客网 对称树
	/*vector<int> a = { 1, 2, 4, 8, 10, 6, 3, 7, 5};
	vector<int> b = { 8, 10, 4, 2, 6, 1, 7, 3, 5};
	TreeNode * root = reConstructBinaryTree(a, b);
	cout << isSymmetrical(root) << endl;*/

	//牛客网 二叉树的下一个节点
	//creat a link tree
	/*TreeLinkNode *root = new TreeLinkNode(2);
	root->left = new TreeLinkNode(4);
	root->right = new TreeLinkNode(3);
	TreeLinkNode *p = root, *q = root;
	p = p->left;
	q = q->right;
	p->next = root;
	q->next = root;
	p->left = new TreeLinkNode(5);
	p->right = new TreeLinkNode(8);
	p->left->next = p;
	p->right->next = p;
	q->left = new TreeLinkNode(9);
	q->right = new TreeLinkNode(10);
	q->left->next = q;
	q->right->next = q;
	GetNext(p->right);*/


	//牛客网 重建二叉树
	/*vector<int> a = { 1, 2, 3, 4, 5, 6 };
	vector<int> b = { 3, 2, 1, 5, 4, 6 };
	root = reConstructBinaryTree(a, b);*/

	//牛客网 斐波那契数列
	//cout << Fibonacci(15) << endl;

	//牛客网 二维数组中的查找
	/*vector<vector<int> > a = { {0,1,4,5}, {7,8,10,11}, {13,15,17,20}, {21,22,24,26}, {32,33,36,38}, {41,44,47,62} };
	cout << Find(a, 19) << endl;*/



	//leetcode 36: Valid Sudoku
	//AC, beat 9.7 percent of others
	/*vector<vector<char>> board = { { '.', '8', '7', '6', '5', '4', '3', '2', '1' }, { '2', '.', '.', '.', '.', '.', '.', '.', '.' }, { '3', '.', '.', '.', '.', '.', '.', '.', '.' }, { '4', '.', '.', '.', '.', '.', '.', '.', '.' }, { '5', '.', '.', '.', '.', '.', '.', '.', '.' }, { '6', '.', '.', '.', '.', '.', '.', '.', '.' }, { '7', '.', '.', '.', '.', '.', '.', '.', '.' }, { '8', '.', '.', '.', '.', '.', '.', '.', '.' }, { '9', '.', '.', '.', '.', '.', '.', '.', '.' } };
	for (int i = 0; i < board.size(); i++)
		if (!checkValid(board[i]))
			cout << false << endl;
	for (int i = 0; i < 9; i++)
	{
		vector<char> temp;
		for (int j = 0; j < 9; j++)
			temp.push_back(board[j][i]);
		if (!checkValid(temp))
			cout << false << endl;
		
	}
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			vector<char> temp;
			for (int j = 0; j < 3; j++)
				temp.insert(temp.end(), board[3 * i + j].begin() + 3 * k, board[3 * i + j].begin() + 3 + 3 * k);
			if (!checkValid(temp))
				cout << false << endl;
		}
	}
	cout << true << endl;*/





	//leetcode 149: my answer is right, but it commited to be wrong, and I think it's the system which goes wrong
	/*//vector<Point> points = {  Point(1, 1), Point(1, 1),Point(3,5), Point(1, 1), Point(1,2),Point(2,3),Point(1,5) };
	//vector<Point> points = { Point(-4, 63), Point(0, 3), Point(-4, 40), Point(-7, 84), Point(-8, 7), Point(30, 154), Point(16, -5), Point(6, 90), Point(18, -6), Point(5, 77), Point(-4, 77), Point(7, -13), Point(-1, -45), Point(16, -5), Point(-9, 86), Point(-16, 11), Point(-7, 84), Point(1, 76), Point(3, 77), Point(10, 67), Point(1, -37), Point(-10, -81), Point(4, -11), Point(-20, 13), Point(-10, 77), Point(6, -17), Point(12, 106), Point(5, -21), Point(-5, 82), Point(6, 71), Point(-15, 34), Point(3, 74), Point(-7, -69), Point(-21, 18), Point(27, 146), Point(-20, 13), Point(21, 130), Point(-6, -65), Point(14, -4), Point(0, 3), Point(9, -5), Point(6, -29), Point(-2, 73), Point(-1, -15), Point(1, 76), Point(-4, 77), Point(6, -29) };
	vector<Point> points = { Point(1, 1), Point(1, 1), Point(1, 1) };
	if (points.size() < 3)
	cout << points.size();
	int longest = 2;
	vector<bool> unvisited(points.size(), 1);
	for (int i = 0; i < points.size(); i++)
	{
	unvisited[i] = 0;
	vector<bool> tempUnvisited(unvisited);
	while (true)
	{
	int tempLongest = 2;
	int temp = findFirst(tempUnvisited, i + 1);
	while (temp < points.size() && points[temp] == points[i])
	{

	temp = findFirst(tempUnvisited, temp + 1);
	if (temp == points.size())
	break;
	tempLongest++;
	}
	if (temp == points.size())
	{
	longest = max(tempLongest, longest);
	break;
	}
	tempUnvisited[temp] = 0;
	for (int j = temp + 1; j < points.size(); j++)
	{
	if (tempUnvisited[j])
	if (collinear(points[i], points[temp], points[j]))
	{
	if (!(points[j] == points[i]))
	tempUnvisited[j] = 0;
	tempLongest++;
	}
	}
	longest = max(tempLongest, longest);
	}
	}
	cout << longest << endl;*/





	//test static data in class
	/*testClass<int> intStatic;
	testClass<char> charStatic;
	cout << intStatic._data << endl;
	intStatic._data = 3;
	charStatic._data = 4;
	cout << intStatic._data << endl;*/
	/*myVector<int> x, y;
	swap(x, y);
	int ia[5] = { 0, 1, 2, 3, 4 };
	myVector<int> a;
	myVector<int>::iterator ite = ia;
	x.insert(ite, ia, ia + 5);*/
	//stack<int, deque<int>> x;



	//Subsets

	//really bad, only beat 1.56 percent of others
	/*vector<int> nums = { 1, 2, 3 };
	vector<vector<int>> subsets;
	subsets.push_back({});
	vector<vector<int>> lenIncreSubsets;
	for (int i = 0; i < nums.size(); i++)
	lenIncreSubsets.push_back({ i });
	do{
	mergingSolutions(subsets, lenIncreSubsets, nums);
	//subsets.insert(subsets.end(), lenIncreSubsets.begin(), lenIncreSubsets.end());
	lenIncreSubsets = append(lenIncreSubsets, nums);
	} while (!lenIncreSubsets.empty());*/




	//4Sum
	//Time Limit Eeceeded !!! worse than brure force
	/*vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	int target = 0;
	sort(nums.begin(), nums.end());
	vector<int> hashBackup(nums.back() - nums.front() + 1, 0);
	for (int i = 0; i < nums.size(); i++)
	hashBackup[nums[i] - nums.front()]++;
	set<vector<int>> storeAddends;
	for (int i = 0; i < nums.size(); i++)
	{
	for (int j = i + 1; j < nums.size(); j++)
	storeAddends.insert({ nums[i] + nums[j], nums[i], nums[j] });
	}
	vector<vector<int>> addends;
	for (set<vector<int>>::iterator iter = storeAddends.begin(); iter != storeAddends.end(); iter++)
	addends.push_back(*iter);

	set<vector<int>> solution;
	for (int i = 0; i < addends.size(); i++)
	{
	int index = myBinarySearch(addends, i + 1, addends.size(), target - addends[i][0]);
	if (index > 0)
	{
	vector<int> temp = { addends[i][1], addends[i][2], addends[index][1], addends[index][2] };
	bool flag = false;
	vector<int> hash = hashBackup;
	for (int j = 0; j < temp.size(); j++)
	{
	if (!hash[temp[j] - nums.front()])
	{
	flag = true;
	break;
	}
	hash[temp[j] - nums.front()]--;
	}
	if (flag)
	continue;
	sort(temp.begin(), temp.end());
	solution.insert(temp);
	}
	}
	vector<vector<int>> finalSolution;
	for (set<vector<int>>::iterator iter = solution.begin(); iter != solution.end(); iter++)
	finalSolution.push_back(*iter);
	cout << "finish" << endl;*/



	//brute force
	/*vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	int target = 0;
	sort(nums.begin(), nums.end());
	vector<vector<int>> solution;
	for (int i = 0; i < nums.size(); i++)
	for (int j = i + 1; j < nums.size(); j++)
	for (int k = j + 1; k < nums.size(); k++)
	for (int t = k + 1; t < nums.size(); t++)
	{
	int temp = nums[i] + nums[j] + nums[k] + nums[t];
	if (temp == target)
	solution.push_back({ nums[i], nums[j], nums[k], nums[t] });
	else if (temp > target)
	break;
	}
	cout << "finish" << endl;*/


	//wrong!! cause -1+0 and -1+2 might be added again, then -1 has been used two times
	/*vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	int target = 0;
	sort(nums.begin(), nums.end());
	set<vector<int>> storeAddends;
	for (int i = 0; i < nums.size(); i++)
	{
	for (int j = i + 1; j < nums.size(); j++)
	storeAddends.insert({ nums[i] + nums[j], nums[i], nums[j] });
	}
	vector<vector<int>> addends;
	for each (vector<int> var in storeAddends)
	addends.push_back(var);

	set<vector<int>> solution;
	for (int i = 0; i < addends.size(); i++)
	{
	int index = myBinarySearch(addends, i + 1, addends.size(), target - addends[i][0]);
	if (index > 0)
	{
	vector<int> temp = { addends[i][1], addends[i][2], addends[index][1], addends[index][2] };
	sort(temp.begin(), temp.end());
	solution.insert(temp);
	}
	}
	*/

	//sort(storeAddends.begin(), storeAddends.end(), myLess);
	/*vector<vector<int>> solution;
	for (int i = 0; i < storeAddends.size(); i++)
	{
	int index = myBinarySearch(storeAddends, i + 1, storeAddends.size(), target - storeAddends[i][2]);
	if (index > 0)
	{
	vector<int> temp = { storeAddends[i][0], storeAddends[i][1], storeAddends[index][0], storeAddends[index][1] };
	sort(temp.begin(), temp.end());
	solution.push_back(temp);
	}
	}
	cout << "finish";*/



	//H-Index
	//which mean h-papers were cited for at least h times
	/*vector<int> citations = { 100};
	sort(citations.begin(), citations.end());
	int len = citations.size();
	int i = 0;
	for (i; i < len; i++)
	{
	if (citations[i] >= len - i)
	break;
	}
	cout << len - i << endl;
	*/





	//Bulls and Cows
	/*string secret = "113563127611234522626262116211347373233";
	string guess =  "011234546112345426211312761123455626211";
	//cout << GetTickCount() << endl;
	int A = 0, B = 0;
	vector<int> secretHash(10, 0);
	vector<int> guessHash(10, 0);
	for (int i = 0; i < guess.size(); i++)
	{
	secretHash[secret[i] - '0']++;
	guessHash[guess[i] - '0']++;
	if (secret[i] == guess[i])
	A++;
	}
	for (int i = 0; i < 10; i++)
	B += min(secretHash[i], guessHash[i]);
	B -= A;
	string temp;
	stringstream stream;
	stream << A;
	temp.append(stream.str());
	temp.push_back('A');
	stream.str("");
	stream << B;
	temp.append(stream.str());
	temp.push_back('B');
	cout << temp << endl;
	*/


	//Binary Tree Inorder Traversal
	/*TreeNode* node = new TreeNode(1);
	TreeNode* root = node;
	(*node).left = new TreeNode(2);
	(*node).right = new TreeNode(3);
	node = (*node).right;
	(*node).left = new TreeNode(4);
	node = (*node).left;;
	(*node).right = new TreeNode(5);
	//Traversaling
	vector<int> inorderSequence;
	inorderTraversal(root, inorderSequence);
	for each (int var in inorderSequence)
	{
	cout << var << "  ";
	}
	cout << endl;
	*/




	//Contains Duplicate II
	//ACCEPT!!! beat 98.79% of other's
	/*vector<int> nums = { 1, 0, 1,1,-1 };
	int k = 1;
	int maximum = *max_element(nums.begin(), nums.end());
	int minimum = *min_element(nums.begin(), nums.end());
	vector<int> hashPositive;
	vector<int> hashNegative;
	if (maximum >= 0)
	hashPositive = vector<int> (maximum + 1, -1);
	if (minimum < 0)
	hashNegative = vector<int> (abs(minimum), -1);
	for (int i = 0; i < nums.size(); i++)
	{
	if (nums[i] >= 0){
	if (hashPositive[nums[i]] == -1 || i - hashPositive[nums[i]] > k)
	hashPositive[nums[i]] = i;
	else if (i - hashPositive[nums[i]] <= k)
	cout << 1 << "   ";
	}
	else{
	if (hashNegative[-nums[i] - 1] == -1 || i - hashNegative[nums[i]] > k)
	hashNegative[-nums[i] - 1] = i;
	else if (i - hashNegative[-nums[i] - 1] <= k)
	cout << 1 << "  ";
	}
	}*/






	/*class Solution {
	public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
	if(nums.size() < 2)
	return false;
	int maximum = *max_element(nums.begin(), nums.end());
	vector<int> hashTable(maximum, -1);
	for (int i = 0; i < nums.size(); i++)
	{
	if (hashTable[nums[i] - 1] == -1)
	hashTable[nums[i] - 1] = i;
	else if (i - hashTable[nums[i] - 1] <= k)
	return true;
	}
	return false;
	}
	};*/





	//Time Limit Exceeded!!!
	//vector<int> nums = { 5, 6, 3, 6, 7, 9, 11, 7, 9, 0, 1, 8, 4, 19, 17, 3, 18, 17, 10,13, 14, 12, 2, 15, 13, 16 };
	/*vector<int> nums = { -1, -1 };
	int k = 1;
	for (int i = 0; i < nums.size(); i++)
	{
	for (int j = i + 1; j < i + k + 1 && j < nums.size(); j++)
	{
	if (nums[i] == nums[j])
	cout << nums[i] << "   ";
	}
	}*/








	//quick sort --recurrence
	/*int arr[] = { 5, 6,3,6,7,9, 11, 7, 9, 0, 1, 8, 4, 19, 17, 3, 18, 10, 14, 12, 2, 15, 13, 16 };
	quick_sort_recursive<int>(arr, 0, 22);
	for (int i = 0; i < 22; i++)
	cout << arr[i] << "  ";
	cout << endl;*/








	//Contain Duplicate
	//not bad, beat 71 percent of others
	/*vector<int> nums = { 2, 6, 1, 76, 21, 1, 7, 2, 7, 3 };
	sort(nums.begin(), nums.end());
	for (int i = 1; i < nums.size(); i++)
	{
	if (nums[i - 1] == nums[i])
	return true;
	}
	return false;*/



	//Combination Sum
	/*vector<int> candidates = { 2, 3, 5, 10 };
	int target = 20;
	vector<vector<int>> solutions;
	solutions = findTarget2(candidates, 0, target);
	cout << endl;*/



	//Best time to buy and sell stock 
	//ACCEPT !!!!
	/*vector<int> prices = { 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985};
	set<int> begins;
	begins.insert(*(prices.begin()));
	vector<vector<int>> increSubs;
	increSubs.push_back({ *(prices.begin()) });
	for (int i = 1; i < prices.size(); i++)
	{
	if (prices[i] < *(begins.begin()))
	{
	increSubs.push_back({ prices[i] });
	begins.insert(prices[i]);
	}
	else if (prices[i] == *(begins.begin()))
	continue;
	else{
	for (int j = 0; j < increSubs.size(); j++)
	{
	if (*(increSubs[j].end() - 1) < prices[i])
	increSubs[j].push_back(prices[i]);
	}
	}
	}
	int profit = 0;
	for (int i = 0; i < increSubs.size(); i++)
	{
	if (increSubs[i].size() > 1)
	{
	int temPro = *(increSubs[i].end() - 1) - *(increSubs[i].begin());
	if (profit < temPro)
	profit = temPro;
	}
	}
	cout << profit << endl;*/



	//Memory Limit Exceeded
	/*vector<int> prices = { 7, 2, 4, 1 };
	cout << maxProfit(prices, 0, prices.size()) << endl;*/



	//time exceed!  the worst case is under reversed oder
	/*vector<int> prices = { 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985};
	set<int> begins;
	begins.insert(*(prices.begin()));
	vector<vector<int>> increSubs;
	increSubs.push_back({ *(prices.begin()) });
	for (int i = 1; i < prices.size(); i++)
	{
	if (prices[i] < *(begins.begin()))
	{
	increSubs.push_back({ prices[i] });
	begins.insert(prices[i]);
	}
	else{
	for (int j = 0; j < increSubs.size(); j++)
	{
	if (*(increSubs[j].end() - 1) < prices[i])
	increSubs[j].push_back(prices[i]);
	}
	}
	}
	int profit = 0;
	for (int i = 0; i < increSubs.size(); i++)
	{
	if (increSubs[i].size() >1)
	if (profit < *(increSubs[i].end() - 1) - *(increSubs[i].begin()))
	profit = *(increSubs[i].end() - 1) - *(increSubs[i].begin());
	//profits.push_back(*(increSubs[i].end() - 1) - *(increSubs[i].begin()));
	}
	cout << profit << endl;
	*/


	//this method will miss the number between maxi and mini
	/*vector<int> prices = { 7, 2, 4, 1 };
	int profits = 0;
	int maxi, mini;
	maxi = mini = 0;
	//findExtreme(prices, mini, maxi);
	for (int i = 1; i < prices.size(); i++)
	{
	if (prices[i] < prices[mini])
	mini = i;
	if (prices[i] >= prices[maxi])
	maxi = i;
	}
	if (mini < maxi)
	cout << prices[maxi] - prices[mini];
	//findMax
	int tmaxi = mini;
	for (int i = mini + 1; i < prices.size(); i++)
	{
	if (prices[i] > prices[tmaxi])
	tmaxi = i;
	}
	profits = prices[tmaxi] - prices[mini];
	//findMin
	int tmini = maxi;
	for (int i = 0; i < maxi; i++)
	{
	if (prices[i] < prices[tmini])
	tmini = i;
	}
	int profits2 = prices[maxi] - prices[tmini];
	//find between maxi and mini

	//compare
	cout << (profits>profits2 ? profits : profits2) << endl;
	*/



	//Best time to buy and sell stock II
	/*vector<int> prices = { 8, 5, 8, 5, 4, 3, 2, 1, 5, 2, 6 };
	int profits = 0;
	bool hold = false;
	int holdingPrice = 0;
	for (int i = 0; i < prices.size(); i++)
	{
	if (stock(prices, i) == INCREASE && !hold)
	{//buy
	holdingPrice = prices[i];
	profits -= prices[i];
	hold = true;
	}
	else if (stock(prices, i) == DECREASE && hold)
	{//sell
	profits += prices[i];
	holdingPrice = 0;
	hold = false;
	}
	}
	if (hold)
	profits += prices.back();
	cout << profits << endl;
	*/




	//leetcode 3sum closet
	//achieve by binary search



	//Time Limit Exceeded
	/*vector<int> nums = { -3, -3, -5, 1, 56, 1, 6, 2, 4, 42, 11, -63 };
	int target = 20;
	sort(nums.begin(), nums.end());
	int minus = abs(nums[1] + nums[2] + nums[3] - target);
	for (int i = 0; i < nums.size() - 2; i++)
	for (int j = 1; j < nums.size() - 1; j++)
	for (int k = 2; k < nums.size(); k++)
	{
	int temp = nums[i] + nums[j] + nums[k] - target;
	if (abs(minus) > abs(temp))
	minus = temp;
	if (temp > 0)
	break;
	}
	cout<< minus + target << endl;
	*/






	//Pearls Excercise 3.4

	//calculate days between two date
	/*myDate today = { 2016, 2, 23 };
	myDate anotherday = { 2012, 2, 28 };
	int days = YEAR*(today.tm_year - anotherday.tm_year-1) + CalcuYear(anotherday, today) + CalcuDays(anotherday,today);
	cout << days << endl;*/
	//show the weekday of a specific date
	/*myDate Greenwich = { 1900, 1, 1 }; // Greenwich Mean Time (GMT) is Sunday. This can be a standard
	myDate today = { 2015, 12, 2 };
	cout << (YEAR*(today.tm_year - Greenwich.tm_year - 1) + CalcuYear(Greenwich, today) + CalcuDays(Greenwich, today)) % 7 + 1 << endl;*/
	//print calendar
	/*myDate today = { 2015, 12, 1 };
	myDate Greenwich = { 1900, 1, 1 };
	int dayofMonth = Mon[today.tm_mon - 1];
	int weekofDay = (YEAR*(today.tm_year - Greenwich.tm_year - 1) + CalcuYear(Greenwich, today) + CalcuDays(Greenwich, today)) % 7 + 1;
	int deviation = weekofDay % 7;
	if (isLeapYear(today.tm_year) && today.tm_mon == 2)
	dayofMonth++;
	cout << "    Sunday    Monday    Tuesday    Wednesday    Thursday    Friday    Saturday" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout.setf(ios::right);
	//cout.width(10);
	for (int j = 0; j < deviation;j++)
	cout << setw(10) << " ";
	for (int i = 1; i <= dayofMonth; i++)
	{
	cout << setw(10) << i;
	if ((i + deviation) % 7 == 0)
	cout << endl;
	}
	cout << endl;
	*/


	//Pearls Excercise 3.3
	/*ifstream in("upperletters.txt");
	string s;
	in >> s;
	for (string::iterator it = s.begin(); it != s.end();it++)
	printletter(*it);*/




	//Pearls Excercise 2.5 
	/*if a is longer than c ,exchange c and a-left, move a-right & b & a-left ---> b & a-left & a-right*/




	//Pearls Excercise 2.3 trick rotation-2
	/*ifstream in("string1.txt");
	string rotations;
	in >> rotations;
	cout << clock() << endl;
	size_t positions = 13;
	Exchange(rotations, 0, rotations.size(), positions);
	cout << rotations << endl;
	//trick rotation-1 and hands turnover rotation
	ifstream in("string1.txt");
	string rotations;
	in >> rotations;
	cout << clock() << endl;
	size_t positions = 31;
	CircularL(rotations, positions);
	size_t remain = rotations.size() % positions;
	while (remain != 0)
	{
	string subString(rotations.end() - positions, rotations.end());
	positions = positions - remain;
	remain = subString.size() % positions;
	CircularL(subString, positions);
	flushEnd(rotations, subString);
	}

	positions = 31;
	cout << clock() << endl;
	clock_t start2 = clock();
	reverse(rotations, 0, positions - 1);
	reverse(rotations, positions, rotations.size() - 1);
	reverse(rotations, 0, rotations.size() - 1);
	cout << clock() << endl;*/




	//Pearls Capture 2 question C
	/*ifstream in("inputfile.txt");
	string s;
	multimap<string, string> multi;
	while (in >> s)
	{
	string temp = s;
	sort(s.begin(), s.end());
	multi.insert(make_pair(s, temp));
	}
	vector<set<string>> vset(multi.size());
	vector<set<string>>::iterator iter = vset.begin();
	string priorkey = (*multi.begin()).first;
	for each (pair<string,string> var in multi)
	{
	if (priorkey == var.first)
	(*iter).insert(var.second);
	else{
	priorkey = var.first;
	iter++;
	(*iter).insert(var.second);
	}
	}
	cout << endl;*/







	//Pearls Capture 2 question B
	/*string rotation = "abcdefghklijmn";
	size_t position = 4;
	reverse(rotation, 0, position - 1);
	reverse(rotation, position, rotation.size() - 1);
	reverse(rotation, 0, rotation.size() - 1);
	cout << rotation << endl;*///the answer is "efghklijmnabcd"





	//test my LinkList
	/*Node<int> *in = new Node<int>();
	LinkList<int> ls;
	cout << ls.ListEmpty() << endl;
	for (int i = 0; i < 10; i++)
	{
	ls.ListInsert(i);
	}
	ls.ListEmpty();
	ls.ListLength();
	ls.ListInsert(24);
	ls.GetElem(4);
	ls.LocateElem(8);
	ls.PriorElem(9);
	ls.NextElem(7);*/



	//Programming pearls Excercise 1.3-1.4
	//sort(v.begin(), v.end(), greater<int>());//default is less<int>()
	/*myBitVec bVec(n);
	vector<int> source(n), number(realN), answer;
	for (int i = 0; i < n; i++)
	source[i] = i;
	srand((unsigned)time(NULL));
	for (int i = 0; i < realN; i++)
	{
	int seed = rand() % (n - i);
	number[i] = source[seed];
	source[seed] = source[n - i - 1];
	}
	clock_t start1 = clock();
	for (int i = 0; i < realN; i++)
	bVec.set(number[i]);

	for (int i = 0; i < n; i++)
	{
	if (bVec.test(i))
	answer.push_back(i);
	}
	clock_t end1 = clock();
	cout << end1 - start1 << endl;
	clock_t start2 = clock();
	sort(number.begin(), number.end());
	cout << clock() - start2 << endl;*/

	//Exercise 127. Word Ladder\A3\AC use graph to express the relation between words!
	//undone!!!!!!
	/*unordered_set<string> wordList = { "hot", "dot", "dog", "lot", "log" };
	for (auto var : wordList)
	cout << var << " ";
	cout << endl;
	string beginWord = "hit", endWord = "cog";
	wordList.emplace_hint(wordList.end(),"hit");
	for (auto var : wordList)
	cout << var << " ";
	cout << endl;
	vector<list<int>> nextStrings(wordList.size());
	auto root = wordList.find("hit");
	while (!wordList.empty())
	{

	}*/





	//Exercise 14. find longest common prefix
	/*vector<string> strs = { "ch", "changefor", "choncentrate", "choncern" };
	string temp;
	if (strs.size() == 0)
	cout<<temp<<endl; //cout means  !! return !!
	int shortest = (*strs.begin()).size();
	for (vector<string>::iterator it = strs.begin(); it != strs.end();it++)
	shortest = min((int)(*it).size(), shortest);

	int i = 0;
	bool flag = false;
	while (i < shortest + 1)
	{
	for (int k = 0; k < strs.size()-1; k++)
	{
	if (strs[k][i] != strs[k + 1][i])
	{
	flag = true;
	break;
	}
	}
	temp = strs[0].substr(0, i++);
	if (flag)
	break;
	}
	cout << temp << endl;*/


	//find longest prefix not longest common prefix\A3\A8here common is an important conception\A3\A9
	/*vector<string> strs = { "something new", "something blue", "changefor", "concentrate", "concern" };
	string temp;
	for (int i = 0; i < strs.size(); i++)
	{
	for (int j = i + 1; j < strs.size(); j++)
	{
	int pi = 0, pj = 0;
	while (pi < strs[i].size() && pj < strs[j].size())
	{
	if (strs[i][pi] != strs[j][pj])
	break;
	pi++;
	pj++;
	}
	if (pi > temp.size())
	temp = strs[i].substr(0, pi );
	}

	}
	cout << temp << endl;*/
}
