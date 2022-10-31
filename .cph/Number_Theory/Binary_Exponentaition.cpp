/* 
// brute forces
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int res = 1;

    int base = 2, power = 3;

    for(int i=1; i<=power; i++) 
        res *= base;
    
    cout<< res << endl;
 

    return 0;
} */


// complextity O(long n);
/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

ll find_power(ll base, ll n) {
    ll res = 1;
    while(n) {
        if(n%2 == 1) {
            res *= base;
            n--;
        }
        else { 
            base *= base;
            n/=2;
        }
    }
    return res;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, m; cin>> n>> m;
    int ans = find_power(n, m);
    cout<< ans << endl;
 

    return 0;
} */



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

ll find_power(ll base, ll n, ll mod) {

    ll res = 1;
    while(n) {
        if(n%2 == 1) {
            res = (res * base)%mod;
            n--;
        }
        else { 
            base = (base * base) % mod;
            n/=2;
        }
    }
    return res;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        int n, m; cin>> n>> m;
       int mod; cin>>mod;
    int ans = find_power(n, m,mod );
    cout<< ans << endl;

    }
     
    //  int n, m; cin>> n>> m;
    //     ll mod;cin>> mod;
    // int ans = find_power(n, m,mod );
    // cout<< ans << endl;
 

    return 0;
}