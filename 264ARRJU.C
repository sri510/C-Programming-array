/* find sum of row and column of a matrix  */
#include<stdio.h>
#include<conio.h>
void main()
   {
   int arr1[10][10],rsum[10],csum[10],n,i,j,k;
clrscr();
       printf("\n\nInput the size of the square matrix: ");
       scanf("%d",&n);

       printf("Input element in the first matrix :\n");
       for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      printf("element - [%d],[%d]:",i,j);
	      scanf("%d",&arr1[i][j]);
	   }
       }
    printf("\nThe matrix is :\n");
       for(i=0;i<n;i++)
	  {
	  for(j=0;j<n;j++)
	  printf("% 4d",arr1[i][j]);
	  printf("\n");
	  }
	  for(i=0;i<n;i++)
	  {
	  rsum[i]=0;
	  for(j=0;j<n;j++)
	  rsum[i]=rsum[i]+arr1[i][j];
	  }

	  for(i=0;i<n;i++)
	  {
	  csum[i]=0;
	  for(j=0;j<n;j++)
	  csum[i]=csum[i]+arr1[j][i];
	  }
	  printf("The sum of row nad columns of the matrix is :\n");
	  for(i=0;i<n;i++)
	  {
	  for(j=0;j<n;j++)
	    printf("% 4d",arr1[i][j]);
	    printf("% 8d",rsum[i]);
	    printf("\n");
	    }
	    printf("\n");
	      for(j=0;j<n;j++)
	      {
	      printf("% 4d",csum[j]);
	      }
	  printf("\n\n");
getch();
}