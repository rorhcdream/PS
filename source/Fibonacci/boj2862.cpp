// #include <iostream>
// #define ARRAY_SIZE 80

// using namespace std;

// long long fib[ARRAY_SIZE];

// long long getMinimumFibInZecSum(long long n)
// {
// 	long long min = 0;
	
// 	while(n > 0)
// 	{
// 		for(long long i = 1; i < ARRAY_SIZE; i++)
// 		{
// 			if(fib[i] > n)
// 			{
// 				n -= fib[i-1];
// 				min = fib[i-1];
// 				break;
// 			}
// 		}
// 	}
	
// 	return min;
// }

// void setFibArray()
// {
// 	fib[0] = 0;
// 	fib[1] = 1;
// 	for(long long i = 2; i < ARRAY_SIZE; i++)
// 	{
// 		fib[i] = fib[i-1] + fib[i-2];
// 	}
// }


// int main(void)
// {
// 	long long n;
// 	long long result;
	
// 	cin >> n;
	
// 	setFibArray();	
	
// 	result = getMinimumFibInZecSum(n);
	
// 	cout << result;
	
// 	return 0;
// }