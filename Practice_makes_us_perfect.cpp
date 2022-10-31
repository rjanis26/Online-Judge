/*  
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    int count=0;

    for(int i=0; i<n; i++) {
        if(arr[i] >= 10) {
            count++;
        }
    }
    return count;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<solve(arr,n)-1 << endl;
    
 
    return 0;
}  

  */


 
#include<bits/stdc++.h>
using namespace std;
 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int x, y, z, l;
    cin>>x >> y>>z >> l;
    
    int ans =0;
    if(x >= 10)
        ans++;
    else if(y >= 10)
        ans++;
    else if(z >= 10) 
        ans++;
    else if(l >= 10)
        ans++;

    cout<< ans << endl;
 
    return 0;
}