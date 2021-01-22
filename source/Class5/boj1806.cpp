// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n, s;
// int arr[1000001];

// int main(void)
// {
// 	//input
// 	cin >> n >> s;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		cin >> arr[i];
// 	}
	
// 	//solve
// 	int head = 1, tail = 1;
// 	int sum = 0;
// 	int result = 2147483647;
	
// 	while(true)
// 	{
// 		while(tail <= n && sum < s)
// 		{
// 			sum += arr[tail++];
// 		}
		
// 		if(sum >= s)
// 		{
// 			result = min(tail - head, result);
// 			sum -= arr[head++];
// 		}
// 		else if(tail > n)
// 			break;
// 	}
	
	
// 	if(result == 2147483647)
// 		cout << 0;
// 	else
// 		cout << result;
// }

