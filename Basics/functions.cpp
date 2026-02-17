#include <iostream>

void happyB(std::string name, int age){
    std::cout << "Happy Birthday " << name << "!" << std::endl;
    std::cout << "You are " << age + 1 << " now";
}

int main(){
    std::string name;
    int age;
    std::cout << "Enter your name:";
    std::cin >> name;
    std::cout << "Enter your age:";
    std::cin >> age; 
    happyB(name, age);
    return 0;
}