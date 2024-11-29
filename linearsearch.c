#include<stdio.h>
int main()
{int i,a[20],n,key,count=0;
printf("how many numbers you want");
scanf("%d",&n);
printf("enter numbers into  array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter no to find");
scanf("%d",&key);
for(i=0;i<n;i++)
{if(key==a[i])
count++;
else
count=0;
}
if(count=0)
printf("number not found");
else
printf("number found");
}
