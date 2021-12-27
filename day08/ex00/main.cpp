#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <set>

//clang++ -Wall -Wextra -Werror --std=c++98 main.cpp

int main(void){
	const int a[] = {11, 4, 35, 43, 51, 16};
	std::cout << "-------Vector test-------" << std::endl;
	std::vector<int> v(a, a + 6);
	int n = v.size();
	for (int i = 0; i < n; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	test(v, 4);
	test(v, 52);

	std::cout << "------Deque test-------" << std::endl;
	std::deque<int> d(a, a + 6);
	std::deque <int> :: iterator it;
	for (it = d.begin(); it != d.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	test(v, 4);
	test(v, 52);

	std::cout << "-----List test------" << std::endl;
	std::list<int> l(a, a + 6);
	std::list <int> :: iterator iter;
    for(iter = l.begin(); iter != l.end(); iter++)
        std::cout << *iter << " ";
	std::cout << std::endl;
	test(v, 4);
	test(v, 52);

	std::cout << "------Set test------" << std::endl;
	std::set<int>s(a, a + 6);
	std::set <int> :: iterator i;
	for (i = s.begin(); i != s.end(); i++){
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	test(s, 4);
	test(s, 52);
}