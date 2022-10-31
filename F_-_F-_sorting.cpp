 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    

      int n, k;
    cin >> n >> k;
 
    int arr[n];
 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + n, greater<int>());
    
    // for(int i=0; i<n; i++) {
    //     cout<< arr[i] << " ";
    // }

    // cout<< endl;
    int total = 0;
 
    for(int i = 0; i < k; i++)
    {
        total += arr[i];
    }
 
    cout << total;
 
    
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    

      int n, k;
    cin >> n >> k;
 
    int arr[n];
 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
   
    // int sum=0;
    // for(int i=n-1; i>=n-k; i--) {
    //     sum += arr[i];
    // }

    int sum(0);

    for(int i=n-k; i<n; i++) 
        sum+= arr[i];
    
    cout << sum << endl;
    
    return 0;
}
  
 