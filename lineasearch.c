#include <stdio.h>
int linear(int m[],int n,int k);
int main()
{int m[10],n,i,k;
printf("how many numbers\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter the numbers\n");
scanf("%d",&m[i]);
}
printf("enter the number to search\n");
scanf("%d",&k);
linear(m,n,k);
}

int linear(int m[],int n,int k)
{int i;
for(i=0;i<n;i++)
{if(m[i] == k)
break;
}
if(i<n)
printf("element found at index %d",i);
else
printf("element not found");
}

