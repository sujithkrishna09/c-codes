#include <stdio.h>
int main()
{int i=1,j,rows;
printf("how many rows you want");
scanf("%d",&rows);
while (i <= rows) {
j=1;
while (j <= i) {
printf("*");
j++;
}
printf("\n");
i+=2;
}
}
