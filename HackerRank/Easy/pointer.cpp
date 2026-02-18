// Question : The function is declared with a void return type, so there is no value to return. 
// Modify the values in memory so that  contains their sum and  contains their absoluted difference.

#include <iostream>

int main(){
    int a;
    int b;
    std::cout << "Enter 2 Numbers:";
    std::cin >> a >> b;
    int *d = &a;
    int *e = &b;
    std::cout << *d + *e << std::endl;
    std::cout << abs(*d - *e);
    return 0;
}