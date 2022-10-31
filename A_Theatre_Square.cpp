#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    

    double n, m, a; cin>>n >> m>>a;

    ll  first =ceil(n/a);
    ll last = ceil(m/a);
    ll ans = first*last;

    cout << ans << endl;
   

    return 0;
}