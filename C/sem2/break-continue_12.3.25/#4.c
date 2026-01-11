#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("1\n");
		break;
		}
		printf("2\n");
	}
	printf("After loop\n");
	return 0;
}
