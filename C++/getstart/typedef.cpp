#include<iostream>

#include<vector>

// typedef std::vector<std::pair<std::string, int >> pairlist_t;

// typedef std::string text_t;
// typedef int number_t; 

using text_t = std::string;
using number_t = int;

//typedef is replaced with 'using' key as it works better with templates


int main(){
    text_t firstName = "ARS";
    number_t age = 20;
    std::cout << firstName << '\n' << age;


    return 0;
}