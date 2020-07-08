#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

#pragma argsused
bool prost(int z);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RUS");
    int f;
    printf("Введите четное число ");
    cin >> f;

    for (int i = 2; i <= f - 2; i++)
        if (prost(i) && prost(f - i)) {
            printf("%d = %d + %d", f, i, f - i);
            break;
        }

    _getch();

    return 0;
}

bool prost(int z) {
    for (int i = 2; i <= sqrt(z); i++)
        if (z % i == 0) {
            return false;
        }
    return true;
}
