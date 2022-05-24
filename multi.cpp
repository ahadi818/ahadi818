#include<stdio.h>
int main()
{

	int a,b,plus,substraction,multiply,division,divisible;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);

	substraction=a-b;
	multiply=a*b;
	division=a/b;
	divisible=a%b;

	printf("plus=%d\n",plus);
	printf("Substraction=%d\n",substraction);
	printf("Multiply=%d\n",multiply);
	printf("Division=%d\n",division);
	printf("Divisible=%d\n",divisible);

	return 0;

}
