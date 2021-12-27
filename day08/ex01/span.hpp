#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span{
	private:
		std::vector<int>val_;
		unsigned int size_;
		Span();
	public:
		explicit Span(unsigned int n);
		Span(const Span &other);
		Span & operator=(const Span &other);
		~Span();

		unsigned int getSize() const;
		std::vector<int> getValues() const;
		// void setValues();

		long shortestSpan();
		long longestSpan();

		void addNumber(int num);
		void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		class FullException : public std::runtime_error{
			public:
				FullException(const std::string &s);
		};

		class NoNumberException : public std::runtime_error{
			public:
				NoNumberException(const std::string &s);
		};

		class OnlyOneNumberException : public std::runtime_error{
			public:
				OnlyOneNumberException(const std::string &s);
		};
};


#endif