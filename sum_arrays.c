#include<stdio.h>
int main()
{
	int num[6],i=0,sum=0;
	printf("enter the value:");
	scanf("%d\n",&num[i]);
	int length=sizeof(num)/sizeof(num[0]);
	
	while(i<length)
	{
		sum=sum+num[i];
		i++;
	}
	printf("%d\n",sum);

	return 0;
}

