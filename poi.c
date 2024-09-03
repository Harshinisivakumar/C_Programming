#include<stdio.h>
int main()
{
        int arr[5]={5,1,15,20,25};
        int i,j,m;
	int *ptr1,*ptr2,*ptr3;
        i=++ptr1[0];
        j=ptr2[0]++;
        m=arr[*ptr1++];
        printf("%d,%d,%d",*ptr1,*ptr2,*ptr3);
        return 0;
}                                                                                                                                                    
