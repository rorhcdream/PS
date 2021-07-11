#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int a[1000001];
int lisLen_EndWith[1000001];
int idxbefore_EndWith[1000001];
int minLisEnd_OfLen[1000001];
int minLisEndIdx_OfLen[1000001];
int values[1000001];

int main(void)
{
	//input
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	//solve
	minLisEnd_OfLen[0] = INT_MIN;

	
	for(int i = 1; i <= n; i++)
	{
		minLisEnd_OfLen[i] = INT_MAX;
		
		int front = 0;
		int end = i;
		int mid = (front + end) / 2;
		
		while(front + 1 < end)
		{
			if(minLisEnd_OfLen[mid] < a[i])
				front = mid;
			else
				end = mid;
			
			mid = (front + end) / 2;
		}
		
		lisLen_EndWith[i] = mid + 1;
        idxbefore_EndWith[i] = minLisEndIdx_OfLen[mid];
		if(minLisEnd_OfLen[mid + 1] > a[i]) {
			minLisEnd_OfLen[mid + 1] = a[i];
            minLisEndIdx_OfLen[mid + 1] = i;
        }
	}
	
    int max_value = 0;
	int max_idx;
	for(int i = 1; i <= n; i++)
	{
		if (lisLen_EndWith[i] > max_value) {
            max_value = lisLen_EndWith[i];
            max_idx = i;
        }
	}

    int idx = max_idx;
    for (int i = max_value; i > 0; i--) {
        values[i] = a[idx];
        idx = idxbefore_EndWith[idx];
    }
	
    // output
	cout << max_value << endl;
    for (int i = 1; i <= max_value; i++) {
        cout << values[i] << " ";
    }
	
}
