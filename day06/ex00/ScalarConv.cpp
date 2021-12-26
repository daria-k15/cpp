#include "ScalarConv.hpp"

const std::string ScalarConv::scienceVal[3] = {
	"-inf",
	"+inf",
	"nan"
};

ScalarConv::ScalarConv() : input_value_(""){}

ScalarConv::~ScalarConv(){}
ScalarConv::ScalarConv(const ScalarConv &other){
	*this = other;
}

ScalarConv & ScalarConv::operator=(const ScalarConv &){
	return(*this);
}

ScalarConv::ScalarConv(std::string input_value) : input_value_(input_value){}

const std::string ScalarConv::getInputValue() const{
	return(input_value_);
}

static bool isChar(const std::string &value){
	if (value.length() == 1 && std::isprint(value[0]) && !std::isdigit(value[0]))
		return(true);
	return(false);
}

static bool isInt(const std::string &value){
	int i = 0;
	std::string::size_type len = value.length();

	if (value[i] == '0'){
		if (len == 1)
			return(true);
		return(false);
	}
	if (value[i] == '+' || value[i] == '-')
		++i;
	while(value[i]){
		if (!std::isdigit(value[i]))
			break ;
		++i;
	}
	if (len == static_cast<std::string::size_type>(i))
		return(true);
	return(false);
}

static bool isDouble(const std::string &value){
	std::string::size_type dotPos = value.find_first_of(".", 0);
	std::string::size_type len = value.length();
	std::string::size_type i = 0;

	if (dotPos == 0 || dotPos != value.find_last_of(".", len - 1))
		return(false);
	if (value[i] == '+' || value[i] == '-')
		i++;
	if (value[i] == '.')
		return(false);
	while(isdigit(value[i]))
		i++;
	if (i != dotPos)
		return(false);
	i++;
	while (isdigit(value[i]))
		i++;
	if (len == static_cast<std::string::size_type>(i))
		return(true);
	return(false);
}

static bool isFloat(const std::string &value){
	std::string::size_type dotPos = value.find_first_of(".", 0);
	std::string::size_type len = value.length();
	std::string::size_type i = 0;

	if (dotPos == 0 || dotPos != value.find_last_of(".", len - 1))
		return(false);
	if (value[i] == '+' || value[i] == '-')
		i++;
	if (value[i] == '.')
		return(false);
	while(isdigit(value[i]))
		i++;
	if (i != dotPos)
		return(false);
	i++;
	while (isdigit(value[i]))
		i++;
	if (value[i] == 'f' && len == static_cast<std::string::size_type>(i + 1))
		return(true);
	return(false);
}

ScalarConv::Types ScalarConv::checkType(){
	const std::string inputV = getInputValue();
	if (inputV == "-inf" || inputV == "-inff")
		return(NegInf);
	else if (inputV == "+inf" || inputV == "+inff")
		return(PosInf);
	else if (inputV == "nan" || inputV == "nanf")
		return(Nan);
	else if (isChar(inputV))
		return(Char);
	else if (isInt(inputV))
		return(Int);
	else if (isDouble(inputV))
		return(Double);
	else if (isFloat(inputV))
		return(Float);
	return(Def);
}

void ScalarConv::printInt(){
	std::cout << "int: " << std::flush;
	if (type_ == 0 || type_ == 1 || type_ == 2)
		std::cout << "impossible" << std::endl;
	else if (value >= -2147483648 && value <= 2147483647){
		int print = static_cast<int>(value);
		std::cout << print << std::endl;
	}else {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConv::printChar(){
	std::cout << "char: " << std::flush;
	if (type_ == 0 || type_ == 1 || type_ == 2)
		std::cout << "impossible" << std::endl;
	else if (value >= 0 && value < 32)
		std::cout << "Non displayable" << std::endl;
	else if (value >= 32 && value <= 127){
		char print = static_cast<char>(value);
		std::cout << print << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConv::printDouble(){
	std::cout << "double: " << std::flush;
	if (type_ == 0)
		std::cout << "+inf" << std::endl;
	else if (type_ == 1)
		std::cout << "-inf" << std::endl;
	else if (type_ == 2)
		std::cout << "nan" << std::endl;
		else if (value == 0)
		std::cout << value << ".0" << std::endl;
	else if (value < std::numeric_limits<double>::min() || value > std::numeric_limits<double>::max())
		std::cout << "impossible" << std::endl;
	else if (value - static_cast<int>(value) == 0){
		std::cout << value << ".0" << std::endl;
	}
	else
		std::cout << value << std::endl;
}

void ScalarConv::printFloat(){
	std::cout << "float: " << std::flush;
	float print = static_cast<float>(value);
	if (type_ == 0)
		std::cout << "+inff" << std::endl;
	else if (type_ == 1)
		std::cout << "-inff" << std::endl;
	else if (type_ == 2)
		std::cout << "nanf" << std::endl;
	else if (print == 0)
		std::cout << print << ".0f" << std::endl;
	else if (print < std::numeric_limits<float>::min() || print > std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else if(value - static_cast<int>(print) == 0){
		std::cout << print << ".0f" << std::endl;
	} else
		std::cout << print << "f" << std::endl;
}

void ScalarConv::printAll(){
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void ScalarConv::convert(){
	std::istringstream conv(input_value_);

	type_ = checkType();
	if (type_ == Char){
		value = static_cast<double>(input_value_[0]);
	} else {
		conv >> value;
	}
	printAll();
}
