#include <iostream>
#include <string>
#include <fstream>

void open_file(std::string file, std::string &buf){
	std::ifstream ft_open(file);

	if (!ft_open){
		std::cout << "Failed to open file" << std::endl;
		return ;
	}
	char ch;
	while (ft_open.get(ch))
		buf += ch;
	if (!ft_open.eof()){
		std::cout << "Failed to read file!" << std::endl;
	}
}

int str_check(char **argv){
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
		return (1);
	return (0);
}

void ft_replace(std::string s1, std::string s2, std::string &buf){
	std::string::size_type pos(0);

	while (1){
		pos = buf.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		buf.erase(pos, s1.length());
		buf.insert(pos, s2);
		pos += s2.length();
	}
}

void write_to_file(std::string file, std::string buf){
	std::ofstream ft_write(file);

	if (!ft_write){
		std::cout << "Failed to open file!" << std::endl;
	}
	ft_write << buf << std::flush;
	if (!ft_write){
		std::cout << "Failed to write!" << std::endl;
	}
}

int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}
	if (str_check(argv) == 1){
		std::cout << "Empty strings!" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string buf;
	open_file(file, buf);
	ft_replace(argv[2], argv[3], buf);
	file += ".replace";
	write_to_file(file, buf);
	return(0);
}