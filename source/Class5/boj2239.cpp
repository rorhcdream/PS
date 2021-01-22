// #include <iostream>
// #include <cstdio>

// using namespace std;

// bool checkCondition(int pos);
// void solve(int pos);

// int board[9][9];

// int main(void)
// {
// 	for(int i = 0; i < 9; i++)
// 	{
// 		int n;
// 		cin >> n;
		
// 		for(int j = 0; j < 9; j++)
// 		{
// 			board[i][8-j] = n % 10;
// 			n /= 10;
// 		}
// 	}
	
// 	solve(0);
// }

// void solve(int pos)
// {
// 	if(pos != 81)
// 	{
// 		int x = pos / 9;
// 		int y = pos % 9;

// 		if(board[x][y] != 0)
// 		{
// 			solve(pos + 1);
// 			return;
// 		}

// 		for(int i = 1; i <= 9; i++)
// 		{
// 			board[x][y] = i;
// 			if(!checkCondition(pos))
// 				continue;
// 			solve(pos + 1);
// 		}
// 		board[x][y] = 0;
// 		return;
// 	}
// 	else
// 	{
// 		for(int i = 0; i < 9; i++)
// 		{
// 			for(int j = 0; j < 9; j++)
// 			{
// 				cout << board[i][j];
// 			}
// 			cout << endl;
// 		}
// 		exit(0);
// 	}
// }

// bool checkCondition(int pos)
// {
// 	int x = pos / 9;
// 	int y = pos % 9;
// 	int n = board[x][y];
	
// 	for(int i = 0; i < 9; i++)
// 	{
// 		if(i == x)
// 			continue;
// 		if(board[i][y] == n)
// 			return false;
// 	}
	
// 	for(int i = 0; i < 9; i++)
// 	{
// 		if(i == y)
// 			continue;
// 		if(board[x][i] == n)
// 			return false;
// 	}
	
// 	int cx = x - x%3;
// 	int cy = y - y%3;
// 	for(int i = 0; i < 3; i++)
// 	{
// 		for(int j = 0; j < 3; j++)
// 		{
// 			if(cx + i == x && cy + j == y)
// 				continue;
// 			if(board[cx + i][cy + j] == n)
// 				return false;
// 		}
// 	}
	
// 	return true;
// }