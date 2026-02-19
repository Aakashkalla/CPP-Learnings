#include <iostream>

int main(){
    std::string x = "ABC";
    std::string y = "DEF";
    swap(x,y);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp = x;
    x = y;
    y = temp;
}