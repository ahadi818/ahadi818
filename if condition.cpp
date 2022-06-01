#include<stdio.h>
int main()
{int num;
printf("Enter a number to check ");
scanf("%d",&num);
//only if condition
if(num>100){
printf("the number is greater than 100\n");
int a=79,b=17,res;
res=a+b;
printf("Total=%d\n",res);
}
if (num>500){printf("the number is greater than 500\n");
int b=444,c=44,res;
res=b+c;
printf("total=%d\n",res);
}
return 0;
}
