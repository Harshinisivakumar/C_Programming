#include<stdio.h>
int main()
{
	int r;
	int pie=3.14;
	printf("Enter the radius:");
	scanf("%d",&r);
	int perimeter=2*pie*r;
	printf("The perimeter of a circle:%d",perimeter);
	return 0;
}

