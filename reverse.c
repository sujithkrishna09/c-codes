#include<stdio.h>
int main()
{int n,d;
printf("enter a number");
scanf("%d",&n);
printf("reverse order is\n");
while(n>0)
{d=n%10;
printf("%d",d);
n=n/10;
}
}
