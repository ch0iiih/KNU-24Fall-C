#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0;
	double y = 0;
	double pi = 0;
	int count = 0, circle = 0;

	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		double circle1 = pow(x, y);
		double circle2 = sqrt(circle1);
		if (circle2 < 1) {
			circle++;
		}

		int percent = count / 10000000;

		if (count % 10000000 == 0) {
			pi = 4 * ((double)count / (double)circle);
			printf("%d%%진행.. 원주율 : %.6f ", percent, pi);
			if (percent > 10 && percent <= 20) {
				printf("■□□□□□□□□□\n");
			}
			else if (percent > 20 && percent <= 30) {
				printf("■■□□□□□□□□\n");
			}
			else if (percent > 30 && percent <= 40) {
				printf("■■■□□□□□□□\n");
			}
			else if (percent > 40 && percent <= 50) {
				printf("■■■■□□□□□□\n");
			}
			else if (percent > 50 && percent <= 60) {
				printf("■■■■■□□□□□\n");
			}
			else if (percent > 60 && percent <= 70) {
				printf("■■■■■■□□□□\n");
			}
			else if (percent > 70 && percent <= 80) {
				printf("■■■■■■■□□□\n");
			}
			else if (percent > 80 && percent <= 90) {
				printf("■■■■■■■■□□\n");
			}
			else if (percent > 90 && percent < 100) {
				printf("■■■■■■■■■□\n");
			}
			else if (percent == 100) {
				printf("■■■■■■■■■■\n");
			}
			else {
				printf("□□□□□□□□□□\n");
			}
		}
		count++;
	}

	printf("원주율 : &.6f", pi);
}
