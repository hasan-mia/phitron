#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int divisableByTwo = 0;
    int divisibleByThree = 0;

    for (int i = 0; i < N; i++) {
        if ((A[i] % 2 == 0 && A[i] % 3 == 0) || A[i] % 2 == 0) {
            divisableByTwo++;
        }
        else if (A[i] % 3 == 0) {
            divisibleByThree++;
        }
    }
    printf("%d %d\n", divisableByTwo, divisibleByThree);

    return 0;
}
