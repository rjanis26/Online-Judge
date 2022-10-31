

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
        int x = str[i] - 'a' +1;
        sum += x;
        ar.push_back(sum);
    }

    // print the vector
    
    for(auto &it : ar) 
        cout<< it << " ";
    
    cout << endl;

    while(q--) {
        int l,r;
        cin>>l>>r;
        cout << ar[l] - ar[r-1] << endl;
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