#include<stdio.h>
#include<ctype.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    fgets(str1,100,stdin);
    printf("Enter the second string: ");
    fgets(str2,100,stdin);

    str1[strlen(str1)-1] = ' ';

    strcat(str1,str2);



    printf("result: %s",str1);
}

