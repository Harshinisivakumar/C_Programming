#include<stdio.h>
int main()
{
        int n[3]={1,2,3};
	int *ptr=NULL;
	ptr=n;
	while(ptr<=&n[2])
        {
        if(*ptr%2==1)
        {
                printf("%d\n",*ptr);
        }
        ptr++;
        }
        return 0;
}

