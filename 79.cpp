#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void checkAround(int x, int y, vector<vector<char>> &board, stack<int> &temp, char c)
{
	int m = board.size() - 1;
	int n = board.at(0).size() - 1;
}

bool exist(vector<vector<char>> &board, string word)
{
	int m = board.size() - 1;
	int n = board.at(0).size() - 1;
	stack<int> temp;
	for (; m != -1; m--)
	{
		for (; n != -1; n--)
		{
			if (board[m][n] == word.at(0))
			{
				checkAround(m, n, board, temp, );
			}
		}
	}
}
