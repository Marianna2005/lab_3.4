// Lab_03_4.cpp
// Дашавська Марія-Анна
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	double a; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;

	// розгалуження в повній формі
	if ((y>=(3,14*R/180)*a && y<=0 && x<=0) ||
		(x-R)*(x-R)+(y-R)*(y-R)<=R*R && y >= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
