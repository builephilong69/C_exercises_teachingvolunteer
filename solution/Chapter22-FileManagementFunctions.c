/*Chapter 22: Permanent Storage*/

#include <stdio.h>
#include <stdlib.h>

//EX1: Write a line "Hello World" to file hello.txt.
int main_1()
{
	FILE *fh;
	fh = fopen("hello.txt", "w");
	if (fh == NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}	
	fprintf(fh, "Hello World");
	fclose(fh);
}

//EX2: Read data from file hello.txt and print it to the screen.


int main_2()
{
	FILE *fh;
	fh = fopen("hello.txt", "r");
	if (fh == NULL)
	{
		printf("Unable to open file\n");
		exit(1);
	}
	char ch;
	while(!feof(fh))
	{
		ch = fgetc(fh);
		if(ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fh);
}

//EX3: Based on READ and WRITE functions, write a code for copying file hello.txt to hello_copied.txt.

int main_3()
{
	FILE *fh1;
	fh1 = fopen("hello.txt", "r");
	if(fh1 == NULL)
	{
		printf("Unable to open file");
		exit(1);
	}
	
	FILE *fh2;
	fh2 = fopen("hello_copy.txt", "w");
	char ch;
	while (!feof(fh1))
	{
		ch = fgetc(fh1);
		if(ch== EOF)
		{
			break;
		}
		fputc(ch, fh2);
	}

	puts("File copied successfully!");
	fclose(fh1);
	fclose(fh2);
}


//EX4: Write a code to check whether 2 files are the similar or not.
int main_4()
{
	FILE *fh1;
	fh1 = fopen("hello.txt", "r");
	if(fh1 == NULL)
	{
		printf("Unable to open file");
		exit(1);
	}
	
	FILE *fh2;
	fh2 = fopen("hello_copy.txt", "r");
	if(fh2 == NULL)
	{
		printf("Unable to open file");
		exit(2);
	}
	char ch1, ch2;
	while (1)
	{
		ch1 = fgetc(fh1);
		ch2 = fgetc(fh2);
		if(ch1 != ch2)
		{
			puts("Files different");
			break;
		}

		if(ch1 == EOF && ch2 == EOF )
		{
			puts("File similar");
			break;
		}
	}

	puts("Files checked successfully!");
	fclose(fh1);
	fclose(fh2);
}




//EX5: File dumper: Write a code to print the file hello.txt into a matrix of width 5, in hexadecimal form.
int main_5()
{
	FILE *fh;
	fh = fopen("hello.txt", "r");
	
	if(fh == NULL)
	{
		puts("Unable to open file!");
		exit(1);
	}
	char ch;
	int i = 1;
	while (!feof(fh))
	{
		ch = fgetc(fh);
		if (ch == EOF)
			break;
		printf("%02X\t",ch );
		if (i%5 == 0)
			putchar('\n');
		i++;
	}
	fclose(fh);
}


//EX6: Exercise 22-13: Modify the code from Listing 22-8 so that a new program is created. 
//Have that program write two more records to the bond.db file. 
//They must be appended to any existing data, not overwriting the original file. Use this data:
//Roger Moore, 1973, Live and Let Die
//Pierce Brosnan, 1995, GoldenEye

#include <string.h> 
int main_6() {
	struct agent {
	char actor[32]; int year;
	char title[32]; 
	};
	struct agent bond1;
	struct agent bond2; 
	FILE *jbdb;
	strcpy(bond1.actor,"Roger Moore"); 
	bond1.year = 1973;
	strcpy(bond1.title,"Live and Let Die");

	strcpy(bond2.actor,"Pierce Brosnan"); 
	bond2.year = 1995;
	strcpy(bond2.title,"GoldendEye");

	jbdb = fopen("bond.db","a"); 
	if(!jbdb) {
		puts("SPECTRE wins!"); exit(1);
	}

	fwrite(&bond1,sizeof(struct agent),1,jbdb); 
	fwrite(&bond1,sizeof(struct agent),1,jbdb); 
	fclose(jbdb);

	puts("Record written"); 
	return(0);
}