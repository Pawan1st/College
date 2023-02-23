#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float f(float x);
float a,b,h,sum=0.0,result;
int i,n;
clrscr();
printf("Enter lower limit of the Intergal:");
scanf("%f",&a);
printf("Enter upper limit of the Integral:");
scanf("%f",&b);
printf("Enter the number of segments:");
scanf("%d",&n);
if(n%3!=0)
printf("\nNumber of segments is not a Multiple of 3\n");
else
{
h=(b-a)/n;
sum=f(a)+f(b);
for(i=1;i<=n;i++)
{
if(i%3==0)
sum=sum+2.0*f(a+i*h);
else sum=sum+3.0*f(a+i*h);
}
result=(3.0/8.0)*h*sum;
printf("\n\nValue of Integral is=%f\n\n",result);
}
getch();
}
float f(float x)
{
return(2.0/(3.0*x)+(x*x)-2.0);
}