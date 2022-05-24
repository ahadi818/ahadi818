#include<stdio.h>
int main()
{ int number,sum,a,b,c,d1,d2,d3;
 printf("plz enter a number ");
 scanf("%d",&number);
 
 a=number/10;
 d1=number%10;
 b=a/10;
 d2=a%10;
 c=b/10;
 d3=b%10;
 sum=d1+d2+d3;
 printf("sum=%d",sum);
 return 0;
}
 

