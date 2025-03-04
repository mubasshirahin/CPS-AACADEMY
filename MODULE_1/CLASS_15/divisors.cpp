#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 12;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }cout<<endl;


    //we can do this more optimizely

    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";

            if(i != num/i){
                cout<<num/i<<" ";
            }
        }
    }cout<<endl;
}