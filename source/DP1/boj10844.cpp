// #include <iostream>

// using namespace std;

// int main(void)
// {
// 	int n;
	
// 	cin >> n;
	
// 	//[자릿수][끝숫자] 인 계단수의 개수
// 	long long int stair[101][10];
	
	
// 	for(int i = 1; i <= 9; i++)
// 	{
// 		stair[1][i] = 1;

// 	}
// 	stair[1][0] = 0;
	
	
// 	for(int step = 2; step <= n; step++)
// 	{
// 		for(int i = 1; i <= 8; i++)
// 		{
// 			stair[step][i] = (stair[step-1][i+1] + stair[step-1][i-1]) % 1000000000;
			
// 		}
// 		stair[step][0] = stair[step-1][1];
// 		stair[step][9] = stair[step-1][8];
// 	}
	
// 	long long int answer = 0;
// 	for(int i = 0; i < 10; i++)
// 		answer += stair[n][i];
// 	answer = answer % 1000000000;
	
// 	cout << answer;
// }