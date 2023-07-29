/* Transpose of given matrix  */
#include<stdio.h>
#include<conio.h>
void main()
   {
   int arr1[50][50],arr2[50][50],i,j,r,c;
clrscr();
      // printf("\n\nTranspose of matrix :\n");
      // printf("-------------------------\n");

       printf("\n\nTranspose of matrix : ");
       scanf("%d%d",&r,&c);

       printf("Input element in the first matrix :\n");
       for(i=0;i<r;i++)
       {
	   for(j=0;j<c;j++)
	   {
	      printf("element - [%d],[%d]:",i,j);
	      scanf("%d",&arr1[i][j]);
	   }
       }
    printf("\nThe matrix is :\n");
       for(i=0;i<r;i++)
	  {
	  printf("\n");
	  for(j=0;j<c;j++)
	  printf("%d\t",arr1[i][j]);
	  }
   for(i=0;i<r;i++)
   {
    for(j=0;j<r;j++)
      {
       arr2[j][i]=arr1[i][j];
      }
   }
   printf("\n\nThe transpose of a matrix is : ");
   for(i=0;i<c;i++)
   {
   printf("\n");
   for(j=0;j<r;j++)
   {
     printf("%d\t",arr2[i][j]);
   }
   }
   printf("\n\n");

getch();
}