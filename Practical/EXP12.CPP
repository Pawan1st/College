#include<stdio.h>
#include<conio.h>
#include<math.h>
/*defining equation to be solved */
#define f(x) x*x*x-2.0*x-5.0
void main()
{
float x0,x1,x2,f1,f2,f0,e;
int step=1;
clrscr();  /*inputs*/
up:
printf("\nEnter two initial guesses:\n");
scanf("%f%f",&x0,&x1);
printf("Enter tolerable error:\n");
scanf("%f",&e);
/*calculating function avlue*/
f0=f(x0);
f1=f(x1);
/*checking whether given guesses brackets the root or not*/
if(f0*f1>0.0)
{
printf("Incorrect initial guesses\n");
goto up;
}
/*implementing bisection method*/
printf("\nstep\t\t*0\t*1\t\t*2\t\tf(x2)\n");
do
{
x2=(x0+x2)/2;
f2=f(x2);
printf("%d\t\t%f\t%f\n",step,x0,x1,x2,f2);
if(f0*f2<0)
{
x1=x2;
f1=f2;
}
else
{
x0=x2;
f0=f2;
}
step=step+1;
}
while(fabs(f2)>e);
printf("\nRoot is:%f",x2);
getch();
}
