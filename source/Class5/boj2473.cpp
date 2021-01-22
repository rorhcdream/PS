// #include <iostream>
// #include <cstdio>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int nums[5000];
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
// 	sort(nums, nums + n);
// 	long long minValue = LLONG_MAX;
// 	int values[3];
	
// 	for(int front = 0; front < n - 1; front++)
// 	{
// 		for(int end = front + 1; end < n; end++)
// 		{
// 			int in_front = front;
// 			int in_end = end;
			
// 			while(true)
// 			{
// 				int mid = (in_front + in_end) / 2;

// 				if(mid == in_front || mid == in_end)
// 					break;

// 				long long sum = (long long)nums[front] + nums[end] + nums[mid];
// 				if(abs(sum) < minValue)
// 				{
// 					minValue = abs(sum);
// 					values[0] = nums[front];
// 					values[1] = nums[mid];
// 					values[2] = nums[end];
// 				}

// 				if(sum < 0)
// 				{
// 					in_front = mid;
// 				}
// 				else
// 				{
// 					in_end = mid;
// 				}
// 			}
			
// 		}
// 	}
	
// 	cout << values[0] << " " << values[1] << " " << values[2];
// }
