#include <stdio.h>
int avg(int a[],int n);
int main()
{ int i,m[10],n;
printf("how many subjects\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter the marks\n");
scanf("%d",&m[i]);
}
avg(m,n);
}

int avg(int m[],int n)
{int i,sum=0,avg;
for(i=0;i<n;i++)
{sum += m[i];
}
avg=sum/n;
printf("the average is %d",avg);
}
