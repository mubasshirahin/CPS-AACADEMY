#include <bits/stdc++.h>
using namespace std;

void swap1(int a, int b)
{
    int tmp = b;
    b = a;
    a = tmp;

    cout << a << " " << b << endl;
}

void swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;
}

void swap3(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
}

void swap4(int a, int b)
{
    a = a * b;
    b = a / b;
    a = a / b;
    cout << a << " " << b << endl;
}

void swap5(int a, int b)
{
    swap(a, b);
    cout << a << " " << b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap1(a, b);
    swap2(a, b);
    swap3(a, b);
    swap4(a, b);
    swap5(a, b);
}
