// #include <iostream>
// #include <cstdio>
// #include <vector>
// #include <queue>

// using namespace std;

// int n, m;
// int smallerNum[32001] = {0};
// vector<int> biggers[32001];

// int main(void)
// {
// 	//input
// 	cin >> n >> m;
	
// 	for(int i = 0; i < m; i++)
// 	{
// 		int a, b;
// 		cin >> a >> b;
// 		biggers[a].push_back(b);
// 		smallerNum[b]++;
// 	}
	
// 	//solve
// 	queue<int> smallest;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		if(smallerNum[i] == 0)
// 			smallest.push(i);
// 	}
	
// 	while(smallest.size() > 0)
// 	{
// 		int s = smallest.front();
// 		smallest.pop();
		
// 		cout << s << " ";
		
// 		for(auto iter = biggers[s].begin(); iter != biggers[s].end(); iter++)
// 		{
// 			smallerNum[*iter]--;
// 			if(smallerNum[*iter] == 0)
// 				smallest.push(*iter);
// 		}
// 	}
// }
