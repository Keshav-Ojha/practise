#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int arr[1000],n=1,num,count=0,max=0,i,sum=0;
    float avg;
    printf("enter a number or 0 or negative to quit: ");
    while(n==1)
    {
        scanf("%d",&num);
        if(num<=0)
            break;
        else
        {
            arr[count]=num;
            count++;
        }
    }
    int min=arr[0];
    printf("program terminated \n");
    for(i=0;i<count;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        sum=sum+arr[i];
        avg=sum/count;
        if(arr[i]<min)
            min=arr[i];
    }
    printf("\n no. of positive values entered: %d",count);
    printf("\n max value entered: %d",max);
    printf("\n min value entered: %d",min);
    printf("\n average of values entered: %.2f",avg);

    return 0;
}
