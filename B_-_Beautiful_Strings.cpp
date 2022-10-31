#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin >> str;

    int len= str.size();
    sort(str.begin(), str.end());

    for(int i=0; i<len; i+=2) {
        if(str[i] != str[i+1]) {
            cout<<"No";
            return 0;
        }
    }
    
    cout<<"Yes";
    return 0;
        

    return 0;
}  
 