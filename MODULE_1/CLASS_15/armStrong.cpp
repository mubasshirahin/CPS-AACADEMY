#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int backup = n;

    //153..size=3
    //1^3 + 5^3 + 3^3 = 153
    //armstrong

    int tmp = 0;
    int size = (int)log10(backup)+1;

    while(n!=0){
        int ld = n%10;
        n=n/10;

        int power = 1;
        for(int i=0;i<size;i++){
            power = power*ld;
        }
        tmp += power;  
    }


    if(tmp == backup){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
}