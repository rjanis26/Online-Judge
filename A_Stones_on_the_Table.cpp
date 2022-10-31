#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    string str;
    cin>> str;

    int n= str.size();

    int ans=0;
    for(int i=0; i<n; i++) {
        if(str[i] == str[i+1]) {
            ans++;
        }
    }

    cout<< ans << endl;
     return 0;
}