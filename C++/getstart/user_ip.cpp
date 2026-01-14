#include<iostream>

int main(){
    std::string name;

    std::cout << "What's your name?" <<std::endl;
    std::cin >> name;
    std::cout << "Hello " << name;
    return 0;
}