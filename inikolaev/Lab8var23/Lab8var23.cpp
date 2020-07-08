#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a[100][100], b[100][100], maxmod;
    int n, i, k, j, x, y, l, m_x, m_y;
    cout << "6.8 Задачи по теме 'Двумерные массивы'" << endl;

    cout << " 6.8.1 Задачи на формирование массивов. Вариант 23 " << endl;
    cout << " Введите n: " << endl;
    cin >> n;
    k = 1;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            a[i][j] = k;
            k++;
        }
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    system("pause");
    system("cls");

    cout << " 6.8.2. Операции с элементами массивов. Вариант 23 " << endl;
    cout << " Введите порядок матрицы: " << endl;
    cin >> l;
    for (x = 1; x <= l; x++)
        for (y = 1; y <= l; y++)
        {
            b[x][y] = rand() % 101 - 50;
        }
    maxmod = fabs(b[1][1]);
    m_x = 1;
    m_y = 1;
    for (x = 1; x <= l; x++)
        for (y = 1; y <= l; y++)
            if (fabs(b[x][y]) > maxmod)
            {
                maxmod = fabs(b[x][y]);
                m_x = x;
                m_y = y;
            }
    cout << "Исходная матрица: " << endl;
    for (x = 1; x <= l; x++)
    {
        cout << endl;
        for (y = 1; y <= l; y++)
            cout << b[x][y] << " ";
    }
    cout << endl;
    cout << "Максимальный по модулу элемент = " << b[m_x][m_y] << endl;
    for (x = 1; x <= l; x++)
    {
        cout << endl;
        if (x != m_x)
            for (y = 1; y <= l; y++)
                if (y != m_y)
                    cout << b[x][y] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}


