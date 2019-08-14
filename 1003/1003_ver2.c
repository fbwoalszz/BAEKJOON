#include <stdio.h>

int fibonacci(int n);

int main() {
	int cnt, num;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num);

		if (num == 0)
			printf("1 0\n");
		else {
			printf("%d %d\n", fibonacci(num - 2), fibonacci(num - 1));
		}
	}

	return 0;
}

int fibonacci(int n) {
	static int result[40] = { 1, 1 };

	if (n < 1)
		return result[n];
	else if (result[n] > 0)				// if there is value already exists, return them.
		return result[n];
	else {
		return result[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}