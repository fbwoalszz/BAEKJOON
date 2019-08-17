#include <stdio.h>

/// In Ver 2.0, I worte like below.
/////* Wrong Answer.
/////* If input is 18, the correct answer is 05728.
/////* But according to this code, the answer is 5728.
/// It is problem too, but not correct reason.
/// The reason is line 21.
/// But...I don't know why using 1000000000000(10^12).
/// To be sure, under 10^12 or over 10^12, it's worng answer.
/// Maybe, If over 10^12, there is overflow in line 19. (My thought)

int main() {
	int input;
	long long num = 1;

	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		num *= i;
		while (num % 10 == 0) {			// If last number is 0,
			num /= 10;					// remove 0.
		}
		num %= 1000000000000;			// Why this num..???
	}

	num %= 100000;						// Finally, fixed digits to 5.

	printf("%00005lld\n", num);

	return 0;
}