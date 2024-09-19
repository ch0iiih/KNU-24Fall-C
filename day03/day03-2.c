#include <stdio.h>

int main(void) {
	int input;
	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &input);
	printf("%d! = %d", input, acc(input));
}

int acc(int n) {

	int result = 0;

	if (n == 1) {
		return 1;
	}
	result = n * acc(n - 1);

	return result;
}