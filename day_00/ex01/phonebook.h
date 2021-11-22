#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class Phonebook {
    private:
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string email;
        std::string address;
        std::string birthday;
    public:
        std::string getFirstName(){return (firstName);}
        void setFirstName(std::string firstName){this->firstName = firstName;}
        std::string getLastName(){return (lastName);}
        void setLatsName(std::string lastName){this->lastName = lastName;}
        std::string getPhoneNumber(){return (phoneNumber);}
        void setPhoneNumber(std::string getPhoneNumber){this->phoneNumber = phoneNumber;}
        std::string getEmail(){return (email);}
        void setEmail(std::string){this->email = email;}
        std::string getAddress(){return(address);}
        void setAddress(std::string){this->address = address;}
        std::string getBirthday(){return(birthday);}
        void setBirthday(std::string birthday){this->birthday = birthday;}
};

void add_contact(Phonebook *phonebook);
void show_contact(Phonebook *phonebook, int count);
#endif
