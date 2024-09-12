#include <stdio.h>

int main(void) {
	int choice;
	double num1, num2, result;
	printf("원하는 기능을 입력하시오.\n");
	printf("1. 더하기 / 2. 빼기 / 3. 곱하기 / 4. 나누기\n");
	RE:
	printf("기능 : ");
	scanf_s("%d", &choice);

	if (choice < 1 || choice > 4) {
		printf("올바른 숫자를 입력해 주세요.");
		goto RE;
	}

	printf("숫자 1을 입력하세요 : ");
	scanf_s("%lf", &num1);
	printf("숫자 2를 입력하세요 : ");
	scanf_s("%lf", &num2);

	if (choice == 1) {
		result = num1 + num2;
		printf("%lf + %lf = %lf", num1, num2, result);
	}
	else if (choice == 2) {
		result = num1 - num2;
		printf("%lf - %lf = %lf", num1, num2, result);
	}
	else if (choice == 3) {
		result = num1 * num2;
		printf("%lf * %lf = %lf", num1, num2, result);
	}
	else if (choice == 4) {
		result = num1 / num2;
		printf("%lf / %lf = %lf", num1, num2, result);
	}
	return 0;
}