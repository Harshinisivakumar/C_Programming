#include<stdio.h>
int main()
{
	int n[10],i=0,j=0;
	printf("enter the value:");
	while(i<10)
	{
	scanf("%d",&n[i]);
	i++;
	}
	while(j<10)
	{
	if(n[j]%2==1)
	{
		printf("%d\n",n[j]);
	}
	j++;
	}
	return 0;
	}

