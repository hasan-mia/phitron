#include <stdio.h>

int main() {
    int i, N;
    scanf("%d", &N); 
    int A[N];
    for (i = 0; i < N; i++){
        scanf("%d", A[i]);
    }
    for (i = N; i <=0; i--){
        if (i % 2 != 0) {
            printf("%d ", A[i]);
        }
    }
    

    return 0;
}
