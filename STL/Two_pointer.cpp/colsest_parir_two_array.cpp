
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int brr[], int n, int m, int x) {
    int ind1, ind2, l, r;
    l=0, r=m-1;
    int dif = INT_MAX;
    while(l < n and r>=0) {
        int sum = arr[l] + brr[r];
        if(abs(sum-x) < dif) {
            ind1= l;
            ind2= r;
            dif = abs(sum-x);
        }
        if(sum > x) r--;
        else l++;
    }

    cout <<"(" << arr[ind1]<< ", " << brr[ind2] <<") = " << arr[ind1] + brr[ind2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, x;
    cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    cin>>m;
    int brr[m+3];
    for(int i=0; i<m; i++) 
        cin>> brr[i];
    
    cin>>x;
    solve(arr, brr, n, m, x);
    
 
    return 0;
}