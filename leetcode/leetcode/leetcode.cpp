#include"leethead.h"
#define n 10000000
#define realN 1000000
extern int Mon[];
void main()
{

	//graph

	//Best time to buy and sell stock 
	vector<int> prices = { 7, 2, 4, 1 };
	int profits = 0;
	int maxi, mini;
	maxi = mini = 0;
	findExtreme(prices, mini, maxi);
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
	//compare
	cout << (profits>profits2 ? profits : profits2) << endl;

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
	/*vector<int> nums = { -3, -3, -5, 1, 56, 1, 6, 2, 4, 42, 11, -63 };
	int target = 20;
	sort(nums.begin(), nums.end());
	int minus = abs(nums[1] + nums[2] + nums[3] - 20);
	for (int i = 0; i < nums.size() - 2; i++)
		for (int j = 1; j < nums.size() - 1; j++)
			for (int k = 2; k < nums.size(); k++)
			{
				int temp = abs(nums[i] + nums[j] + nums[k] - target);
				if (temp>minus)
					cout<<nums[i] + nums[j] + nums[k];
				if (temp < minus)
					minus = temp;
				
			}*/






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

	//Exercise 127. Word Ladder£¬ use graph to express the relation between words!
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


	//find longest prefix not longest common prefix£¨here common is an important conception£©
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