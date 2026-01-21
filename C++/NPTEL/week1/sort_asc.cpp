#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int data[] = {32,43,12,57,23};

    sort(data,data+5);

    for(int i=0; i<5 ;i++){
        cout << data[i] << " ";
    }

    return 0;
}

//Ascending order is the default sorting technique
