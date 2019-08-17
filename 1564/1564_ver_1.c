#include <stdio.h>

/// time out.

int main() {
	int input;
	long long num = 1;

	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		num *= i;
		while (num % 10 == 0) {
			num /= 10;
		}
	}

	num %= 100000;

	printf("%lld\n", num);

	return 0;
}