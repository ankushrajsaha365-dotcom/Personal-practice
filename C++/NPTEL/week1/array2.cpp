#include<iostream>
#include<vector>
#define MAX 100

using namespace std;

int main(){
    cout << "Enter no. of elements: ";
    int n ,sum = 0; 
    cin >> n;
    
    for(int i = 0 ;i<=n ;i++){
        sum+=i;
    }
    cout << "Array sum : " << sum;
    return 0;
}