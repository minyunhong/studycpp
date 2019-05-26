#include "cpp_main.hpp"
#include "thiscall.hpp"

void cppMain::print_menu()
{
	cout << endl << "=== cpp main menu ===" << endl;
	cout << "1. this call" << endl;
	cout << "2. " << endl;
	cout << "ff. exit" << endl;
}

void cppMain::execute_menu()
{
	while(1)
	{
		print_menu();
		input_value();

		switch (input)
		{
			case 0x1:
				thiscall_main();
				break;

			case 0x2:

				break;

			case 0x3:
				break;

			default:
				break;
		}

		if (input == 0xff)
			break;
	}
}

void cpp_main()
{
	cppMain m;

	m.execute_menu();
}