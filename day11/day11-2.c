#include <stdio.h>
#include <math.h>

double function(double x) {
    // return x * x + 1;
    return -log10(1 / x) + sin(x);
}

int main() {
    double lower_limit, upper_limit;
    int n = 1, iterations;
    double width, sum;

    printf("���� ������ ���Ѱ� ������ �Է��ϼ��� (��: 0 1): ");
    scanf_s("%lf %lf", &lower_limit, &upper_limit);
    printf("���� ������ �� �辿 �ø� �ݺ� Ƚ���� �Է��ϼ���: ");
    scanf_s("%d", &iterations);

    for (int iter = 0; iter < iterations; iter++) {
        sum = 0.0;
        width = (upper_limit - lower_limit) / n;

        sum += 0.5 * (function(lower_limit) + function(upper_limit));
        for (int i = 1; i < n; i++) {
            double x = lower_limit + i * width;
            sum += function(x);
        }
        sum *= width;

        printf("���� ����: %d, ���а�: %.6lf\n", n, sum);

        n *= 2;
    }

    return 0;
}
