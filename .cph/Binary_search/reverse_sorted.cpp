
// array reverse sorted array 

#include<bits/stdc++.h>
using namespace std;

int sorted_search(int arr[], int n, int target) {
   
    int left=0, right=n-1, ans=-1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == target) 
            return mid;
        else if(arr[mid] < target)  
            right= mid-1;
        else 
            left= mid+1;
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    int x; cin>>x;

    int ans = sorted_search(arr,n,x);
    if(ans==-1)
        cout<<"Not found.\n";
    else 
        cout<<"found at index: "<< ans << endl;
 

    return 0;
}
 