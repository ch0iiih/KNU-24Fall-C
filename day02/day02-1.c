#include <stdio.h>

int main(void) {
	int choice;
	double num1, num2, result;
	printf("���ϴ� ����� �Է��Ͻÿ�.\n");
	printf("1. ���ϱ� / 2. ���� / 3. ���ϱ� / 4. ������\n");
	RE:
	printf("��� : ");
	scanf_s("%d", &choice);

	if (choice < 1 || choice > 4) {
		printf("�ùٸ� ���ڸ� �Է��� �ּ���.");
		goto RE;
	}

	printf("���� 1�� �Է��ϼ��� : ");
	scanf_s("%lf", &num1);
	printf("���� 2�� �Է��ϼ��� : ");
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