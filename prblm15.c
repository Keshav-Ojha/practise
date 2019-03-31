
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    int x;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    discriminant = b*b-4*a*c;
    if(discriminant>0)
        x=1;
    else if(discriminant<0)
        x=-1;
    else if(discriminant==0)
        x=0;
    switch(x)
    {
    case 1:
        {
            root1 = (-b+sqrt(discriminant))/(2*a);
            root2 = (-b-sqrt(discriminant))/(2*a);

            printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
            break;
        }
    case 0:
        {
            root1 = root2 = -b/(2*a);

            printf("root1 = root2 = %.2lf;", root1);
            break;
        }
    case -1:
        {
            realPart = -b/(2*a);
            imaginaryPart = sqrt(-discriminant)/(2*a);
            printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
            break;
        }
    default:
        {
            printf("error");
        }
    }

    return 0;
}
