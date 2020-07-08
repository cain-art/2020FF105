#include<iostream>

using namespace std;

int Revers(int n, int a) {
    if (n == 0)
        return a;
    a *= 10;
    a += n % 10;
    n /= 10;
    Revers(n, a);

}

int main() {
    int num, revers_num;
    cin >> num;
    revers_num = Revers(num, 0);
    cout << revers_num;
    system("pause");
}

