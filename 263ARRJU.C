/* find sum of left diagonal of matrix  */
#include<stdio.h>
#include<conio.h>
void main()
   {
   int arr1[50][50],sum=0,n,m=0,i,j;
clrscr();
       printf("\n\nInput the sixe of the square matrix: ");
       scanf("%d",&n);

       printf("Input element in the first matrix :\n");
       for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	      printf("element - [%d],[%d]:",i,j);
	      scanf("%d",&arr1[i][j]);
	      if(i==j)sum=sum+arr1[i][j];
	   }
       }
    printf("\nThe matrix is :\n");
       for(i=0;i<n;i++){
	  for(j=0;j<n;j++)
	  printf("% 4d",arr1[i][j]);
	  printf("\n");
	  }
	  for(i=0;i<n;i++)
	  {
	  m=m-1;
	  for(j=0;j<n;j++)
	  {
	    if(j==m)
	  {
	   sum=sum+arr1[i][j];
	   }
	   }
  }
printf("Addition of the left diagonal element is :%d\n",sum);
getch();
}