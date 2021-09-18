#include <stdio.h>
#include <stdlib.h>


//EX1: Define a pointer name p. Now use p to store number from 0 to 9. Print the numbers. Hint: Use malloc() to allocate a buffer
//for p to point to

//Source code.

int main_1()
{
	int *p = (int*) malloc(10*sizeof(int));
	if (p == NULL)
	{
		printf("Unable to allocate memory, Oops!");
	}
	for(int i =0; i<10 ; i++)
	{
		p[i] = i;
	}
	for(int i = 0; i<10; i++)
	{
		printf("%d\n", *(p + i));
	}
	free(p);
}


//EX2: Exercise 20-2 in Textbook.
//Source code:
int main_2()
{
	printf("What is the current temperature?");
	float *input = (float*) malloc(1*sizeof(float));
	if (input == NULL)
	{
		printf("Unable to allocate memory, Oops!");
	}
	scanf("%f", input);
	int choice;
	printf("1. Celcius\n2. Fahrenheit\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("%.2f Kevin degree\n", *input + 273.15 );
			break;
		case 2:
			printf("%.2f Kevin degree\n", (*input + 459.67)*(5.0/9.0));
			break;
		default:
			;
	}
	free(input);
}

//EX3: From EX1, realloc the buffer so that p can hold up to 20 numbers.
//Source code
int main_3()
{
	int *p = (int*) malloc(10*sizeof(int));
	if (p == NULL)
	{
		printf("Unable to allocate memory, Oops!");
	}
	for(int i =0; i<10 ; i++)
	{
		p[i] = i;
	}

	p = realloc(p,20*sizeof(int));
	if (p == NULL)
	{
		printf("Unable to re allocate memory, Oops!");
	}

	for(int i = 10; i<20; i++)
	{
		p[i] = i;
	}	
	for(int i=0; i<20;i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
}