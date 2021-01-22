// #include <iostream>

// using namespace std;

// int main(void)
// {
// 	int n, t;
// 	long long fib[41];
		
// 	fib[0] = 0;
// 	fib[1] = 1;
	
// 	for(int i = 2; i <= 40; i++)
// 	{
// 		fib[i] = fib[i-1] + fib[i-2];
// 	}
	
// 	cin >> t;
	
// 	for(int i = 1; i <= t; i++)
// 	{
// 		cin >> n;
		
// 		if(n != 0)
// 			cout << fib[n-1] << " " << fib[n] << endl;
// 		else
// 			cout << "1 0" << endl;
// 	}
// 	return 0;
// }