// #include <iostream>
// #include <string.h>
// #include <algorithm>

// using namespace std;

// int n;
// int time_[10001];
// int totalTime[10001];
// int prerequisiteNum[10001];
// int prerequisite[10001][101];

// int getTotalTime(int work);

// int main(void)
// {
// 	//initialize
// 	memset(totalTime, -1, sizeof(totalTime));
	
// 	//input
// 	cin >> n;
	
// 	for(int work = 1; work <= n; work++)
// 	{
// 		cin >> time_[work];
// 		cin >> prerequisiteNum[work];
		
// 		for(int i = 1; i <= prerequisiteNum[work]; i++)
// 		{
// 			cin >> prerequisite[work][i];
// 		}
// 	}
	
// 	//solve
// 	int result = 0;
// 	for(int work = 1; work <= n; work++)
// 	{
// 		result = max(getTotalTime(work), result);
// 	}
	
// 	cout << result;
// }

// int getTotalTime(int work)
// {
// 	if(totalTime[work] == -1)
// 	{	
// 		int prerequisiteMax = 0;

// 		for(int i = 1; i <= prerequisiteNum[work]; i++)
// 		{
// 			prerequisiteMax = max(getTotalTime(prerequisite[work][i]), prerequisiteMax);
// 		}

// 		totalTime[work] = prerequisiteMax + time_[work];
// 	}
// 	return totalTime[work];
// }
