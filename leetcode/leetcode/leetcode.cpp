#include"leethead.h"
#define n 10000000
#define realN 1000000
void main()
{

	//graph

	//Pearls Capture 2 question C
	ifstream in("inputfile.txt");
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
	cout << endl;







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

	//Exercise 127. Word Ladder�� use graph to express the relation between words!
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


	//find longest prefix not longest common prefix��here common is an important conception��
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