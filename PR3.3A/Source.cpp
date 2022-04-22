#include <iostream>
#include "Money.h"
#include "MoneyC.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");

	Money a(0, 0), b(0, 0);

	double x;

	cout << "Enter a value of \"a\":"; cin >> a;
	cout << "Enter a value of \"b\":"; cin >> b;

	Money c(a - b);
	cout << "Вiднiмання суми: " << c;
	cout << endl << endl;

	cout << "Дрiб = "; cin >> x;
	cout << endl;

	Money d(a * x);
	cout << "Результата множення: " << d;
	cout << endl << endl;

	cout << "Порiвняння сум: " << endl;

	if (a == b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " == "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a != b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " != "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a > b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " > "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a < b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " < "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a >= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " >= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a <= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " <= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	cout << "Iнкремент/декремент в обох формах: " << endl;

	cout << "a++: " << a++ << endl;
	cout << "res: " << a << endl;
	cout << "++a: " << ++a << endl;

	cout << "a--: " << a-- << endl;
	cout << "res: " << a << endl;
	cout << "--a: " << --a << endl;

	MoneyC f(0, 0), t(0, 0);

	double y;

	cout << "Enter a value of \"a\":"; cin >> f;
	cout << "Enter a value of \"b\":"; cin >> t;

	MoneyC v(f - t);
	cout << "Вiднiмання суми: " << v;
	cout << endl << endl;

	cout << "Дрiб = "; cin >> y;
	cout << endl;

	MoneyC n(f * y);
	cout << "Результата множення: " << n;
	cout << endl << endl;

	cout << "Порiвняння сум: " << endl;

	if (a == b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " == "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a != b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " != "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a > b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " > "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a < b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " < "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a >= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " >= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a <= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " <= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	cout << "Iнкремент/декремент в обох формах: " << endl;

	cout << "a++: " << a++ << endl;
	cout << "res: " << a << endl;
	cout << "++a: " << ++a << endl;

	cout << "a--: " << a-- << endl;
	cout << "res: " << a << endl;
	cout << "--a: " << --a << endl;

	system("pause");
	return 0;
}