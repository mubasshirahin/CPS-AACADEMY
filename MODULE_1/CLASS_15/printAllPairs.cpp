#include <bits/stdc++.h>
using namespace std;

int main()
{

    ///for all possible pairs

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "{" << i << "," << j << "}" << " ";
        }
    }cout<<endl;

    cout<<endl;

    //remove the duplicates (1,2) && (2,1) are same

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << "{" << i << "," << j << "}" << " ";
        }
    }cout<<endl;
}