#ifndef NUMBER_COMBINATION_HPP
#define NUMBER_COMBINATION_HPP

#include <main.hpp>
#include <dp.hpp>

class nc : public Main
{
public:
	void input_value();
	void test_print();
	void calc();
	void numberCombination();

#if DEBUG
	int n = 3;
	int tc[12] = {4, 7, 10};
#else
	int n;
	int tc[12] = {0};
#endif
	int res[12] = {0};
};

void numberCombi_main();

#endif