#include<iostream>
using namespace std;

//#define PALINDROM
//#define LUCKY_TICKET

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "Данная программа определит, является ли число Палиндромом" << endl;
	cout << "Введите число: "; cin >> number;
	int buffer = number;

	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;

	if (number == reverse)
	{
		cout << "Это ПАЛИНДРОМ" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
#endif // PALINDROM

#ifdef LUCKY_TICKET
	int number;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	cout << "Вы купили билет на трамвай (автобус)!" << endl;
	cout << "Номер билета шестизначный!";
	cout << "Введите номер билета: "; cin >> number;
	int buffer = number;

	a += buffer % 10;
	b += (buffer / 10) % 10;
	c += (buffer / 100) % 10;
	d += (buffer / 1000) % 10;
	e += (buffer / 10000) % 10;
	f += (buffer / 100000) % 10;

	if (a + b + c == d + e + f)
	{
		cout << "Это счастливый билет!" << endl;
	}
	else
	{
		cout << "Это обычный билет!" << endl;
	}

	cout << number << endl;
	cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << endl;
#endif // LUCKY_TICKET


 }