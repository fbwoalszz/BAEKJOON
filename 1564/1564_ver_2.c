#include <stdio.h>

/// Wrong Answer.
/// If input is 18, the correct answer is 05728.
/// But according to this code, the answer is 5728.

int main() {
	int input;
	long long num = 1;

	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		num *= i;
		while (num % 10 == 0) {			// If last number is 0,
			num /= 10;					// remove 0.
		}
		num %= 100000000;				// fixed digits to 9.
	}

	num %= 100000;						// Finally, fixed digits to 5.

	printf("%lld\n", num);

	return 0;
}