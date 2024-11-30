#include <stdio.h>

int solution(int n) {
    int energy = 0;

    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n -= 1;
            energy++;
        }
    }

    return energy;
}

int main() {
    int n = 5000;
    int answer = solution(n);
    printf("°á°ú: %d\n", answer);
    return 0;
}
