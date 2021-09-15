#include<stdio.h>
void Check(int number)
{
    if(number%2 == 0)
        printf("The entered number is even");
    else
        printf("The entered number is odd");
}
int main()
{
    int number;
    printf("Input any number: ");
    scanf("%d",&number);
    Check(number);
}

