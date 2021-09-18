#include<stdio.h>
int power(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x*power(x,n-1);
}
int main()
{
    int x,n,result;
    printf("Calculate x^n\n");
    printf("Enter the x: ");
    scanf("%d",&x);
    printf("Enter the n: ");
    scanf("%d",&n);
    result = power(x,n);
    printf("%d^%d = %d",x,n,result);

}
