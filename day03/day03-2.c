#include <stdio.h>

int main(void) {
	int input;
	printf("����� ���丮�� �� �Է� : ");
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