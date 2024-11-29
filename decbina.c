#include<stdio.h>
void decimal();
void main()
{decimal();
}


void decimal()
{int n,i,k;
printf("enter the numbers\n");
scanf("%d",&n);
for(;n>0;)
{k = n%2;
printf("%d",k);
n = n/10;
}
}
