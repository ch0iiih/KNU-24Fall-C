#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double disc, root1, root2;

    printf("������������ ��� a, b, c�� �Է��ϼ��� (ax^2 + bx + c = 0): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("���� %.2lf�� %.2lf�Դϴ�.\n", root1, root2);
    }
    else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("�߱��� %.2lf�Դϴ�.\n", root1);
    }
    else {
        printf("����� �����ϴ�. �Ǳ��� �����ϴ�.\n");
    }

    return 0;
}
