// cout << (insertion operator)
// cin >> (extraction operator)

#include <iostream>

int main(){
    std::string name;
    std::string fullName;
    int age;
    std:: cout << "What's your name? : ";
    std::cin >> name;
    
    std::cout << "What's your age? : ";
    std::cin >> age;
    std::cout << "Hello " << name <<". Your age is " << age << "\n";

    std::cin.ignore(); // to ignore leftover new line.

    std::cout<< "What's your full name? : ";
    std::getline(std::cin, fullName);

    std::cout << fullName;

    return 0;
}