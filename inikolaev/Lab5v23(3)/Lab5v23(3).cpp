#include<iostream>
#include<conio.h>
#include<string>


const char* RomeDigits[] =
{
"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"
};

const int ArabicNumbers[] =
{
    1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000
};


std::string ArabicToRome(int n)
{
    std::string res;

    int i = 12;
    while (n > 0)
    {

        while (ArabicNumbers[i] > n)
        {
            i = i - 1;
        }
        res = res + RomeDigits[i];
        n = n - ArabicNumbers[i];
    }
    return res;
}

int main()
{
    int arabic;
    setlocale(LC_ALL, "RUS");
    std::cout << "Введитечисло: ";
    std::cin >> arabic;
    std::cout << "Римскоечисло = " << ArabicToRome(arabic) << std::endl;
    _getch();
    return 0;
}

