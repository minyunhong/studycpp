#ifndef CPPMAIN_HPP
#define CPPMAIN_HPP

#include "main.hpp"

class cppMain : public Main
{
public:
	virtual void print_menu();
	virtual void execute_menu();
};

void cpp_main();

#endif