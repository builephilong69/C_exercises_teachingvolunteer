/*Chapter 18: Introduction to Pointer*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//EX1: Define 3 variables, 1 int, 1 double and 1 char, then print the size of each variable.
// Using sizeof() function
// source code:
void PrintSize()
{
	int d;
	double f;
	char c;
	printf("Size of integer: %lu\n", sizeof(d));
	printf("Size of float: %lu\n", sizeof(f));
	printf("Size of character: %lu\n", sizeof(c));
}

//EX2: Use strlen() and sizeof() to get the length of a string. Explain the result, by comment.
//Source code:
void StringLength()
{
	char string[] = "Hello World";
	printf("Length using strlen(): %u\nLength using sizeof(): %u\n", strlen(string), sizeof(string));
	//sizeof() also count the null character, while strlen() count the non-null character only.
}

//EX3: Define a variable a = 10. Change the value in a to 100 by 2 ways.
//Source code:

int main_1()
{
	int a = 10;
	//way 1:
	a = 100;

	//way 2:
	int *p = &a;
	*p = 100;

	printf("%d", a);
}



//EX4: Create an array of integer numbers. Print the address of its elements in a row.
//Defind a pointer pointing to array[3] and a pointer pointing to array[4]
//Increase the pointer pointing array[3] by 1. Comment.

void pointer()
{
	int array[] = {1,2,3,4,5};
	int *pa = &array[3];
	int *pb = &array[4];
	for(int i=0; i< 5; i++)
	{
		printf("%p\t", &array[i]);
	}
	printf("%p\t%p\n", pa, pb);
	printf("%p\n", ++pa); 
	//&array[4] = &array[3] + 1
}

//EX5: Define an array of integer numbers. Write a code to get the length of the array.
//Source code:
int main_2()
{
	int a[] = {1,4,5,2,5,5,2,1};
	int length = sizeof(a)/sizeof(a[0]);
	printf("%d\n", length);
}
int main()
{
	char a[100];
	scanf("%s", a);
	printf("%s",a);
}