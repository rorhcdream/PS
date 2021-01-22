// #include <iostream>
// #include <cstdio>
// #include <algorithm>
// #include <climits>
// #include <vector>
// #include <stack>

// using namespace std;

// struct Link
// {
// 	int posA;
// 	int posB;
// 	int index;
// };

// bool compareA(Link a, Link b)
// {
// 	return a.posA < b.posA;
// }

// bool compareB(Link a, Link b)
// {
// 	return a.posB < b.posB;
// }

// int n;
// Link links[100001];
// vector<Link> dp;
// int previous[100001];
// int last;

// int main(void)
// {
// 	//input
// 	cin >> n;
	
// 	for(int i = 1; i <= n; i++)
// 		scanf("%d %d", &links[i].posA, &links[i].posB);

// 	//solve
// 	sort(links+1, links+n+1, compareA);
// 	for(int i = 1; i <= n; i++)
// 		links[i].index = i;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		int idx = lower_bound(dp.begin(), dp.end(), links[i], compareB) - dp.begin();
// 		previous[i] = (idx == 0) ? -1 : dp[idx - 1].index;
// 		if(idx == dp.size())
// 			dp.push_back(links[i]);
// 		else
// 			dp[idx] = links[i];
// 	}
	
// 	stack<int> connections;
// 	int conn = dp[dp.size()-1].index;

// 	do
// 	{
// 		connections.push(conn);
// 		conn = previous[conn];
// 	}
// 	while(conn != -1);
	
// 	printf("%d\n", n - connections.size());
// 	for(int i = 1; i <= n; i++)
// 	{
// 		if(connections.size() == 0 || links[i].posA < links[connections.top()].posA)
// 			printf("%d\n", links[i].posA);
// 		else if(links[i].posA == links[connections.top()].posA)
// 			connections.pop();
// 	}
// }
