#include <stdio.h>
#include <math.h>
int main(){
 int i,num;
 int pr=1;
 printf("enter the number: ");
 scanf("%d",&num);
 if (num <=1) {
 pr=0;
 } else {
 for(i=2; i <=num*num;i++);{
 if (num%i ==0){
 pr=0;
 }
 }
 }
 if (pr){
 printf("%d is a prime number.\n",num);
 }else
 printf("%d is not a prime number.\n",num);
}

