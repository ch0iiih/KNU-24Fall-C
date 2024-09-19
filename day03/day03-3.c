#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
	printf("%d\n", abs(-4));
	printf("%d\n", sin(30 * (M_PI / 180)));
	printf("%d\n", cos(30 * (M_PI / 180)));
	printf("%d\n", sqrt(2.5));
	printf("%d\n", pow(1.5, 4.0));
}
