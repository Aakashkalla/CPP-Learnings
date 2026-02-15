#include <iostream>

int main(){
    double num1;
    double num2;
    char opr;

    std::cout << "Enter Your First Number:";
    std::cin >> num1;
    
    std::cout << "Enter Your Second Number:";
    std::cin >> num2;

    std::cout << "Enter Your operation (+,-,*,/):";
    std::cin >> opr;

    switch(opr){
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            if(num2 <= 0) std::cout << "Second number is less than or equal to zero";
            else{
                std::cout << num1 / num2;
            }
            break;
        default:
            std::cout << "Invalid Operator";
    }
    return 0;
}