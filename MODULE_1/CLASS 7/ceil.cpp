#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int b = 2;

    double x = 5.0;
    double y = 2.0;

    //(a/b)==2.5----> 2
    //ceil(a/b)-----> 3

    //method 1
    //its better not to use this as this need double and it has precision issues
    cout<<ceil(x/y)<<endl;
    //method 2
    int ans = (a+b-1)/b;
    cout<<ans<<endl;
    //method 3
    int ans2 = (a/b)+!!(a%b);
    cout<<ans2<<endl;
}