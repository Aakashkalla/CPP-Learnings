// do while : do some block of code first,
//            THEN Repeat again if condition is true

#include <iostream>

int main(){
    int number;
    do{
        std::cout << "Enter a positive Number:";
        std::cin >> number;
    }while(number < 0);
    
    std::cout << "Your number is " << number;
    return 0;
}