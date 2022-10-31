#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string str;
    cin>> str;

    sort(str.begin(), str.end());
    int len= str.size();

    int ans(0);
    for(int i=0; i<len; i++) {
        if(str[i] != str[i+1])
            ans++;
    }
    
    if(ans&1) 
         cout<<"IGNORE HIM!"<<endl;
    else 
       
        cout<<"CHAT WITH HER!"<<endl;
     return 0;
}