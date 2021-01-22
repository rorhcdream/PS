// #include <iostream>

// using namespace std;

// int main(void)
// {
// 	int n;
	
// 	cin >> n;
	
// 	//[자릿수][끝숫자] 인 계단수의 개수
// 	long long int stair[101][10];
// 	long long int stair9[101][10];
// 	long long int stair0[101][10];
// 	long long int stair90[101][10];
	
// 	for(int i = 0; i <= 9; i++)
// 	{
// 		stair[1][i] = 1;
// 		stair9[1][i] = 0;
// 		stair0[1][i] = 0;
// 		stair90[1][i] = 0;
// 	}
// 	stair[1][0] = 0;
// 	stair[1][9] = 0;
// 	stair9[1][9] = 1;
// 	stair0[1][0] = 0;
	
// 	for(int step = 2; step <= n; step++)
// 	{
// 		for(int i = 1; i <= 8; i++)
// 		{
// 			stair[step][i] = (stair[step-1][i+1] + stair[step-1][i-1]) % 1000000000;
// 			stair9[step][i] = (stair9[step-1][i+1] + stair9[step-1][i-1]) % 1000000000;
// 			stair0[step][i] = (stair0[step-1][i+1] + stair0[step-1][i-1]) % 1000000000;
// 			stair90[step][i] = (stair90[step-1][i+1] + stair90[step-1][i-1]) % 1000000000;
// 		}
// 		stair[step][0] = 0;
// 		stair[step][9] = 0;
		
// 		stair9[step][0] = 0;
// 		stair9[step][9] = (stair9[step-1][8] + stair[step-1][8]) % 1000000000;
		
// 		stair0[step][0] = (stair0[step-1][1] + stair[step-1][1]) % 1000000000;
// 		stair0[step][9] = 0;
		
// 		stair90[step][0] = (stair90[step-1][1] + stair9[step-1][1]) % 1000000000;
// 		stair90[step][9] = (stair90[step-1][8] + stair0[step-1][8]) % 1000000000;
// 	}
	
// 	long long int answer = 0;
// 	for(int i = 0; i < 10; i++)
// 		answer += stair90[n][i];
// 	answer = answer % 1000000000;
	
// 	cout << answer;
// }