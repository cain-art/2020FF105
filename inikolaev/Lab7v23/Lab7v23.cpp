#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x[100], y[100], a[30], b[30];
    int i, m, a1, s, r, d, l, j, n, t1, t2;
    int k = 0;
    a1 = 1;
    s = 0;
    cin >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> x[i];
    }
    for (i = 1; i <= m; i++)
    {
        if (x[i] * x[i - 1] < 0)
            y[a1] = i;
        a1++;
    }
    cout << "Знак меняется у:" << endl;
    for (a1 = 1; a1 <= m; a1++)
    {
        if (y[a1] > 0)
        {
            s++;
            cout << y[a1] << " ";
        }
        if (y[a1] = 0) k++;
        if (k == m) cout << "нет такого" << endl;
    }
    cout << " числа(ел)" << endl;
    cout << "Знак меняется " << s << " раз(а)" << endl;
    system("pause");
    system("cls");

    cin >> n;
    for (l = 1; l <= n; l++)
        cin >> a[l] >> b[l];
    r = 0;
    for (l = 1; l <= n - 1; l++)
        for (j = l + 1; j <= n; j++)
        {
            d = pow((a[l] - a[j]), 2) + pow((b[l] - b[j]), 2);
            if (d > r)
            {
                r = d;
                t1 = l;
                t2 = j;
            }
        }
    cout << "Расстояние между точками " << t1 << " и " << t2 << " наибольшее" << endl;
    system("pause");
    return 0;
}
