#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int possible = 0;

    if ((a + b * c == d) || 
        (a - b * c == d) || 
        (a * b + c == d) || 
        (a * b - c == d) || 
        (a + b - c == d) || 
        (a - b + c == d)) {
        possible = 1;
    }

    if (possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
