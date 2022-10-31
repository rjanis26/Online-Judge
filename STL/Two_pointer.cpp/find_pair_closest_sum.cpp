
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x) {
    int l=0, r=n-1;
    int ind1, ind2;
    int dif = INT_MAX;

    while(l < r) {
        int sum = arr[l] + arr[r];
        if(abs(sum - x) < dif) {
            ind1 = l;
            ind2 = r;
            dif = abs(sum-x);
        }
        if(sum > x) r--;
        else l++;
    }
    cout << "[" << arr[ind1] << " " << arr[ind2] << "] = " << arr[ind1] + arr[ind2] << endl;
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
    int x; cin>>x;

    solve(arr, n, x);
     
    return 0;
}