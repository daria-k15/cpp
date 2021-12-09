#include <iostream>
#include <string>
#include <fstream>

int main(void){
	std::string s1;
	std::string s2;
	// std::fstream file;

	s1 = "Lorem Ipsum";
	s2 = "Hello";
	std::string s3 = "Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
	int pos = s3.find(s1);
	std::cout << pos << std::endl;
	std::cout << s1.length() << std::endl;
	std::string tmp = s3.substr(pos + s1.length(), s3.length() - pos - s1.length());
	std::cout << tmp << std::endl;
	// file.open("test.txt", std::fstream::in);
	std::string res = tmp.insert(0, s2);
	std::cout << res << std::endl;
	// file.close();
}