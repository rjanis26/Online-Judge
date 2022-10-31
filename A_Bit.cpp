#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{       

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    string str;

    int value(0);
    
    while(n--) {
        cin>>str;
        if(str == "X++" or str=="++X")
            value++;
        else value--;
    }   

    cout << value <<endl;

 
    return 0;
}