#include<iostream>
#include<vector>

using namespace std;


class Solution17 {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		vector<int> serials;
		if (matrix.empty())
			return serials;
		int row = 0, col = 0;
		int NorthWall = 0, SorthWall = matrix.size() - 1;
		int WestWall = 0, EastWall = matrix[0].size() - 1;
		int matSize = (SorthWall + 1)*(EastWall + 1);
		NorthWall++;
		serials.push_back(matrix[0][0]);
		while (NorthWall < SorthWall || WestWall < EastWall)
		{
			while (col < EastWall)
				serials.push_back(matrix[row][++col]);
			if (serials.size() == matSize)
				break;
			EastWall--;
			while (row < SorthWall)
				serials.push_back(matrix[++row][col]);
			SorthWall--;
			while (col > WestWall)
				serials.push_back(matrix[row][--col]);
			if (serials.size() == matSize)
				break;
			WestWall++;
			while (row > NorthWall)
				serials.push_back(matrix[--row][col]);
			NorthWall++;
		}
		return serials;
	}
};