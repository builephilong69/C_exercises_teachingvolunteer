#include<stdio.h>
int main()
{
    int rows;
    printf("Input the number of rows: ");
    scanf("%d",&rows);
    int space = rows+3;
    for(int i = 1 ; i<= rows;i++)
    {
        for(int k = space; k>=1;k--)
        {
            printf(" ");
        }
        for(int j = 1; j<=i;j++)
            printf("%d ",i);
        printf("\n");
        space--;
    }

}


