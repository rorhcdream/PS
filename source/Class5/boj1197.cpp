// #include <iostream>
// #include <string.h>
// #include <vector>
// #include <queue>

// using namespace std;

// struct Link
// {
// 	int to;
// 	int weight;
// };

// struct LinkCompare
// {
// 	bool operator()(Link l1, Link l2)
// 	{
//         return l1.weight > l2.weight;
//     }
// };

// int v, e;
// vector<Link> links[10001];

// priority_queue<Link, vector<Link>, LinkCompare> linksOutside;
// int included[10001] = {0};
// int insideVertexNum = 0;
// int result = 0;

// int main(void)
// {
// 	//input
// 	cin >> v >> e;
	
// 	for(int i = 0; i < e; i++)
// 	{
// 		int a, b, c;
// 		cin >> a >> b >> c;
		
// 		links[a].push_back({b, c});
// 		links[b].push_back({a, c});
// 	}
	
// 	//solve
// 	included[1] = 1;
// 	insideVertexNum = 1;
// 	for(auto iter = links[1].begin(); iter != links[1].end(); iter++)
// 	{
// 		linksOutside.push(*iter);
// 	}
	
// 	while(insideVertexNum != v)
// 	{
// 		Link l = linksOutside.top();
// 		linksOutside.pop();
		
// 		if(included[l.to] == 1)
// 			continue;
		
// 		result += l.weight;
// 		included[l.to] = 1;
// 		insideVertexNum += 1;
// 		for(auto iter = links[l.to].begin(); iter != links[l.to].end(); iter++)
// 		{
// 			linksOutside.push(*iter);
// 		}
// 	}
	
// 	cout << result;
// }

