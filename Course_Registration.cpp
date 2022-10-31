#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t; cin>>t;

    while(t--) {
        int n, m, k;
        cin>>n >> m >>k;

        int ans = (n+k);
        if(m >= ans) 
            cout<<"Yes"<< endl;
        else 
            cout<< "No" << endl;
    }

 
    return 0;
}