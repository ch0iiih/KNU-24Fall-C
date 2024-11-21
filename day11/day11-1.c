#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double disc, root1, root2;

    printf("이차방정식의 계수 a, b, c를 입력하세요 (ax^2 + bx + c = 0): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("근은 %.2lf와 %.2lf입니다.\n", root1, root2);
    }
    else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("중근은 %.2lf입니다.\n", root1);
    }
    else {
        printf("허근을 갖습니다. 실근이 없습니다.\n");
    }

    return 0;
}
