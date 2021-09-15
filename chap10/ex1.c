#include<stdio.h>
void myPrintFunction(char a_string[20])
{
    printf("%s", a_string);
    printf(" - From Long\n");
}
int main()
{
    myPrintFunction("Hello Bro!");
}
