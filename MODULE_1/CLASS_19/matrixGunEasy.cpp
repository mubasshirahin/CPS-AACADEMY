#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int brr[m][1];
    for(int i=0;i<m;i++){
        for(int j=0;j<1;j++){
            cin>>brr[i][j];
        }
    }

    int crr[n] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            crr[i]+= (arr[i][j]*brr[j][0]);
        }
    } 

    for(int i=0;i<n;i++){
        cout<<crr[i]<<endl;        
    }







}