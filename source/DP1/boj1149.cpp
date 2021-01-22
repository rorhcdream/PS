// #include <iostream>

// using namespace std;

// int main(void)
// {
// 	int n;
// 	int rc[1000], gc[1000], bc[1000];
// 	int r[1000], g[1000], b[1000];
		
// 	cin >> n;
	
// 	for(int i = 0; i < n; i++)
// 	{
// 		cin >> rc[i] >> gc[i] >> bc[i];
// 	}
	
// 	r[0] = rc[0];
// 	g[0] = gc[0];
// 	b[0] = bc[0];
	
// 	for(int i = 1; i < n; i++)
// 	{
// 		r[i] = min(g[i-1], b[i-1]) + rc[i];
// 		g[i] = min(b[i-1], r[i-1]) + gc[i];
// 		b[i] = min(r[i-1], g[i-1]) + bc[i];

// 	}
	
// 	cout << min(min(r[n-1], g[n-1]), b[n-1]);
	
// 	return 0;
// }

// int min(int a, int b)
// {
// 	return (a<b)?a:b;
// }