
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
    
    int n; cin>>n;
    int sum(0);

    for(int i=1; i<=n; i++) {
        sum+=i;
    }

    cout << sum <<endl;

    return 0;
}