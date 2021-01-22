// #include <iostream>
// #include <string.h>

// using namespace std;

// int arr[50][50];
// int m, n;

// int solve();
// int fill(int x, int y);

// int main(void)
// {
// 	int t, k;
	
// 	cin >> t;
	
// 	for(int c = 0; c < t; c++)
// 	{
// 		//input
// 		cin >> m >> n >> k;
// 		memset(arr, 0, sizeof(arr));
// 		int x, y;
			
// 		for(int i = 0; i < k; i++)
// 		{
// 			cin >> x >> y;
// 			arr[x][y] = 1;
// 		}
		
// 		//calculate
// 		int result = solve();
// 		cout << result << endl;
// 	}
// }


// int solve()
// {
// 	int result = 0;
	
// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int j = 0; j < n; j++)
// 		{
// 			int success = fill(i, j);
// 			if(success == 1)
// 			{
// 				result += 1;
// 			}
// 		}
// 	}
	
// 	return result;
// }

// int fill(int x, int y)
// {
// 	if(x < 0 || y < 0 || x >= m || y >= n)
// 		return 0;
	
// 	if(arr[x][y] != 1)
// 		return 0;
	
// 	arr[x][y] = 2;
// 	fill(x-1, y);
// 	fill(x+1, y);
// 	fill(x, y-1);
// 	fill(x, y+1);
	
// 	return 1;
// }