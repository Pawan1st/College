#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) (y-x)/(y+x)
void main()
{
float x,y,h,xn;
int i=0,n;
clrscr();
printf("Enter the initial value of xand y:");
scanf("%f%f",&x,&y);
printf("\nEnter x at which is required;");
scanf("%f",&xn);
printf("\nEnter step size,h:");
scanf("%f",&h);
n=(int)((xn-x)/h+0.5);
printf("\n\nstep  x  y\n\n");
while(x<xn)
{
y=y+h*f(x,y);
x=x+h;
i=i+1;
printf("%3d%10.4f%10.4f\n",i,x,y);
}
printf("\nvalue of y at x=%fis %f\n\n",x,y);
getch();
}