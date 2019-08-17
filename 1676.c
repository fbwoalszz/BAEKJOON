#include <stdio.h>

/// The number of zeros is determined by the number of 2's and 5's.
/// Since there are fewer divisors of 5 than divisors of 2, only the number of 5 is checked.

int main() {
	int num = 0;
	int cnt = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (i % 5 == 0)
			cnt++;
		if (i % 25 == 0)
			cnt++;
		if (i % 125 == 0)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}