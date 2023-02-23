#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,e1,x2,e2,R,x,e;
clrscr();
printf("Enter mantissa 1 & exponent 1\n");
scanf("%f%f",&x1,&e1);
printf("Enter mantissa 2 & exponent 2\n");
scanf("%f%f",&x2,&e2);
if(e1>e2)
{
x2=x2/pow(10,R);
e=e1;
}
else
{
x1=x1/pow(10,R);
e=e2;
}
x=x1-x2;
while(x<0.1)
{
x=x*10;
e=e-1;
}
if(e<-99)
printf("overflow\n");
else
printf("After substraction= %4f%2f",x,e);
getch();
}