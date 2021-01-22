// #include <iostream>
// #include <cstring>
// #include <string>
// #include <algorithm>

// using namespace std;


// string a, b;
// int aLen, bLen;
// string lcs[1001][1001] = {};

// int main(void)
// {
// 	cin >> a >> b;
	
// 	aLen = a.length();
// 	bLen = b.length();
	
	
// 	for(int x = 1; x <= aLen; x++)
// 	{
// 		for(int y = 1; y <= bLen; y++)
// 		{
// 			if(a[x-1] == b[y-1])
// 			{
// 				lcs[x][y] = lcs[x-1][y-1] + a[x-1];
// 			}
// 			else
// 			{
// 				lcs[x][y] = (lcs[x-1][y].length() > lcs[x][y-1].length()) ? lcs[x-1][y] : lcs[x][y-1];
// 			}
// 		}
// 	}
	
// 	cout << lcs[aLen][bLen].size() << endl;
// 	cout << lcs[aLen][bLen];
// }