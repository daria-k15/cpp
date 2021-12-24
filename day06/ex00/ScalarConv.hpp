#ifndef SCALARCONV_HPP
#define SCALARCONV_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <locale>

class ScalarConv{
	public:
		ScalarConv(const ScalarConv &other);
		ScalarConv & operator=(const ScalarConv &);
		explicit ScalarConv(std::string input_value);
		~ScalarConv();

		void convert();
		const std::string getInputValue() const;

		typedef enum {
			NegInf,
			PosInf,
			Nan,
			Int,
			Char,
			Double,
			Float,
			Def
		} Types;
	private:
		static const std::string scienceVal[3];
		bool char_overf;
		bool int_overf;
		bool float_overf;
		bool double_overf;
		std::string input_value_;
		ScalarConv();
		Types type_;
		Types checkType();
		void checkOverf();
		double value;
		void printAll();
		void printInt();
		void printChar();
		void printDouble();
		void printFloat();
};

#endif