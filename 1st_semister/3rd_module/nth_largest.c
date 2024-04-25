
#include <stdio.h>
#include <string.h>

// Frequency of array
int main() {
    int size;
    // input size
    scanf("%d", &size);
    // input array
    int imp[size];
    for(int i=0; i<size; i++){
        scanf("%d", &imp[i]);
    };
    // input printing number
    int n;
    scanf("%d", &n);
    
    // find larget value;
    int large = 0;
    for(int i=0; i<size; i++){
        if(imp[i] > large){
            large = imp[i];
        }
    };
    // printf("%d", large);
    // frequency of array
    int frq[large+1];
    for(int i=0; i<size; i++){
        frq[imp[i]]=1;
    }
    
    int num=0;
    for(int i=large; i>=0; i--){
        if(frq[i]==1){
            num++;
        }
        if(num==n){
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}