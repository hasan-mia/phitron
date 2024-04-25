#include <stdio.h>

// Frequency of array
int main() {
    int size;
    // input size
    scanf("%d", &size);
    // input array
    int imp[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &imp[i]);
    };
 
    // find largest value;
    int large = 0;
    for(int i = 0; i < size; i++){
        if(imp[i] > large){
            large = imp[i];
        }
    };

    // Initialize frequency array
    int frq[large + 1];
    for(int i = 0; i <= large; i++) {
        frq[i] = 0;
    }

    // Calculate frequencies
    for(int i = 0; i < size; i++){
        frq[imp[i]] += 1;
    };
    
    int duplicate = 0;
    int unique = 0;
    for(int i = 0; i <= large; i++){
        if(frq[i] > 1){
            duplicate++;
        }
        if(frq[i] == 1){
            unique++;
        }
    };
    printf("duplicate - %d\n", duplicate);
    printf("unique - %d\n", unique);
    
    return 0;
}
