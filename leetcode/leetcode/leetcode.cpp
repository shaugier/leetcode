#include"leethead.h"
#define n 10000000
#define realN 1000000
extern int Mon[];
void main()
{

	//graph

	//Combination Sum
	vector<int> candidates = { 2, 3, 6, 7 };
	int target = 7;
	vector<vector<int>> solutions;
	for (size_t i = 0; i < candidates.size(); i++)
	{
		for (int j = 1; j*candidates[i] < target; j++)
		{
			int temp = target - j*candidates[i];
			if (temp >= candidates[i] && binary_search(candidates.begin() + i, candidates.end(), temp))
			{
				solutions.push_back({ candidates[i], temp })
			}
		}
	}



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