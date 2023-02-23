#include<stdio.h>
#include<conio.h>
#include<math.h>
/*defining equation to be solved
change this equation to solve another problem*/
#define f(x) 3*x-cos(x)-1
/* defining derivative of g(x)
As you change f(x), change this function also*/
#define g(x) 3+sin(x)
void main()
{
float x0,x1,f0,f1,g0,e;
int step=1,n;
clrscr();
/*inputs*/
printf("\nEnter initial guess:\n");
scanf("%f",&x0);
printf("Entertolerate error:\n");
scanf("%f",&e);
printf("Enter maximum iteration:\n");
scanf("%d",&n);
/*implementing newton rephson method*/
printf("\nstep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
do
{
g0=g(x0);
f0=f(x0);
if(g0==0.0)
{
printf("mathematical error");
}
x1=x0-f0/g0;
printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,f0,f1);
x0=x1;
step=step+1;
if(step>n)
{
printf("not convergent");
}
f1=f(x0);
}
while(fabs(f1)>e);
printf("\n Root is:%f",x1);
getch();
}
