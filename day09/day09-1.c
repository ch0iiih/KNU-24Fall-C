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

    printf("첫번째 벡터(x, y, z) : ");
    scanf_s("%d, %d, %d", &v1.x, &v1.y, &v1.z);

    printf("두번째 벡터(x, y, z) : ");
    scanf_s("%d, %d, %d", &v2.x, &v2.y, &v2.z);

    printf("\n입력된 첫번째 벡터: ");
    printVector(v1);

    printf("입력된 두번째 벡터: ");
    printVector(v2);

    int choice;
    printf("\n----------------\n");
    printf("1. 벡터의 합\n");
    printf("2. 벡터의 차\n");
    printf("3. 벡터의 외적\n");
    printf("4. 벡터의 내적\n");
    printf("5. 종료\n");
    printf("----------------\n");
    printf("명령 입력: ");
    scanf_s("%d", &choice);

    // 선택에 따라 결과 출력
    switch (choice) {
    case 1: {
        Vector3D vAdd = addVectors(v1, v2);
        printf("\n벡터의 합은 ");
        printVector(vAdd);
        break;
    }
    case 2: {
        Vector3D vSub = subtractVectors(v1, v2);
        printf("\n벡터의 차는 ");
        printVector(vSub);
        break;
    }
    case 3: {
        Vector3D vCross = crossProduct(v1, v2);
        printf("\n벡터의 외적은 ");
        printVector(vCross);
        break;
    }
    case 4: {
        int vDot = dotProduct(v1, v2);
        printf("\n벡터의 내적은 vec1 * vec2=%d\n", vDot);
        break;
    }
    case 5: {
        exit(0);
    }
    default:
        printf("\n잘못된 입력입니다.\n");
        break;
    }
    printf("\n----------------\n");

    return 0;
}
