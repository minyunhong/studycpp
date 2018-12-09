#include <main.hpp>
#include <dijkstra.hpp>
using namespace std;

void Main::print_menu()
{
	cout << endl << "=== main menu ===" << endl;
	cout << "1. dijkstra" << endl;
	cout << "ff. exit" << endl;
}

void Main::input_menu()
{
	cin >> hex >> input;
}

int main()
{
	Main m;

	while(1)
	{
		m.print_menu();
		m.input_menu();
		switch(m.input)
		{
			case 0x1:
				dijkstra_main();
				break;

			default:
				break;
		}

		if( m.input == 0xff )
			break;
	}

	return 0;
}
