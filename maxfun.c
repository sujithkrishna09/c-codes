#include<stdio.h>
void max();
void main()
{max();
}


void max()
{int a,b,c,m;
printf("enter 3 numbers\n");
scanf("%d %d %d",&a,&b,&c);
m = a+b+c;
printf("maximum of given num =%d\n",m);
}
