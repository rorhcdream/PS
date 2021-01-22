// #include <iostream>
// #include <string.h>
// #include <vector>
// #include <set>
// #include <algorithm>

// using namespace std;

// int t, n, k, w;
// int buildTime[1001];
// int totalBuildTimeCached[1001];
// vector<int> children[1001];

// int totalBuildTime(int vertexNum);

// int main(void)
// {
// 	cin >> t;
	
// 	for(int testcase = 0; testcase < t; testcase++)
// 	{
// 		//initialize
// 		memset(totalBuildTimeCached, -1, sizeof(totalBuildTimeCached));
// 		for(int i = 0; i < 1001; i++)
// 		{
// 			children[i].clear();
// 		}
		
// 		//input
// 		cin >> n >> k;
// 		for(int i = 1; i <= n; i++)
// 		{
// 			cin >> buildTime[i];
// 		}
		
// 		for(int i = 0; i < k; i++)
// 		{
// 			int a, b;
// 			cin >> a >> b;
			
// 			children[b].push_back(a);
// 		}
		
		
// 		cin >> w;
		
// 		//solve
// 		int result = totalBuildTime(w);
// 		cout << result << endl;
// 	}
	
	
// }

// int totalBuildTime(int vertexNum)
// {
// 	if(totalBuildTimeCached[vertexNum] == -1)
// 	{
// 		int prerequisite = 0;
// 		for(auto iter = children[vertexNum].begin(); iter != children[vertexNum].end(); iter++)
// 		{
// 			prerequisite = max(totalBuildTime(*iter), prerequisite);
// 		}
		
// 		totalBuildTimeCached[vertexNum] = prerequisite + buildTime[vertexNum];
// 	}
	
// 	return totalBuildTimeCached[vertexNum];
// }