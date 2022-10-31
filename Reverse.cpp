
  #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"


void print_arr(vector<int> &arr) {
    for(const auto a : arr) 
        cout<< a <<" ";
    cout<< endl;
} 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) 
        cin>>arr[i];

    reverse(arr.begin(), arr.end());
    print_arr(arr);
    
    
    return 0;
}
