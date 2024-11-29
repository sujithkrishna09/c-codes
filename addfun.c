#include<stdio.h>
void add();
void main()
{add();
}


void add()
{int a,b,add;
printf("enter 2 numbers\n");
scanf("%d %d",&a,&b);
add = a+b;
printf("sum=%d\n",add);
}
