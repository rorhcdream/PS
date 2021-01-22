// #include <iostream>
// #include <unordered_map>

// using namespace std;

// int n;
// int a[4001];
// int b[4001];
// int c[4001];
// int d[4001];

// int main(void)
// {
// 	//input
// 	cin >> n;
	
// 	for(int i = 1; i <= n; i++)
// 		cin >> a[i] >> b[i] >> c[i] >> d[i];

// 	//solve
// 	unordered_map<int, int> sum_cd(n*n);
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		for(int j = 1; j <= n; j++)
// 		{
// 			int sum = c[i] + d[j];
// 			if(sum_cd.find(sum) != sum_cd.end())
// 				sum_cd[sum]++;
// 			else
// 				sum_cd[sum] = 1;
// 		}
// 	}
	
// 	long long result = 0;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		for(int j = 1; j <= n; j++)
// 		{
// 			int sum = a[i] + b[j];
// 			if(sum_cd.find(-sum) != sum_cd.end())
// 				result += sum_cd[-sum];
// 		}
// 	}
	
// 	cout << result;
// }