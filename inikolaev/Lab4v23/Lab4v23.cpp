#include <conio.h>
#include <iostream>
using namespace std;

void main()
{
    unsigned char ch;
    int s = 0;
    ch = _getch();
    while (ch != (char)27)
    {
        cout << s << " + " << (int)ch << " = " << endl;
        s += (int)ch;
        ch = _getch();
    }
    cout << "S= " << s << endl;
    
}
