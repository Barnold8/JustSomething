#include "pch.h"
#include <iostream>
#include <iomanip>


//Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
//The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
//The program computes the answer on the two numbers the user entered and prints the results. 
//If the user enters an invalid symbol, the program should print nothing.


double getNum() {

	double NUM{};

	std::cout << "Enter a number: ";
	std::cin >> NUM;

	return NUM;

}

char getSymbol() {

	constexpr int symbolSize = 4;
	char symbols[symbolSize] = { '+',  '-', '*', '/' };

	char symb{};
	std::cout << "\nEnter a symbol\n\n + | - | * | / | \t";
	std::cin >> symb;

	for (int i = 0; i < symbolSize; i++) {
	
		if (symb == symbols[i]) {
		
			return symb;
		}
	
	}

	std::cout << "INCORRECT SYMBOL INPUT" << std::endl;
	return '|';

}

double calculateValue(double num, char symbol, double num1) {

	switch (symbol) {
	
		case '+':

			return num + num1;
		break;

		case '-':
			return num - num1;
		break;


		case '*':
			return num * num1;
			break;

		case '/':
			return num / num1;
			break;
		default:
			return 0.0;
	}

}


int main()
{

	double f = calculateValue(getNum(), getSymbol(), getNum());

	std::cout << "Value: " << f << std::endl;

	return 0;

}
