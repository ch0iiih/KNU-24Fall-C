#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int price;
} Product;

void printProduct(Product p);

int main() {
    Product products[5];
    int count = 0;
    int id;

    while (count < 5) {
        printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� id�� 0 �Է�)\n");

        printf("��ǰ ID: ");
        scanf_s("%d", &id);

        if (id == 0) {
            break;
        }

        products[count].id = id;

        printf("��ǰ��: ");
        scanf_s("%s", products[count].name, sizeof(products[count].name));

        printf("����: ");
        scanf_s("%d", &products[count].price);

        count++;
        printf("\n");
    }

    printf("\n<< �Էµ� ��ǰ ��� >>\n");

    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
    }

    return 0;
}

void printProduct(Product p) {
    printf("��ǰ ID: %d\n", p.id);
    printf("��ǰ��: %s\n", p.name);
    printf("����: %d��\n\n", p.price);
}