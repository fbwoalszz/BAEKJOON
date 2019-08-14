#include <stdio.h>

int main() {
	int initNum, aNum, bNum, newNum, tmp;
	int cnt = 0;
	scanf("%d", &initNum);

	newNum = initNum;	

	do {
		aNum = newNum / 10;
		bNum = newNum % 10;
		tmp = (aNum + bNum) % 10;
		newNum = (bNum * 10) + tmp;
		cnt++;
	} while (initNum != newNum);

	printf("%d\n", cnt);
}