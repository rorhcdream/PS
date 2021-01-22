// #include <iostream>

// using namespace std;

// int n;
// int x[10000];
// int y[10000];

// int main(void)
// {
// 	cin >> n;
// 	for(int i = 0; i < n; i++)
// 	{
// 		cin >> x[i] >> y[i];
// 	}
	
// 	long long result = 0;
// 	for(int i = 0; i < n - 1; i++)
// 	{
// 		result += (long long)x[i] * y[i+1];
// 		result -= (long long)x[i+1] * y[i];
// 	}
// 	result += (long long)x[n-1] * y[0];
// 	result -= (long long)x[0] * y[n-1];
	
// 	double dresult = result / 2.0;
// 	if(dresult < 0) dresult = -dresult;
	
// 	cout << fixed;
// 	cout.precision(1);	
// 	cout << dresult;
// }
