#include <stdio.h>

int result[40] = { 1, 1 };

int fibonacci(int n) {
	if (n <= 1) {
		return result[n];
	}
	else {
		result[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return result[n];
	}
}

int main() {
	int i, cnt, num;

	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++) {
		scanf("%d", &num);
		
		if (num == 0)
			printf("1 0\n");
		else if (num == 1)
			printf("0 1\n");
		else {
			fibonacci(num);
			printf("%d %d", result[num - 2], result[num - 1]);
		}
	}

	return 0;
}