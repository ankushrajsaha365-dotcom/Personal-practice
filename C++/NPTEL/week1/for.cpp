#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;

    cout << " Enter limit: ";
    cin >> n;

    for(int i = 0; i <= n ; i++){
        sum+=i;
    }
    cout << "The sum is: " << sum << endl;

    return 0;
}