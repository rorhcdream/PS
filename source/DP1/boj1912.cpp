// #include <iostream>

// using namespace std;

// int max(int a, int b)
// {
// 	return a>b?a:b;
// }

// int main(void)
// {
// 	int n;
// 	int sequence[100001];
// 	int posAccumSum[100001];
	
// 	cin >> n;
// 	for(int i = 1; i <= n; i++)
// 	{
// 		cin >> sequence[i];
// 	}
	
// 	posAccumSum[1] = sequence[1];
// 	for(int i = 2; i <= n; i++)
// 	{
// 		if(posAccumSum[i-1] < 0) 
// 			posAccumSum[i] = sequence[i];
// 		else
// 			posAccumSum[i] = posAccumSum[i-1] + sequence[i];
// 	}
	
// 	int result = -2147483648;
// 	for(int i = 1; i <= n; i++)
// 		result = max(result, posAccumSum[i]);
	
// 	cout << result;
// }