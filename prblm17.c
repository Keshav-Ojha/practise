#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int sum=0,i,num;
    printf("enter a positive integer less than 50: ");
    scanf("%d",&num);
    if(num<50)
       {
           for(i=1;i<=num;i++)
           {
              sum=sum+pow(i,4);
           }
           printf("%d",sum);
       }
       else printf("value out of range");
    return 0;
}
