#include <stdio.h>
int evenodd(int);
int main()
{int e,n;
printf("enter a number\n");
scanf("%d",&n);
e = evenodd(n);
}

int evenodd(int n)
{if(n%2 == 0)
{printf("even\n");
}else
printf("odd\n");
}

