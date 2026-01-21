#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int i,int j){
    return(i > j);
}

int main(){
    int data[] = {32,43,12,57,23};
    //start ptr.  , end ptr. , func ptr.

    sort(data,data+5,compare);

    for(int i=0; i<5 ;i++){
        cout << data[i] << " ";
    }

    return 0;
}