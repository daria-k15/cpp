#include "Karen.hpp"

int get_level(std::string level){
	std::string level_array[4] = {
		"DEBUG", "INFO","WARNING", "ERROR"
	};
	int i;
	for (i = 0; i < 4; i++){
		if (level_array[i] == level){
			break ;
		}
	}
	return (i);
}

void print_log(std::string input){
	Karen karen;
	std::cout << "[" + input + "]" << std::endl;
	karen.complain(input);
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}
	std::string command = argv[1];
	int level = get_level(command);
	switch(level){
		case DEBUG: print_log("DEBUG");
		case INFO: print_log("INFO");
		case WARNING: print_log("WARNING");
		case ERROR: print_log("ERROR");
					break ;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}