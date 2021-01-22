// #include <iostream>
// #include <vector>
// #include <cstdio>
// #include <queue>

// using namespace std;

// int n, m;

// int front[1001] = {0};
// vector<int> back[1001];

// int main(void)
// {
// 	//input
// 	cin >> n >> m;

// 	for(int i = 0; i < m; i++)
// 	{
// 		int num;
// 		cin >> num;
		
// 		int a, b;
// 		scanf("%d", &a);
		
// 		for(int j = 1; j < num; j++)
// 		{
// 			scanf("%d", &b);
// 			back[a].push_back(b);
// 			front[b]++;
// 			a = b;
// 		}
// 	}
	
// 	//solve
// 	queue<int> q;
// 	vector<int> print;
	
// 	for(int i = 1; i <= n; i++)
// 		if(front[i] == 0) q.push(i);
	
// 	while(!q.empty())
// 	{
// 		int cur = q.front();
// 		q.pop();
// 		print.push_back(cur);
		
// 		for(int b : back[cur])
// 		{
// 			front[b]--;
// 			if(front[b] == 0)
// 				q.push(b);
// 		}
// 	}
	
// 	if(print.size() == n)
// 		for(int i : print)
// 			printf("%d\n", i);
// 	else
// 		printf("0");
// }