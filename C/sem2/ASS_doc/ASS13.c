#include<stdio.h>
int main()
{
    int i,j,size,temp,choice;
    int  arr[10];
    printf("Enter size:\n"); // size of array
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter %dth the element \n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++) {
        printf("%dth element is %d\n",i,arr[i]);
    }
    // Enter choice 
    printf("Choose sorting method\n");
    printf("\nEnter 1 for Bubble sort \n Enter 2 for Insertion \n Enter 3 for Selection Sort");
    printf("\nEnter Your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1://Bubble Sort
        for(i=0;i<=size-1;++i)
         {
            for(j=0;j<size-i-1;++j)
             {
          if(arr[j]<arr[j+1])
             {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
             }
            }
         }
        break;
        case 2://Intsertion Sort
        for(i=1;i<size;i++)
        {
            temp=arr[i];
            j=i-1;
            while(j>=0 && arr[j]<temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
        break;
        case 3://Selection Sort
        for(i=0;i<size-1;i++)
        {
            int min=i;
            for(j=i+1;j<size;j++)
            {
                if(arr[j]>arr[min])
                {
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        break;
        default:
        printf("Invalid choice\n");
        return 1;
    }
      printf("\nSorted array is:\n");
      for(i=0;i<size;i++) {
        printf("%dth element is %d\n",i,arr[i]);
    }
    return 0;
}