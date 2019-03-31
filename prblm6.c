#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int x,y,i,j,count;
   printf("enter starting and ending range: ");
   scanf("%d%d",&x,&y);
   for(i=x;i<=y;i++)
   {
       count=0;
       for(j=2;j<i;j++)
       {
           if(i%j==0)
            count++;
       }
       if(count==0)
       {
         printf("\n%d",i);
       }

   }
    return 0;
}

