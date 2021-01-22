// #include <iostream>

// using namespace std;

// int M, N;
// int height[501][501];
// int pathNum[501][501];


// int getPathNum(int y, int x)
// {
// 	if(pathNum[y][x] != -1)	return pathNum[y][x];
	
// 	int result = 0;
	
// 	if(y != 1 && height[y][x] > height[y-1][x])
// 		result += getPathNum(y-1, x);
	
// 	if(y != M && height[y][x] > height[y+1][x])
// 		result += getPathNum(y+1, x);
	
// 	if(x != 1 && height[y][x] > height[y][x-1])
// 		result += getPathNum(y, x-1);
	
// 	if(x != N && height[y][x] > height[y][x+1])
// 		result += getPathNum(y, x+1);
	
// 	pathNum[y][x] = result;
// 	return result;	
// }


// int main(void)
// {	
// 	cin >> M >> N;
	
// 	for(int i = 1; i <= M; i++)
// 	{
// 		for(int j = 1; j <= N; j++)
// 		{
// 			cin >> height[i][j];
// 		}
// 	}
	
// 	for(int i = 1; i <= M; i++)
// 	{
// 		for(int j = 1; j <= N; j++)
// 		{
// 			pathNum[i][j] = -1;
// 		}
// 	}
// 	pathNum[M][N] = 1;
	
// 	cout << getPathNum(1, 1);
// }