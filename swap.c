#include<stdio.h>
int main()
{int a,f,n,d;
printf("enter a number");
scanf("%d",&n);
f=n%10;
while(n>0)
{d=n%10;
printf("%d\n",d);
n=n/10;
}
a=f;
f=d;
d=a;
}
