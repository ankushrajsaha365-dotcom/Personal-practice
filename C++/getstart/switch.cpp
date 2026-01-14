#include<iostream>

int main(){
    int day;
    std::cout <<"Enter the day(1 - 7): ";
    std::cin >> day;

    switch(day){
        case 1:
            std::cout << "It's Monday" ;
            break;
        case 2:
            std::cout << "It's Tuesday" ;
            break;
        case 3:
            std::cout << "It's Wednesday" ;
            break;
        case 4:
            std::cout << "It's Thursday" ;
            break;
        case 5:
            std::cout << "It's Friday" ;
            break;
        case 6:
            std::cout << "It's Saturday" ;
            break;
        case 7:
            std::cout << "It's Sunday" ;
            break;
        default:
            std::cout << "Wrong input";

    }

    return 0;
}