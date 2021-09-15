#include <stdio.h>
int main()
{
    char DOB[20];
    printf("Your day of birth: ");
    fgets(DOB,20,stdin);


    printf("You were born on %s",DOB);
    return(0);
}
