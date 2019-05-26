#ifndef THISCALL_HPP
#define THISCALL_HPP

#include "cpp_main.hpp"

class thiscall : public cppMain
{
public:
	virtual void print_menu() override;
	virtual void execute_menu() override;

	void thiscall_1();
	void thiscall_2();
	void thiscall_3();
};

void thiscall_main();

#endif