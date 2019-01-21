#include <1003_fibonacci.hpp>

void fb::input_value()
{
	cin >> n;
	for (auto i=0; i<n; i++)
		cin >> mem[i];
}

void fb::test_print()
{
	cout << n << endl;
	for (auto i=0; i<n; i++)
		cout << mem[i] << ' ';
	cout << endl;
}

#if RECURSIVE

int mem[100000] = {0};

int fibonacci(int num)
{
	if (mem[num] > 0)
		return mem[num];
	if (num == 0)
		return 0;
	if (num == 1 || num == 2)
		return 1;
	return mem[num] = fibonacci(num-1)+fibonacci(num-2);
}

#else

char fiboResult[2] = {0};

int fibonacci(int num)
{
	if (num == 0)
	{
		fiboResult[0]++;
		return 0;
	}
	else if (num == 1)
	{
		fiboResult[1]++;
		return 1;
	}
	else if (fiboResult[num] != 0)
	{
		return fiboResult[num];
	}
	else
	{
		return fiboResult[num] = fibonacci(num-1) + fibonacci(num-2);
	}
}

void print_fibonacci()
{
	cout << fiboResult[0] << " " << fiboResult[1] << endl;
	fiboResult[0] = 0; fiboResult[1] = 0;
}
#endif

void fibonacci_main()
{
	fb f;
	f.input_value();
	f.test_print();

#if RECURSIVE
	//using recursive characteristic
	for (auto i=0; i<f.n; i++)
	{
		if (f.mem[i] == 0)
			cout << "1 0" << endl;
		else
			cout << fibonacci(f.mem[i]-1) << " " << fibonacci(f.mem[i]) << endl;
	}
#else
	//time over
	for (auto i=0; i<f.n; i++)
	{
		fibonacci(f.mem[i]);
		print_fibonacci();
	}
#endif
}