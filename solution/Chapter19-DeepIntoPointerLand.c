#include <stdio.h>

//EX1: Define a variable a = 10. Write 2 VOID functions to increase value of a by 1. Print a once again.
//2 Ways: Using variable - Using pointer
//Source code:

void Change(int a)
{
	a++;
}
void Change1(int* a) //int* a define a pointer
{
	(*a)++;  // *a is the value of the address stored in a
}

//EX2: Define an array of integer numbers. Define a pointer *p pointing to that array. Print the elements of the array using *p
//Source code
void main_1()
{
	int array[] = {1,2,3,4,5,6,7,8,9};
	int *p = array;
	for (int i=0; i<9;i++)
	{
		printf("%d\t", *(p+i));
	}
}

//EX3: Define an array of pointers, where each element is a string with length at least 2. Print the second character of each string
void main_2()
{
	char* array[] = {"Hello", "this", "World"};
	for (int i=0; i<3; i++)
	{
		printf("%c\n", *(*(array + i) + 1));
	}
}
//EX4: Define a void function named ExchangeUsd2Vnd(double* money). This function will take a double type pointer as argument. The 
//function will convert the money in Usd to Vnd. Note: Vnd = Usd*23
//Source code:

void ExchangeUsd2Vnd(double* money)
{
	*money = *money * 23;
}

//EX5: Write a string copy function as follow: void stringcopy(char* src, char* des).
//Source code: 

void stringcopy(char* src, char* des)
{
	int i=0;
	while ((*(des + i) = *(src + i)) != '\0')
	{
		i++;
	}
}

int main()
{
	char a[] = "hello";
	char b[10];
	stringcopy(a, b);
	printf("%s", b);
}