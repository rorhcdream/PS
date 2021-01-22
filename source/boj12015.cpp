// #include <iostream>
// #include <cstdio>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int n;
// int a[1000001];
// int lisLen_EndWith[1000001];
// int minLisEnd_OfLen[1000001];

// int main(void)
// {
// 	//input
// 	cin >> n;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
	
// 	//solve
// 	minLisEnd_OfLen[0] = INT_MIN;

	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		minLisEnd_OfLen[i] = INT_MAX;
		
// 		int front = 0;
// 		int end = i;
// 		int mid = (front + end) / 2;
		
// 		while(front + 1 < end)
// 		{
// 			if(minLisEnd_OfLen[mid] < a[i])
// 				front = mid;
// 			else
// 				end = mid;
			
// 			mid = (front + end) / 2;
// 		}
		
// 		lisLen_EndWith[i] = mid + 1;
// 		if(minLisEnd_OfLen[mid + 1] > a[i])
// 			minLisEnd_OfLen[mid + 1] = a[i];
// 	}
	
// 	int result = 0;
// 	for(int i = 1; i <= n; i++)
// 	{
// 		result = max(result, lisLen_EndWith[i]);
// 	}
	
// 	cout << result;
	
// }
