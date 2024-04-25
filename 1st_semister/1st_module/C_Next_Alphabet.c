#include <stdio.h>
int main(){
    char n;
    scanf("%c", &n);
    if(n == 'z'){
        printf("%c", 'a');
    }else{
        char next = n+1;
        printf("%c", next);
    }
    return 0;
}