#include<stdio.h>
void factorial();
void main()
{factorial();
}


void factorial()
{int i,j=1,n;
printf("enter max numbers\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{j=i*j;
}
printf("factorial=%d\n",j);
}
