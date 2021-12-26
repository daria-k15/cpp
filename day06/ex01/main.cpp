#include "serialize.hpp"

int main(void){
    Data data;

    data.val = 15;
    std::cout << std::showbase;
	std::cout <<  "before ptr: " << &data << "\n";
	uintptr_t raw = serialize(&data);
	Data *p_data = deserialize(raw);
	std::cout <<  "after ptr : " << p_data;
	std::cout << std::noshowbase << "\n" << std::endl;

	std::cout << "compare value" << std::endl;
	std::cout << "before value: " << data.val << std::endl;
	std::cout << "after value : " << p_data->val << std::endl;
}