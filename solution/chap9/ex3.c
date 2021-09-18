#include<stdio.h>
int main()
{
    int input,count = 0;
    int base = 1;
    int result=0;
    printf("Input a number of term: ");
    scanf("%d",&input);
    printf("The odd numbers are: ");
    while(count<input)
    {
        result+= base;
        printf("%d ",base);
        base = base + 2;
        count++;
    }

    printf("\n The sum of odd number up to %d terms: %d ",input,result);
}


