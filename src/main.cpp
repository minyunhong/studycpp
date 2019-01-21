#include <main.hpp>
#include <dijkstra.hpp>
#include <greedy.hpp>
#include <dp.hpp>
#include <1719_delivery.hpp>
#include <11399_atm.hpp>

void Main::print_menu()
{
	cout << endl << "=== main menu ===" << endl;
	cout << "1. dijkstra" << endl;
	cout << "2. delivery" << endl;
	cout << "3. greedy" << endl;
	cout << "4. dynamic programming" << endl;
	cout << "ff. exit" << endl;
}

void Main::input_value()
{
	cin >> hex >> input;
}

void Main::execute_menu()
{
	while (1)
	{
		print_menu();
		input_value();

		switch (input)
		{
			case 0x1:
				dijkstra_main();
				break;

			case 0x2:
				delivery_main();
				break;

			case 0x3:
				greedy_main();
				break;

			case 0x4:
				dp_main();
				break;

			default:
				break;
		}

		if (input == 0xff)
			break;
	}
}

int main()
{
	Main m;

	m.execute_menu();
	return 0;
}
