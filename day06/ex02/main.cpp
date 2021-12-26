#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main(void){
    Base *p;
    p = generate();
    identify(p);
    identify(*p);

}

Base *generate(void){
    std::srand(std::time(NULL));
    int i = std::rand() % 3;
    if (i == 0){
        std::cout << "A" << std::endl;
        return (new A);
    }
    else if (i == 1){
        std::cout << "B" << std::endl;
        return (new B);
    }
    else if (i == 2){
        std::cout << "C" << std::endl;
        return (new C);
    }
    return (NULL);
}
void identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Smth wrong" << std::endl;
}

void identify(Base &p){
    try{
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch(std::exception&){}
    try{
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch(std::exception&){}
    try{
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch(std::exception&){};
}