#include<iostream>

int main(){
    // double x = (int)3.14;
    int questions = 100;
    int correct = 67;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";
    return 0;
}  