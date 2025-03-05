#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;

    int arr[n][m];

    int sum = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        cout<<"Row "<<i<<" : "<<sum<<endl;
        sum=0;
    }
}