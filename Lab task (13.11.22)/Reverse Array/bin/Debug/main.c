#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int main()
{
    int a[max_size];
    int n,i;
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }

    return 0;
}
