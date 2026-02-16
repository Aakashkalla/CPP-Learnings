#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "Select your unit to convert to (C or F):";
    std::cin >> unit;

    std::cout << "Enter Your Room Temperature:";
    std::cin >> temp;

    switch(unit){
        case 'C':
            std::cout << (temp-32)/1.8;
            break;
        case 'F':
            std::cout << (temp*1.8) + 32;
            break;
        default:
            std::cout << "Please enter valid unit";
    }

    return 0;
}