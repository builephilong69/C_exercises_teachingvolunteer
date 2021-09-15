#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,delta;
    printf("Enter the value of a,b and c: ");
    scanf("%f%f%f",&a,&b,&c);

    delta = b*b-4*a*c;
    if(delta == 0)
    {
        float x;
        printf("This equation has double root \n");
        x= -b/(2.0*a);
        printf("The solution is x1=x2=%f",x);
    }
    else
    {
        float x1,x2;
        if(delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("First  Root Root1= %f\n",x1);
            printf("Second Root root2= %f\n",x2);
        }
        else
        {
            printf("No solution\n");
        }
    }

}
