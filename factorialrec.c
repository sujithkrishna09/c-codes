#include <stdio.h>
int fact(int);
int main()
{int n,k;
printf("enter the  number");
scanf("%d",&n);
k=fact(n);
printf("%d",k);
}
int fact(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return n*fact(n-1);
}
