 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {

    int n, q, sum=0;
    cin>>n >> q;
    string str;
    cin>>str;
    vector<int> ar;
    ar.push_back(0);

    for(int i=0; i<str.size(); i++) {
        int x = str[i] - 'a' + 1 ;
        sum += x;
        ar.push_back(sum);
    }
 

    while(q--) {
        int l,r;
        cin>>l>>r;
        cout << ar[r] - ar[l-1] << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    solve();
 
    return 0;
} 
 */
/* 
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep(i,n) for(int i=0; i<=(n); i++)
#define anis ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);
#define endl "\n"


void solution() {

    int n; cin>>n;
    int arr[n+1];
    rep(i,n) 
        cin>>arr[i];

    int dif[n+2] = {0};

    int q; cin>>q;

    while(q--) {
        int l, r, value;
        cin>> l >> r >> value;
        dif[l] += value;
        dif[r+1] -= value;
    }

    for(int i=1; i<n; i++) 
        dif[i] += dif[i=1];  /// calculate the  prefix sum
    
    rep(i,n) 
        arr[i] += dif[i]; // add two array vlue;

    rep(i,n) 
        cout<< arr[i] << " ";

    cout<< endl;
}

int main()
{
    anis;

    solution();

    return 0;
}

 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, sum(0);
    cin>> n >> q;

    string str;
    cin>> str;

    vector<int> ar;
    ar.push_back(0);

    for(int i=0; i<str.length(); i++) {

        int x = str[i] -'a' +1;
        sum += x;
        ar.push_back(sum);
    }

    while(q--) {
        int l, r;
        cin>> l >> r;

        if(l==0) 
            cout<< ar[l] << endl;
        else 
            cout << ar[r] - ar[l-1] << endl;
    }


    return 0;
}