#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    int largIndex = 0;
    int smallIndex = 0;
    for(int i=0; i<N; i++){
        if(A[i]> A[largIndex]){
            largIndex = i;
        }
        if(A[i] <A[smallIndex]){
            smallIndex = i;
        }
    }

    int temp = A[smallIndex];
    A[smallIndex]=A[largIndex];
    A[largIndex] =temp;
    
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    return 0;
}