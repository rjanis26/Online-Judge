
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>> n; 
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    sort(arr, arr+n);

    int min = abs(arr[0] -arr[n-1]);

       
    cout<< min << endl;
     
    
    return 0;
}
 
 