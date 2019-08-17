#include <stdio.h>

int main() {
	int num, a, b;
	int* arr;

	scanf("%d", &num);
	arr = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}

	for (int i = 0; i < num; i++) {
		printf("Case #%d: %d\n", i + 1, arr[i]);
	}
}