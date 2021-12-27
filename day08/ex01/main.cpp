#include "span.hpp"

//clang++ -Wall -Wextra -Werror --std=c++98 main.cpp

int main(void){
	{
		std::cout << "-----Subject test-----" << std::endl;
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "-----Empty test-----" << std::endl;
		Span sp = Span(5);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what()<< '\n';
		}
	}
	{
		std::cout << "-----One number test-----" << std::endl;
		Span sp = Span(5);
		sp.addNumber(3);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what()<< '\n';
		}
	}
	{
		std::cout << "-----Initialize range test-----" << std::endl;
		try{
			Span sp = Span(10000);
			std::vector<int> vec;
			for (int i = 0; i < 10000; i++)
				vec.push_back(i);
			sp.addNumber(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}