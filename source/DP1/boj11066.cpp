// #include <iostream>

// using namespace std;

// int min(int a, int b)
// {
// 	return a<b?a:b;
// }


// int main(void)
// {
// 	int t, k;
// 	int size[501];
// 	int sum[501][501];
// 	int cost[501][501];
	
// 	cin >> t;
	
// 	for(int cases = 0; cases < t; cases++)
// 	{
// 		cin >> k;
		
// 		for(int i = 1; i <= k; i++)
// 		{
// 			cin >> size[i];
// 		}
		
// 		for(int i = 1; i <= k; i++)
// 		{
// 			sum[1][i] = size[i];
// 			cost[1][i] = 0;
// 		}
		
		
// 		for(int step = 2; step <= k; step++)
// 		{
// 			for(int i = 1; i <= k-step+1; i++)	
// 			{
// 				sum[step][i] = sum[1][i] + sum[step-1][i+1];
				
				
// 				int minCost = 2147483647;
				
// 				for(int partition = 1; partition <= step - 1; partition++)
// 				{
// 					minCost = min(minCost, cost[partition][i] + cost[step-partition][i+partition]);
// 				}
				
// 				cost[step][i] = minCost  + sum[step][i];
// 			}
// 		}		
		
// 		cout << cost[k][1] << endl;
// 	}
// }