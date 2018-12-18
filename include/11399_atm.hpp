#ifndef ATM_HPP
#define ATM_HPP

#include <main.hpp>
#include <array>
#include <algorithm>
#include <functional>

class atm : public Main
{
public:
	void waiting_calc();
	void input_value();
	void test_print();

	array<int, 1000> atm_arr;
	unsigned int input = 0;
	unsigned int result = 0;
};

void atm_main();

#endif