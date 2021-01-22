// #include <iostream>
// #include <limits>

// using namespace std;

// int min(int a, int b)
// {
// 	return a<b?a:b;
// }

// int main(void)
// {
// 	int n;
// 	int minOp[1000001];
	
// 	cin >> n;
	
// 	minOp[1] = 0;
	
// 	for(int i = 2; i <= n; i++)
// 	{
// 		int m = numeric_limits<int>::max();
// 		if(i % 2 == 0)
// 			m = min(m, minOp[i/2]+1);
// 		if(i % 3 == 0)
// 			m = min(m, minOp[i/3]+1);
// 		m = min(m, minOp[i-1]+1);
// 		minOp[i] = m;
// 	}
	
// 	cout << minOp[n];
// }