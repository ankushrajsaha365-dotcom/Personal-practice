#include<stdio.h>
int n;
void insert(int arr[])
{
	int p,x,i;
	printf("\n Enter the value to be inserted:");
	scanf("%d",&x);
	printf("\n Enter the position:");
	scanf("%d",&p);
	if(p<=n){
	for(i=n;i>=p-1;i--)
	{
		
		arr[i]=arr[i-1];
	
	}
	
	arr[p-1]=x;
		n++;
	}
}

void display(int arr[])
{ 
    int i;
    printf("\n Array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void del(int arr[])
{
	int p,i;
	printf("\n Enter position of which element will be deleated:");
	scanf("%d",&p);
	if(p<=n){
	for(i=p-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}
}
void replace(int arr[])
{
	int p,x;
	printf("\n Enter the position to be replaced:");
	scanf("%d",&p);
	printf("\n Enter the new value:");
	scanf("%d",&x);
	if(p<=n)
	{
		p=p-1;
	arr[p]=x;
}
}
void linearsearch(int arr[])
{
	int i,x;
	printf("\n Enter value to search:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("\n %d is foud at %d position",x,i+1);
			break;
		}
	}
	if(i==n)
	printf("\n choice not found");
}
int main()
{
	int arr[100],i,c,k;
	printf("\n Enter no of elements:");
	scanf("%d",&n);
	//printf("Enter elements of %d index:",i);
	for(i=0;i<n;i++)
	{
	printf("Enter elements of %d index:",i);
	scanf("%d",&arr[i]);
	}
	
	printf("\n ------------Menu of program ------------");
	printf("\n Enter 1 for insert \n Enter 2 for delete \n Enter 3 for linearsearch \n Enter 4 for display \n Enter 5 for replace \n Enter 6 for exit ");
	do{
		printf("\n Enter choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			insert(arr);
			//n++;
			break;
		case 2:
			del(arr);
		    //n--;
			break;
		case 3:
			linearsearch(arr);
			break;
		case 4:
			display(arr);
			break;
		case 5:
		    replace(arr);
			break;
		case 6:
		   //exit	
		default:
		    printf("wrong choice");
    }
    printf("\n Enter 0 to stop and 1 to continue");
    printf("\n Enter your choice:");
    scanf("%d",&k);
   } while(k==1);
		return 0;
}
