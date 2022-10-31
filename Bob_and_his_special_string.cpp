#include<bits/stdc++.h> 
using namespace std;

int search(int arr[], int n, int value) {
    int ans=-1;

    int l=0, r=n-1;
    while(l <= r) {
        const int mid= l + (r-l)/2;

        if(arr[mid] ==value) {
            return mid;
        }
        else if(arr[mid] < value) 
            l=mid+1;
        else
            r = mid-1;
    }
    return ans;
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    sort(arr,arr+n);
    int q; cin>>q;
    int value;

    while(q--) {
        cin>>value;
        int ans =search(arr,n,value);
        if(ans==1)
            cout<<ans+1<< endl;
         
    }
    
 
    return 0;
}