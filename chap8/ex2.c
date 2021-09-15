#include <stdio.h>
int main()
{
    int number;
    printf("Input the number: ");
    scanf("%d",&number);

    if(number%7 == 0)
        printf("%d is a multiple of 7", number);
    else
        printf("%d is not a multiple of 7",number);
}

