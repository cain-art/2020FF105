#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char string[1000];
    cout << " Задачи по теме 'Работа со строками' Вариант 23 " << endl;
    cout << " Введите строку (;): " << endl;
    cin.getline(string, 1000);

    int pre = 0, post = 0;
    bool two = false;
    
    for (int i = 0; ; i++)
    {
        if (string[i] == ';')
            two = true;
        else if(!two && string[i] != '\0')
            ++pre;
        else if(two && string[i] != '\0')
            ++post;
        else
            break;
    }

    cout << "До: " << pre << ", После: " << post << endl;
    system("pause");
    return 0;
}

