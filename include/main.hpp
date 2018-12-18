#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

#define DEBUG 0

class Main {
public:
	unsigned int input;
	void print_menu();
	virtual void input_value();
	virtual void test_print() {}
	void test();
};

#endif