// Question : You will be given an array of  integers and you have to print the integers in the reverse order.
#include <iostream>

int main(){
    int size;
    std::cout << "Enter Size of array:";
    std::cin >> size;
    int arr[size];
    for(int i = 0; i< size; i++){
        std::cout << "Enter your Number:";
        std::cin >> arr[i];
    }
    for(int i = size-1; i>=0; i--){
        std::cout << arr[i] << " ";
    }
    return 0;
}