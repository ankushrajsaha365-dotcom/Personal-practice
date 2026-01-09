#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[30];
    float percentage;
};

void main(){
    struct student record={0};
    record.id=1;
    strcpy(record.name,"Raj");
    record.percentage=93.5;
    printf("\nId is %d",record.id);
    printf("\nName is %s",record.name);
    printf("\nPercentage is %f\n",record.percentage);
}