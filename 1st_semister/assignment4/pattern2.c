#include <stdio.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        int num = i;
        for (int j = 1; j <= k; j++) {
            printf("%d", num);
            num--;
        }
        
        s--;
        k++;
        
        printf("\n");
    }

    return 0;
}
