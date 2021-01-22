// #include <iostream>

// using namespace std;

// int max(int a, int b)
// {
// 	return a>b?a:b;
// }

// int main(void)
// {
// 	int n;
// 	int p[501] = {0, };
// 	int LIS[501] = {0, };
	
// 	cin >> n;
// 	for(int i = 0; i < n; i++)
// 	{
// 		int p1, p2;
// 		cin >> p1 >> p2;
// 		p[p1] = p2;
// 	}
	
// 	for(int i = 1; i <= 500; i++)
// 	{
// 		if(p[i] == 0) continue;
		
// 		int m = 0;
// 		for(int j = 1; j < i; j++)
// 		{
// 			if(LIS[j] != 0 && p[i] > p[j])
// 				m = max(m, LIS[j] + 1);	
// 		}
// 		if(m == 0) LIS[i] = 1;
// 		else LIS[i] = m;
// 	}
	
// 	int m = 0;
// 	for(int i = 1; i <= 500; i++)
// 	{
// 		m = max(m, LIS[i]);		
// 	}
	
// 	cout << n-m;
// }
