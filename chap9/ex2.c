#include<stdio.h>
int main()
{
    int input;
    printf("Input a number: ");
    scanf("%d",&input);
    for(int i = 1 ; i <11;i++)
    {
        int product = input * i;
        printf("%d X %d = %d\n",input, i ,product);
    }
}

