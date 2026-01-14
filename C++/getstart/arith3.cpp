#include<iostream>
#include<cmath>

int main(){
    double a,b,c;
    std::cout <<"Enter the length 'a':";
    std::cin >> a;
    std::cout <<"Enter the length 'b':";
    std::cin >> b;

    c = sqrt(a*a + b*b);

    std::cout << "Hypotenuse is " << c <<" unit";



}