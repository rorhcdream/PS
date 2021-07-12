#include <iostream>
#include <limits>

using namespace std;

int min_op[1000001] = {0};
int prev_num[1000001] = {0};

int main(void)
{
	// input
	int n;
	cin >> n;

	// solve
	for (int i = 2; i <= n; i++) {
		int prev = i-1;
		int min = min_op[prev] + 1;

		if (i % 2 == 0) {
			if (min_op[i/2] + 1 < min) {
				prev = i/2;
				min = min_op[prev] + 1;
			}
		}
		if (i % 3 == 0) {
			if (min_op[i/3] + 1 < min) {
				prev = i/3;
				min = min_op[prev] + 1;
			}
		}
		prev_num[i] = prev;
		min_op[i] = min;
	}

	// output
	cout << min_op[n] << endl;
	int cur = n;
	for (int i = 0; i <= min_op[n]; i++) {
		cout << cur << " ";
		cur = prev_num[cur];
	}
}
