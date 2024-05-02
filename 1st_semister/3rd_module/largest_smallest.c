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
    
    int largest = A[0];
    int smallest = A[0];
    for(int i=0; i<N; i++){
        if(largest<A[i]){
            largest = A[i];
        }
        if(smallest>A[i]){
            smallest = A[i];
        }
    }

    printf("Largest: %d\n Smallest: %d\n", largest, smallest);

    return 0;
}