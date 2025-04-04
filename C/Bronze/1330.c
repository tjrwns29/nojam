#include <stdio.h>

int main() {
	short a, b;

	scanf("%hd %hd", &a, &b);

	if (a > b) {
		printf(">");
	} else if (a < b) {
		printf("<");
	} else
		printf("==");
}
