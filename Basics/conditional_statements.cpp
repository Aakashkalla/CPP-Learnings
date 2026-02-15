// if else statements : do something if a condition is true,
//                      if not do something else

#include <iostream>

int main(){
    int age;

    std::cout << "Enter Your age: ";
    std::cin >> age;

    if(age<18){
        std::cout << "Sorry! You are not allowed";
    }else{
        std::cout << "Welcome! You are allowed";
    }

    return 0;
}