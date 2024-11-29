#include<stdio.h>
int main()
{int n,i;
printf("enter how many numbers you want");
scanf("%d",&n);
printf("the series is\n");
for(i=1;i<=n;i+=2)
{
printf("%d\n",i);
}
}
