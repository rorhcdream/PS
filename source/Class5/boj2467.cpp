// #include <iostream>
// #include <cstdio>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int nums[100000];
// int n;

// int main(void)
// {
// 	//input
// 	cin >> n;
	
// 	for(int i = 0; i < n; i++)
// 	{
// 		scanf("%d", &nums[i]);
// 	}
	
// 	//solve
// 	int abs_min = INT_MAX;
// 	int front = 0;
// 	int end = n - 1;
// 	int min_front_value;
// 	int min_end_value;
	
// 	while(front < end)
// 	{
// 		int value = nums[front] + nums[end];
// 		if(abs(value) < abs_min)
// 		{
// 			abs_min = abs(value);
// 			min_front_value = nums[front];
// 			min_end_value = nums[end];
// 		}
		
// 		value < 0 ? front++ : end--;
// 	}
	
// 	cout << min_front_value << " " << min_end_value;
// }
