#include <stdio.h>

int main() {
	int ban;
	int car[5];
	int cnt = 0;

	scanf("%d", &ban);

	for (int i = 0; i < 5; i++)
		scanf("%d", &car[i]);

	for (int i = 0; i < 5; i++) {
		if (ban == car[i])
			cnt++;
	}

	printf("%d\n", cnt);
}