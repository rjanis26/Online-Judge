
 
#include<bits/stdc++.h>
using namespace std;

void solution() {

    int n; cin>> n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    vector<int> v;
    int i=0, j=n-1;
    while(i < j) {
        v.push_back(arr[i]);
        v.push_back(arr[j]);
        i++;
        j--;
    }
    if(n%2==1) 
        v.push_back(arr[i]);

    for(auto &arr : v) 
        cout << arr << " ";
    cout << endl;
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        solution();

    }
 
    return 0;
}  

