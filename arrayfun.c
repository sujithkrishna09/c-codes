#include <stdio.h>
int dis(int m[]);
int main()
{int m[5] = {1,2,3,4,5};
dis(m);
 }
 
 int dis(int m[])
 {int i;
 for(i=0;i<5;i++)
 {printf("%d\t",m[i]);
  }
  }
