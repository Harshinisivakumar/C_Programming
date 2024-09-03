#include<stdio.h>
int main()
{
	int i1,i2,i3,i4,i5,i6;
	int sum;
	printf("Enter the sum of electric current");
	scanf("%d %d %d %d %d %d",&i1,&i2,&i3,&i4,&i5,&i6);
	sum=i1+i2-i3+i4+i5-i6;
	if(sum==0)
	{
		printf("It follows kichoff's law");
	}
	else
	{
		printf("It wont follow kichoff's law");
	}
	return 0;
}
