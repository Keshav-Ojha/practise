#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num,dig,bin=0,rev=0,arr[100],count=0,i;
    printf("Enter number between 0 and 32: ");
    scanf("%d",&num);
    while(num>0)
    {
        dig=num%2;
        arr[count]=dig;
        num=num/2;
        count++;

    }
    printf("\nNumber in binary: ");
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n\n");
}
