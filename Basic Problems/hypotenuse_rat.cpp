// Hypotenuse of a right angle triangle = square root (a*a + b*b);
#include <iostream>
#include <cmath>

int main(){
    double side1;
    double side2;
    double hypotenuse;

    std::cout << "Enter Side-1 : ";
    std::cin >> side1;

    std::cout << "Enter Side-2 : ";
    std::cin >> side2;

    hypotenuse = sqrt((side1 * side1) + (side2 * side2));
    std::cout << "Hypotenuse is " << hypotenuse;
    return 0;
}