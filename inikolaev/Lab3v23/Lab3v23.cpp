#include <iostream>
#include <locale>
using namespace std;


int main()
{
    setlocale(0, "rus");

    cout << " 6.3. Задачи по теме «Оператор выбора. Вариант 23»  " << endl;

    float age, choice;
    cout << "\n Введите 1, если вы мужчина или 2, если вы женщина:\n";
    do {
        cin >> choice;
    } while (!(choice == 1 || choice == 2));
    cout << "Введите ваш возраст:\n";
    cin >> age;
    cout << "Вам рекомендуется: \n";
    choice == 1 ? cout << "Женщина " << age / 2 + 7 << " лет \n" : cout << "Мужчина " << age * 2 - 14 << " лет \n" << endl;

    system("pause");
    return 0;
}