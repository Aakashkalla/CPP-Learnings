// pseudo - random : NOT Truly random (but close)

#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));

    int num = (rand() % 6) + 1; // 1 - 6
    int num1 = (rand() % 20) + 1; // 1 - 20

    std::cout << num << " ";
    std::cout << num1;
    return 0;
}