#include<bits/stdc++.h>
using namespace std;
 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

      string str;
    cin>> str;

    int n=str.size();

    if(n >= 3) {
        cout << str[0] << n-2 << str[n-1] << endl;
    }
    else {
        cout << str << endl;
    }
 
    return 0;
}


 