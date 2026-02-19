// for each loop = loop that eases the traversal over an iterable data set

#include <iostream>

int main(){
    std::string students[] = {"SpongeBob", "Pattrick", "Squidward", "Pineapple", "Goku", "Gohan", "Luffy", "Ronaldo", "Messi"};
    for (std::string student : students){
        std::cout << student << std::endl;
    } 
    
    return 0;
}