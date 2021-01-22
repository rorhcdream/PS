// #include <iostream>
// #include <string.h>
// #include <vector>
// #include <set>

// using namespace std;

// int v;

// struct Link
// {
// 	int vertexNumber;
// 	int distance;
// };

// struct Vertex
// {
// 	int number;
// 	vector<Link> links;
// };

// struct Return_Type
// {
// 	int longestInTree;
// 	int farthestFromRoot;
// };

// Vertex vertices[100001];
// Return_Type TreeLength(Vertex root, const int parentNum = -1);

// int main(void)
// {
// 	//input
// 	cin >> v;
// 	int root_num = 0;
	
// 	for(int i = 0; i < v; i++)
// 	{
// 		int num;
// 		cin >> num;
// 		vertices[num] = Vertex();
// 		vertices[num].number = num;
		
// 		if(root_num == 0)
// 			root_num = num;
		
// 		while(true)
// 		{
// 			int childNum;
// 			cin >> childNum;
// 			if(childNum == -1)
// 				break;
			
// 			int dist;
// 			cin >> dist;
			
// 			Link link = {.vertexNumber = childNum, .distance = dist};
// 			vertices[num].links.push_back(link);
// 		}
// 	}
	
// 	//solve
// 	Return_Type length = TreeLength(vertices[root_num], -1);
// 	cout << length.longestInTree;	
// }

// Return_Type TreeLength(Vertex root, const int parentNum)
// {
// 	int farthest1 = 0, farthest2 = 0, longest = 0;
	
// 	for(auto iter=root.links.begin(); iter!=root.links.end(); iter++)
// 	{
// 		if(iter->vertexNumber == parentNum)
// 			continue;
		
// 		Return_Type length = TreeLength(vertices[iter->vertexNumber], root.number);
// 		int distance = iter->distance;
		
// 		if(length.longestInTree > longest)
// 			longest = length.longestInTree;
// 		if(length.farthestFromRoot + distance > farthest1)
// 		{
// 			farthest2 = farthest1;
// 			farthest1 = length.farthestFromRoot + distance;
// 		}
// 		else if(length.farthestFromRoot + distance > farthest2)
// 		{
// 			farthest2 = length.farthestFromRoot + distance;
// 		}
// 	}
	
// 	int longestInTree = (farthest1 + farthest2 > longest) ? farthest1 + farthest2 : longest;
// 	int farthestFromRoot = farthest1;
	
// 	return {.longestInTree=longestInTree, .farthestFromRoot=farthestFromRoot};
// }