#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, l, r; cin>>n >> l >> r;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int sum=0;
    for(int i=l; i<=r; i++) {
        sum += arr[i];
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solution();
    return 0;
}