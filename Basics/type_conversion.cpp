// type conversion = conversion a value of one data type to another
// Implicit : automatic
// Explicit : Precede value with a new data type Ex : (int) x

#include <iostream>

int main(){
    int x = 4.13; // Implicit
    std::cout << x << "\n";

    double y = (int) 5.45; //Explicit
    std::cout << y << '\n';

    int correct = 8;
    int questions = 10;
    double score = (double) correct/questions * 100; 
    std::cout << score << "%";
    return 0;
}