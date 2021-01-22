// #include <iostream>

// using namespace std;

// int max(int a, int b)
// {
// 	return a>b?a:b;
// }

// int main(void)
// {
// 	int n;
// 	int triangle[500][500];
// 	int maxSum[500][500];
	
// 	//input
	
// 	cin >> n;
	
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j <= i; j++)
// 		{
// 			cin >> triangle[i][j];
// 		}
// 	}
	
// 	//solve
// 	maxSum[0][0] = triangle[0][0];
	
// 	for(int step = 1; step < n; step++)
// 	{
// 		for(int j = 0; j <= step; j++)
// 		{
// 			if(j == 0)
// 				maxSum[step][0] = maxSum[step-1][0] + triangle[step][0];
// 			else if(j == step)
// 				maxSum[step][step] = maxSum[step-1][step-1] + triangle[step][step];
// 			else
// 				maxSum[step][j] = max(maxSum[step-1][j], maxSum[step-1][j-1]) + triangle[step][j];
// 		}
// 	}
	
// 	int result = 0;
	
// 	for(int j = 0; j < n; j++)
// 	{
// 		result = max(maxSum[n-1][j], result);
// 	}
	
// 	cout << result;
// }