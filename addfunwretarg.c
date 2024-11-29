#include<stdio.h>
int add();
void main()
{int sum;
sum = add();
printf("%d\n",sum);
}


int add()
{int a,b,sum;
printf("enter 2 numbers\n");
scanf("%d %d",&a,&b);
sum = a+b;
return sum;
}
