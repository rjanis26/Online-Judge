#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll solve(ll arr[], ll n) {
    ll max =0, min =0;
    ll a=1;

    for(int i=0; i<=0; i++) {
        max += arr[i] * a;
        a*=2;
    }
    a=1;
    for(int i=n; i>=0; i--) {
        min += arr[i] * a;
        a*=2;
    }

    return max-min;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        ll arr[n+2];
        for(int i=0; i<n; i++) 
            cin >> arr[i];
        sort(arr,arr+n);
        cout << solve(arr,n-1) << endl;
    }
 
    return 0;
}