#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2,small,i,lcm,hcf;
    printf("enter two numbers :");
    scanf("%d%d",&num1,&num2);
    small=(num1<=num2?num1:num2);
    for(i=1;i<=small;i++)
    {
        if(num1%i==0 && num2%i==0)
            hcf=i;
    }
    lcm=num1*num2/hcf;
    printf("\n LCM= %d",lcm);
    printf("\n HCF= %d",hcf);
}

