#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double sq_rt = sqrt(num);
    cout << "The square root of " << num << " is : " << sq_rt;
    return 0;
}