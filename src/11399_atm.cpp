#include <11399_atm.hpp>

void atm::waiting_calc()
{
	auto sum = 0;
	sort(atm_arr.begin(), atm_arr.begin()+input, less<int>());
#if DEBUG
	test_print();
#endif

	for (auto i=0; i<input; i++)
	{
		sum = sum + atm_arr[i];
		result += sum;
	}
	cout << result << endl;
}

void atm::input_value()
{
#if DEBUG
	input = 5;
	atm_arr = { 3,1,4,3,2 };
#else
	cin >> input;
	for (auto i=0; i<input; i++)
	{
		cin >> atm_arr[i];
	}
#endif
}

void atm::test_print()
{
	cout << "atm_arr: " << endl;
	for (auto i=0; i<input; i++)
		cout << atm_arr[i] << " ";
	cout << endl;
}

void atm_main()
{
	atm f;

	f.input_value();
	f.waiting_calc();
}