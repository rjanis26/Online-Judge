
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
    int d=1;
    cin>> str;

    for(int i=0; i<str.size()-1; i++) {
        if(d >= 7) 
            break;

        if(str[i] == str[i+1]) 
            d++;
        else 
            d=1;
    }


     if(d >= 7) 
            cout<< "YES" << endl;
        else cout<< "NO" << endl;
     
    
    return 0;
}