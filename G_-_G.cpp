
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int a,b, x,y;
    cin>> a>> b >> x >> y;

    ll ans1 = a * b;
    ll ans2 = x * y;
    cout<< max(ans1, ans2) << endl;
    

    return 0;
}