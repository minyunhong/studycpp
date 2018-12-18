#include <main.hpp>
#include <dijkstra.hpp>
#include <1719_delivery.hpp>
#include <11399_atm.hpp>

void Main::print_menu()
{
	cout << endl << "=== main menu ===" << endl;
	cout << "1. dijkstra" << endl;
	cout << "2. delivery" << endl;
	cout << "3. atm" << endl;
	cout << "ff. exit" << endl;
}

void Main::input_value()
{
	cin >> hex >> input;
}

void Main::test()
{
	//Delivery d = new Delivery();
}

int main()
{
	Main m;

	while(1)
	{
		m.print_menu();
		m.input_value();
		switch(m.input)
		{
			case 0x1:
				dijkstra_main();
				break;

			case 0x2:
				delivery_main();
				break;

			case 0x3:
				atm_main();
				break;

			default:
				break;
		}

		if( m.input == 0xff )
			break;
	}

	return 0;
}
