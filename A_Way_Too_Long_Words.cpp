#include<bits/stdc++.h>
using namespace std;

void solution() {

    string str;
    cin>> str;

    int n=str.size();

    if(n > 10) {
        cout << str[0] << n-2 << str[n-1] << endl;
    }
    else {
        cout << str << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {

        solution();
    }
 
    return 0;
}


 