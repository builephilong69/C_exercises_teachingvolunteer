#include<stdio.h>
#include<ctype.h>
int main()
{
    char input[20];
    printf("Enter the string: ");

    fgets(input,20,stdin);
    int i = 0;
    while(i<=strlen(input))
    {
        if(islower(input[i]))
        {
            input[i] = toupper(input[i]);
        }
        else
        {
            input[i] = tolower(input[i]);
        }
        i++;
    }
    printf("result: %s",input);
}
