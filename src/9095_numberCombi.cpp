#include <9095_numberCombi.hpp>

void nc::input_value()
{
	cin >> n;
	for (auto i=0; i<n; i++)
		cin >> tc[i];
}

void nc::test_print()
{
	cout << n << endl;
	for (auto i=0; i<n; i++)
		cout << tc[i] << ' ';
	cout << endl;
}

#if DEBUG
void nc::calc()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<tc[i]; j++)
		{
			for(int k=1; k<4; k++)
			{
				int target = i;
				for(int l=target; l>0; l--)
				{
					
				}
			}
		}
	}

}

void nc::numberCombination()
{

}
#else

#endif

void numberCombi_main()
{
	nc f;
#if !DEBUG
	f.input_value();
#endif
	f.test_print();
}