// Lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, s, p;
    cin >> a >> b;
    s = a * b;
    p = 2 * (a + b);
    cout << "S = " << s <<"\n" << "P = " << p << endl;

    float d, l;
    cin >> d;
    l = d * 3.14f;
    cout << "L = " << l << endl;

    float a1, b1;
    cin >> a1 >> b1;
    cout << (a1 + b1) / 2 << endl;

    cin >> a >> b;
    s = a ^ 2 + b ^ 2;
    l = a ^ 2 - b ^ 2;
    p = a ^ 2 * b ^ 2;
    d = a ^ 2 / b ^ 2;
    cout << "+ = " << s << "\n" << "- = " << l << "\n" << "* = " << p << "\n" << "/ = " << d << "\n" << endl;

    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    s = a + b;
    l = a - b;
    p = a * b;
    d = a / b;
    cout << "+ = " << s << "\n" << "- = " << l << "\n" << "* = " << p << "\n" << "/ = " << d << "\n" << endl;
}

