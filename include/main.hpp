#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

#define DEBUG 1

class Main {
public:
	virtual void print_menu();
	virtual void input_value();
	//순수 가상함수 선언
	//자식 클래스에 항상 선언이 필요하다고 선언할때.
	//virtual void input_value() = 0;
	virtual void execute_menu();
	//virtual void test_print() {}

	unsigned int input;
};

#endif