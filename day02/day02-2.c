#include <stdio.h>

int main() {
	int i;
	for (i = 0; i <= 99; i++) {
		if (((i % 3 == 0) && (i % 4 == 0)) || (i % 7 == 0)) {
			if ((i % 3 == 0) && (i % 4 == 0) && (i % 7 == 0)) {
				printf("%d ", i);
			}
			else {
				printf("%d ", i);
			}
		}
	}
	return 0;
}