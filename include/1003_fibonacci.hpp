#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

#include <main.hpp>
#include <dp.hpp>

#define RECURSIVE 1

class fb : public Main
{
public:
	void input_value();
	void test_print();
	
	int n;
	int mem[100000] = {0};
};

#if RECURSIVE
int fibonacci(int num);
#else
int fibonacci(int num);
void print_fibonacci();
#endif
void fibonacci_main();

#endif