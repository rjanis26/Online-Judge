
 
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {

    for(int i=n-1; i>=0; i--) {
        int x = arr[i];
        int l=0, r=i-1;

        while(l < r)  {
            int sum = arr[l] + arr[r];
            if(sum == x) {
                cout <<"(" << x << "," << arr[l] <<"," << arr[r] <<")" << endl;
                return;
            }
            if(sum > x) r--;
            else l++;
        }
    }
    cout << "No such treplates exist" << endl;
     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    sort(arr, arr+n);
    solve(arr,n);
    
 
    return 0;
}  

