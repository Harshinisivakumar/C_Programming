#include<stdio.h>
int main(int args[],char* argv[])
{
	int n=20;
	int num=n*3;
	while(n>0)
	{
		printf("%d\n",n);
		n=n-2;
		n++;
	}
	return 0;
}
