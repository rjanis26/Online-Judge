#include<bits/stdc++.h>
using namespace std;

int find_ceiling(int arr[], int n, int value) {
    int ans=-1;
    
    int l=0, r=n-1;
    while(l <= r) {
        int mid = l +(r-l)/2;
        
        if(arr[mid] == value) {
            ans = arr[mid];
            break;
        }

        else if(arr[mid] >value) {
            ans = arr[mid];
            r = mid-1;
        }
        else 
            l = mid+1;
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
    
    int item; cin>>item;
    cout<< find_ceiling(arr, n, item) << endl;
 
    return 0;
}

 