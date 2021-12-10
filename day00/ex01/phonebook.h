#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class Phonebook {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
       
    public:
        std::string getFirstName(){return (firstName);}
        void setFirstName(std::string firstName){this->firstName = firstName;}
        std::string getLastName(){return (lastName);}
        void setLatsName(std::string lastName){this->lastName = lastName;}
        std::string getNickname(){return (nickname);}
        void setNickname(std::string nickname){this->nickname = nickname;}
        std::string getPhoneNumber(){return (phoneNumber);}
        void setPhoneNumber(std::string phoneNumber){this->phoneNumber = phoneNumber;}
        std::string getDarkestSecret(){return (darkestSecret);}
        void setDarkestSecret(std::string darkestSecret){this->darkestSecret = darkestSecret;}

};

void add_contact(Phonebook *phonebook);
void show_contact(Phonebook *phonebook, int count);
#endif
