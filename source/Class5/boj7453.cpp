// 시간 초과

// #include <iostream>
// #include <queue>
// #include <cstring>
// #include <algorithm>

// using namespace std;

// struct Element
// {
// 	int x;
// 	int y;
// 	int value;
// };

// int n;
// int a[4001];
// int b[4001];
// int c[4001];
// int d[4001];
// bool used[4001][4001];

// int main(void)
// {
// 	//input
// 	cin >> n;
	
// 	for(int i = 1; i <= n; i++)
// 		cin >> a[i] >> b[i] >> c[i] >> d[i];

// 	//solve
// 	sort(a+1, a+n+1);
// 	sort(b+1, b+n+1);
// 	sort(c+1, c+n+1);
// 	sort(d+1, d+n+1);
	
// 	vector<int> ab;
// 	vector<int> cd;
	
// 	auto cmp = [](Element e1, Element e2) { return e1.value > e2.value; };
// 	priority_queue<Element, vector<Element>, decltype(cmp)> q(cmp);
	
// 	q.push({1, 1, a[1]+b[1]});
// 	memset(used, 0, sizeof(used));
	
// 	while(!q.empty())
// 	{
// 		auto e = q.top();
// 		q.pop();
// 		if(used[e.x][e.y]) continue;
		
// 		ab.push_back(e.value);
		
// 		if(e.x != n)
// 			q.push({e.x+1, e.y, a[e.x+1]+b[e.y]});
// 		if(e.y != n)
// 			q.push({e.x, e.y+1, a[e.x]+b[e.y+1]});
		
// 		used[e.x][e.y] = true;
// 	}
	
// 	q.push({1, 1, c[1]+d[1]});
// 	memset(used, 0, sizeof(used));

// 	while(!q.empty())
// 	{
// 		auto e = q.top();
// 		q.pop();
// 		if(used[e.x][e.y]) continue;
		
// 		cd.push_back(e.value);
		
// 		if(e.x != n)
// 			q.push({e.x+1, e.y, c[e.x+1]+d[e.y]});
// 		if(e.y != n) 
// 			q.push({e.x, e.y+1, c[e.x]+d[e.y+1]});
		
// 		used[e.x][e.y] = true;
// 	}

// 	int result = 0;
// 	int idx1 = 0;
// 	int idx2 = n*n-1;
	
// 	while(idx1 < n*n && idx2 >= 0)
// 	{
// 		int sum = ab[idx1] + cd[idx2];
// 		if(sum < 0) idx1++;
// 		else if(sum > 0) idx2--;
// 		else
// 		{
// 			int in_idx1 = idx1;
// 			int in_idx2 = idx2;
// 			while(ab[in_idx1] == ab[idx1] && in_idx1 < n*n) in_idx1++;
// 			while(cd[in_idx2] == cd[idx2] && in_idx2 >= 0) in_idx2--;
			
// 			result += (in_idx1 - idx1) * (idx2 - in_idx2);
// 			idx1 = in_idx1;
// 			idx2 = in_idx2;
// 		}
// 	}
	
// 	cout << result;
// }