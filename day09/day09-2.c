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
        printf("상품 정보를 입력하세요 (입력 중단은 id에 0 입력)\n");

        printf("상품 ID: ");
        scanf_s("%d", &id);

        if (id == 0) {
            break;
        }

        products[count].id = id;

        printf("상품명: ");
        scanf_s("%s", products[count].name, sizeof(products[count].name));

        printf("가격: ");
        scanf_s("%d", &products[count].price);

        count++;
        printf("\n");
    }

    printf("\n<< 입력된 상품 목록 >>\n");

    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
    }

    return 0;
}

void printProduct(Product p) {
    printf("상품 ID: %d\n", p.id);
    printf("상품명: %s\n", p.name);
    printf("가격: %d원\n\n", p.price);
}