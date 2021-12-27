#include "mutantstack.hpp"
#include <list>

//clang++ -Wall -Wextra -Werror --std=c++98 main.cpp

int main(void){
    {
        std::cout << "-----subject test-----" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        // //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << "------copy constructor test------" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int> tmp = mstack;
        MutantStack<int>::iterator copy_ite = tmp.end();
		for (MutantStack<int>::iterator copy_it = tmp.begin(); copy_it != copy_ite; ++copy_it)
		{
			std::cout << *copy_it << std::endl;
		}
    }
    {
		std::cout << "-----list test------" << std::endl;
		std::list<int> ls;
		ls.push_back(5);
		ls.push_back(17);
		std::cout << "back: " << ls.back() << std::endl;
		ls.pop_back();
		std::cout << "back: " << ls.back() << std::endl;
		ls.push_back(3);
		ls.push_back(5);
		ls.push_back(737);
		std::cout << "size: " << ls.size() << '\n' << std::endl;

		std::cout << "print element" << std::endl;
		const std::list<int>::iterator it_e = ls.end();
		for (std::list<int>::iterator it = ls.begin(); it != it_e; ++it)
		{
			std::cout << *it << std::endl;
		}
	}
}