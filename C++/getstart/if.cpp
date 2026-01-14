#include<iostream>

int main(){
    int age;
    std::cout <<"Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome!!!";
    }
    else{
        std::cout << "Come back when you are 18 kiddo!";
    }

    return 0;
}