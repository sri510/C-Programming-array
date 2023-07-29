/* addition of two matrix  */
#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[2][2];
int arr2[2][2];
int arr3[2][2];
int i,j,k;
clrscr();
printf("Input element in the matrix : \n");
scanf("%d",&k);
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 printf("element-[%d],[%d] : ",i,j);
 scanf("%d",&arr1[i][j]);
}
}

printf("Input element in the second metrix:\n");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Element-[%d][%d]:",i,j);
scanf("%d",&arr2[i][j]);
}
}
printf("First matrix is: \n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",arr1[i][j]);
}
printf("Second matrix is: \n");
for(i=0;i<2;i++)
{
printf("\n\n");
for(j=0;j<2;j++)
printf("%d\t",arr2[i][j]);
}

for(i=0;i<2;i++)
for(j=0;j<2;j++)
arr3[i][j]=arr1[i][j]+arr2[i][j];

printf("Addition of two matrix is : \n");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",arr3[i][j]);
}
printf("\n\n");
getch();
}
