#include<stdio.h>

int main(int args[],char* argv[])
{
	int n1,n2;
	printf("Enter the range:");
	scanf("%d %d",&n1,&n2);
	if(n1%2==0)
	{
		while(n1<=n2)
		{
			printf("%d\n",n1);
			n1=n1+2;
		}
	}
	else
	{
		n1=n1+1;
		while(n1<=n2)
		{
			printf("%d\n",n1);
			n1=n1+2;
		}
	}
	return 0;
}
