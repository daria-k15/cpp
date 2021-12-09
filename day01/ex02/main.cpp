#include <iostream>
#include <string>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Addres in memory:" << std::endl;
    std::cout << "string: " << str << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " <<  stringREF << std::endl;

    std::cout << "\n" << "display string" << std::endl;
    std::cout << "string: " << str << std::endl;
    std::cout <<  "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
}