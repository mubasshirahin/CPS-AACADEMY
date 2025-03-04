#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pow;
    cin>>n>>pow;

    int ans = 1;

    for(int i=1;i<=pow;i++){
        ans *= n;
    }

    cout<<ans<<endl;
}