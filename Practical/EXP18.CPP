#include<stdio.h>
#include<conio.h>
void main()
{
float f(float x);
float a,b,h,sum=0.0,result;
int i,n;
clrscr();
printf ("Enter the lower limit of integral:");
scanf("%f",&a);
printf("\nEnter upper limit of intergal:");
scanf("%f",&b);
printf("\n Enter the number of segment:");
scanf("%d",&n);
if(n%2!=0)
printf("\n Number of segment are not even number\n");
else
{
h=(b-a)/n;
sum=f(a)+f(b);
for(i=1;i<n;i++)
{
if(i%2==0)
sum=sum+2.0*f(a+i*h);
else
sum=sum+4.0*f(a+i*h);
}
result=(h/3.0)*sum;
printf("\n\n value of integral is=%f\n\n",result);
}
getch();
}
float f(float x)
{
return(1.0/(1.0+x*x));
}