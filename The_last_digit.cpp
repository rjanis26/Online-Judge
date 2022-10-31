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
    
    int test; cin>> test;
    while(test--) {
        int n, m; cin>> n>> m;
        
        if(n == 0 and m==0) cout << 0 << endl;
        else if(m==0) cout<< 1 << endl;

        else {
            cout<< find_power(n,m)%10 << endl;
        }
         
    }
      

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL binpow(LL a, LL b)
{
    LL res = 1 ;
    while(b > 0){
        if(b & 1)
        res = res * a;
        a = a * a  ;
        b >>= 1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        LL x, y;
        cin>>x>>y;
        if(x==0&&y==0)cout<<0<<endl;
        else if(y==0)cout<<1<<endl;
        else
        {
            if(y%4==0)y = 4;
            else y = y%4;
            cout<<binpow(x, y)%10<<endl;
        }
    }
    return 0;
}