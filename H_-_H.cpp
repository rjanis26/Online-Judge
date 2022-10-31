
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>> n;
    
    ll price = n * 800 - (n / 15)*200;
    cout<< price << endl;
    

    return 0;
}