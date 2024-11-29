#include <stdio.h>
int maximum(int m[],int n);
int main()
{ int m[10],n,k,i;
printf("how many numbers\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
{scanf("%d",&m[i]);
}
maximum(m,n);
k=maximum(m,n);
printf("the max num is %d",k);
}

int maximum(int m[],int n)
{int i,max;
max = m[0];
for(i=0;i<n;i++)
{if(m[i]>max){
max=m[i];
}
}
return max;
}


