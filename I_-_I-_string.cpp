  

  #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
   
     string a, b, c;
     cin>> a >>b >> c;

    if(a[a.length()-1] == b[0] and b[b.length()-1] == c[0])
        cout<< "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

 

/* The last character in AA and the initial character in BB are the same.
The last character in BB and the initial character in CC are the same. */