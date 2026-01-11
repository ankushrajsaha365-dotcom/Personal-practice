#include<stdio.h>
int main()
{
int A[]={32,24,63,17,12,46,52,68,11,69};
int i,n;
int f=0;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<10;i++){
        if(A[i]==n){
            f=1;
            break;
        }
    }
        if(f==1){
            printf("the number is present in %d index",i);
        }
        else{
            printf("Element not present in array");
        }
    return 0;
}