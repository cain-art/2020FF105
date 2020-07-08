#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[100];
    int i, n, f, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        f = 1;
        for (j = 2; j <= a[i] - 1; j++)
            if (a[i] % j == 0) f = 0;
        if (f == 1) cout << "номер элемента " << i << endl;
    }
    system("pause");
    return 0;
}

