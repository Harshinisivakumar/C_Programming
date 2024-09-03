#include<stdio.h>
int main()
{
	int tam,eng,math,science,ss;
	float per;
	printf("Enter the marks:");
	scanf("%d %d %d %d %d",&tam,&eng,&math,&science,&ss);
	per=(tam+eng+math+science+ss)*100/500;
	if(per>80)
	{
		printf("Grade A");
	}
	else if(per>60)
	{
		printf("Grade B");
	}
	else if(per>40)
	{
		printf("Grade C");
	}
	else
	{
		printf("Grade D");
	}
	return 0;
}
