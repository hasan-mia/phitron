#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i]+a[j]==x){
                flag=1;
            }
        }
        
    }
    if(flag=1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}