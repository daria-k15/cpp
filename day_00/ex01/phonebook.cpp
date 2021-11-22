#include "phonebook.h"

void replace_and_add(Phonebook *phonebook){
    int i;

    i = 0;
    while (i < 7){
        phonebook[i] = phonebook[i + 1];
        i++;
    }
    std::cout << i << std::endl;
}

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
                replace_and_add(phonebook);
            }
        }
        else if (command == "SEARCH"){
            show_contact(phonebook, count);
        }
        else if (command == "EXIT")
            exit = 1;
    }
}
