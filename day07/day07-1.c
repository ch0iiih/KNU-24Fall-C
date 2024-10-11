#include <stdio.h>

int main() {
	int num;
	printf("층 수 입력 : ");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		for (int q = 0; q < num - i; q++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}