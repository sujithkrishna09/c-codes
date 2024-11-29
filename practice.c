#include <stdio.h>
int main()
{
int x,y,z,p;
printf("enter x,y,z cofficients");
scanf("%d %d %d",&x,&y,&z);
p=(y*y)-(4*x*z);
switch (p)
{
case (p == 0):
printf("the roots are real and equal");
break;
case (p > 0):

printf("the roots are real and unequal");
break;
case (p < 0) :
printf("the roots are imaginary");
break;
default :
printf("imaginary roots");
}
