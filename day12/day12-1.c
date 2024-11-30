#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countUnique(int* freq, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (freq[i] > 0) count++;
    }
    return count;
}

int solution(int topping[], int toppingSize) {
    int maxValue = 10000;
    int* leftFreq = (int*)calloc(maxValue + 1, sizeof(int));
    int* rightFreq = (int*)calloc(maxValue + 1, sizeof(int));
    int leftUnique = 0, rightUnique = 0;
    int result = 0;

    for (int i = 0; i < toppingSize; i++) {
        if (rightFreq[topping[i]] == 0) rightUnique++;
        rightFreq[topping[i]]++;
    }

    for (int i = 0; i < toppingSize; i++) {
        if (leftFreq[topping[i]] == 0) leftUnique++;
        leftFreq[topping[i]]++;

        rightFreq[topping[i]]--;
        if (rightFreq[topping[i]] == 0) rightUnique--;

        if (leftUnique == rightUnique) result++;
    }

    free(leftFreq);
    free(rightFreq);
    return result;
}

int main() {
    int topping[] = { 1, 2, 1, 3, 1, 4, 1, 2 };
    int toppingSize = sizeof(topping) / sizeof(topping[0]);
    int answer = solution(topping, toppingSize);
    printf("°á°ú: %d\n", answer);
    return 0;
}
