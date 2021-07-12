#include <iostream>

using namespace std;

int main(void)
{
	int answer;

	// input
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	// solve
	long long a, b, c, d;
	long long C1, C2;

	a = x1 - x2;
	b = -(x3 - x4);
	c = y1 - y2;
	d = -(y3 - y4);
	C1 = -(x2 - x4);
	C2 = -(y2 - y4);

	// parallel case
	if (a * d == b * c) {
		if (C1 * c != C2 * a) {
			answer = 0;
		}
		else {
			answer = 0;
			for (int alpha = 0; alpha <= 1; alpha++) {
				long long beta_mul1 = -a * alpha + C1;
				long long beta_mul2 = -c * alpha + C2;
				bool range1 = false, range2 = false;
				if (b >= 0 && beta_mul1 >= 0 && beta_mul1 <= b)
					range1 = true;
				if (b < 0 && beta_mul1 <= 0 && beta_mul1 >= b)
					range1 = true;
				if (d >= 0 && beta_mul2 >= 0 && beta_mul2 <= d)
					range2 = true;
				if (d < 0 && beta_mul2 <= 0 && beta_mul2 >= d)
					range2 = true;

				if (range1 && range2)
					answer = 1;
			}
			if (answer == 0) {
				for (int beta = 0; beta <= 1; beta++) {
				long long alpha_mul1 = -b * beta + C1;
				long long alpha_mul2 = -d * beta + C2;
				bool range1 = false, range2 = false;
				if (a >= 0 && alpha_mul1 >= 0 && alpha_mul1 <= a)
					range1 = true;
				if (a < 0 && alpha_mul1 <= 0 && alpha_mul1 >= a)
					range1 = true;
				if (c >= 0 && alpha_mul2 >= 0 && alpha_mul2 <= c)
					range2 = true;
				if (c < 0 && alpha_mul2 <= 0 && alpha_mul2 >= c)
					range2 = true;

				if (range1 && range2)
					answer = 1;
				}
			}
		}
	}
	// non-parallel case
	else {
		long long ad_bc = a * d - b * c;
		long long alpha_mul = d * C1 - b * C2;
		long long beta_mul = -c * C1 + a * C2;

		if (ad_bc > 0) {
			if (alpha_mul >= 0 && alpha_mul <= ad_bc
					&& beta_mul >= 0 && beta_mul <= ad_bc)
				answer = 1;
			else
				answer = 0;
		}
		else {
			if (alpha_mul <= 0 && alpha_mul >= ad_bc 
					&& beta_mul <= 0 && beta_mul >= ad_bc)
				answer = 1;
			else
				answer = 0;
		}
	}

	cout << answer;
}
