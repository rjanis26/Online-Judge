
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, t; cin>>x >> t;

    if(x<=t) 
        cout<< 0 << endl;
    else cout<< abs(x - t) << endl;
     
    
    return 0;
}