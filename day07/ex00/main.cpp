#include "whatever.hpp"

int main(void){
	int x = 3;
	int y = 7;
	::swap(x, y);
	std::cout << "x = " << x << ";"<< " y = " << y << std::endl;
	std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
	std::cout << "max(x, y) = " << ::max(x, y) << std::endl;

	std::string s1 = "qwerty";
	std::string s2 = "qwe";
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ";"<< " s2 = " << s2 << std::endl;
	std::cout << "min(s1, s2) = " << ::min(s1, s2) << std::endl;
	std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl;

	float k = 12.67;
	float l = 12.66;
	::swap(k, l);
	std::cout << "k = " << k << ";"<< " l = " << l << std::endl;
	std::cout << "min(k, l) = " << ::min(k, l) << std::endl;
	std::cout << "max(k, l) = " << ::max(k, l) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}