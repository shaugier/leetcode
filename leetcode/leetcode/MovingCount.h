#include"leethead2.h"

class Solution61 {
public:
	int bitSum(int a, int b)
	{
		int sum = 0;
		while (a)
		{
			sum += a % 10;
			a /= 10;
		}
		while (b)
		{
			sum += b % 10;
			b /= 10;
		}
		return sum;
	}
	int movingCount(int threshold, int rows, int cols)
	{
		if (rows == 0 || cols == 0 || threshold < 0)
			return 0;
		vector<vector<bool> > moveRec;
		for (int i = 0; i < rows; i++)
			moveRec.push_back(vector<bool>(cols, false));
		stack<int> path;
		int rr = 0, cc = 0;
		path.push(rr*cols + cc);
		moveRec[rr][cc] = true;
		int movecnt = 1;
		while (!path.empty())
		{
			//up down left right
			if (rr > 0 && !moveRec[rr - 1][cc] && bitSum(rr - 1, cc) <= threshold)
			{
				rr--;
				movecnt++;
				path.push(rr*cols + cc);
				moveRec[rr][cc] = true;
			}
			else if (rr < rows - 1 && !moveRec[rr + 1][cc] && bitSum(rr + 1, cc) <= threshold)
			{
				rr++;
				movecnt++;
				path.push(rr*cols + cc);
				moveRec[rr][cc] = true;
			}
			else if (cc > 0 && !moveRec[rr][cc - 1] && bitSum(rr, cc - 1) <= threshold)
			{
				cc--;
				movecnt++;
				path.push(rr*cols + cc);
				moveRec[rr][cc] = true;
			}
			else if (cc < cols - 1 && !moveRec[rr][cc + 1] && bitSum(rr, cc + 1) <= threshold)
			{
				cc++;
				movecnt++;
				path.push(rr*cols + cc);
				moveRec[rr][cc] = true;
			}
			else
			{
				int temp = path.top();
				rr = temp / cols;
				cc = temp%cols;
				path.pop();
			}
		}
		return movecnt;
	}
};