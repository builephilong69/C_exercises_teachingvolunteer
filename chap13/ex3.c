#include<stdio.h>
#include<ctype.h>
int main()
{
    char input[100];
    printf("Enter the string: ");

    fgets(input,100,stdin);
    int i = 0;
    int count = -1;
    while(i<=strlen(input))
    {
        if(isspace(input[i]))
            count++;
        i++;
    }
    printf("result: %d spaces",count);
}
