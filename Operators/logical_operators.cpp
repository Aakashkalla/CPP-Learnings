//* && = check if two conditions are true;
//* || = check if at least one of two conditions is true;
//*  ! = reverses the logical state of its operand

#include <iostream>

int main(){
    int temp;

    std::cout << "Enter Room Temperature:";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "Temperature is Good!";
    }else{
        std::cout << "Temperature is Bad!";
    }
    return 0;
}