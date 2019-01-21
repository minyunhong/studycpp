#include <greedy.hpp>
#include <11399_atm.hpp>
#include <11047_coin.hpp>

void greedy::print_menu()
{
	cout << endl << "=== greedy menu ===" << endl;
	cout << "1. atm" << endl;
	cout << "2. coin" << endl;
	cout << "ff. exit" << endl;
}

void greedy::execute_menu()
{
	while(1)
	{
		print_menu();
		input_value();

		switch (input)
		{
			case 0x1:
				atm_main();
				break;

			case 0x2:
			    coin_main();
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

void greedy_main()
{
	greedy g;

	g.execute_menu();
}