
// complexity O(n)
 
#include<bits/stdc++.h>
using namespace std;
 
bool solve(int arr[], int n, int x) {
    int i=0,  j=n-1;
    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == x) return true;
        if(sum > x) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+n);
    int x; cin>>x;
    bool ans = solve(arr, n, x);
    if(ans == true) 
        cout << "YES" << endl;
    else cout << "NO" << endl;

      
    return 0;
}  



#include<bits/stdc++.h>
using namespace std;
int val1, val2;
 
bool solve(int arr[], int n, int x) {
    int i=0,  j=n-1;
    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == x)  {
            val1= arr[i];
            val2=arr[j];
            return true;
        }
        if(sum > x) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+n);
    int x; cin>>x;
    bool ans = solve(arr, n, x);
    if(ans == true) {
         cout << "YES" << endl;
         cout << val1 << " " << val2<< endl;
    }
       
    else cout << "NO" << endl;

      
    return 0;
}



 