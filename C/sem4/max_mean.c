#include<stdio.h>
#include<stdlib.h>

void findMinMax(int arr[],int low,int high,int *min , int *max){
	
	if (low==high){
		*min = *max = arr[low];
		return;
	}
	if (high == low+1){
		if (arr[low] < arr[high]){
			*min = arr[low];
			*max = arr[high];
		}
		else{
			*min = arr[high];
			*max = arr[low];
		}
		return;
	}
	int mid = (low+high)/2;
	int min1,min2,max1,max2;
	
	findMinMax(arr,low,mid,&min1,&max1);
	findMinMax(arr,mid+1,high,&min2,&max2);
	
	*min = (min1 < min2) ? min1 : min2;
	*max = (max1 > max2) ? max1 : max2;

}

int main(){
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	
	if ( arr == NULL){
		printf("Memory alloction failed!!!\n");
		return 1;
	}
	printf("Enter Elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int min,max;
	
	findMinMax(arr,0,n-1,&min,&max);
	printf("Minimum= %d\n",min);
	printf("Maximum= %d\n",max);
	
	free(arr);
	
	return 0;
}























