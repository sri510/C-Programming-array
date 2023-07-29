/* multiplication of two matrix  */
#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[2][2];
int arr2[2][2];
int arr3[2][2];
int i,j,k,r1,r2,c1,c2,sum=0;
clrscr();
printf("Input the rows and columns of first matrix : \n");
scanf("%d%d",&r1,&c1);
printf("Input the rows and columns of second matrix : \n");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
printf("Multiplication of matrix is not posible.");
printf("\nColumn of first matrix and row of second matrix must be same.");
}
else
{
printf("Input element in the frist matrix :\n");
for(i=0;i<r1;i++)
{
for(j=0;j<r1;j++)
{
 printf("element - [%d],[%d] : ",i,j);
 scanf("%d",&arr1[i][j]);
}
}

printf("Input element in the second metrix :\n");
 for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("element - [%d][%d] : ",i,j);
scanf("%d\n",&arr2[i][j]);
}
}
printf("First matrix is: \n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c1;j++)
printf("%d\t",arr1[i][j]);
}
printf("Second matrix is: \n");
for(i=0;i<r2;i++)
{
printf("\n");
for(j=0;j<c2;j++)
printf("%d\t",arr2[i][j]);
}
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
arr3[i][j]=0;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
sum=0;
for(k=0;k<c1;k++)
sum=sum+arr1[i][k]*arr2[k][j];
arr3[i][j]=sum;
}
}
printf("\nMultiplication of two matrix is : \n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
{
printf("%d\t",arr3[i][j]);
}
}
}
printf("\n\n");
getch();
}
