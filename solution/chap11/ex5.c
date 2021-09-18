#include<stdio.h>
#include<math.h>
int reverse(int number)
{
    int new_number=0,temp;
    while(number>=1)
    {
        int temp = number%10; // get the last digit of the number
        new_number = new_number*10+temp;
        number = number/10;
    }
    return new_number;
}
int main()
{
    int result = reverse(15324);
    printf("%d",result);

}

