#include<bits/stdc++.h>
using namespace std;

int main(){

    //all pairs

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         for(int k=1;k<=3;k++){
    //             cout<<"{"<<i<<","<<j<<","<<k<<"}"<<" ";
    //         }cout<<endl;
    //     }
    // }

    //uniques

    for(int i=1;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            for(int k=j+1;k<=5;k++){
                cout<<"{"<<i<<","<<j<<","<<k<<"}"<<" ";
            }
        }
    }cout<<endl;
}