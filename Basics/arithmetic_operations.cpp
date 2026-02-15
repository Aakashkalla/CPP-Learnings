// arithmetic operations = return the result of specific 
//                         arithmethic operation (+ - / *)

#include <iostream>

int main(){

    int students = 20;
    students = students + 1; // output : 21
    students+= 1; //output : 21; 
    students++; // output : 21

    students = students - 1; // output : 19
    students-= 1; // output : 19
    students--; // output : 19

    students = students * 2; //output : 40
    students*= 2; //output: 40

    students = students / 2; //output : 10
    students/= 2; // output : 10;

    int remainder = students % 3;
    std::cout << remainder << "\n";
    std::cout << students << "\n";

    // paranthesis
    // multiplication and division
    // addition and subtraction'

    int age = 100 - 27 + 30 * 2 / 4;
    std::cout << age;

    return 0;
}