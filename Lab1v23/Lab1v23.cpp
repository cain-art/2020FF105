
#include <stdio.h>
#include "cmath"
#include <math.h> 
#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "rus");
	double func1, x, y, R1, R2, R3, R, a, b;
	bool  dot;

	cout << " Задачи по теме «Линейные программы» " << endl;


	cout << " 6.1.1. Вычисления по формулам Вариант 23 " << endl;
	cout << " Введите аргумент X:" << endl;
	cin >> x;
	cout << " Введите аргумент Y:" << endl;
	cin >> y;
	func1 = ((pow(3, x)) - (4 * x) + (y - (sqrt(abs(x)))));
	cout << "Ответ= " << func1 << endl;
	system("pause");
	system("cls");

	cout << " 6.1.2. Вычисления в математических задачах Вариант 23 " << endl;
	cout << " Введите сопротивление R1,R2,R3: " << endl;
	cin >> R1;
	cin >> R2;
	cin >> R3;
	R = ((R1 * R2 * R3) / (R1 + R2 + R3));
	cout << "общее сопротивление R: " << R << endl;
	system("pause");
	system("cls");

	cout << " 6.1.3. Задачи на составление логических выражений Вариант 23 " << endl;
	int x1, y1, x2, y2;
	cout << " Введите начальное положение коня (x,y) и конечное положение коня (x,y): " << endl;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	int dx = abs(x1 - x2);
	int dy = abs(y1 - y2);

	if (dx + dy == 3 && dx != 0 && dy != 0)
		cout << "конь может переместится в эту клетку" << endl;
	else
		cout << "конь НЕможет переместится в эту клетку" << endl;

	system("pause");
	system("cls");


	cout << " 6.1.4. Области, описываемые логическими выражениями  Вариант 23 " << endl;
	cout << " Введите значение по оси X:" << endl;
	cin >> a;
	cout << " Введите аргумент введите значение по оси Y:" << endl;
	cin >> b;
	if ((((a * a + b * b) <= 36) && (a <= 0) && (b >= 0)) || (((a * a + b * b) <= 36) && ((a * a + b * b) >= 9) && (a > 0) && (b > 0)))
		dot = true;
	else dot = false;
	cout << "точка лежит в прекделах фигуры " << dot << endl;
	system("pause");
	system("cls");

	return 0;
}

