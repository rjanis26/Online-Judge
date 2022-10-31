/*  #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"
 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }
    
    sort(arr, arr+n);
    cout<< arr[0]+arr[1] << endl;
  
    return 0;
}
 */


 #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"
 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    sort(arr.begin(), arr.end(), greater<int>());
    cout<< arr[n-1] + arr[n-2] << endl;
  
    return 0;
}

 