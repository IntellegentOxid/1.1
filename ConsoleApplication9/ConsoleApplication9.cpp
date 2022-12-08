#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double m, h, v;
	cout << "Введіть масу m=";
	cin >> m;
	cout << "Введіть висоту h=";
	cin >> h;
	cout << "Введіть швидкість v=";
	cin >> v;
	double e, p;
	e = (m * v * v / 2);
	p = (m * 9.81 * h);
	cout << "Формула Кінетичної енергії E=" << e << endl;
	cout << "Формула Потенціальної енергії P=" << p << endl;
	system("pause>>void");
	return 0;
}