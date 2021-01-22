// #include <iostream>

// using namespace std;

// int min(int a, int b)
// {
// 	return a<b?a:b;
// }


// int main(void)
// {
// 	int n;
// 	int r[501];
// 	int c[501];
// 	int sum[501][501];
// 	int cost[501][501];
	

// 	cin >> n;

// 	for(int i = 1; i <= n; i++)
// 	{
// 		cin >> r[i];
// 		cin >> c[i];
// 	}
	

// 	for(int i = 1; i <= n; i++)
// 	{
// 		cost[1][i] = 0;
// 	}


// 	for(int step = 2; step <= n; step++)
// 	{
// 		for(int i = 1; i <= n-step+1; i++)	
// 		{
// 			int minCost = 2147483647;

// 			for(int partition = 1; partition <= step - 1; partition++)
// 			{
// 				minCost = min(minCost, cost[partition][i] + cost[step-partition][i+partition] + r[i]*r[i+partition]*c[i+step-1]);
// 			}

// 			cost[step][i] = minCost;
// 		}
// 	}		

// 	cout << cost[n][1] << endl;

// }