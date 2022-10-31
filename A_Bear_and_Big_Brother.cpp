#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int l, b;
    cin>> l >> b;
    int ans(0);

    while(l <= b) {
        l *= 3;
        b *= 2;
        ans++;
    }
    
    cout << ans << endl;
     
     return 0;
}