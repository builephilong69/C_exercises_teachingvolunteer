#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000];
   FILE *fptr;
   char fname[20]="test.txt";

   fptr=fopen(fname,"w");
   if(fptr==NULL)
   {
      printf(" Cannot open file!");
      exit(1);
   }
   printf(" Content of the file: ");
   fgets(str, sizeof str, stdin);
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n The file %s created successfully!!\n\n",fname);
   return 0;
}

