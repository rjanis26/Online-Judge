

#include<bits/stdc++.h>
using namespace std;

int search_nearly_sorted(int arr[], int n, int value) {

    int l=0, r=n-1, ans= -1;

    while(l <= r) {
        int mid = l + (r-l)/2;

        if(arr[mid] == value) {
            ans = mid;
            break;
        }
        else if(mid > l && arr[mid-1] == value) {
            ans = mid-1;
            break;
        }
        else if(mid< r && arr[mid+1] == value) {
            ans = mid+1;
            break;
        }
        else if(arr[mid] < value) 
            l = mid+2;
        else 
            r = mid-2;
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
        cin>>arr[i];

    int item; cin>> item;
    int ans = search_nearly_sorted(arr,n,item);
    if(ans != -1) cout<< ans+1;
    else cout<< ans << endl;
 

    return 0;
}
  