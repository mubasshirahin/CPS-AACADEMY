#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;

    //check odd or even
    //Method 1
    cout<<((a%2==0)?"Even\n":"Odd\n");
    //Method 2
    cout<<((a&1==0)?"Even\n":"Odd\n");
}