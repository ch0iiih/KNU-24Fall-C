#include <stdio.h>
#include <stdlib.h>

struct Student {
	int snum;
	char name[100];
	int score;
};


int main() {
	struct Student person[2];
	person[0].snum = 1111;
	strcpy_s(person[0].name, 100, "È«±æµ¿");
	person[0].score = 60;

	person[1].snum = 2222;
	strcpy_s(person[1].name, 100, "°ûÃ¶¼ö");
	person[1].score = 80;
	for (int i = 0; i < 2; i++) {
		printf("%d %s %d\n", person[i].snum, person[i].name, person[i].score);
	}
	return 0;
}