#include<stdio.h>
#include<conio.h>
void main()
{
float f(float x);
float x0,xn,h,sum,result;
int i,n;
clrscr();
printf("Enter the lower and upper limits of Integral:");
scanf("%f%f",&x0,&xn);
printf("\n Enter the segment width:");
scanf("%f",&h);
n=int (xn-x0)/h;
sum=(f(x0)+f(xn))/2.0;
for(i=1;i<n;i++)
{
sum=sum+f(x0+i*h);
}
result=sum*h;
printf("\n\n Value of the integral using trapezoida rule is=%f\n\n",result);
getch();
}
float f(float x)
{
return(1.0/(1.0+x*x));
}