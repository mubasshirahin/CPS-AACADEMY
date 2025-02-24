#include <bits/stdc++.h>
using namespace std;

void check1(int n)
{
    int backup = n;
    int tmp = 0;

    while (n != 0)
    {
        tmp = (tmp * 10) + (n % 10);
        n = n / 10;
    }
    if (tmp == backup)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}

void check2(int n)
{
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}

void check3(int n)
{
    string s = to_string(n);

    bool check = true;

    for (int start = 0, end = s.size() - 1; start <= end; start++, end--)
    {
        if (s[start] != s[end])
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
}

int main()
{
    int n;
    cin >> n;

    check1(n);
    check2(n);
    check3(n);
}