#include<stdio.h>
int main()
{
	int a[5]={1,3,4,5,6};
	int i=0,n=6,sum=0,m;
	n=n*(n+1)/2;
	while(i<=4)
	{
		sum=sum+a[i];
		i++;
	}
	m=n-sum;
	printf("%d",m);

	return 0;
}
