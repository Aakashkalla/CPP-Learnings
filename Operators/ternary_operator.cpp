// ternary operator = replacement to an if/else statement
// condition ? expression1 : expression2
//               True      :    False

#include <iostream>

int main(){
    int grade = 100;
    grade >= 70 ? std::cout << "Nice" : std::cout << "OH NO";
    return 0;
}