#include"leethead2.h"

class Solution60 {
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		char *p = str;
		vector<int> startPositions;
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++)
			{
				if (*(matrix + i*cols + j) == *p)
				{
					startPositions.push_back(i);
					startPositions.push_back(j);
				}
			}


		//回溯法 八皇后问题 深度优先搜索
		for (int start = 0; start < startPositions.size(); start += 2)
		{
			vector<vector<bool> > searchedMat;
			for (int i = 0; i < rows; i++)
				searchedMat.push_back(vector<bool>(cols, false));
			stack<int> searchedPath;
			int rr = startPositions[start];
			int cc = startPositions[start + 1];
			searchedMat[rr][cc] = true;
			searchedPath.push(rr*cols + cc);
			p++;
			while (searchedPath.size() > 0 && *p != '\0')
			{
				//上 右 下 左
				if (rr > 0 && !searchedMat[rr - 1][cc] && *(matrix + (rr - 1)*cols + cc) == *p)
				{
					rr--;
					p++;
					searchedMat[rr][cc] = true;
					searchedPath.push(rr*cols + cc);
				}
				else if (cc < cols - 1 && !searchedMat[rr][cc + 1] && *(matrix + rr*cols + cc + 1) == *p)
				{
					cc++;
					p++;
					searchedMat[rr][cc] = true;
					searchedPath.push(rr*cols + cc);
				}
				else if (rr < rows - 1 && !searchedMat[rr + 1][cc] && *(matrix + (rr + 1)*cols + cc) == *p)
				{
					rr++;
					p++;
					searchedMat[rr][cc] = true;
					searchedPath.push(rr*cols + cc);
				}
				else if (cc > 0 && !searchedMat[rr][cc - 1] && *(matrix + rr*cols + cc - 1) == *p)
				{
					cc--;
					p++;
					searchedMat[rr][cc] = true;
					searchedPath.push(rr*cols + cc);
				}
				else{
					searchedPath.pop();
					p--;
					if (p == str)
						break;
					int temp = searchedPath.top();
					rr = temp / cols;
					cc = temp % cols;	
				}
			}
			if (*p == '\0')
				return true;
		}
		return false;
	}
};