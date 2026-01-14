#include<iostream>

int main(){
    std::string name;
    int age;
    std::cout << "What's your name?" <<std::endl;
    // std::cin >> name;
    std::getline(std::cin >> std::ws , name);

    std::cout << "What's your age?" <<std::endl;
    std::cin >> age;
    std::cout << "Hello " << name <<" You are " << age <<" years old";
    return 0;
}