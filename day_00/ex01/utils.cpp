#include "phonebook.h"

std::string	short_output(std::string str)
{
	std::string res;

	if (str.length() > 10)
	{
		res = str.substr(0, 9);
		res.append(".", 1);
		return (res);
	}
	else
		return (str);
}

void show_one_contact(Phonebook phonebook){
    std::cout << "First name: " << phonebook.getFirstName() << std::endl;
    std::cout << "Last name: " << phonebook.getLastName() <<  std::endl;
    std::cout << "Phone number: " << phonebook.getPhoneNumber() << std::endl;
    std::cout << "Email: " << phonebook.getEmail() << std::endl;
    std::cout << "Address: " << phonebook.getAddress() << std::endl;
    std::cout << "Birthday: " << phonebook.getBirthday() << std::endl;
}

void show_contact(Phonebook *phonebook, int count){
    int i;
    std::string value;

    i = 0;
    if (count == 0)
        std::cout << "There are no contacts yet" << std::endl;
    else{
        while (i < count){
            std::cout
            << std::setiosflags(std::ios::right)
			<< std::setw(10) << i + 1 << '|'
			<< std::setw(10) << short_output(phonebook[i].getFirstName()) << '|'
			<< std::setw(10) << short_output(phonebook[i].getLastName()) << '|'
			<< std::endl;
			i++;
		}
		std::cout << "Please enter index for desired contact:" << std::endl;
		std::getline(std::cin, value);
		if (value.length() > 1 || !((value[0] - '0') >= 1 && (value[0] - '0') <= count))
			std::cout << "Invalid index" << std::endl;
		else
			show_one_contact(phonebook[(value[0] - '0') - 1]);
	}

}

std::string read_and_add(std::string info){
    std::string e_info;

    std::cout << info;
    std::getline(std::cin, e_info);
    return (e_info);
}

void add_contact(Phonebook *phonebook){
    std::cout << "Please enter information" << std::endl;
    phonebook->setFirstName(read_and_add("First name: "));
    phonebook->setLatsName(read_and_add("Last name: "));
    phonebook->setPhoneNumber(read_and_add("Phone number: "));
    phonebook->setEmail(read_and_add("Email: "));
    phonebook->setAddress(read_and_add("Address: "));
    phonebook->setBirthday(read_and_add("Birthday: "));
}
