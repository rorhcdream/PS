// #include <iostream>
// #define ARRAY_SIZE 40

// using namespace std;

// int fib[ARRAY_SIZE];

// int getMinimumFibInZecSum(int n)
// {
// 	int min = 0;
	
// 	while(n > 0)
// 	{
// 		for(int i = 1; i < ARRAY_SIZE; i++)
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
// 	for(int i = 2; i < ARRAY_SIZE; i++)
// 	{
// 		fib[i] = fib[i-1] + fib[i-2];
// 	}
// }


// int main(void)
// {
// 	int n;
// 	int result;
	
// 	cin >> n;
	
// 	setFibArray();	
	
// 	result = getMinimumFibInZecSum(n);
	
// 	if(n == result)
// 		cout << -1;
// 	else
// 		cout << result;	
	
// 	return 0;
// }