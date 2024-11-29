#include<stdio.h>
void area();
void peri();
int s,a,p;
void main()
{area();
peri();
}


void area()
{
printf("enter side of square\n");
scanf("%d",&s);
a = s*s;
printf("area=%d\n",a);
}

void peri()
{
printf("enter side of square\n");
scanf("%d",&s);
p = 4*s;
printf("perimetre=%d\n",p);
}
