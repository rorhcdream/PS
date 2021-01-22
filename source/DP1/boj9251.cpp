// #include <iostream>
// #include <cstring>
// #include <algorithm>

// using namespace std;


// string a, b;
// int aLen, bLen;
// int lcs[1001][1001];

// int LCS(int x, int y)
// {
// 	if(x == aLen || y == bLen)
// 		return 0;
	
// 	if(lcs[x][y] != -1)
// 		return lcs[x][y];
	
// 	int n = 0;
	
// 	n = LCS(x+1, y);
	
// 	int pos = b.find(a[x], y);
// 	if(pos != string::npos)
// 		n = max(n, LCS(x+1, pos+1) + 1);
	
// 	return lcs[x][y] = n;
// }

// int main(void)
// {
// 	cin >> a >> b;
	
// 	aLen = a.length();
// 	bLen = b.length();
	
// 	memset(lcs, -1, sizeof(lcs));
	
// 	cout << LCS(0, 0);
// }