#include<iostream>

using namespace std;

int func(int prime)
{
    int i, j;

    for (i = prime + 1; ; ++i)
    {
        for (j = 2; j <= (i / j); j++)
            if (!(i % j))
                break;
        if (j > (i / j))
            break;
    }

    return i;
}

int main()
{
    int prime;
    cin >> prime;
    std::cout << func(prime) << " ";
    system("pause");
}