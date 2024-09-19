#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,x1,x2,x,D;

    printf("Enter the value of a,b,c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    D= (b*b-4*a*c);
    if(D>0)
    {
    x1= (-b+sqrt(D))/(2*a);
    x2= (-b-sqrt(D))/(2*a);
     printf("The value of x1 is: %.2f\n",x1);
    printf("The value of x2 is: %.2f\n",x2);
    }
    else if(D<0)
    {
        x=-b/2*a;
        printf("You havent taken the proper value: ");
    }
    else if(D==0)
    {
        printf("It has unique solution");
    }

   return 0;

}
