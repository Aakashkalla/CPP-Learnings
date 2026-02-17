#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = (rand() % 6) + 1;

    switch(randNum){
        case 1:
            std::cout << "You gained 5% XP Boost!";
            break;
        case 2:
            std::cout << "You lost a heart point!";
            break;
        case 3:
            std::cout << "You gained an extra heart point!";
            break;
        case 4:
            std::cout << "For next few mins, you will get no XP!";
            break;
        case 5:
            std::cout << "You got a legendary item!";
            break;
        case 6:
            std::cout << "You lost a legendary item in your inventory!";
            break;
    }
    return 0;
}