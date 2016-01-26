#include"leethead2.h"


class Solution50 {
public:
	vector<int> multiply(const vector<int>& A) {
		if (A.size() < 2)
			return A;
		vector<int> B;
		vector<int> premulti(1, 1), sufmulti(1, 1);
		for (int i = 0; i < A.size() - 1; i++)
		{
			premulti.push_back(premulti.back()* A[i]);
			sufmulti.push_back(sufmulti.back()* A[A.size() - 1 - i]);
		}
		for (int j = 0; j < A.size(); j++)
		{
			B.push_back(premulti[j] * sufmulti[A.size() - j - 1]);
		}
		return B;
	}
};