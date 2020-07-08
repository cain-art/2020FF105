#include<iostream>
#include<cmath>

int main() {
    long n;
    int i(0), i_max, sum(0);
    std::cin >> n;
    i_max = ceil(0.5 * (int(std::log10(n) + 1)));
    while (i < i_max) {
        sum += n % 10;
        n /= 10;
        i++;
    }
    std::cout << sum;
    system("pause");
    return 0;
}

