#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x-1
void main()
{
float x0,x1,x2,f0,f1,f2,e;
int i,m;
clrscr();
printf("Input two initial roots, maximum iteration and tolerance value:");
scanf("%f%f%d%f",&x0,&x1,&m,&e);
f0=f(x0);
f1=f(x1);
if(f0*f1>0.0)
{
printf("\n initial roots are unsuitable\n");
}
else
{
for(i=1;i<=m;i++)
{
x2=(x0*f1-x1*f0)/(f1-f0);
if (fabs(f2)<e)
{
printf("\n Solution is converse\n");
printf("\n Root of the given equation is=%8.4f\n",x2);
m=i;
}
else
{
if(f2*f0<0)
{
x1=x2;
f1=f2;
}
else
{
x0=x2;
f0=f2;
}
}
}
}
getch();
}
