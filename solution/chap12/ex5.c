#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size n : ");
    scanf("%d", &n);
  int arr1[n][n],i,j;

    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }

 printf("\nThe matrix is : \n");
  for(i=0;i<n;i++)
  {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}
