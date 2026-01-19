#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count,sum = 0;
    cout << "Enter number of elements:";
    cin >> count;
    vector<int> arr;
    arr.resize(count);
    for(int i = 0 ; i < count ; i++){
        sum+=i;
    }

    cout << "Array sum : " << sum;

    return 0;
}