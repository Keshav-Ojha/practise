#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i;
    for(i=9;i<=300;i++)
    {
        if(i%7==0 && i%63!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}

