#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[10001];
        scanf("%s", S);

        int captial = 0;
        int small = 0;
        int digit = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                captial++;
            } else if (S[i] >= 'a' && S[i] <= 'z') {
                small++;
            } else if (S[i] >= '0' && S[i] <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", captial, small, digit);
    }

    return 0;
}
