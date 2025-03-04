#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;

    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            for(int k=1;k<=10;k++){
                if(i*i + j*j == k*k){
                    cout<<"{"<<i<<","<<j<<","<<k<<"}"<<endl;
                }
            }
        }
    }
}