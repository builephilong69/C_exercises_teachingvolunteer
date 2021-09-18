#include<stdio.h>
#include<time.h>
#include<stdbool.h>
int main()
{
    srand(time(NULL));
    int final_number = rand()%10;
    bool status = false;
    int input;
    while(status == false)
    {
        printf("Guess a number from 0 - 10: ");
        scanf("%d",&input);
        if(input == final_number)
        {
            status=true;
            printf("---------------------------------\n");
            printf("Correct ! The answer is %d\n",final_number);
            printf("---------------------------------\n");
        }
        else
        {
            printf("Wrong, try to guess again!\n");
        }
    }
}
