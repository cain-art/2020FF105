#include<iostream>
#include<cmath>
#include<math.h>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    double y, i, am, an, e, a, b, f, h;
	int t;
    y = 0;
    for (i = 1; i <= 2; i = i + 0.1)
        y = y + sin(i);
    cout << "y= " << y << endl;
    system("pause");
	system("cls");

	cout << "e= ";
	cin >> e;
	t = 1;
	am = 1;
	cout << t << '=' << am << endl;
	do
	{
		t++;
		an = 0.5 * (am + 2 / am);
		am = an;
		cout << t << '=' << an << endl;
	} while (fabs(am * am - 2) >= e);
	system("pause");
	system("cls");

	cout << "Введите левую границу интервала a = ";
	cin >> a;
	cout << "Введите правую границу интервала b = ";
	cin >> b;
	cout << "Введите шаг h = ";
	cin >> h;
	for (double i = a; i <= b; i += h)
	{
		f = -cos(2 * i);
		cout << "x = " << i << "\tf(x) = " << f << endl;
	}
	system("pause");
	return 0;
}

