#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,a[100][100],b[100][100],c[100][100],i,j,k;
clrscr();
printf("Enter the number of row b/w 1 and 100=");
scanf("%d",&n);
printf("Enter the number of column b/w 1 and 100=");
scanf("%d",&n);
printf("\nEnter elements of 1st matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("Enter element a%d%d=",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\nEnter elements of 2nd matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\nEnter element b%d%d=",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("\nMltiplication of two matrix=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n\n");
}
getch();
}
