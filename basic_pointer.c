#include<stdio.h>
int main()
{
	int a=10;
	int *pq;
	int *ptr;
	ptr=&a;
	pq = &a;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%d\n",*ptr);
	printf("%p\n",&ptr);
	printf("%d\n",*pq);
	printf("%p\n",&pq);
	return 0;
}
