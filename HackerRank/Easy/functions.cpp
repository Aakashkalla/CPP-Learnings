#include <iostream>

void largest(int a, int b, int c, int d){
    int largest = a;
    if(a > b && a > c && a > d){
        std::cout << largest;
    }
    else if(b > c && b > d){
        largest = b;
        std::cout << largest;
    }
    else if(c > d){
        largest = c;
        std::cout << largest;
    }
    else{
        largest = d;
        std::cout << largest;
    }
}

int main(){
    int a;
    int b;
    int c;
    int d;
    std::cout << "Enter 4 Numbers:";
    std:: cin >> a >> b >> c >> d;
    largest(a,b,c,d);
    return 0;
}