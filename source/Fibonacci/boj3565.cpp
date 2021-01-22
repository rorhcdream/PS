// #include <iostream>
// #include <cstring>
// #define ARRAY_SIZE 80

// using namespace std;

// long long fib[ARRAY_SIZE];
// long long _fibNumsOf[ARRAY_SIZE];
// long long _sumOf1InFibNumsOf[ARRAY_SIZE];

// void setFibArray()
// {
// 	fib[0] = 0;
// 	fib[1] = 1;
// 	for(long long i = 2; i < ARRAY_SIZE; i++)
// 	{
// 		fib[i] = fib[i-1] + fib[i-2];
// 	}
// }

// long long fibNumsOf(int n)
// {
// 	if(_fibNumsOf[n] == 0)
// 	{
// 		for(int i = 0; i < n - 1; i++)
// 		{
// 			_fibNumsOf[n] += fibNumsOf(i);
// 		}
// 	}
	
// 	return _fibNumsOf[n];
// }

// long long sumOf1InFibNumsOf(int n)
// {
// 	if(_sumOf1InFibNumsOf[n] == 0)
// 	{
// 		for(int i = 0; i < n - 1; i++)
// 		{
// 			_sumOf1InFibNumsOf[n] += sumOf1InFibNumsOf(i) + fibNumsOf(i);
// 		}
		
// 	}
	
// 	return _sumOf1InFibNumsOf[n];	
// }


// //fibNumsOf(n) : n자리 피보나치 진법수로 나타낼 수 있는 숫자의 총 개수
// //sumOf1InFibNumsOf(n) : n자리 피보나치 진법수로 나타낼 수 있는 모든 숫자들의 1의 개수의 합

// int main(void)
// {
// 	long long n, countN, digit;
// 	long long result;
	
// 	int lastNum[ARRAY_SIZE];
	
// 	cin >> n;
	
// 	setFibArray();	
	
// 	memset(_fibNumsOf, 0, sizeof _fibNumsOf);
// 	memset(_sumOf1InFibNumsOf, 0, sizeof _sumOf1InFibNumsOf);
// 	memset(lastNum, 0, sizeof lastNum);
	
// 	_fibNumsOf[0] = 1;
// 	_fibNumsOf[1] = 1;
// 	_fibNumsOf[2] = 1;
// 	_sumOf1InFibNumsOf[1] = 1;
// 	_sumOf1InFibNumsOf[2] = 1;
	
// 	countN = 0;
// 	digit = 0;
// 	result = 0;
// 	while(countN + fibNumsOf(digit+1) * (digit + 1) < n)
// 	{
// 		digit++;
		
// 		countN += fibNumsOf(digit) * digit;
// 		result += sumOf1InFibNumsOf(digit);
// 	}
	
// 	digit++;
	
// 	int maxDigit = digit;
// 	int upperBoundDigit = maxDigit;
// 	int upperBoundDigitNum = 1;
	
// 	lastNum[upperBoundDigit] = 1;
	
// 	while(digit > 1)
// 	{
// 		digit = 0;
// 		while(countN + fibNumsOf(digit) * maxDigit <= n)
// 		{
// 			countN += fibNumsOf(digit) * maxDigit;
// 			result += sumOf1InFibNumsOf(digit) + upperBoundDigitNum * fibNumsOf(digit);
// 			digit++;
// 		}
// 		upperBoundDigit = digit;
// 		lastNum[upperBoundDigit] = 1;
// 		upperBoundDigitNum++;
// 	}
// 	int last = n - countN;
// 	for(int i = 0; i < last; i++)
// 	{
// 		result += lastNum[maxDigit - i];
// 	}	
// 	cout << result;
	
// 	return 0;
// }