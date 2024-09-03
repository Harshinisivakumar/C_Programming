#include<stdio.h>
int main()
{
	int a;
	printf("Enetr a value:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("a is a negative number");
	}
	else
	{
		printf("a is a positive number");
	}
	return 0;
}
