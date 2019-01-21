#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

#define DEBUG 1

class Main {
public:
	void print_menu();
	virtual void input_value();
	virtual void execute_menu();
	//virtual void test_print() {}

	unsigned int input;
};

#endif