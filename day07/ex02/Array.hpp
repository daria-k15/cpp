#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array{
	private:
		unsigned int n_;
		T *arr_;
	public:
		Array();
		explicit Array(unsigned int n);
		Array(const Array &other);
		Array & operator=(const Array &other);
		~Array(); 

		T &operator[](unsigned int n);
		const T &operator[](unsigned int n) const;

		unsigned int size() const;
		const T *getArray() const;
};

template <class T>
Array<T>::Array() : n_(0), arr_(new T[0]()){
	std::cout << "default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : n_(n), arr_(new T[n]()){
	std::cout << "constructor called" << std::endl;
}

template <class T>
Array<T>::Array(const Array &other) : n_(other.size()), arr_(new T[other.size()]){
	std::cout << "copy constructor called" << std::endl;
	const T *other_arr = other.getArray();
	for (unsigned int i = 0; i < other.size(); i++){
		arr_[i] = other_arr[i];
	}
}

template <class T>
Array<T> & Array<T>::operator=(const Array &other){
	std::cout << "assignment operator called" << std::endl;
	if (this != &other){
		unsigned int size = other.size();
		const T *arr = other.getArray();
		n_ = size;
		T *tmp = new T[size];
		for (unsigned int i = 0; i < size; i++){
			tmp[i] = arr[i];
		}
		delete[] arr;
		arr_ = tmp;
	}
	return (*this);
}

template <class T>
Array<T>::~Array(){
	std::cout << "destructor called" << std::endl;
	delete[] arr_;
}

template <class T>
T &Array<T>::operator[](unsigned int n){
	if (n_ <= n){
		throw (std::exception());
	}
	return (arr_[n]);
}

template <class T>
const T &Array<T>::operator[] (unsigned int n) const{
	if (n_ <= n){
		throw (std::exception());
	}
	return (arr_[n]);
}

template <class T>
unsigned int Array<T>::size() const{
	return(n_);
}

template <class T>
const T *Array<T>::getArray() const{
	return (arr_);
}
#endif