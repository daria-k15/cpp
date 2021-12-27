#include "span.hpp"

Span::Span(){}

Span::Span(unsigned int n){
	size_ = n;
	val_.reserve(size_);
}

Span::Span(const Span &other){
	*this = other;
}

Span &Span::operator=(const Span &other){
	if (this != &other){
		size_ = other.getSize();
		val_ = other.getValues();
	}
	return (*this);
}

Span::~Span(){}

unsigned int Span::getSize() const{
	return(size_);
}

std::vector<int> Span::getValues() const{
	return (val_);
}

void Span::addNumber(int num){
	if (val_.size() >= size_){
		throw (FullException("Number is Full!"));
	}
	val_.push_back(num);
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end){
	for (std::vector<int>::const_iterator it = begin; it != end; it++){
		if (val_.size() >= size_)
			throw(FullException("Number is Full!"));
		val_.push_back(*it);
	}
}

long Span::shortestSpan(){
	std::vector<int>tmp = val_;
	int len = tmp.size();
	if (len == 0)
		throw (NoNumberException("No number is store"));
	else if (len == 1)
		throw (OnlyOneNumberException("There is only one number"));
	// std::cout << "before " << std::endl;
	// for (int i = 0; i < len; i++){
	// 	std::cout << val_[i] << " ";
	// }
	// std::cout << std::endl;
	int first = *min_element(tmp.begin(), tmp.end());
	std::vector<int>::iterator res = std::min_element(tmp.begin(), tmp.end());
	tmp.erase(res);
	// std::cout << first << std::endl;
	// std::cout << "after " << std::endl;
	// for (int i = 0; i < len; i++){
	// 	std::cout << val_[i] << " ";
	// }
	// std::cout << std::endl;
	int second = *min_element(tmp.begin(), tmp.end());
	// std::cout << second << std::endl;
	// val_.erase(first);

	return (second - first);
}

long Span::longestSpan(){
	int len = val_.size();
	if (len == 0)
		throw (NoNumberException("No number is store"));
	else if (len == 1)
		throw (OnlyOneNumberException("There is only one number"));
	int first = *max_element(val_.begin(), val_.end());
	int second = *min_element(val_.begin(), val_.end());
	return(first - second);
}

Span::FullException::FullException(const std::string &s) : runtime_error(s){}

Span::NoNumberException::NoNumberException(const std::string &s) : runtime_error(s){}

Span::OnlyOneNumberException::OnlyOneNumberException(const std::string &s) : runtime_error(s){}
