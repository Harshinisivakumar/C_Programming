#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr= NULL;
	ptr=a;
	while(ptr<&a[5])
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}



