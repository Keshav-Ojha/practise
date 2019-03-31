#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=2;
    for(i=1;i<4;i++)
    {

        for(j=1;j<6;j++)
        {
            if(i==1)
            {
                if(j==3)
                {
                    printf("%d",i);
                }
                else printf(" ");
            }
            else
            {
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        printf("%d",k);
                        k++;

                    }
                    else printf(" ");

                }
                else
                {
                    if(j%2==0)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("%d",k);
                        k++;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

