#include<iostream>
#include<cmath>

int main(){
    double x = 3.99;
    double y = 64.99;
    double z,w;

    //z = std::max(x,y);
    //simailarly min can be done

    //z = pow(x,y);
    // z = sqrt(y) ;
    // z = abs(-3);

    z = round(y);
    w = ceil(x);
    std::cout << z <<'\n' << w;

    return 0;
}