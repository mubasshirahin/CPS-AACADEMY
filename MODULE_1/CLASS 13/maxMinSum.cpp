#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    long long mini = INT_MAX;
    long long maxi = INT_MIN;

    while(n--){
        long long x;cin>>x;
        sum += x;
        maxi = max(maxi,x);
        mini = min(mini,x);
    }

    cout<<mini<<" "<<maxi<<" "<<sum<<endl;
}
