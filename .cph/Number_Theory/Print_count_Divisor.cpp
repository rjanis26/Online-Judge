/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
ll mod = 1000000007;

void print_vec(vector<int> &v) {
    for(const auto &ar : v)     
        cout<< ar <<" " ;
    cout<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<int> v;
    int n; cin>> n;
    int count=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) v.push_back(i);
    }

    cout<< v.size() << endl;
    print_vec(v);
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
ll mod = 1000000007;

set<int> s;
void count_divisor(int n) {
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            int x = i;
            int y = n/i;
            s.insert(x);
            s.insert(y);
        }
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>>test;
    while(test--) {
        int n; cin>>n;
        count_divisor(n);
        cout<<s.size() << endl;
        for(const auto &it : s)
            cout<< it << " ";
        s.clear();
    }

 
    return 0;
} */



/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
ll mod = 1000000007;

set<int> s;
void count_divisor(int n) {
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            int x = i;
            int y = n/i;
            s.insert(x);
            s.insert(y);
        }
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>>test;
    while(test--) {
        int n; cin>>n;
        count_divisor(n);
        cout<<s.size() << endl;
        for(const auto &it : s)
            cout<< it << " ";
        s.clear();
    }

 
    return 0;
}
  */

 

 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
ll mod = 1000000007;

set<int> s;
 
void count_divisor(int n) {

    for(int i=1; i<=sqrt(n); ++i) {
        if(n%i == 0) {
            int x = i;
            int y = n/i;
            s.insert(x);
            s.insert(y);
        }
    }
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        count_divisor(n);
        cout<< s.size() << endl;

        for(const auto & st: s) 
        cout<< st <<" ";
        cout<< endl;
        s.clear();
    }

  
    return 0;
}
   
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
ll mod = 1000000007;
set<ll> s;

void count_divisor(ll n) {
    for(ll i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            ll x = i;
            ll y = n/i;
            s.insert(x); s.insert(y);
        }
    }
}

 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
    ll n, k;
    cin>> n >> k;
    count_divisor(n);
    
    vector<ll> v;
    v.assign(s.begin(), s.end());

    if(k > v.size()) 
        cout<< -1 << endl;
    else cout<< v[k-1] << endl;
 
    return 0;
}
    */ 























   