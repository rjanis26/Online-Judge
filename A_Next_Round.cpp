#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
    
    int n, pos; cin>>n >> pos;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int count=0;

    for(int i=0; i<n; i++) {
        if(arr[i] >= arr[pos-1] && arr[i]!=0) 
            count++;    
    }

    cout<< count << endl;

    return 0;
}

 