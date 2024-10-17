#include <stdio.h>
#include <string.h>

void reverseString(char* str);

int main() {
    char str[100];

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("�������� ���ڿ�: %s\n", str);

    return 0;
}

void reverseString(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}