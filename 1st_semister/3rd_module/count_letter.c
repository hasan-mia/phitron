#include <stdio.h>

int main() {
    char ch;
    int frq[26] = {0};

    while(scanf("%c", &ch) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            frq[index] += 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(frq[i] > 0) {
            printf("%c : %d\n", i + 'a', frq[i]);
        }
    }

    return 0;
}
