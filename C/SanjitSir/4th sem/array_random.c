#include<stdio.h>
#include<stdlib.h>
#define size 1000

int main(){
    int arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}