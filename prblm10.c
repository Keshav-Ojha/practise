 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,j;
    printf("enter a number for range:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d \t",i*j);
        }
        printf("\n");
    }

    return 0;
}

