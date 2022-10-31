
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin>> str;
    
    ll n= str.size();

    for(int i=0; i<n; i+=2) {
        cout<< str[i];
    }
   
     
    
    return 0;
}
 
 