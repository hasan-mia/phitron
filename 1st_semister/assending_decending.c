// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }

    // assending sorting
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    };
    
      // assending sorting
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    };
    
    
    for (int i = 0; i <n; i++)
    {
       printf("%d", a[i]);
    }
    
    return 0;
}