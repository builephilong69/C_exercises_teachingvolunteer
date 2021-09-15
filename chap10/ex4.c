#include<stdio.h>
int sum(int number)
{
    int result;
    for(int i = 1 ; i <= number;i++)
    {
        result+=i;
    }
    return result;
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The sum of all number is: %d",sum(number));
}
