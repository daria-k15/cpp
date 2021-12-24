#include "ScalarConv.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Invalid arguments! Try again!" << std::endl;
		return (1);
	}

	ScalarConv value(static_cast<std::string>(argv[1]));
	value.convert();
	return (0);
}