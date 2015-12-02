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
//#include<xstddef>
#include<functional>
#include<iomanip>

#define WORDMAX 100
#define LEN 12
#define YEAR 365
using namespace std;

extern int Mon[LEN] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

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

