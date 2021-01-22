// #include <iostream>
// #include <algorithm>

// using namespace std;

// int N, M;
// int m[101];
// int c[101];
// int dp[101][10001];

// int main(void)
// {
// 	//input
// 	cin >> N >> M;
// 	for(int i = 1; i <= N; i++)
// 		cin >> m[i];
// 	for(int i = 1; i <= N; i++)
// 		cin >> c[i];	
	
// 	//solve
// 	for(int i = 1; i <= N; i++)
// 	{
// 		for(int j = 0; j <= 10000; j++)
// 		{
// 			if(j >= c[i])
// 				dp[i][j] = max(dp[i-1][j], dp[i-1][j-c[i]]+m[i]);
// 			else
// 				dp[i][j] = dp[i-1][j];
// 		}
// 	}
	
// 	int cost = 10000;
// 	while(dp[N][cost-1] >= M) cost--;
	
// 	cout << cost;
// }