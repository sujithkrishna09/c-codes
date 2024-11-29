#include <stdio.h>
int fact(int);
int main()
{int f,n;
printf("enter the number");
scanf("%d",&n);
f = fact(n);
printf("%d\n",f);
}

int fact(int n)
{if(n == 1)
return 1;
else 
return n*fact(n-1);
}

