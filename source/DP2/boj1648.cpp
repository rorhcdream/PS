// #include <iostream>
// #include <list>
// #include <vector>

// using namespace std;

// list<int> makeNextCombination(const int, const int);
// list<int> makeNextCombination(const int, const int, int);
// bool isEndCombination(const int, const int);
// void swap(int&, int&);
// bool isOdd(const int);
// void printBinaryShort(const int);



// list<int> makeNextCombination(const int input, const int len)
// {
// 	return makeNextCombination(input, len, 0);
// }

// list<int> makeNextCombination(const int input, const int len, int step)
// {	
// 	list<int> result;
	
// 	if(step >= len)
// 	{
// 		result.push_back(0);
// 		return result;
// 	}
	
// 	int curBitMask = 1 << step;
// 	int nextBitMask = 2 << step;
// 	int twoBitMask = curBitMask | nextBitMask;
	
// 	if(input & curBitMask)
// 	{
// 		return makeNextCombination(input, len, step + 1);
// 	}
// 	else
// 	{
// 		list<int> nextCombi = makeNextCombination(input, len, step + 1);
			
// 		for(int i : nextCombi)
// 		{
// 			result.push_back(i | curBitMask);
// 		}
		
		
// 		if(!(input & nextBitMask) && step != len - 1)
// 		{
// 			result.merge(makeNextCombination(input, len, step + 2));
// 		}
		
// 		return result;
// 	}
	
// }

// bool isEndCombination(const int input, const int len)
// {
// 	bool hasOneZero = false;
	
// 	for(int step = 0; step < len; step++)
// 	{
// 		int mask = 1 << step;
		
// 		if(input & mask)
// 		{
// 			if(hasOneZero)
// 				return false;
// 		}
// 		else
// 		{
// 			hasOneZero = !hasOneZero;
// 		}
// 	}
	
// 	if(hasOneZero)
// 		return false;
// 	else
// 		return true;
// }


// void swap(int& a, int& b)
// {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }

// bool isOdd(const int a)
// {
// 	return a%2 == 1;
// }

// void printBinaryShort(const int a)
// {
// 	int tmp = a;
// 	for(int i = 0; i < 16; i++)
// 	{
// 		cout << ((tmp & 0x8000) >> 15);
// 		tmp = tmp << 1;
// 	}
// 	cout << endl;
// }



// int main(void)
// {
// 	vector<list<int>> nextCombinations(0x8000);
// 	int dpCombination[14][0x8000];
	
// 	int N, M;
// 	int bit_len;
	
// 	cin >> N >> M;
	
// 	if(M == 1)
// 	{
// 		cout << 0;
// 		return 0;
// 	}
	
// 	bit_len = N;
	
// 	for(int i = 0; i < 0x8000; i++)
// 	{
// 		nextCombinations[i] = makeNextCombination(i, bit_len);
// 	}

// 	for(int i : nextCombinations[0])
// 	{
// 		dpCombination[0][i] = 1;
// 	}
	
// 	for(int step = 1; step < M-1; step++)
// 	{
// 		for(int i = 0; i < 0x8000; i++)
// 		{
// 			if(dpCombination[step-1][i] == 0) continue;
			
// 			for(int const next : nextCombinations[i])
// 			{
// 				dpCombination[step][next] = (dpCombination[step][next] + dpCombination[step-1][i]) % 9901;
// 			}
// 		}
// 	}
	
// 	int result = 0;
// 	for(int i = 0; i < 0x8000; i++)
// 	{
// 		//cout << "isEndCombination(" << i << ", " << bit_len << ") : " << isEndCombination(i, bit_len) << endl;
		
// 		if(isEndCombination(i, bit_len))
// 			result = (result + dpCombination[M-2][i]) % 9901;
// 	}
	
// 	cout << result;	
// }






























// // list<int> available_combination(const int, const int);
// // list<int> available_combination(const int, const int, int);
// // list<int> available_output(const int);



// // list<int> available_combination(const int input, const int len)
// // {
// // 	return available_combination(input, len, 0);
// // }

// // list<int> available_combination(const int input, const int len, int step)
// // {
// // 	list<int> result;

// // 	if(step >= len)
// // 	{
// // 		result.push_back(input);
// // 		return result;
// // 	}
	
// // 	int curBitMask = 0x1 << step;
// // 	int curBitCanBeCheckedMask = 0x3 << step;
	
// // 	if((input & curBitCanBeCheckedMask) == 0)
// // 	{
// // 		result = available_combination(input | curBitMask, len, step + 2);
// // 		result.merge(available_combination(input, len, step+1));
				
// // 		return result;
// // 	}
// // 	else
// // 	{
// // 		int nextBitMask = 0x2 << step;

// // 		while((input & nextBitMask) != 0)
// // 		{
// // 			step++;
// // 			nextBitMask = nextBitMask << 1;
// // 		}
		
// // 		return available_combination(input, len, step + 2);
// // 	}
// // }

// // list<int> available_output(const int combination)
// // {	
// // 	int mask = 1;
	
// // 	for(int i = 0; i < 13; i++)
// // 	{
// // 		if(combination & mask)
// // 		{
// // 			list<int> result = available_output(combination & (~mask));
// // 			list<int> plus;
// // 			for(int const it : result)
// // 			{
// // 				plus.push_back(it | mask);
// // 			}
			
// // 			result.merge(plus);
			
// // 			return result;
// // 		}
		
// // 		mask = mask << 1;
// // 	}
	
// // 	list<int> result;
// // 	result.push_back(0);
// // 	return result;
// // }



// // int main(void)
// // {
// // 	vector<list<int>> combinations(0x1600);
// // 	vector<list<int>> outputs(0x1600);
// // 	int dpCombination[8][0x1600];
// // 	int dpOutput[8][0x1600];
	
// // 	int N, M;
// // 	int bit_len;
// // 	list<int> all_combination;
	
// // 	cin >> N >> M;
	
// // 	if(isOdd(N) && isOdd(M))
// // 	{
// // 		cout << 0;
// // 		return 0;
// // 	}
// // 	else if(isOdd(N))
// // 		swap(N, M);
	
// // 	bit_len = M-1;
// // 	all_combination = available_combination(0, bit_len);
	
// // 	for(int const it : all_combination)
// // 	{
// // 		combinations[it] = available_combination(it, bit_len);		
// // 	}
// // 	for(int const it : all_combination)
// // 	{
// // 		outputs[it] = available_output(it);
// // 	}
// // 	for(int const it : all_combination)
// // 	{
// // 		dpCombination[0][it] = 1;
// // 	}
	
// // 	for(int step = 1; step < N/2; step++)
// // 	{
// // 		for(int const it : all_combination)
// // 		{
// // 			for(int const output : available_output(it))
// // 			{
// // 				dpOutput[step][output] = (dpOutput[step][output] + dpCombination[step-1][it]) % 9901;	
// // 				//cout << "dpOutput[" << step << "][" << output << "] = " << dpOutput[step][output] << endl;
// // 			}
// // 		}
// // 		for(int const it : all_combination)
// // 		{
// // 			for(int const combi : available_combination(it, bit_len))
// // 			{
// // 				dpCombination[step][combi] = (dpCombination[step][combi] + dpOutput[step][it]) % 9901;				
// // 				//cout << "dpCombination[" << step << "][" << combi << "] = " << dpCombination[step][combi] << endl;
// // 			}
// // 		}
// // 	}
	
// // 	int result = 0;
// // 	for(int const it : all_combination)
// // 	{
// // 		result = (result + dpCombination[(N/2)-1][it]) % 9901;
// // 	}
	
// // 	cout << result;	
// // }

