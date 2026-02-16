#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter Your Name:";
    std::getline(std::cin, name);
    if(name.empty()) std::cout << "Please Enter Your Name" << std::endl;
    else if(name.length() > 12) std::cout << "Your name can't be over 12 characters" << std::endl;
    else std::cout << "Welcome " << name << std::endl;
    
    std::cout << "Your name's first character is " << name.at(0) << std::endl;
    std::cout << "Your name with starting character 'a' would like : " << name.insert(0,"a") << std::endl;
    name.append("@gmail.com");
    std::cout << "Your Email Would be " << name << std::endl;    
    std::cout << name.find('A') << std::endl;
    name.erase(0,3);
    std::cout<< name << std::endl;
    name.clear();
    return 0;
}