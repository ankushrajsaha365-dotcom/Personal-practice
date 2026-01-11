#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the value of row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=row;j++)
		{
			if(i==1||j==1||i==row||j==row)
				printf("1\t");
			else
				printf("\t");
		}
		printf("\v\n");
	}
}
