// #include <iostream>
// #include <string.h>
// #include <climits>
// #include <bitset>

// using namespace std;

// int n;
// int W[16][16] = {0};
// int minWeight[16][16][0x10000];

// int getMinRoute(int start, int end, int cities_bit);

// int main(void)
// {
// 	//initialize
// 	memset(minWeight, -1, sizeof(minWeight));
	
// 	//input
// 	cin >> n;
	
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < n; j++)
// 		{
// 			cin >> W[i][j];
// 		}
// 	}
	
// 	//solve
// 	int result = INT_MAX;
// 	for(int i = 1; i < n; i++)
// 	{
// 		int minRoute = getMinRoute(0, i, ~(-1 << n));
		
// 		if(minRoute == 0 || W[i][0] == 0)
// 			continue;
// 		result = min(result, minRoute + W[i][0]);
// 	}
	
// 	cout << result;
// }

// int getMinRoute(int start, int end, int cities_bit)
// {
// 	if(minWeight[start][end][cities_bit] != -1)
// 		return minWeight[start][end][cities_bit];
	
// 	//calculate
// 	int cities_num = 0;
// 	for(int i = 0; i < n; i++)
// 	{
// 		if((cities_bit >> i) & 1)
// 			cities_num++;
// 	}
	
// 	if(cities_num == 2)
// 	{
// 		minWeight[start][end][cities_bit] = W[start][end];
// 	}
// 	else if(cities_num == 3)
// 	{
// 		int innerCities_bit = cities_bit;
// 		innerCities_bit &= ~(1 << start);
// 		innerCities_bit &= ~(1 << end);
		
// 		int innerCity = 0;
// 		for(; innerCity < n; innerCity++)
// 		{
// 			if(innerCities_bit & (1 << innerCity))
// 				break;
// 		}
		
// 		if(W[start][innerCity] == 0 || W[innerCity][end] == 0)
// 			minWeight[start][end][cities_bit] = 0;
// 		else
// 			minWeight[start][end][cities_bit] = W[start][innerCity] + W[innerCity][end];
// 	}
// 	else
// 	{
// 		int innerCities_bit = cities_bit;
// 		innerCities_bit &= ~(1 << start);
// 		innerCities_bit &= ~(1 << end);
		
// 		int result = INT_MAX;
		
// 		for(int innerStart = 0; innerStart < n; innerStart++)
// 		{
// 			if(!(innerCities_bit & (1 << innerStart)))
// 				continue;
// 			else if(W[start][innerStart] == 0)
// 				continue;
			
// 			for(int innerEnd = 0; innerEnd < n; innerEnd++)
// 			{
// 				if(!(innerCities_bit & (1 << innerEnd)))
// 					continue;
// 				else if(W[innerEnd][end] == 0)
// 					continue;
// 				else if(innerStart==innerEnd)
// 					continue;
				
// 				int minRoute = getMinRoute(innerStart, innerEnd, innerCities_bit);
// 				if(minRoute == 0)
// 					continue;
// 				else
// 					result = min(result, minRoute + W[start][innerStart] + W[innerEnd][end]);
// 			}
// 		}
		
// 		if(result == INT_MAX)
// 			minWeight[start][end][cities_bit] = 0;
// 		else
// 			minWeight[start][end][cities_bit] = result;
// 	}
	
// 	return minWeight[start][end][cities_bit];
// }