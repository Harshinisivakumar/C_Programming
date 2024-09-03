#include<stdio.h>
int main()
{
	int arr[5]={5,1,15,20,25};
	int i,j,m;
	i=++arr[1];
	j=arr[1]++;
	m=arr[i++];
	printf("%d,%d,%d",i,j,m);
	return 0;
}                                                                                                                                                                                                                                                                                                  
