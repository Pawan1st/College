#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int r,c,a[100][100],b[100][100],subtraction[100][100],i,j;
clrscr();
printf("Enter the number of row b/w 1 and 100=");
scanf("%d",&r);
printf("Enter the number of column b/w 1 and 100=");
scanf("%d",&c);
printf("\nEnter elements of 1st matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("Enter element a%d%d=",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("\nEnter elements of 2nd matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("Enter element b%d%d=",i+1,j+1);
scanf("%d",&b[i][j]);
}
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
subtraction[i][j]=a[i][j]-b[i][j];
}
printf("\nsubtraction of two matrix=\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("%2d",subtraction[i][j]);
if(j==c-1)
printf("\n\n");
}
getch();
}
































