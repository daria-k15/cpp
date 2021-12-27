#include "iter.hpp"

int main(void){
	std::string arr[3] = {"simple", "test", ":)"};
	iter(arr, sizeof(arr)/sizeof(arr[0]), print);
	std::cout << std::endl;
	int arr_i[3] = {3, 2, 8};
	iter(arr_i, sizeof(arr_i)/sizeof(arr_i[0]), print);
	std::cout << std::endl;
	double arr_d[3] = {3.4, 2.6, 8.9};
	iter(arr_d, sizeof(arr_d)/sizeof(arr_d[0]), print);
}