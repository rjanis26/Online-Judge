
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int sum =0;
    for(int i=1; i<=n; i++) {
        sum += (i*(n-i+1))*arr[i];
    }
    return 0;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n ;
        int arr[n+4];
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        } 
        for(int i=1; i<=n; i++) {
            cin>>arr[i];

        }
            

        cout<<solve(arr, n) << endl;
     
 
  
    return 0;
}
 