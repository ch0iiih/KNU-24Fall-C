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
	printf("학생 수 입력 : ");
	scanf_s("%d", &N);

	// malloc
	p = (struct Student*)malloc(N * sizeof(struct Student));

	for (int i = 0; i < N; i++) {
		printf("학번 : ");
		scanf_s("%d", &p[i].snum);

		char tmp[100];
		printf("이름 : ");
		scanf_s("%s", p[i].name, 100);

		printf("점수 : ");
		scanf_s("%d", &p[i].score);
	}

	// average

	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", p[i].snum, p[i].name, p[i].score);
	}

	return 0;
}