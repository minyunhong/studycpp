#include "thiscall.hpp"

class thiscall3 : public thiscall
{
public:
	void func() { cout << __func__ << ", " << __LINE__ << endl; }
};

void thiscall::thiscall_3()
{
	void (thiscall3::*fp1)()  = &thiscall3::func;
	thiscall3 tc;
	//함수 호출 연산자 우선순위가 .*보다 높음. error
	//tc.*fp1();
	(tc.*fp1)();
}

class thiscall2  : public thiscall
{
public:
	void func() { cout << __func__ << ", " << __LINE__ << endl; }
	static void func1() { cout << __func__ << ", " << __LINE__ << endl; }
};
void func3() {}

void thiscall::thiscall_2()
{
	void (*fp1)() = &func3;
	//this pointer 때문에, 일반함수 포인터에 추가안됨. error
	//void (*fp2)() = &thiscall2::func;
	//staitc func1 함수는 this pointer가 없어 가능함. ok
	void (*fp3)() = &thiscall2::func1;
}

class thiscall1 : public thiscall
{
	int x;
public:
	void set(int a)	{ x = a; }
	//static memeber don't have this pointer
	static void set1(int a)	{ /*x = a;*/ }
};

void thiscall::thiscall_1()
{
	thiscall1 p1, p2;
	p1.set(1);
	//static memeber don't have this pointer, error
	//thiscall1::set1(2):
}

void thiscall::print_menu()
{
	cout << endl << "=== thiscall menu ===" << endl;
	cout << "1. this call 1" << endl;
	cout << "2. this call 2" << endl;
	cout << "3. this call 3" << endl;
	cout << "ff. go back" << endl;
	cout << "ee. exit" << endl;
}

void thiscall::execute_menu()
{
	while(1)
	{
		print_menu();
		input_value();

		switch (input)
		{
			case 0x1:
				thiscall_1();
				break;

			case 0x2:
				thiscall_2();
				break;

			case 0x3:
				thiscall_3();
				break;

			default:
				break;
		}

		if (input == 0xff)
			break;
		if (input == 0xee)
			exit(0);
	}
}

void thiscall_main()
{
	thiscall m;

	m.execute_menu();
}