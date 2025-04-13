#include <stdio.h>

int main() {
	int num1, num2, num3;
	int max, sameNum;

	scanf("%d %d %d", &num1, &num2, &num3);

	if ((num1 == num2) && (num2 == num3)) {
		sameNum = num1;
		printf("%d", 10000 + sameNum * 1000);
	}

	if ((num1 != num2) && (num2 != num3) && (num1 != num3)) {
		max = num1;
		if (num2 > max) {
			max = num2;
		}
		if (num3 > max) {
			max = num3;
		}
		printf("%d", max * 100);
	}

	if ((num1 == num2) && (num1 != num3)) {
		sameNum = num1;
		printf("%d", 1000 + sameNum * 100);
	}
	if ((num2 == num3) && (num2 != num1)) {
		sameNum = num2;
		printf("%d", 1000 + sameNum * 100);
	}
	if ((num1 == num3) && (num1 != num2)) {
		sameNum = num1;
		printf("%d", 1000 + sameNum * 100);
	}
}