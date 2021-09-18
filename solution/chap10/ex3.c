#include<stdio.h>
void swap_number(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    swap_number(&a,&b);
    printf("After swapping: \n The first number is: %d \n The second number is :%d",a,b);
}
