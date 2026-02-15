#include <iostream>

int main(){

    // integer(whole number)
    int age = 21;
    int year = 2026;
    int days = 7;

    // double(number + decimal)
    double price = 10.99;
    double gpa = 4.5;
    double temperature = 23.44;

    // single character 
    char grade = 'A';
    char initial = 'C';

    // boolean (true or false)
    bool student = false;
    bool teacher = true;

    // strings(objects that represents a sequence of text)
    std::string name = "Aakash";
    std::cout<< "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    // const keyword specifies that a variable's value is constant 
    // tells the compiler to prevent anything from modifying it.(read-only)
    const double PI = 3.14;
    double radius = 478;
    double circumference = 2 * PI * radius;
    std::cout << circumference;

    return 0;
}