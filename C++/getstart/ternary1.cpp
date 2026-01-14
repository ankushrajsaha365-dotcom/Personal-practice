#include<iostream>

int main(){

    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    age >= 18 ? std::cout << "You're eligible!!!" : std::cout << "You're not eligible";




    return 0;
}