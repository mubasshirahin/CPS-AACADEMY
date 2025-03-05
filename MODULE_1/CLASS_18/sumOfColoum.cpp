#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;

    int arr[n][m];

    int sum = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            sum += arr[i][j];
        }
        cout<<"Coloum "<<j<<": "<<sum<<endl;
        sum = 0;
    }
}

