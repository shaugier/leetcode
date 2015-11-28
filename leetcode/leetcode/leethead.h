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
//#include<xstddef>
#include<functional>
using namespace std;

//LinkList

template<class T> class Node{
public:
	T val;
	Node<T> *next;
	Node<T>();
	Node<T>(T num):val(num){
	}
};
template<class T> class LinkList{
	Node<T> *head;
	size_t len;
public:
	LinkList(){
		len = 0;
	}
	void ClearList(){
		Node<T> *temp = head;
		while (head){
			head = head->next;
			delete temp;
			temp = head;
		}
		len = 0;
	}
	bool ListEmpty(){
		if (head)
			return true;
		else return false;
	}
	size_t ListLength(){
		return len;
	}
	T GetElem(size_t i){
		size_t cnt = 1;
		Node<T> *temp = head;
		while (temp && cnt < i){
			temp = temp->next;
		}
		if (!temp)
			exit(-1);
		return temp->val;
	}

	size_t LocateElem(T e){
		size_t cnt = 1;
		Node<T> *temp = head;
		while (temp){
			if (compare(e, temp->val))
				return cnt;
			cnt++;
			temp = temp->next;
		}
		return 0;
	}

	Node<T>* PriorElem(T cur_e){
		Node<T>* temp = head;
		if (temp->val == cur_e || !temp->next)
			return NULL;
		while (temp->next)
		{
			if (temp->next->val == cur_e)
				return temp;
			temp = temp->next;
		}
		return NULL;
	}
	Node<T>* NextElem(T cur_e){
		Node<T>* temp = head;
		while (temp->next){
			if (temp->val == cur_e)
				return temp->next;
			temp = temp->next;
		}
		return NULL;
	}

	void ListInsert( T e){
		Node<T>* p = new Node<T>(e);
		p->next = head;
		head = p;
		len++;
	}

};

template<class T> bool compare(T e, T i){
	if (e>i)
		return true;
	else return false;
}

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

class myBitVec{
	enum{EACHINCLUDE = 32, SHIFT = 5, MASK = 0x1F };
	int *data, int_len;
public:
	myBitVec(int max = 0) :int_len(max)
	{
		data = new int[1 + (int_len >> SHIFT)];
		//*if the number can occur at most 10 times ,then SHIFT-2, right shift 8bits; MASK change to 0x07; 
		//*each four bits represent one number, and 32bits contain 8 number
		//data = new int[1 + (int_len >> (SHIFT - 2))];
		
	
		memset(data, 0, sizeof(int)*(1 + (int_len >> SHIFT)));
		//SHIFT-2
	}
	~myBitVec()
	{
		delete[] data;
	}
	//i>>SHIFT equals i%32
	void set(int i){ data[i >> SHIFT] |= (1 << (i&MASK)); }//here 1 left shift 32bit is larger than max<usigned int>
	//void set(int i){ data[i >> (SHIFT - 2)] |= (1 << (4 * (i & 0x07))); }
	void clr(int i){ data[i >> SHIFT] &= ~(1 << (i&MASK));}
	//void clr(int i){ data[i >> (SHIFT-2)] &= ~(0xA << 4 * (i & 0x07));}
	bool test(int i){ if(data[i >> SHIFT] & (1 << (i&MASK)))
		return true;
	else return false;
	}
};

