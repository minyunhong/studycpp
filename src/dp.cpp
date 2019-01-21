#include <dp.hpp>
#include <1003_fibonacci.hpp>

void dp::print_menu()
{
	cout << endl << "=== dp menu ===" << endl;
	cout << "1. fibonacci" << endl;
	cout << "ff. exit" << endl;
}

void dp::execute_menu()
{
	while (1)
	{
		print_menu();
		input_value();

		switch (input)
		{
			case 0x1:
				fibonacci_main();
				break;

			default:
				break;
		}

		if (input == 0xff)
			break;
	}
}

void dp_main()
{
	dp f;

	f.execute_menu();
}