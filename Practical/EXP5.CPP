#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1, e1,x2,e2,x,e;
clrscr();
printf("Enter mantissa1 & exponent1 \n");
scanf("%f%f", &x1,&e1);
printf("Enter mantissa 2 & exponent 2\n");
scanf("%f%f",&x2,&e2);
x=x1*x2;
e=e1+e2;
if(x<0.1)
{
x=x*10;
e=e-1;
}
if(e>99)
{
printf("overflow \n");
}
else
if(e<-99)
printf("underflow \n");
else
printf("After multiplication, m=%4fE=%2f",x,e);
getch();
}