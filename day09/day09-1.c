#include <stdio.h>

typedef struct {
    int x;
    int y;
    int z;
} Vector3D;

void printVector(Vector3D v) {
    printf(" x:%d   y:%d    z:%d\n", v.x, v.y, v.z);
}

Vector3D addVectors(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

Vector3D subtractVectors(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

int dotProduct(Vector3D v1, Vector3D v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3D crossProduct(Vector3D v1, Vector3D v2) {
    Vector3D result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

int main() {
    Vector3D v1, v2;

    printf("ù��° ����(x, y, z) : ");
    scanf_s("%d, %d, %d", &v1.x, &v1.y, &v1.z);

    printf("�ι�° ����(x, y, z) : ");
    scanf_s("%d, %d, %d", &v2.x, &v2.y, &v2.z);

    printf("\n�Էµ� ù��° ����: ");
    printVector(v1);

    printf("�Էµ� �ι�° ����: ");
    printVector(v2);

    int choice;
    printf("\n----------------\n");
    printf("1. ������ ��\n");
    printf("2. ������ ��\n");
    printf("3. ������ ����\n");
    printf("4. ������ ����\n");
    printf("5. ����\n");
    printf("----------------\n");
    printf("��� �Է�: ");
    scanf_s("%d", &choice);

    // ���ÿ� ���� ��� ���
    switch (choice) {
    case 1: {
        Vector3D vAdd = addVectors(v1, v2);
        printf("\n������ ���� ");
        printVector(vAdd);
        break;
    }
    case 2: {
        Vector3D vSub = subtractVectors(v1, v2);
        printf("\n������ ���� ");
        printVector(vSub);
        break;
    }
    case 3: {
        Vector3D vCross = crossProduct(v1, v2);
        printf("\n������ ������ ");
        printVector(vCross);
        break;
    }
    case 4: {
        int vDot = dotProduct(v1, v2);
        printf("\n������ ������ vec1 * vec2=%d\n", vDot);
        break;
    }
    case 5: {
        exit(0);
    }
    default:
        printf("\n�߸��� �Է��Դϴ�.\n");
        break;
    }
    printf("\n----------------\n");

    return 0;
}
