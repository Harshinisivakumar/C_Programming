#include<stdio.h>
int main(int args[],char* argv[])
{
        int count=1;
        int range;
	printf("enter range:");
	scanf("%d",&range);

        while(range>=count)
        {
		int c1=count*2;
		int c2=count*4;
                printf("%d %d\n",c1,c2);
                count++;
        }
        return 0;
}
