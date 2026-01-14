#include<iostream>

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // num%2 == 0 ? std::cout <<"Even" : std::cout <<"Odd";
    std::cout << (num%2 == 0 ? "Even" : "Odd");

    return 0;
}