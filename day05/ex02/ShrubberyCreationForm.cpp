#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::shrName_ = "ShrubberyCreation";

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form(shrName_, target, requiredSignGrade_, requiredExecGrade_)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other){
	*this = other;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	(void) other;
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::action() const{
	const std::string tree = "\n"      
"    _\\/_\n"
"     /\\\n"
"     /\\\n"
"    /  \\\n"
"    /~~\\o\n"
"   /o   \\\n"
"  /~~*~~~\\\n"
" o/    o \\\n"
" /~~~~~~~~\\~`\n"
"__*_______\\\n"
"     ||\n"
"   \\====/\n"
"    \\__/\n";
	const std::string f_path = "./" + getTarget() + "_shrubbery";
	std::ofstream ofs(f_path);
	if (!ofs){
		throw(std::ofstream::failure("Failed to open file!"));
	}
	ofs << tree << std::flush;
	if (!ofs){
		throw(std::ofstream::failure("Failed to write tree!"));
	}
}