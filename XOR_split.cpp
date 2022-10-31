/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution() {
    
    ll n; cin>>n;

    ll count =0;
    while(n>0) {
        if((n&1) != 0) {
            count++;
        }
        n = n>>1;
    }

    if(count>1) 
        cout<< 1 << endl;
    else 
        cout<< 0 << endl;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t; cin>>t;
    while(t--) {
        solution();
    }
    
     
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution() {
    
    ll n; cin>>n;

    ll count =0;
    while(n>0) {
         
         count += n%2;
         n/=2;
    }

    if(count>1) 
        cout<< 1 << endl;
    else 
        cout<< 0 << endl;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t; cin>>t;
    while(t--) {
        solution();
    }
    
     
    return 0;
}
 