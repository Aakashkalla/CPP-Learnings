// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is a clear benefit
//           Replaced with 'using' (work better w/ templates)

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string str_t;
typedef int integer_t;
using character_t = char;

int main(){
    pairlist_t pairlist;
    str_t name = "Aakash";
    integer_t age = 21;
    character_t grade = 'A';
    std::cout << name << "\n";
    std::cout << name << "'s age is " << age;
    return 0;
}