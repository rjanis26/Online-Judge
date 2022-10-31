
#include<bits/stdc++.h>
using namespace std;
#define ll long  long int 
#define endl "\n"


int main()
{

    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    
    // ll a, b; 
    // ll p =  1.0e+18;
    // cin>> a >> b;
    // ll ans = p/a;
     
    // if(ans > b)  
    //     cout << "Big" << endl;
    // else cout<< "small" << endl;

    ll n, i, j, ans=1, z=0;
    cin >> n;
   // ll p = 1.0e+18;
    ll p = 10e18;
    ll arr[n];

    for(i=0; i<n; i++) {
        cin>> arr[i];
        if(arr[i] == 0) z = 1;
    }

    if(z==1) 
        cout<< "0" << endl;
    else {
        for(i=0; i<n; i++) {
            if(ans <= p/arr[i]) {
                ans = ans *arr[i];
            }
            else {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}