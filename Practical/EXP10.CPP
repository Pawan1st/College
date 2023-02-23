#include<stdio.h>
#include<conio.h>
void main()
{
int matrix1[3][3],matrix2[3][3],i,j;
clrscr();
for(i=0;i<3;++i)
{
printf("input value for row number %d\n",i+1);
for(j=0;j<3;++j)
{
printf("\nEnter the value:");
scanf("%d",&matrix1[i][j]);
}
}
/* transposing of the matrix */
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
matrix2[i][j]=matrix1[j][i];
}
}
printf("the transpose matrix is:\n");
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
printf("%d\t",matrix2[i][j]);
printf("\n");
}
getch();
}
