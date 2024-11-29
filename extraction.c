#include<stdio.h>
int main()
{int n,d;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{d=n%10;
printf("%d\n",d);
n=n/10;
}
}
