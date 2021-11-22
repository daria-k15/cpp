#include "phonebook.h"

int main(){
    int count;
    int exit;
    std::string command;
    Phonebook phonebook[8];

    count = 0;
    exit = 0;
    while (exit == 0){
        std::cout << "Enter a command (ADD, SEARCH or EXIT) :" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD"){
            if (count < 8){
                add_contact(&phonebook[count]);
                count++;
            }
            else{
                std::cout << "Table is full :(" << std::endl;
            }
        }
        else if (command == "SEARCH"){
            show_contact(phonebook, count);
        }
        else if (command == "EXIT")
            exit = 1;
        else
            std::cout << "Invalid command:( Try again!" << std::endl;
    }
}
