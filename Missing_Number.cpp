 /* #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"

 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int sum, a, b, c; cin>> sum >> a >> b>>c;

        int ans = sum - (a+b+c);
        cout<< abs(ans) << endl;
    }
    
    
    return 0;
}
 */


#include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"

int missingNumber(vector<int> &arr)  {
    // int ans = arr.size();
    // for(int i=0; i<arr.size(); i++) 
    //     ans += i- arr[i];
    // return ans;

    int ans = arr.size();
    for(int i=0; i<ans; i++) 
        ans ^= i ^arr[i];
    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int sum, a, b, c; cin>> sum >> a >> b>>c;

        int ans = sum - (a+b+c);
        cout<< abs(ans) << endl;
    }
    
    
    return 0;
}
