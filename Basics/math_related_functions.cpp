#include <iostream>
#include <cmath>

int main(){
    // Max Func : Greater value between 2;
    // Min Func : Smaller value between 2;
    double x = 3;
    double y = 4;
    double z;
    double m;
    
    z = std::max(x,y); 
    m = std::min(x,y);

    std::cout << z << std::endl; // output : 4;
    std::cout << m << std::endl; //output : 3;

    // Pow : Power Function - x ^ n
    double p;
    p = pow(2,3);
    std::cout << p << std::endl;

    // Square Root : Square Root of a value;
    double sq = sqrt(p);
    std::cout<< sq << std::endl;

    // Absolute : Returns positive value;
    double a = abs(-45);
    std::cout << a << std::endl; // output : 45;

    //Round : Value is rounded off, value >= .5 : value + 1, value < 0.5 : value ;
    double r = round(3.5);
    double r1 = round(3.4);
    std::cout << r << std::endl; //output : 4
    std::cout << r1 << std::endl; //output : 3

    //Ceiling : Value is rounded off to upper value;
    double c = ceil(1.233);
    std::cout << c << std::endl; //output : 2;

    // Floor : value is rounded off to bottom value;
    double f = floor(2.99);
    std::cout << f; // output : 2;
    return 0;
}