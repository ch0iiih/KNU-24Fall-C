#include <stdio.h>
#include <stdlib.h>

struct Student {
	int snum;
	char name[100];
	int score;
};


int main() {
	int N;
	struct Student *p;

	// scanf --> N
	printf("�л� �� �Է� : ");
	scanf_s("%d", &N);

	// malloc
	p = (struct Student*)malloc(N * sizeof(struct Student));

	for (int i = 0; i < N; i++) {
		printf("�й� : ");
		scanf_s("%d", &p[i].snum);

		char tmp[100];
		printf("�̸� : ");
		scanf_s("%s", p[i].name, 100);

		printf("���� : ");
		scanf_s("%d", &p[i].score);
	}

	// average

	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", p[i].snum, p[i].name, p[i].score);
	}

	return 0;
}